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

// Function: sub_004930E0
// Address: 0x4930e0 - 0x493180
void sub_004930E0_0x4930e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004930E0_0x4930e0");
#endif

    switch (ctx->pc) {
        case 0x4930e0u: goto label_4930e0;
        case 0x4930e4u: goto label_4930e4;
        case 0x4930e8u: goto label_4930e8;
        case 0x4930ecu: goto label_4930ec;
        case 0x4930f0u: goto label_4930f0;
        case 0x4930f4u: goto label_4930f4;
        case 0x4930f8u: goto label_4930f8;
        case 0x4930fcu: goto label_4930fc;
        case 0x493100u: goto label_493100;
        case 0x493104u: goto label_493104;
        case 0x493108u: goto label_493108;
        case 0x49310cu: goto label_49310c;
        case 0x493110u: goto label_493110;
        case 0x493114u: goto label_493114;
        case 0x493118u: goto label_493118;
        case 0x49311cu: goto label_49311c;
        case 0x493120u: goto label_493120;
        case 0x493124u: goto label_493124;
        case 0x493128u: goto label_493128;
        case 0x49312cu: goto label_49312c;
        case 0x493130u: goto label_493130;
        case 0x493134u: goto label_493134;
        case 0x493138u: goto label_493138;
        case 0x49313cu: goto label_49313c;
        case 0x493140u: goto label_493140;
        case 0x493144u: goto label_493144;
        case 0x493148u: goto label_493148;
        case 0x49314cu: goto label_49314c;
        case 0x493150u: goto label_493150;
        case 0x493154u: goto label_493154;
        case 0x493158u: goto label_493158;
        case 0x49315cu: goto label_49315c;
        case 0x493160u: goto label_493160;
        case 0x493164u: goto label_493164;
        case 0x493168u: goto label_493168;
        case 0x49316cu: goto label_49316c;
        case 0x493170u: goto label_493170;
        case 0x493174u: goto label_493174;
        case 0x493178u: goto label_493178;
        case 0x49317cu: goto label_49317c;
        default: break;
    }

    ctx->pc = 0x4930e0u;

label_4930e0:
    // 0x4930e0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4930e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_4930e4:
    // 0x4930e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4930e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4930e8:
    // 0x4930e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4930e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4930ec:
    // 0x4930ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4930ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4930f0:
    // 0x4930f0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x4930f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_4930f4:
    // 0x4930f4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x4930f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_4930f8:
    // 0x4930f8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_4930fc:
    if (ctx->pc == 0x4930FCu) {
        ctx->pc = 0x493100u;
        goto label_493100;
    }
    ctx->pc = 0x4930F8u;
    {
        const bool branch_taken_0x4930f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4930f8) {
            ctx->pc = 0x493108u;
            goto label_493108;
        }
    }
    ctx->pc = 0x493100u;
label_493100:
    // 0x493100: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x493100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_493104:
    // 0x493104: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x493104u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_493108:
    // 0x493108: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x493108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_49310c:
    // 0x49310c: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x49310cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_493110:
    // 0x493110: 0xc119b68  jal         func_466DA0
label_493114:
    if (ctx->pc == 0x493114u) {
        ctx->pc = 0x493118u;
        goto label_493118;
    }
    ctx->pc = 0x493110u;
    SET_GPR_U32(ctx, 31, 0x493118u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x493110u, 0x493118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x493118u;
label_493118:
    // 0x493118: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x493118u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_49311c:
    // 0x49311c: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_493120:
    if (ctx->pc == 0x493120u) {
        ctx->pc = 0x493124u;
        goto label_493124;
    }
    ctx->pc = 0x49311Cu;
    {
        const bool branch_taken_0x49311c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x49311c) {
            ctx->pc = 0x493130u;
            goto label_493130;
        }
    }
    ctx->pc = 0x493124u;
label_493124:
    // 0x493124: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x493124u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_493128:
    // 0x493128: 0x1000000e  b           . + 4 + (0xE << 2)
label_49312c:
    if (ctx->pc == 0x49312Cu) {
        ctx->pc = 0x493130u;
        goto label_493130;
    }
    ctx->pc = 0x493128u;
    {
        const bool branch_taken_0x493128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x493128) {
            ctx->pc = 0x493164u;
            goto label_493164;
        }
    }
    ctx->pc = 0x493130u;
label_493130:
    // 0x493130: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x493130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_493134:
    // 0x493134: 0xc0ba088  jal         func_2E8220
label_493138:
    if (ctx->pc == 0x493138u) {
        ctx->pc = 0x49313Cu;
        goto label_49313c;
    }
    ctx->pc = 0x493134u;
    SET_GPR_U32(ctx, 31, 0x49313Cu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x493134u, 0x49313Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49313Cu;
label_49313c:
    // 0x49313c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x49313cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_493140:
    // 0x493140: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x493140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_493144:
    // 0x493144: 0xc0ba088  jal         func_2E8220
label_493148:
    if (ctx->pc == 0x493148u) {
        ctx->pc = 0x49314Cu;
        goto label_49314c;
    }
    ctx->pc = 0x493144u;
    SET_GPR_U32(ctx, 31, 0x49314Cu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x493144u, 0x49314Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49314Cu;
label_49314c:
    // 0x49314c: 0x1200ffee  beqz        $s0, . + 4 + (-0x12 << 2)
label_493150:
    if (ctx->pc == 0x493150u) {
        ctx->pc = 0x493154u;
        goto label_493154;
    }
    ctx->pc = 0x49314Cu;
    {
        const bool branch_taken_0x49314c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x49314c) {
            ctx->pc = 0x493108u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_493108;
        }
    }
    ctx->pc = 0x493154u;
label_493154:
    // 0x493154: 0x200f809  jalr        $s0
label_493158:
    if (ctx->pc == 0x493158u) {
        ctx->pc = 0x49315Cu;
        goto label_49315c;
    }
    ctx->pc = 0x493154u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x49315Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x493154u, 0x49315Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x49315Cu;
label_49315c:
    // 0x49315c: 0x1000ffea  b           . + 4 + (-0x16 << 2)
label_493160:
    if (ctx->pc == 0x493160u) {
        ctx->pc = 0x493164u;
        goto label_493164;
    }
    ctx->pc = 0x49315Cu;
    {
        const bool branch_taken_0x49315c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x49315c) {
            ctx->pc = 0x493108u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_493108;
        }
    }
    ctx->pc = 0x493164u;
label_493164:
    // 0x493164: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x493164u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_493168:
    // 0x493168: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x493168u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_49316c:
    // 0x49316c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x49316cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_493170:
    // 0x493170: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x493170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_493174:
    // 0x493174: 0x3e00008  jr          $ra
label_493178:
    if (ctx->pc == 0x493178u) {
        ctx->pc = 0x49317Cu;
        goto label_49317c;
    }
    ctx->pc = 0x493174u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x493174u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49317Cu;
label_49317c:
    // 0x49317c: 0x0  nop
    ctx->pc = 0x49317cu;
    // NOP
    ctx->pc = 0x493180u;
}
