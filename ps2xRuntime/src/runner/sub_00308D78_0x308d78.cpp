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

// Function: sub_00308D78
// Address: 0x308d78 - 0x308e48
void sub_00308D78_0x308d78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00308D78_0x308d78");
#endif

    switch (ctx->pc) {
        case 0x308dc8u: goto label_308dc8;
        case 0x308ddcu: goto label_308ddc;
        case 0x308e30u: goto label_308e30;
        default: break;
    }

    ctx->pc = 0x308d78u;

    // 0x308d78: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x308d78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x308d7c: 0x3c04004f  lui         $a0, 0x4F
    ctx->pc = 0x308d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)79 << 16));
    // 0x308d80: 0x34631000  ori         $v1, $v1, 0x1000
    ctx->pc = 0x308d80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
    // 0x308d84: 0x9c620000  lwu         $v0, 0x0($v1)
    ctx->pc = 0x308d84u;
    SET_GPR_ZE32(ctx, 2, runtime->Load32(rdram, ctx, 0x10001000u));
    // 0x308d88: 0x8c680010  lw          $t0, 0x10($v1)
    ctx->pc = 0x308d88u;
    SET_GPR_S32(ctx, 8, (int32_t)runtime->Load32(rdram, ctx, 0x10001010u)); // MMIO: 0x10001010
    // 0x308d8c: 0xdc8a2228  ld          $t2, 0x2228($a0)
    ctx->pc = 0x308d8cu;
    SET_GPR_U64(ctx, 10, FAST_READ64(0x4F2228u));
    // 0x308d90: 0x31090800  andi        $t1, $t0, 0x800
    ctx->pc = 0x308d90u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)2048);
    // 0x308d94: 0x11200003  beqz        $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x308D94u;
    {
        const bool branch_taken_0x308d94 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x308D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308D94u;
        // 0x308d98: 0x24090002  addiu       $t1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308d94) {
            ctx->pc = 0x308DA4u;
            goto label_308da4;
        }
    }
    ctx->pc = 0x308D9Cu;
    // 0x308d9c: 0x9c620000  lwu         $v0, 0x0($v1)
    ctx->pc = 0x308d9cu;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x308da0: 0x654a0001  daddiu      $t2, $t2, 0x1
    ctx->pc = 0x308da0u;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)1);
label_308da4:
    // 0x308da4: 0x31080003  andi        $t0, $t0, 0x3
    ctx->pc = 0x308da4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)3);
    // 0x308da8: 0xa5438  dsll        $t2, $t2, 16
    ctx->pc = 0x308da8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 16);
    // 0x308dac: 0x8480a  movz        $t1, $zero, $t0
    ctx->pc = 0x308dacu;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 0));
    // 0x308db0: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x308db0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x308db4: 0x1094814  dsllv       $t1, $t1, $t0
    ctx->pc = 0x308db4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (GPR_U32(ctx, 8) & 0x3F));
    // 0x308db8: 0x1221014  dsllv       $v0, $v0, $t1
    ctx->pc = 0x308db8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 9) & 0x3F));
    // 0x308dbc: 0x3e00008  jr          $ra
    ctx->pc = 0x308DBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308DBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x308DC4u;
    // 0x308dc4: 0x0  nop
    ctx->pc = 0x308dc4u;
    // NOP
label_308dc8:
    // 0x308dc8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x308dc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x308dcc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x308dccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x308dd0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x308dd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x308dd4: 0xc0c1f08  jal         func_307C20
    ctx->pc = 0x308DD4u;
    SET_GPR_U32(ctx, 31, 0x308DDCu);
    ctx->pc = 0x307C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307C20u, 0x308DD4u, 0x308DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308DDCu;
label_308ddc:
    // 0x308ddc: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x308ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x308de0: 0x3c04004f  lui         $a0, 0x4F
    ctx->pc = 0x308de0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)79 << 16));
    // 0x308de4: 0x34631000  ori         $v1, $v1, 0x1000
    ctx->pc = 0x308de4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
    // 0x308de8: 0x9c700000  lwu         $s0, 0x0($v1)
    ctx->pc = 0x308de8u;
    SET_GPR_ZE32(ctx, 16, runtime->Load32(rdram, ctx, 0x10001000u));
    // 0x308dec: 0x8c680010  lw          $t0, 0x10($v1)
    ctx->pc = 0x308decu;
    SET_GPR_S32(ctx, 8, (int32_t)runtime->Load32(rdram, ctx, 0x10001010u)); // MMIO: 0x10001010
    // 0x308df0: 0xdc8a2228  ld          $t2, 0x2228($a0)
    ctx->pc = 0x308df0u;
    SET_GPR_U64(ctx, 10, FAST_READ64(0x4F2228u));
    // 0x308df4: 0x31090800  andi        $t1, $t0, 0x800
    ctx->pc = 0x308df4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)2048);
    // 0x308df8: 0x11200003  beqz        $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x308DF8u;
    {
        const bool branch_taken_0x308df8 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x308DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308DF8u;
        // 0x308dfc: 0x24090002  addiu       $t1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308df8) {
            ctx->pc = 0x308E08u;
            goto label_308e08;
        }
    }
    ctx->pc = 0x308E00u;
    // 0x308e00: 0x9c700000  lwu         $s0, 0x0($v1)
    ctx->pc = 0x308e00u;
    SET_GPR_ZE32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x308e04: 0x654a0001  daddiu      $t2, $t2, 0x1
    ctx->pc = 0x308e04u;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)1);
label_308e08:
    // 0x308e08: 0x31080003  andi        $t0, $t0, 0x3
    ctx->pc = 0x308e08u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)3);
    // 0x308e0c: 0xa5438  dsll        $t2, $t2, 16
    ctx->pc = 0x308e0cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 16);
    // 0x308e10: 0x8480a  movz        $t1, $zero, $t0
    ctx->pc = 0x308e10u;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 0));
    // 0x308e14: 0x20a8025  or          $s0, $s0, $t2
    ctx->pc = 0x308e14u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 10));
    // 0x308e18: 0x1094814  dsllv       $t1, $t1, $t0
    ctx->pc = 0x308e18u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (GPR_U32(ctx, 8) & 0x3F));
    // 0x308e1c: 0x1308014  dsllv       $s0, $s0, $t1
    ctx->pc = 0x308e1cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (GPR_U32(ctx, 9) & 0x3F));
    // 0x308e20: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x308E20u;
    {
        const bool branch_taken_0x308e20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x308E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308E20u;
        // 0x308e24: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308e20) {
            ctx->pc = 0x308E34u;
            goto label_308e34;
        }
    }
    ctx->pc = 0x308E28u;
    // 0x308e28: 0xc0c1f1c  jal         func_307C70
    ctx->pc = 0x308E28u;
    SET_GPR_U32(ctx, 31, 0x308E30u);
    ctx->pc = 0x307C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307C70u, 0x308E28u, 0x308E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308E30u;
label_308e30:
    // 0x308e30: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x308e30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_308e34:
    // 0x308e34: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x308e34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x308e38: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x308e38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x308e3c: 0x3e00008  jr          $ra
    ctx->pc = 0x308E3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x308E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308E3Cu;
        // 0x308e40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308E3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x308E44u;
    // 0x308e44: 0x0  nop
    ctx->pc = 0x308e44u;
    // NOP
    ctx->pc = 0x308e48u;
}
