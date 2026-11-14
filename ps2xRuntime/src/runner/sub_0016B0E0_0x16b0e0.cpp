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

// Function: sub_0016B0E0
// Address: 0x16b0e0 - 0x16b1a0
void sub_0016B0E0_0x16b0e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016B0E0_0x16b0e0");
#endif

    switch (ctx->pc) {
        case 0x16b118u: goto label_16b118;
        case 0x16b154u: goto label_16b154;
        case 0x16b164u: goto label_16b164;
        default: break;
    }

    ctx->pc = 0x16b0e0u;

    // 0x16b0e0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x16b0e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x16b0e4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x16b0e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x16b0e8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x16b0e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x16b0ec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x16b0ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x16b0f0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16b0f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x16b0f4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16b0f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16b0f8: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x16b0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x16b0fc: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x16b0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x16b100: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x16b100u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16b104: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16b104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16b108: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16b108u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16b10c: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x16b10cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x16b110: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x16B110u;
    SET_GPR_U32(ctx, 31, 0x16B118u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x16B110u, 0x16B118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B118u;
label_16b118:
    // 0x16b118: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x16b118u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b11c: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
    ctx->pc = 0x16B11Cu;
    {
        const bool branch_taken_0x16b11c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b11c) {
            ctx->pc = 0x16B178u;
            goto label_16b178;
        }
    }
    ctx->pc = 0x16B124u;
    // 0x16b124: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x16b124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x16b128: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x16b128u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x16b12c: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x16b12cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b130: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x16b130u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x16b134: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x16b134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x16b138: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x16b138u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16b13c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16b13cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16b140: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16b140u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16b144: 0x2229821  addu        $s3, $s1, $v0
    ctx->pc = 0x16b144u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x16b148: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x16b148u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b14c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x16B14Cu;
    {
        const bool branch_taken_0x16b14c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b14c) {
            ctx->pc = 0x16B168u;
            goto label_16b168;
        }
    }
    ctx->pc = 0x16B154u;
label_16b154:
    // 0x16b154: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x16b154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x16b158: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x16b158u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b15c: 0xc0400e0  jal         func_100380
    ctx->pc = 0x16B15Cu;
    SET_GPR_U32(ctx, 31, 0x16B164u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x16B15Cu, 0x16B164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B164u;
label_16b164:
    // 0x16b164: 0x26520014  addiu       $s2, $s2, 0x14
    ctx->pc = 0x16b164u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
label_16b168:
    // 0x16b168: 0x0  nop
    ctx->pc = 0x16b168u;
    // NOP
    // 0x16b16c: 0x1653fff9  bne         $s2, $s3, . + 4 + (-0x7 << 2)
    ctx->pc = 0x16B16Cu;
    {
        const bool branch_taken_0x16b16c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        if (branch_taken_0x16b16c) {
            ctx->pc = 0x16B154u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16b154;
        }
    }
    ctx->pc = 0x16B174u;
    // 0x16b174: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x16b174u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16b178:
    // 0x16b178: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x16b178u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b17c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x16b17cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16b180: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x16b180u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16b184: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x16b184u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16b188: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16b188u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16b18c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16b18cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16b190: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x16b190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x16b194: 0x3e00008  jr          $ra
    ctx->pc = 0x16B194u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16B194u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16B19Cu;
    // 0x16b19c: 0x0  nop
    ctx->pc = 0x16b19cu;
    // NOP
    ctx->pc = 0x16b1a0u;
}
