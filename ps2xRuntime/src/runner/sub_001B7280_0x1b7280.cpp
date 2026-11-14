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

// Function: sub_001B7280
// Address: 0x1b7280 - 0x1b7370
void sub_001B7280_0x1b7280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B7280_0x1b7280");
#endif

    switch (ctx->pc) {
        case 0x1b72b8u: goto label_1b72b8;
        case 0x1b72c8u: goto label_1b72c8;
        case 0x1b72dcu: goto label_1b72dc;
        case 0x1b72fcu: goto label_1b72fc;
        case 0x1b731cu: goto label_1b731c;
        default: break;
    }

    ctx->pc = 0x1b7280u;

    // 0x1b7280: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1b7280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1b7284: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1b7284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1b7288: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b7288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b728c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b728cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b7290: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b7290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b7294: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x1b7294u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x1b7298: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x1b7298u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x1b729c: 0xafa60060  sw          $a2, 0x60($sp)
    ctx->pc = 0x1b729cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 6));
    // 0x1b72a0: 0xafa70070  sw          $a3, 0x70($sp)
    ctx->pc = 0x1b72a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 7));
    // 0x1b72a4: 0xafa80080  sw          $t0, 0x80($sp)
    ctx->pc = 0x1b72a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 8));
    // 0x1b72a8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1b72a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b72ac: 0x2444000c  addiu       $a0, $v0, 0xC
    ctx->pc = 0x1b72acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x1b72b0: 0xc069ce8  jal         func_1A73A0
    ctx->pc = 0x1B72B0u;
    SET_GPR_U32(ctx, 31, 0x1B72B8u);
    ctx->pc = 0x1A73A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A73A0u, 0x1B72B0u, 0x1B72B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B72B8u;
label_1b72b8:
    // 0x1b72b8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1b72b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b72bc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1b72bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b72c0: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1B72C0u;
    {
        const bool branch_taken_0x1b72c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b72c0) {
            ctx->pc = 0x1B733Cu;
            goto label_1b733c;
        }
    }
    ctx->pc = 0x1B72C8u;
label_1b72c8:
    // 0x1b72c8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1b72c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b72cc: 0x2444000c  addiu       $a0, $v0, 0xC
    ctx->pc = 0x1b72ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x1b72d0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b72d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b72d4: 0xc069d88  jal         func_1A7620
    ctx->pc = 0x1B72D4u;
    SET_GPR_U32(ctx, 31, 0x1B72DCu);
    ctx->pc = 0x1A7620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7620u, 0x1B72D4u, 0x1B72DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B72DCu;
label_1b72dc:
    // 0x1b72dc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1b72dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b72e0: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1b72e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b72e4: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x1b72e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1b72e8: 0x51001b  divu        $zero, $v0, $s1
    ctx->pc = 0x1b72e8u;
    { uint32_t divisor = GPR_U32(ctx, 17); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1b72ec: 0x2810  mfhi        $a1
    ctx->pc = 0x1b72ecu;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x1b72f0: 0x2464000c  addiu       $a0, $v1, 0xC
    ctx->pc = 0x1b72f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x1b72f4: 0xc069d88  jal         func_1A7620
    ctx->pc = 0x1B72F4u;
    SET_GPR_U32(ctx, 31, 0x1B72FCu);
    ctx->pc = 0x1A7620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7620u, 0x1B72F4u, 0x1B72FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B72FCu;
label_1b72fc:
    // 0x1b72fc: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1b72fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b7300: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x1b7300u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b7304: 0x8fa60060  lw          $a2, 0x60($sp)
    ctx->pc = 0x1b7304u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b7308: 0x8fa70070  lw          $a3, 0x70($sp)
    ctx->pc = 0x1b7308u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b730c: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x1b730cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7310: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x1b7310u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7314: 0xc06ddf8  jal         func_1B77E0
    ctx->pc = 0x1B7314u;
    SET_GPR_U32(ctx, 31, 0x1B731Cu);
    ctx->pc = 0x1B77E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B77E0u, 0x1B7314u, 0x1B731Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B731Cu;
label_1b731c:
    // 0x1b731c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B731Cu;
    {
        const bool branch_taken_0x1b731c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b731c) {
            ctx->pc = 0x1B7338u;
            goto label_1b7338;
        }
    }
    ctx->pc = 0x1B7324u;
    // 0x1b7324: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1b7324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1b7328: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x1b7328u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x1b732c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b732cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b7330: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1B7330u;
    {
        const bool branch_taken_0x1b7330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7330) {
            ctx->pc = 0x1B734Cu;
            goto label_1b734c;
        }
    }
    ctx->pc = 0x1B7338u;
label_1b7338:
    // 0x1b7338: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1b7338u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1b733c:
    // 0x1b733c: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x1b733cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1b7340: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x1B7340u;
    {
        const bool branch_taken_0x1b7340 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b7340) {
            ctx->pc = 0x1B72C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b72c8;
        }
    }
    ctx->pc = 0x1B7348u;
    // 0x1b7348: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b7348u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b734c:
    // 0x1b734c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1b734cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b7350: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b7350u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b7354: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b7354u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b7358: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b7358u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b735c: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x1b735cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1b7360: 0x3e00008  jr          $ra
    ctx->pc = 0x1B7360u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7360u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B7368u;
    // 0x1b7368: 0x0  nop
    ctx->pc = 0x1b7368u;
    // NOP
    // 0x1b736c: 0x0  nop
    ctx->pc = 0x1b736cu;
    // NOP
    ctx->pc = 0x1b7370u;
}
