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

// Function: sub_001BF080
// Address: 0x1bf080 - 0x1bf1d0
void sub_001BF080_0x1bf080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BF080_0x1bf080");
#endif

    switch (ctx->pc) {
        case 0x1bf0a4u: goto label_1bf0a4;
        case 0x1bf0b0u: goto label_1bf0b0;
        case 0x1bf130u: goto label_1bf130;
        case 0x1bf13cu: goto label_1bf13c;
        default: break;
    }

    ctx->pc = 0x1bf080u;

    // 0x1bf080: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1bf080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1bf084: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1bf084u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1bf088: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1bf088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1bf08c: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x1bf08cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x1bf090: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x1bf090u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x1bf094: 0xafa70060  sw          $a3, 0x60($sp)
    ctx->pc = 0x1bf094u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 7));
    // 0x1bf098: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1bf098u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf09c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1BF09Cu;
    {
        const bool branch_taken_0x1bf09c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf09c) {
            ctx->pc = 0x1BF118u;
            goto label_1bf118;
        }
    }
    ctx->pc = 0x1BF0A4u;
label_1bf0a4:
    // 0x1bf0a4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1bf0a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf0a8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1BF0A8u;
    {
        const bool branch_taken_0x1bf0a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf0a8) {
            ctx->pc = 0x1BF108u;
            goto label_1bf108;
        }
    }
    ctx->pc = 0x1BF0B0u;
label_1bf0b0:
    // 0x1bf0b0: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x1bf0b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1bf0b4: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1bf0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1bf0b8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1bf0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1bf0bc: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1bf0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1bf0c0: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x1bf0c0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bf0c4: 0x32e3c  dsll32      $a1, $v1, 24
    ctx->pc = 0x1bf0c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 24));
    // 0x1bf0c8: 0x52e3f  dsra32      $a1, $a1, 24
    ctx->pc = 0x1bf0c8u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
    // 0x1bf0cc: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x1bf0ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1bf0d0: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x1bf0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1bf0d4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1bf0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1bf0d8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1bf0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1bf0dc: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x1bf0dcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bf0e0: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x1bf0e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x1bf0e4: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x1bf0e4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x1bf0e8: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1bf0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1bf0ec: 0x3263c  dsll32      $a0, $v1, 24
    ctx->pc = 0x1bf0ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 24));
    // 0x1bf0f0: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x1bf0f0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x1bf0f4: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1bf0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1bf0f8: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x1bf0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x1bf0fc: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1bf0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1bf100: 0xa0640020  sb          $a0, 0x20($v1)
    ctx->pc = 0x1bf100u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 32), (uint8_t)GPR_U32(ctx, 4));
    // 0x1bf104: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1bf104u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1bf108:
    // 0x1bf108: 0x2e030004  sltiu       $v1, $s0, 0x4
    ctx->pc = 0x1bf108u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1bf10c: 0x1460ffe8  bnez        $v1, . + 4 + (-0x18 << 2)
    ctx->pc = 0x1BF10Cu;
    {
        const bool branch_taken_0x1bf10c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bf10c) {
            ctx->pc = 0x1BF0B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bf0b0;
        }
    }
    ctx->pc = 0x1BF114u;
    // 0x1bf114: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1bf114u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1bf118:
    // 0x1bf118: 0x2e230004  sltiu       $v1, $s1, 0x4
    ctx->pc = 0x1bf118u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1bf11c: 0x1460ffe1  bnez        $v1, . + 4 + (-0x1F << 2)
    ctx->pc = 0x1BF11Cu;
    {
        const bool branch_taken_0x1bf11c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bf11c) {
            ctx->pc = 0x1BF0A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bf0a4;
        }
    }
    ctx->pc = 0x1BF124u;
    // 0x1bf124: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1bf124u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf128: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1BF128u;
    {
        const bool branch_taken_0x1bf128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf128) {
            ctx->pc = 0x1BF1B0u;
            goto label_1bf1b0;
        }
    }
    ctx->pc = 0x1BF130u;
label_1bf130:
    // 0x1bf130: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1bf130u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf134: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1BF134u;
    {
        const bool branch_taken_0x1bf134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf134) {
            ctx->pc = 0x1BF1A0u;
            goto label_1bf1a0;
        }
    }
    ctx->pc = 0x1BF13Cu;
label_1bf13c:
    // 0x1bf13c: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1bf13cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1bf140: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x1bf140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x1bf144: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1bf144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1bf148: 0x80650020  lb          $a1, 0x20($v1)
    ctx->pc = 0x1bf148u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1bf14c: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x1bf14cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1bf150: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1bf150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1bf154: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1bf154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1bf158: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1bf158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1bf15c: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x1bf15cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x1bf160: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x1bf160u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1bf164: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1bf164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1bf168: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1bf168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1bf16c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1bf16cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1bf170: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x1bf170u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bf174: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x1bf174u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x1bf178: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x1bf178u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x1bf17c: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x1bf17cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1bf180: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BF180u;
    {
        const bool branch_taken_0x1bf180 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bf180) {
            ctx->pc = 0x1BF19Cu;
            goto label_1bf19c;
        }
    }
    ctx->pc = 0x1BF188u;
    // 0x1bf188: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x1bf188u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1bf18c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1bf18cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1bf190: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1bf190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1bf194: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1bf194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1bf198: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x1bf198u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_1bf19c:
    // 0x1bf19c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1bf19cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1bf1a0:
    // 0x1bf1a0: 0x2e030004  sltiu       $v1, $s0, 0x4
    ctx->pc = 0x1bf1a0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1bf1a4: 0x1460ffe5  bnez        $v1, . + 4 + (-0x1B << 2)
    ctx->pc = 0x1BF1A4u;
    {
        const bool branch_taken_0x1bf1a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bf1a4) {
            ctx->pc = 0x1BF13Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bf13c;
        }
    }
    ctx->pc = 0x1BF1ACu;
    // 0x1bf1ac: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1bf1acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1bf1b0:
    // 0x1bf1b0: 0x2e230004  sltiu       $v1, $s1, 0x4
    ctx->pc = 0x1bf1b0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1bf1b4: 0x1460ffde  bnez        $v1, . + 4 + (-0x22 << 2)
    ctx->pc = 0x1BF1B4u;
    {
        const bool branch_taken_0x1bf1b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bf1b4) {
            ctx->pc = 0x1BF130u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bf130;
        }
    }
    ctx->pc = 0x1BF1BCu;
    // 0x1bf1bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1bf1bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bf1c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bf1c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bf1c4: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x1bf1c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1bf1c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1BF1C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BF1C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BF1D0u;
}
