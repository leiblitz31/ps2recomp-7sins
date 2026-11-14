#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0046BBD0
// Address: 0x46bbd0 - 0x46bc70
void sub_0046BBD0_0x46bbd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046BBD0_0x46bbd0");
#endif

    switch (ctx->pc) {
        case 0x46bc10u: goto label_46bc10;
        case 0x46bc24u: goto label_46bc24;
        case 0x46bc38u: goto label_46bc38;
        case 0x46bc58u: goto label_46bc58;
        default: break;
    }

    ctx->pc = 0x46bbd0u;

    // 0x46bbd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x46bbd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x46bbd4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x46bbd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x46bbd8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x46bbd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x46bbdc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x46bbdcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x46bbe0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x46bbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46bbe4: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x46BBE4u;
    {
        const bool branch_taken_0x46bbe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46bbe4) {
            ctx->pc = 0x46BC58u;
            goto label_46bc58;
        }
    }
    ctx->pc = 0x46BBECu;
    // 0x46bbec: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x46bbecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x46bbf0: 0x24636cd8  addiu       $v1, $v1, 0x6CD8
    ctx->pc = 0x46bbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27864));
    // 0x46bbf4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x46bbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46bbf8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x46bbf8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x46bbfc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x46bbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46bc00: 0x2444001c  addiu       $a0, $v0, 0x1C
    ctx->pc = 0x46bc00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
    // 0x46bc04: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x46bc04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x46bc08: 0xc0406a0  jal         func_101A80
    ctx->pc = 0x46BC08u;
    SET_GPR_U32(ctx, 31, 0x46BC10u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x46BC08u, 0x46BC10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46BC10u;
label_46bc10:
    // 0x46bc10: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x46bc10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46bc14: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x46bc14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x46bc18: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x46bc18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x46bc1c: 0xc0406a0  jal         func_101A80
    ctx->pc = 0x46BC1Cu;
    SET_GPR_U32(ctx, 31, 0x46BC24u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x46BC1Cu, 0x46BC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46BC24u;
label_46bc24:
    // 0x46bc24: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x46bc24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46bc28: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x46bc28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x46bc2c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x46bc2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x46bc30: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x46BC30u;
    SET_GPR_U32(ctx, 31, 0x46BC38u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x46BC30u, 0x46BC38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46BC38u;
label_46bc38:
    // 0x46bc38: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x46bc38u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46bc3c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x46bc3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x46bc40: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x46bc40u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x46bc44: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x46BC44u;
    {
        const bool branch_taken_0x46bc44 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x46bc44) {
            ctx->pc = 0x46BC58u;
            goto label_46bc58;
        }
    }
    ctx->pc = 0x46BC4Cu;
    // 0x46bc4c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x46bc4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46bc50: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x46BC50u;
    SET_GPR_U32(ctx, 31, 0x46BC58u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x46BC50u, 0x46BC58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46BC58u;
label_46bc58:
    // 0x46bc58: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x46bc58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46bc5c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x46bc5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46bc60: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x46bc60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x46bc64: 0x3e00008  jr          $ra
    ctx->pc = 0x46BC64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46BC64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46BC6Cu;
    // 0x46bc6c: 0x0  nop
    ctx->pc = 0x46bc6cu;
    // NOP
    ctx->pc = 0x46bc70u;
}
