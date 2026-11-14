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

// Function: sub_00389918
// Address: 0x389918 - 0x389998
void sub_00389918_0x389918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00389918_0x389918");
#endif

    switch (ctx->pc) {
        case 0x389918u: goto label_389918;
        case 0x38991cu: goto label_38991c;
        case 0x389920u: goto label_389920;
        case 0x389924u: goto label_389924;
        case 0x389928u: goto label_389928;
        case 0x38992cu: goto label_38992c;
        case 0x389930u: goto label_389930;
        case 0x389934u: goto label_389934;
        case 0x389938u: goto label_389938;
        case 0x38993cu: goto label_38993c;
        case 0x389940u: goto label_389940;
        case 0x389944u: goto label_389944;
        case 0x389948u: goto label_389948;
        case 0x38994cu: goto label_38994c;
        case 0x389950u: goto label_389950;
        case 0x389954u: goto label_389954;
        case 0x389958u: goto label_389958;
        case 0x38995cu: goto label_38995c;
        case 0x389960u: goto label_389960;
        case 0x389964u: goto label_389964;
        case 0x389968u: goto label_389968;
        case 0x38996cu: goto label_38996c;
        case 0x389970u: goto label_389970;
        case 0x389974u: goto label_389974;
        case 0x389978u: goto label_389978;
        case 0x38997cu: goto label_38997c;
        case 0x389980u: goto label_389980;
        case 0x389984u: goto label_389984;
        case 0x389988u: goto label_389988;
        case 0x38998cu: goto label_38998c;
        case 0x389990u: goto label_389990;
        case 0x389994u: goto label_389994;
        default: break;
    }

    ctx->pc = 0x389918u;

label_389918:
    // 0x389918: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x389918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_38991c:
    // 0x38991c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x38991cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_389920:
    // 0x389920: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x389920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_389924:
    // 0x389924: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x389924u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_389928:
    // 0x389928: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x389928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_38992c:
    // 0x38992c: 0x26320010  addiu       $s2, $s1, 0x10
    ctx->pc = 0x38992cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_389930:
    // 0x389930: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x389930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_389934:
    // 0x389934: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x389934u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_389938:
    // 0x389938: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x389938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_38993c:
    // 0x38993c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38993cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_389940:
    // 0x389940: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x389940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_389944:
    // 0x389944: 0x1052000b  beq         $v0, $s2, . + 4 + (0xB << 2)
label_389948:
    if (ctx->pc == 0x389948u) {
        ctx->pc = 0x389948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389944u;
        // 0x389948: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38994Cu;
        goto label_38994c;
    }
    ctx->pc = 0x389944u;
    {
        const bool branch_taken_0x389944 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x389948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389944u;
        // 0x389948: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389944) {
            ctx->pc = 0x389974u;
            goto label_389974;
        }
    }
    ctx->pc = 0x38994Cu;
label_38994c:
    // 0x38994c: 0x8f84a98c  lw          $a0, -0x5674($gp)
    ctx->pc = 0x38994cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945164)));
label_389950:
    // 0x389950: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x389950u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_389954:
    // 0x389954: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x389954u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_389958:
    // 0x389958: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x389958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_38995c:
    // 0x38995c: 0x280f809  jalr        $s4
label_389960:
    if (ctx->pc == 0x389960u) {
        ctx->pc = 0x389960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38995Cu;
        // 0x389960: 0x442023  subu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389964u;
        goto label_389964;
    }
    ctx->pc = 0x38995Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x389964u);
        ctx->pc = 0x389960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38995Cu;
        // 0x389960: 0x442023  subu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38995Cu, 0x389964u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x389964u;
label_389964:
    // 0x389964: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_389968:
    if (ctx->pc == 0x389968u) {
        ctx->pc = 0x389968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389964u;
        // 0x389968: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38996Cu;
        goto label_38996c;
    }
    ctx->pc = 0x389964u;
    {
        const bool branch_taken_0x389964 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x389968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389964u;
        // 0x389968: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389964) {
            ctx->pc = 0x389974u;
            goto label_389974;
        }
    }
    ctx->pc = 0x38996Cu;
label_38996c:
    // 0x38996c: 0x5452fff8  bnel        $v0, $s2, . + 4 + (-0x8 << 2)
label_389970:
    if (ctx->pc == 0x389970u) {
        ctx->pc = 0x389970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38996Cu;
        // 0x389970: 0x8f84a98c  lw          $a0, -0x5674($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389974u;
        goto label_389974;
    }
    ctx->pc = 0x38996Cu;
    {
        const bool branch_taken_0x38996c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x38996c) {
            ctx->pc = 0x389970u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38996Cu;
            // 0x389970: 0x8f84a98c  lw          $a0, -0x5674($gp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945164)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x389950u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_389950;
        }
    }
    ctx->pc = 0x389974u;
label_389974:
    // 0x389974: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x389974u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_389978:
    // 0x389978: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x389978u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_38997c:
    // 0x38997c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x38997cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_389980:
    // 0x389980: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x389980u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_389984:
    // 0x389984: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x389984u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_389988:
    // 0x389988: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x389988u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_38998c:
    // 0x38998c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38998cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_389990:
    // 0x389990: 0x3e00008  jr          $ra
label_389994:
    if (ctx->pc == 0x389994u) {
        ctx->pc = 0x389994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389990u;
        // 0x389994: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389998u;
        goto label_fallthrough_0x389990;
    }
    ctx->pc = 0x389990u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x389994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389990u;
        // 0x389994: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x389990u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x389990:
    ctx->pc = 0x389998u;
}
