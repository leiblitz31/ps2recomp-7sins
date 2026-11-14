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

// Function: sub_00235AF0
// Address: 0x235af0 - 0x235ba0
void sub_00235AF0_0x235af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00235AF0_0x235af0");
#endif

    switch (ctx->pc) {
        case 0x235b08u: goto label_235b08;
        case 0x235b6cu: goto label_235b6c;
        case 0x235b8cu: goto label_235b8c;
        default: break;
    }

    ctx->pc = 0x235af0u;

    // 0x235af0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x235af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x235af4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x235af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x235af8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x235af8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x235afc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x235afcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x235b00: 0xc088560  jal         func_221580
    ctx->pc = 0x235B00u;
    SET_GPR_U32(ctx, 31, 0x235B08u);
    ctx->pc = 0x221580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221580u, 0x235B00u, 0x235B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235B08u;
label_235b08:
    // 0x235b08: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x235b08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x235b0c: 0x246354d0  addiu       $v1, $v1, 0x54D0
    ctx->pc = 0x235b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21712));
    // 0x235b10: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x235b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x235b14: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x235b14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x235b18: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x235b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x235b1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x235b1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x235b20: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x235b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x235b24: 0x3e00008  jr          $ra
    ctx->pc = 0x235B24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x235B24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x235B2Cu;
    // 0x235b2c: 0x0  nop
    ctx->pc = 0x235b2cu;
    // NOP
    // 0x235b30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x235b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x235b34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x235b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x235b38: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x235b38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x235b3c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x235b3cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x235b40: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x235b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x235b44: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x235B44u;
    {
        const bool branch_taken_0x235b44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x235b44) {
            ctx->pc = 0x235B8Cu;
            goto label_235b8c;
        }
    }
    ctx->pc = 0x235B4Cu;
    // 0x235b4c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x235b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x235b50: 0x246354d0  addiu       $v1, $v1, 0x54D0
    ctx->pc = 0x235b50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21712));
    // 0x235b54: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x235b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x235b58: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x235b58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x235b5c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x235b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x235b60: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x235b60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235b64: 0xc0887b4  jal         func_221ED0
    ctx->pc = 0x235B64u;
    SET_GPR_U32(ctx, 31, 0x235B6Cu);
    ctx->pc = 0x221ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221ED0u, 0x235B64u, 0x235B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235B6Cu;
label_235b6c:
    // 0x235b6c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x235b6cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x235b70: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x235b70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x235b74: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x235b74u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x235b78: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x235B78u;
    {
        const bool branch_taken_0x235b78 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x235b78) {
            ctx->pc = 0x235B8Cu;
            goto label_235b8c;
        }
    }
    ctx->pc = 0x235B80u;
    // 0x235b80: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x235b80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x235b84: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x235B84u;
    SET_GPR_U32(ctx, 31, 0x235B8Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x235B84u, 0x235B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235B8Cu;
label_235b8c:
    // 0x235b8c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x235b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x235b90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x235b90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x235b94: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x235b94u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x235b98: 0x3e00008  jr          $ra
    ctx->pc = 0x235B98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x235B98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x235BA0u;
}
