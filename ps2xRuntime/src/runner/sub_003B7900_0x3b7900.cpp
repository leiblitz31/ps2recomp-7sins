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

// Function: sub_003B7900
// Address: 0x3b7900 - 0x3b79a0
void sub_003B7900_0x3b7900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B7900_0x3b7900");
#endif

    switch (ctx->pc) {
        case 0x3b7900u: goto label_3b7900;
        case 0x3b7904u: goto label_3b7904;
        case 0x3b7908u: goto label_3b7908;
        case 0x3b790cu: goto label_3b790c;
        case 0x3b7910u: goto label_3b7910;
        case 0x3b7914u: goto label_3b7914;
        case 0x3b7918u: goto label_3b7918;
        case 0x3b791cu: goto label_3b791c;
        case 0x3b7920u: goto label_3b7920;
        case 0x3b7924u: goto label_3b7924;
        case 0x3b7928u: goto label_3b7928;
        case 0x3b792cu: goto label_3b792c;
        case 0x3b7930u: goto label_3b7930;
        case 0x3b7934u: goto label_3b7934;
        case 0x3b7938u: goto label_3b7938;
        case 0x3b793cu: goto label_3b793c;
        case 0x3b7940u: goto label_3b7940;
        case 0x3b7944u: goto label_3b7944;
        case 0x3b7948u: goto label_3b7948;
        case 0x3b794cu: goto label_3b794c;
        case 0x3b7950u: goto label_3b7950;
        case 0x3b7954u: goto label_3b7954;
        case 0x3b7958u: goto label_3b7958;
        case 0x3b795cu: goto label_3b795c;
        case 0x3b7960u: goto label_3b7960;
        case 0x3b7964u: goto label_3b7964;
        case 0x3b7968u: goto label_3b7968;
        case 0x3b796cu: goto label_3b796c;
        case 0x3b7970u: goto label_3b7970;
        case 0x3b7974u: goto label_3b7974;
        case 0x3b7978u: goto label_3b7978;
        case 0x3b797cu: goto label_3b797c;
        case 0x3b7980u: goto label_3b7980;
        case 0x3b7984u: goto label_3b7984;
        case 0x3b7988u: goto label_3b7988;
        case 0x3b798cu: goto label_3b798c;
        case 0x3b7990u: goto label_3b7990;
        case 0x3b7994u: goto label_3b7994;
        case 0x3b7998u: goto label_3b7998;
        case 0x3b799cu: goto label_3b799c;
        default: break;
    }

    ctx->pc = 0x3b7900u;

label_3b7900:
    // 0x3b7900: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3b7900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3b7904:
    // 0x3b7904: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3b7904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_3b7908:
    // 0x3b7908: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3b7908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_3b790c:
    // 0x3b790c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3b790cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_3b7910:
    // 0x3b7910: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x3b7910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_3b7914:
    // 0x3b7914: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3b7914u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3b7918:
    // 0x3b7918: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x3b7918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_3b791c:
    // 0x3b791c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x3b791cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3b7920:
    // 0x3b7920: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3b7920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3b7924:
    // 0x3b7924: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x3b7924u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3b7928:
    // 0x3b7928: 0xc1036d2  jal         func_40DB48
label_3b792c:
    if (ctx->pc == 0x3B792Cu) {
        ctx->pc = 0x3B792Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7928u;
        // 0x3b792c: 0x8e4400b0  lw          $a0, 0xB0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B7930u;
        goto label_3b7930;
    }
    ctx->pc = 0x3B7928u;
    SET_GPR_U32(ctx, 31, 0x3B7930u);
    ctx->pc = 0x3B792Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7928u;
    // 0x3b792c: 0x8e4400b0  lw          $a0, 0xB0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB48u, 0x3B7928u, 0x3B7930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7930u;
label_3b7930:
    // 0x3b7930: 0x8e4400b4  lw          $a0, 0xB4($s2)
    ctx->pc = 0x3b7930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
label_3b7934:
    // 0x3b7934: 0x24030110  addiu       $v1, $zero, 0x110
    ctx->pc = 0x3b7934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
label_3b7938:
    // 0x3b7938: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3b7938u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b793c:
    // 0x3b793c: 0x832818  mult        $a1, $a0, $v1
    ctx->pc = 0x3b793cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_3b7940:
    // 0x3b7940: 0xa28821  addu        $s1, $a1, $v0
    ctx->pc = 0x3b7940u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_3b7944:
    // 0x3b7944: 0x12110009  beq         $s0, $s1, . + 4 + (0x9 << 2)
label_3b7948:
    if (ctx->pc == 0x3B7948u) {
        ctx->pc = 0x3B7948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7944u;
        // 0x3b7948: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B794Cu;
        goto label_3b794c;
    }
    ctx->pc = 0x3B7944u;
    {
        const bool branch_taken_0x3b7944 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 17));
        ctx->pc = 0x3B7948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7944u;
        // 0x3b7948: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7944) {
            ctx->pc = 0x3B796Cu;
            goto label_3b796c;
        }
    }
    ctx->pc = 0x3B794Cu;
label_3b794c:
    // 0x3b794c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b794cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b7950:
    // 0x3b7950: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3b7950u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3b7954:
    // 0x3b7954: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3b7954u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3b7958:
    // 0x3b7958: 0x280f809  jalr        $s4
label_3b795c:
    if (ctx->pc == 0x3B795Cu) {
        ctx->pc = 0x3B795Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7958u;
        // 0x3b795c: 0x26100110  addiu       $s0, $s0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B7960u;
        goto label_3b7960;
    }
    ctx->pc = 0x3B7958u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x3B7960u);
        ctx->pc = 0x3B795Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7958u;
        // 0x3b795c: 0x26100110  addiu       $s0, $s0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B7958u, 0x3B7960u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B7960u;
label_3b7960:
    // 0x3b7960: 0x1611fffb  bne         $s0, $s1, . + 4 + (-0x5 << 2)
label_3b7964:
    if (ctx->pc == 0x3B7964u) {
        ctx->pc = 0x3B7964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7960u;
        // 0x3b7964: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B7968u;
        goto label_3b7968;
    }
    ctx->pc = 0x3B7960u;
    {
        const bool branch_taken_0x3b7960 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        ctx->pc = 0x3B7964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7960u;
        // 0x3b7964: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7960) {
            ctx->pc = 0x3B7950u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b7950;
        }
    }
    ctx->pc = 0x3B7968u;
label_3b7968:
    // 0x3b7968: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x3b7968u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3b796c:
    // 0x3b796c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3b796cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3b7970:
    // 0x3b7970: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3b7970u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3b7974:
    // 0x3b7974: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3b7974u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3b7978:
    // 0x3b7978: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x3b7978u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3b797c:
    // 0x3b797c: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x3b797cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3b7980:
    // 0x3b7980: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b7980u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3b7984:
    // 0x3b7984: 0x3e00008  jr          $ra
label_3b7988:
    if (ctx->pc == 0x3B7988u) {
        ctx->pc = 0x3B7988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7984u;
        // 0x3b7988: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B798Cu;
        goto label_3b798c;
    }
    ctx->pc = 0x3B7984u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B7988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7984u;
        // 0x3b7988: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B7984u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B798Cu;
label_3b798c:
    // 0x3b798c: 0x0  nop
    ctx->pc = 0x3b798cu;
    // NOP
label_3b7990:
    // 0x3b7990: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3b7990u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3b7994:
    // 0x3b7994: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3b7994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3b7998:
    // 0x3b7998: 0x3e00008  jr          $ra
label_3b799c:
    if (ctx->pc == 0x3B799Cu) {
        ctx->pc = 0x3B799Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7998u;
        // 0x3b799c: 0xac4300bc  sw          $v1, 0xBC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 188), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B79A0u;
        goto label_fallthrough_0x3b7998;
    }
    ctx->pc = 0x3B7998u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B799Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7998u;
        // 0x3b799c: 0xac4300bc  sw          $v1, 0xBC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 188), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B7998u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3b7998:
    ctx->pc = 0x3B79A0u;
}
