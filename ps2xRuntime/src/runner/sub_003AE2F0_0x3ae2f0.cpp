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

// Function: sub_003AE2F0
// Address: 0x3ae2f0 - 0x3ae358
void sub_003AE2F0_0x3ae2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AE2F0_0x3ae2f0");
#endif

    switch (ctx->pc) {
        case 0x3ae30cu: goto label_3ae30c;
        case 0x3ae314u: goto label_3ae314;
        case 0x3ae31cu: goto label_3ae31c;
        case 0x3ae324u: goto label_3ae324;
        case 0x3ae32cu: goto label_3ae32c;
        case 0x3ae334u: goto label_3ae334;
        case 0x3ae33cu: goto label_3ae33c;
        case 0x3ae344u: goto label_3ae344;
        default: break;
    }

    ctx->pc = 0x3ae2f0u;

    // 0x3ae2f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3ae2f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3ae2f4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3ae2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x3ae2f8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3ae2f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3ae2fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3ae2fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3ae300: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3ae300u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ae304: 0xc0eed5a  jal         func_3BB568
    ctx->pc = 0x3AE304u;
    SET_GPR_U32(ctx, 31, 0x3AE30Cu);
    ctx->pc = 0x3AE308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE304u;
    // 0x3ae308: 0xac40d574  sw          $zero, -0x2A8C($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956404), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BB568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BB568u, 0x3AE304u, 0x3AE30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE30Cu;
label_3ae30c:
    // 0x3ae30c: 0xc0ec2c2  jal         func_3B0B08
    ctx->pc = 0x3AE30Cu;
    SET_GPR_U32(ctx, 31, 0x3AE314u);
    ctx->pc = 0x3B0B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B0B08u, 0x3AE30Cu, 0x3AE314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE314u;
label_3ae314:
    // 0x3ae314: 0xc0e9f2a  jal         func_3A7CA8
    ctx->pc = 0x3AE314u;
    SET_GPR_U32(ctx, 31, 0x3AE31Cu);
    ctx->pc = 0x3A7CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7CA8u, 0x3AE314u, 0x3AE31Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE31Cu;
label_3ae31c:
    // 0x3ae31c: 0xc0eb032  jal         func_3AC0C8
    ctx->pc = 0x3AE31Cu;
    SET_GPR_U32(ctx, 31, 0x3AE324u);
    ctx->pc = 0x3AC0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AC0C8u, 0x3AE31Cu, 0x3AE324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE324u;
label_3ae324:
    // 0x3ae324: 0xc0ed410  jal         func_3B5040
    ctx->pc = 0x3AE324u;
    SET_GPR_U32(ctx, 31, 0x3AE32Cu);
    ctx->pc = 0x3B5040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B5040u, 0x3AE324u, 0x3AE32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE32Cu;
label_3ae32c:
    // 0x3ae32c: 0xc0eb77a  jal         func_3ADDE8
    ctx->pc = 0x3AE32Cu;
    SET_GPR_U32(ctx, 31, 0x3AE334u);
    ctx->pc = 0x3ADDE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ADDE8u, 0x3AE32Cu, 0x3AE334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE334u;
label_3ae334:
    // 0x3ae334: 0xc0eed78  jal         func_3BB5E0
    ctx->pc = 0x3AE334u;
    SET_GPR_U32(ctx, 31, 0x3AE33Cu);
    ctx->pc = 0x3BB5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BB5E0u, 0x3AE334u, 0x3AE33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE33Cu;
label_3ae33c:
    // 0x3ae33c: 0xc0eb742  jal         func_3ADD08
    ctx->pc = 0x3AE33Cu;
    SET_GPR_U32(ctx, 31, 0x3AE344u);
    ctx->pc = 0x3AE340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE33Cu;
    // 0x3ae340: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ADD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ADD08u, 0x3AE33Cu, 0x3AE344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE344u;
label_3ae344:
    // 0x3ae344: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3ae344u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ae348: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3ae348u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ae34c: 0x3e00008  jr          $ra
    ctx->pc = 0x3AE34Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AE350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE34Cu;
        // 0x3ae350: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AE34Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AE354u;
    // 0x3ae354: 0x0  nop
    ctx->pc = 0x3ae354u;
    // NOP
    ctx->pc = 0x3ae358u;
}
