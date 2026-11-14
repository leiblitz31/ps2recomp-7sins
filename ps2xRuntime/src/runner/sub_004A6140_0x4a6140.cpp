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

// Function: sub_004A6140
// Address: 0x4a6140 - 0x4a61b0
void sub_004A6140_0x4a6140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A6140_0x4a6140");
#endif

    switch (ctx->pc) {
        case 0x4a6168u: goto label_4a6168;
        case 0x4a6174u: goto label_4a6174;
        default: break;
    }

    ctx->pc = 0x4a6140u;

    // 0x4a6140: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4a6140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4a6144: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x4a6144u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x4a6148: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4a6148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x4a614c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4a614cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x4a6150: 0x245060a8  addiu       $s0, $v0, 0x60A8
    ctx->pc = 0x4a6150u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 24744));
    // 0x4a6154: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4a6154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x4a6158: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4a6158u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a615c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4a615cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4a6160: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4a6160u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a6164: 0x0  nop
    ctx->pc = 0x4a6164u;
    // NOP
label_4a6168:
    // 0x4a6168: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x4a6168u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a616c: 0xc12a3ec  jal         func_4A8FB0
    ctx->pc = 0x4A616Cu;
    SET_GPR_U32(ctx, 31, 0x4A6174u);
    ctx->pc = 0x4A6170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A616Cu;
    // 0x4a6170: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8FB0u, 0x4A616Cu, 0x4A6174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A6174u;
label_4a6174:
    // 0x4a6174: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4A6174u;
    {
        const bool branch_taken_0x4a6174 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A6178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6174u;
        // 0x4a6178: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a6174) {
            ctx->pc = 0x4A6184u;
            goto label_4a6184;
        }
    }
    ctx->pc = 0x4A617Cu;
    // 0x4a617c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x4A617Cu;
    {
        const bool branch_taken_0x4a617c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A6180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A617Cu;
        // 0x4a6180: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a617c) {
            ctx->pc = 0x4A6194u;
            goto label_4a6194;
        }
    }
    ctx->pc = 0x4A6184u;
label_4a6184:
    // 0x4a6184: 0x2e220009  sltiu       $v0, $s1, 0x9
    ctx->pc = 0x4a6184u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x4a6188: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x4A6188u;
    {
        const bool branch_taken_0x4a6188 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A618Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6188u;
        // 0x4a618c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a6188) {
            ctx->pc = 0x4A6168u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a6168;
        }
    }
    ctx->pc = 0x4A6190u;
    // 0x4a6190: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4a6190u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a6194:
    // 0x4a6194: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4a6194u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4a6198: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4a6198u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4a619c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4a619cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a61a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a61a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a61a4: 0x3e00008  jr          $ra
    ctx->pc = 0x4A61A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A61A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A61A4u;
        // 0x4a61a8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A61A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A61ACu;
    // 0x4a61ac: 0x0  nop
    ctx->pc = 0x4a61acu;
    // NOP
    ctx->pc = 0x4a61b0u;
}
