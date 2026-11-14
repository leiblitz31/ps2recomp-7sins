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

// Function: sub_00307F98
// Address: 0x307f98 - 0x308000
void sub_00307F98_0x307f98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00307F98_0x307f98");
#endif

    switch (ctx->pc) {
        case 0x307facu: goto label_307fac;
        case 0x307fd0u: goto label_307fd0;
        case 0x307fd8u: goto label_307fd8;
        case 0x307fe0u: goto label_307fe0;
        default: break;
    }

    ctx->pc = 0x307f98u;

    // 0x307f98: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x307f98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x307f9c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x307f9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x307fa0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x307fa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x307fa4: 0xc0bf704  jal         func_2FDC10
    ctx->pc = 0x307FA4u;
    SET_GPR_U32(ctx, 31, 0x307FACu);
    ctx->pc = 0x307FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307FA4u;
    // 0x307fa8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDC10u, 0x307FA4u, 0x307FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307FACu;
label_307fac:
    // 0x307fac: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x307facu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x307fb0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x307fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x307fb4: 0x34421fff  ori         $v0, $v0, 0x1FFF
    ctx->pc = 0x307fb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8191);
    // 0x307fb8: 0x27b00004  addiu       $s0, $sp, 0x4
    ctx->pc = 0x307fb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x307fbc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x307fbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x307fc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x307fc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307fc4: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x307fc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x307fc8: 0xc0bf700  jal         func_2FDC00
    ctx->pc = 0x307FC8u;
    SET_GPR_U32(ctx, 31, 0x307FD0u);
    ctx->pc = 0x307FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307FC8u;
    // 0x307fcc: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDC00u, 0x307FC8u, 0x307FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307FD0u;
label_307fd0:
    // 0x307fd0: 0xc0bf704  jal         func_2FDC10
    ctx->pc = 0x307FD0u;
    SET_GPR_U32(ctx, 31, 0x307FD8u);
    ctx->pc = 0x307FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307FD0u;
    // 0x307fd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDC10u, 0x307FD0u, 0x307FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307FD8u;
label_307fd8:
    // 0x307fd8: 0xc0bf700  jal         func_2FDC00
    ctx->pc = 0x307FD8u;
    SET_GPR_U32(ctx, 31, 0x307FE0u);
    ctx->pc = 0x307FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307FD8u;
    // 0x307fdc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDC00u, 0x307FD8u, 0x307FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307FE0u;
label_307fe0:
    // 0x307fe0: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x307fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x307fe4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x307fe4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x307fe8: 0x21342  srl         $v0, $v0, 13
    ctx->pc = 0x307fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 13));
    // 0x307fec: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x307fecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x307ff0: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x307ff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x307ff4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x307ff4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x307ff8: 0x3e00008  jr          $ra
    ctx->pc = 0x307FF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x307FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307FF8u;
        // 0x307ffc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x307FF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x308000u;
}
