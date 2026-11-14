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

// Function: sub_003B3D70
// Address: 0x3b3d70 - 0x3b3de0
void sub_003B3D70_0x3b3d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B3D70_0x3b3d70");
#endif

    switch (ctx->pc) {
        case 0x3b3d90u: goto label_3b3d90;
        case 0x3b3da0u: goto label_3b3da0;
        case 0x3b3db0u: goto label_3b3db0;
        case 0x3b3dc0u: goto label_3b3dc0;
        default: break;
    }

    ctx->pc = 0x3b3d70u;

    // 0x3b3d70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3b3d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3b3d74: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3b3d74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x3b3d78: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3b3d78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3b3d7c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3b3d7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b3d80: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3b3d80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x3b3d84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3b3d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3b3d88: 0xc0ed294  jal         func_3B4A50
    ctx->pc = 0x3B3D88u;
    SET_GPR_U32(ctx, 31, 0x3B3D90u);
    ctx->pc = 0x3B3D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3D88u;
    // 0x3b3d8c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B4A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B4A50u, 0x3B3D88u, 0x3B3D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3D90u;
label_3b3d90:
    // 0x3b3d90: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3b3d90u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b3d94: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x3b3d94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3b3d98: 0xc0ed13c  jal         func_3B44F0
    ctx->pc = 0x3B3D98u;
    SET_GPR_U32(ctx, 31, 0x3B3DA0u);
    ctx->pc = 0x3B3D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3D98u;
    // 0x3b3d9c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B44F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B44F0u, 0x3B3D98u, 0x3B3DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3DA0u;
label_3b3da0:
    // 0x3b3da0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3b3da0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b3da4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3b3da4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b3da8: 0xc0ed06e  jal         func_3B41B8
    ctx->pc = 0x3B3DA8u;
    SET_GPR_U32(ctx, 31, 0x3B3DB0u);
    ctx->pc = 0x3B3DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3DA8u;
    // 0x3b3dac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B41B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B41B8u, 0x3B3DA8u, 0x3B3DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3DB0u;
label_3b3db0:
    // 0x3b3db0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B3DB0u;
    {
        const bool branch_taken_0x3b3db0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B3DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3DB0u;
        // 0x3b3db4: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3db0) {
            ctx->pc = 0x3B3DC4u;
            goto label_3b3dc4;
        }
    }
    ctx->pc = 0x3B3DB8u;
    // 0x3b3db8: 0xc0ecf78  jal         func_3B3DE0
    ctx->pc = 0x3B3DB8u;
    SET_GPR_U32(ctx, 31, 0x3B3DC0u);
    ctx->pc = 0x3B3DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3DB8u;
    // 0x3b3dbc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B3DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3DE0u, 0x3B3DB8u, 0x3B3DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3DC0u;
label_3b3dc0:
    // 0x3b3dc0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3b3dc0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b3dc4:
    // 0x3b3dc4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3b3dc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3b3dc8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3b3dc8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b3dcc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3b3dccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b3dd0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b3dd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b3dd4: 0x3e00008  jr          $ra
    ctx->pc = 0x3B3DD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B3DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3DD4u;
        // 0x3b3dd8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B3DD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B3DDCu;
    // 0x3b3ddc: 0x0  nop
    ctx->pc = 0x3b3ddcu;
    // NOP
    ctx->pc = 0x3b3de0u;
}
