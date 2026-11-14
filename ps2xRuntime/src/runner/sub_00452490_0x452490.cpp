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

// Function: sub_00452490
// Address: 0x452490 - 0x452540
void sub_00452490_0x452490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00452490_0x452490");
#endif

    switch (ctx->pc) {
        case 0x452500u: goto label_452500;
        case 0x452520u: goto label_452520;
        default: break;
    }

    ctx->pc = 0x452490u;

    // 0x452490: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x452490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x452494: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x452494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x452498: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x452498u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x45249c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x45249cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x4524a0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4524a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4524a4: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x4524A4u;
    {
        const bool branch_taken_0x4524a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4524a4) {
            ctx->pc = 0x452520u;
            goto label_452520;
        }
    }
    ctx->pc = 0x4524ACu;
    // 0x4524ac: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4524acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4524b0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4524b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4524b4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x4524B4u;
    {
        const bool branch_taken_0x4524b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4524b4) {
            ctx->pc = 0x452500u;
            goto label_452500;
        }
    }
    ctx->pc = 0x4524BCu;
    // 0x4524bc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x4524bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4524c0: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x4524c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4524c4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4524c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4524c8: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x4524c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x4524cc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4524ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4524d0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4524d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4524d4: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x4524d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4524d8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x4524d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4524dc: 0x33083  sra         $a2, $v1, 2
    ctx->pc = 0x4524dcu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 2));
    // 0x4524e0: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4524E0u;
    {
        const bool branch_taken_0x4524e0 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x4524e0) {
            ctx->pc = 0x4524F0u;
            goto label_4524f0;
        }
    }
    ctx->pc = 0x4524E8u;
    // 0x4524e8: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x4524e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x4524ec: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x4524ecu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_4524f0:
    // 0x4524f0: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x4524f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x4524f4: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x4524f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4524f8: 0xc1157ec  jal         func_455FB0
    ctx->pc = 0x4524F8u;
    SET_GPR_U32(ctx, 31, 0x452500u);
    ctx->pc = 0x455FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x455FB0u, 0x4524F8u, 0x452500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x452500u;
label_452500:
    // 0x452500: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x452500u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x452504: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x452504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x452508: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x452508u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x45250c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x45250Cu;
    {
        const bool branch_taken_0x45250c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x45250c) {
            ctx->pc = 0x452520u;
            goto label_452520;
        }
    }
    ctx->pc = 0x452514u;
    // 0x452514: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x452514u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x452518: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x452518u;
    SET_GPR_U32(ctx, 31, 0x452520u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x452518u, 0x452520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x452520u;
label_452520:
    // 0x452520: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x452520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x452524: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x452524u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x452528: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x452528u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x45252c: 0x3e00008  jr          $ra
    ctx->pc = 0x45252Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45252Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x452534u;
    // 0x452534: 0x0  nop
    ctx->pc = 0x452534u;
    // NOP
    // 0x452538: 0x0  nop
    ctx->pc = 0x452538u;
    // NOP
    // 0x45253c: 0x0  nop
    ctx->pc = 0x45253cu;
    // NOP
    ctx->pc = 0x452540u;
}
