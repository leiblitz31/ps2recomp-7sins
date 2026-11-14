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

// Function: sub_00394B08
// Address: 0x394b08 - 0x3959b8
void sub_00394B08_0x394b08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00394B08_0x394b08");
#endif

    switch (ctx->pc) {
        case 0x394b50u: goto label_394b50;
        case 0x394b58u: goto label_394b58;
        case 0x394b68u: goto label_394b68;
        case 0x394b84u: goto label_394b84;
        case 0x394bb8u: goto label_394bb8;
        case 0x394c6cu: goto label_394c6c;
        case 0x394c9cu: goto label_394c9c;
        case 0x394cc8u: goto label_394cc8;
        case 0x394ce4u: goto label_394ce4;
        case 0x394e30u: goto label_394e30;
        case 0x394f40u: goto label_394f40;
        case 0x3950c8u: goto label_3950c8;
        case 0x3951f0u: goto label_3951f0;
        case 0x395380u: goto label_395380;
        case 0x3954a8u: goto label_3954a8;
        case 0x395570u: goto label_395570;
        case 0x395628u: goto label_395628;
        case 0x395644u: goto label_395644;
        case 0x395688u: goto label_395688;
        case 0x395708u: goto label_395708;
        case 0x39572cu: goto label_39572c;
        case 0x395760u: goto label_395760;
        case 0x39577cu: goto label_39577c;
        case 0x3957c8u: goto label_3957c8;
        case 0x395878u: goto label_395878;
        case 0x395908u: goto label_395908;
        case 0x39593cu: goto label_39593c;
        default: break;
    }

    ctx->pc = 0x394b08u;

    // 0x394b08: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x394b08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x394b0c: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x394b0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x394b10: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x394b10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x394b14: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x394b14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x394b18: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x394b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x394b1c: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x394b1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x394b20: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x394b20u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394b24: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x394b24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x394b28: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x394b28u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394b2c: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x394b2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x394b30: 0x26d30004  addiu       $s3, $s6, 0x4
    ctx->pc = 0x394b30u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
    // 0x394b34: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x394b34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x394b38: 0x260a82d  daddu       $s5, $s3, $zero
    ctx->pc = 0x394b38u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394b3c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x394b3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x394b40: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x394b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x394b44: 0x8ef00000  lw          $s0, 0x0($s7)
    ctx->pc = 0x394b44u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x394b48: 0x2c520001  sltiu       $s2, $v0, 0x1
    ctx->pc = 0x394b48u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x394b4c: 0x0  nop
    ctx->pc = 0x394b4cu;
    // NOP
label_394b50:
    // 0x394b50: 0x16750052  bne         $s3, $s5, . + 4 + (0x52 << 2)
    ctx->pc = 0x394B50u;
    {
        const bool branch_taken_0x394b50 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 21));
        ctx->pc = 0x394B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394B50u;
        // 0x394b54: 0x97a20000  lhu         $v0, 0x0($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394b50) {
            ctx->pc = 0x394C9Cu;
            goto label_394c9c;
        }
    }
    ctx->pc = 0x394B58u;
label_394b58:
    // 0x394b58: 0x8ed30004  lw          $s3, 0x4($s6)
    ctx->pc = 0x394b58u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x394b5c: 0x1275003a  beq         $s3, $s5, . + 4 + (0x3A << 2)
    ctx->pc = 0x394B5Cu;
    {
        const bool branch_taken_0x394b5c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 21));
        ctx->pc = 0x394B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394B5Cu;
        // 0x394b60: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394b5c) {
            ctx->pc = 0x394C48u;
            goto label_394c48;
        }
    }
    ctx->pc = 0x394B64u;
    // 0x394b64: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x394b64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_394b68:
    // 0x394b68: 0x27a5000c  addiu       $a1, $sp, 0xC
    ctx->pc = 0x394b68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x394b6c: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x394b6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x394b70: 0x27a70014  addiu       $a3, $sp, 0x14
    ctx->pc = 0x394b70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x394b74: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x394b74u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394b78: 0x27a90002  addiu       $t1, $sp, 0x2
    ctx->pc = 0x394b78u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 2));
    // 0x394b7c: 0xc0e519e  jal         func_394678
    ctx->pc = 0x394B7Cu;
    SET_GPR_U32(ctx, 31, 0x394B84u);
    ctx->pc = 0x394B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x394B7Cu;
    // 0x394b80: 0x27aa0004  addiu       $t2, $sp, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x394678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x394678u, 0x394B7Cu, 0x394B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x394B84u;
label_394b84:
    // 0x394b84: 0x12400021  beqz        $s2, . + 4 + (0x21 << 2)
    ctx->pc = 0x394B84u;
    {
        const bool branch_taken_0x394b84 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x394B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394B84u;
        // 0x394b88: 0x8fa6000c  lw          $a2, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394b84) {
            ctx->pc = 0x394C0Cu;
            goto label_394c0c;
        }
    }
    ctx->pc = 0x394B8Cu;
    // 0x394b8c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x394b8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394b90: 0x97a70000  lhu         $a3, 0x0($sp)
    ctx->pc = 0x394b90u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x394b94: 0x8cc30018  lw          $v1, 0x18($a2)
    ctx->pc = 0x394b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x394b98: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x394B98u;
    {
        const bool branch_taken_0x394b98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x394B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394B98u;
        // 0x394b9c: 0x97a90002  lhu         $t1, 0x2($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394b98) {
            ctx->pc = 0x394BD0u;
            goto label_394bd0;
        }
    }
    ctx->pc = 0x394BA0u;
    // 0x394ba0: 0x94c20028  lhu         $v0, 0x28($a2)
    ctx->pc = 0x394ba0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 40)));
    // 0x394ba4: 0x10e2000a  beq         $a3, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x394BA4u;
    {
        const bool branch_taken_0x394ba4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x394BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394BA4u;
        // 0x394ba8: 0x24c40028  addiu       $a0, $a2, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394ba4) {
            ctx->pc = 0x394BD0u;
            goto label_394bd0;
        }
    }
    ctx->pc = 0x394BACu;
    // 0x394bac: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x394bacu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394bb0: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x394bb0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394bb4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x394bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_394bb8:
    // 0x394bb8: 0xa8102b  sltu        $v0, $a1, $t0
    ctx->pc = 0x394bb8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x394bbc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x394BBCu;
    {
        const bool branch_taken_0x394bbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x394BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394BBCu;
        // 0x394bc0: 0x24630002  addiu       $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394bbc) {
            ctx->pc = 0x394BD0u;
            goto label_394bd0;
        }
    }
    ctx->pc = 0x394BC4u;
    // 0x394bc4: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x394bc4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x394bc8: 0x54e2fffb  bnel        $a3, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x394BC8u;
    {
        const bool branch_taken_0x394bc8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x394bc8) {
            ctx->pc = 0x394BCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x394BC8u;
            // 0x394bcc: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x394BB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_394bb8;
        }
    }
    ctx->pc = 0x394BD0u;
label_394bd0:
    // 0x394bd0: 0x8cc40018  lw          $a0, 0x18($a2)
    ctx->pc = 0x394bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x394bd4: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x394bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x394bd8: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x394bd8u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x394bdc: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x394BDCu;
    {
        const bool branch_taken_0x394bdc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x394bdc) {
            ctx->pc = 0x394BE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x394BDCu;
            // 0x394be0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x394BE4u;
            goto label_394be4;
        }
    }
    ctx->pc = 0x394BE4u;
label_394be4:
    // 0x394be4: 0x1810  mfhi        $v1
    ctx->pc = 0x394be4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x394be8: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x394be8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x394bec: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x394becu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x394bf0: 0x94620028  lhu         $v0, 0x28($v1)
    ctx->pc = 0x394bf0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x394bf4: 0x15220002  bne         $t1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x394BF4u;
    {
        const bool branch_taken_0x394bf4 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 2));
        ctx->pc = 0x394BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394BF4u;
        // 0x394bf8: 0x3a420002  xori        $v0, $s2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x394bf4) {
            ctx->pc = 0x394C00u;
            goto label_394c00;
        }
    }
    ctx->pc = 0x394BFCu;
    // 0x394bfc: 0x3a420001  xori        $v0, $s2, 0x1
    ctx->pc = 0x394bfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)1);
label_394c00:
    // 0x394c00: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x394c00u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x394c04: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x394C04u;
    {
        const bool branch_taken_0x394c04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x394c04) {
            ctx->pc = 0x394C08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x394C04u;
            // 0x394c08: 0x8e730000  lw          $s3, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x394C34u;
            goto label_394c34;
        }
    }
    ctx->pc = 0x394C0Cu;
label_394c0c:
    // 0x394c0c: 0x3a420003  xori        $v0, $s2, 0x3
    ctx->pc = 0x394c0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)3);
    // 0x394c10: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x394c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x394c14: 0x12030009  beq         $s0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x394C14u;
    {
        const bool branch_taken_0x394c14 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x394C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394C14u;
        // 0x394c18: 0x52900b  movn        $s2, $v0, $s2 (Delay Slot)
        if (GPR_U64(ctx, 18) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394c14) {
            ctx->pc = 0x394C3Cu;
            goto label_394c3c;
        }
    }
    ctx->pc = 0x394C1Cu;
    // 0x394c1c: 0x9623fffe  lhu         $v1, -0x2($s1)
    ctx->pc = 0x394c1cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4294967294)));
    // 0x394c20: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x394c20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x394c24: 0xa6230000  sh          $v1, 0x0($s1)
    ctx->pc = 0x394c24u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x394c28: 0x97a20000  lhu         $v0, 0x0($sp)
    ctx->pc = 0x394c28u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x394c2c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x394C2Cu;
    {
        const bool branch_taken_0x394c2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x394C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394C2Cu;
        // 0x394c30: 0xa6220002  sh          $v0, 0x2($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394c2c) {
            ctx->pc = 0x394C3Cu;
            goto label_394c3c;
        }
    }
    ctx->pc = 0x394C34u;
label_394c34:
    // 0x394c34: 0x1675ffcc  bne         $s3, $s5, . + 4 + (-0x34 << 2)
    ctx->pc = 0x394C34u;
    {
        const bool branch_taken_0x394c34 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 21));
        ctx->pc = 0x394C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394C34u;
        // 0x394c38: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394c34) {
            ctx->pc = 0x394B68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_394b68;
        }
    }
    ctx->pc = 0x394C3Cu;
label_394c3c:
    // 0x394c3c: 0x16750017  bne         $s3, $s5, . + 4 + (0x17 << 2)
    ctx->pc = 0x394C3Cu;
    {
        const bool branch_taken_0x394c3c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 21));
        ctx->pc = 0x394C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394C3Cu;
        // 0x394c40: 0x97a20000  lhu         $v0, 0x0($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394c3c) {
            ctx->pc = 0x394C9Cu;
            goto label_394c9c;
        }
    }
    ctx->pc = 0x394C44u;
    // 0x394c44: 0x8ed30004  lw          $s3, 0x4($s6)
    ctx->pc = 0x394c44u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
label_394c48:
    // 0x394c48: 0x1275034c  beq         $s3, $s5, . + 4 + (0x34C << 2)
    ctx->pc = 0x394C48u;
    {
        const bool branch_taken_0x394c48 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 21));
        ctx->pc = 0x394C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394C48u;
        // 0x394c4c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394c48) {
            ctx->pc = 0x39597Cu;
            goto label_39597c;
        }
    }
    ctx->pc = 0x394C50u;
    // 0x394c50: 0x27a5000c  addiu       $a1, $sp, 0xC
    ctx->pc = 0x394c50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x394c54: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x394c54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x394c58: 0x27a70014  addiu       $a3, $sp, 0x14
    ctx->pc = 0x394c58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x394c5c: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x394c5cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394c60: 0x27a90002  addiu       $t1, $sp, 0x2
    ctx->pc = 0x394c60u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 2));
    // 0x394c64: 0xc0e519e  jal         func_394678
    ctx->pc = 0x394C64u;
    SET_GPR_U32(ctx, 31, 0x394C6Cu);
    ctx->pc = 0x394C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x394C64u;
    // 0x394c68: 0x27aa0004  addiu       $t2, $sp, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x394678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x394678u, 0x394C64u, 0x394C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x394C6Cu;
label_394c6c:
    // 0x394c6c: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x394c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x394c70: 0x12020007  beq         $s0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x394C70u;
    {
        const bool branch_taken_0x394c70 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x394C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394C70u;
        // 0x394c74: 0x97a20000  lhu         $v0, 0x0($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394c70) {
            ctx->pc = 0x394C90u;
            goto label_394c90;
        }
    }
    ctx->pc = 0x394C78u;
    // 0x394c78: 0x9602fffe  lhu         $v0, -0x2($s0)
    ctx->pc = 0x394c78u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4294967294)));
    // 0x394c7c: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x394c7cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x394c80: 0x97a30000  lhu         $v1, 0x0($sp)
    ctx->pc = 0x394c80u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x394c84: 0xa6030002  sh          $v1, 0x2($s0)
    ctx->pc = 0x394c84u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x394c88: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x394c88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x394c8c: 0x97a20000  lhu         $v0, 0x0($sp)
    ctx->pc = 0x394c8cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
label_394c90:
    // 0x394c90: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x394c90u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x394c94: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x394c94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x394c98: 0x97a20000  lhu         $v0, 0x0($sp)
    ctx->pc = 0x394c98u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
label_394c9c:
    // 0x394c9c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x394c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x394ca0: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x394ca0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x394ca4: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x394ca4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x394ca8: 0x97a20002  lhu         $v0, 0x2($sp)
    ctx->pc = 0x394ca8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x394cac: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x394cacu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x394cb0: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x394cb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x394cb4: 0x97a20004  lhu         $v0, 0x4($sp)
    ctx->pc = 0x394cb4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x394cb8: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x394cb8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x394cbc: 0x1060024d  beqz        $v1, . + 4 + (0x24D << 2)
    ctx->pc = 0x394CBCu;
    {
        const bool branch_taken_0x394cbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x394CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394CBCu;
        // 0x394cc0: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394cbc) {
            ctx->pc = 0x3955F4u;
            goto label_3955f4;
        }
    }
    ctx->pc = 0x394CC4u;
    // 0x394cc4: 0x0  nop
    ctx->pc = 0x394cc4u;
    // NOP
label_394cc8:
    // 0x394cc8: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x394cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x394ccc: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x394cccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x394cd0: 0xafa5000c  sw          $a1, 0xC($sp)
    ctx->pc = 0x394cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 5));
    // 0x394cd4: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x394CD4u;
    {
        const bool branch_taken_0x394cd4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x394CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394CD4u;
        // 0x394cd8: 0xafa40010  sw          $a0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394cd4) {
            ctx->pc = 0x394CECu;
            goto label_394cec;
        }
    }
    ctx->pc = 0x394CDCu;
    // 0x394cdc: 0xc0e61f4  jal         func_3987D0
    ctx->pc = 0x394CDCu;
    SET_GPR_U32(ctx, 31, 0x394CE4u);
    ctx->pc = 0x3987D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3987D0u, 0x394CDCu, 0x394CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x394CE4u;
label_394ce4:
    // 0x394ce4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x394CE4u;
    {
        const bool branch_taken_0x394ce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x394CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394CE4u;
        // 0x394ce8: 0x8fa4000c  lw          $a0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394ce4) {
            ctx->pc = 0x394CF4u;
            goto label_394cf4;
        }
    }
    ctx->pc = 0x394CECu;
label_394cec:
    // 0x394cec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x394cecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394cf0: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x394cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_394cf4:
    // 0x394cf4: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x394cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x394cf8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x394cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x394cfc: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x394CFCu;
    {
        const bool branch_taken_0x394cfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x394D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394CFCu;
        // 0x394d00: 0x26028000  addiu       $v0, $s0, -0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294934528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394cfc) {
            ctx->pc = 0x394D24u;
            goto label_394d24;
        }
    }
    ctx->pc = 0x394D04u;
    // 0x394d04: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x394d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x394d08: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x394d08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x394d0c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x394d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x394d10: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x394d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x394d14: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x394d14u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x394d18: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x394d18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x394d1c: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x394d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x394d20: 0x26028000  addiu       $v0, $s0, -0x8000
    ctx->pc = 0x394d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294934528));
label_394d24:
    // 0x394d24: 0x8fa7000c  lw          $a3, 0xC($sp)
    ctx->pc = 0x394d24u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x394d28: 0x94487ffa  lhu         $t0, 0x7FFA($v0)
    ctx->pc = 0x394d28u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 32762)));
    // 0x394d2c: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x394d2cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394d30: 0x94467ffc  lhu         $a2, 0x7FFC($v0)
    ctx->pc = 0x394d30u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 32764)));
    // 0x394d34: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x394d34u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394d38: 0x94497ffe  lhu         $t1, 0x7FFE($v0)
    ctx->pc = 0x394d38u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 32766)));
    // 0x394d3c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x394d3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394d40: 0x8ce20018  lw          $v0, 0x18($a3)
    ctx->pc = 0x394d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x394d44: 0x1040006e  beqz        $v0, . + 4 + (0x6E << 2)
    ctx->pc = 0x394D44u;
    {
        const bool branch_taken_0x394d44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x394D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394D44u;
        // 0x394d48: 0xa7a80006  sh          $t0, 0x6($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 6), (uint16_t)GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394d44) {
            ctx->pc = 0x394F00u;
            goto label_394f00;
        }
    }
    ctx->pc = 0x394D4Cu;
    // 0x394d4c: 0x40602d  daddu       $t4, $v0, $zero
    ctx->pc = 0x394d4cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394d50: 0x240d0001  addiu       $t5, $zero, 0x1
    ctx->pc = 0x394d50u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x394d54: 0x31830003  andi        $v1, $t4, 0x3
    ctx->pc = 0x394d54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)3);
    // 0x394d58: 0x19800025  blez        $t4, . + 4 + (0x25 << 2)
    ctx->pc = 0x394D58u;
    {
        const bool branch_taken_0x394d58 = (GPR_S32(ctx, 12) <= 0);
        ctx->pc = 0x394D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394D58u;
        // 0x394d5c: 0x24e40028  addiu       $a0, $a3, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394d58) {
            ctx->pc = 0x394DF0u;
            goto label_394df0;
        }
    }
    ctx->pc = 0x394D60u;
    // 0x394d60: 0x50600034  beql        $v1, $zero, . + 4 + (0x34 << 2)
    ctx->pc = 0x394D60u;
    {
        const bool branch_taken_0x394d60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x394d60) {
            ctx->pc = 0x394D64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x394D60u;
            // 0x394d64: 0x94830000  lhu         $v1, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x394E34u;
            goto label_394e34;
        }
    }
    ctx->pc = 0x394D68u;
    // 0x394d68: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x394d68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x394d6c: 0x54400021  bnel        $v0, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x394D6Cu;
    {
        const bool branch_taken_0x394d6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x394d6c) {
            ctx->pc = 0x394D70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x394D6Cu;
            // 0x394d70: 0x94830000  lhu         $v1, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x394DF4u;
            goto label_394df4;
        }
    }
    ctx->pc = 0x394D74u;
    // 0x394d74: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x394d74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x394d78: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x394D78u;
    {
        const bool branch_taken_0x394d78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x394d78) {
            ctx->pc = 0x394D7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x394D78u;
            // 0x394d7c: 0x94830000  lhu         $v1, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x394DBCu;
            goto label_394dbc;
        }
    }
    ctx->pc = 0x394D80u;
    // 0x394d80: 0x94e30028  lhu         $v1, 0x28($a3)
    ctx->pc = 0x394d80u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 40)));
    // 0x394d84: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x394d84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x394d88: 0x51020007  beql        $t0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x394D88u;
    {
        const bool branch_taken_0x394d88 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        if (branch_taken_0x394d88) {
            ctx->pc = 0x394D8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x394D88u;
            // 0x394d8c: 0x94820000  lhu         $v0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x394DA8u;
            goto label_394da8;
        }
    }
    ctx->pc = 0x394D90u;
    // 0x394d90: 0x50c20005  beql        $a2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x394D90u;
    {
        const bool branch_taken_0x394d90 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x394d90) {
            ctx->pc = 0x394D94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x394D90u;
            // 0x394d94: 0x94820000  lhu         $v0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x394DA8u;
            goto label_394da8;
        }
    }
    ctx->pc = 0x394D98u;
    // 0x394d98: 0x51220003  beql        $t1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x394D98u;
    {
        const bool branch_taken_0x394d98 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 2));
        if (branch_taken_0x394d98) {
            ctx->pc = 0x394D9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x394D98u;
            // 0x394d9c: 0x94820000  lhu         $v0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x394DA8u;
            goto label_394da8;
        }
    }
    ctx->pc = 0x394DA0u;
    // 0x394da0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x394DA0u;
    {
        const bool branch_taken_0x394da0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x394DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394DA0u;
        // 0x394da4: 0xa7a30006  sh          $v1, 0x6($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 6), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394da0) {
            ctx->pc = 0x394DB0u;
            goto label_394db0;
        }
    }
    ctx->pc = 0x394DA8u;
label_394da8:
    // 0x394da8: 0xc21026  xor         $v0, $a2, $v0
    ctx->pc = 0x394da8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 2));
    // 0x394dac: 0x1a2280a  movz        $a1, $t5, $v0
    ctx->pc = 0x394dacu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 13));
label_394db0:
    // 0x394db0: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x394db0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x394db4: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x394db4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x394db8: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x394db8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_394dbc:
    // 0x394dbc: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x394dbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x394dc0: 0x51020007  beql        $t0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x394DC0u;
    {
        const bool branch_taken_0x394dc0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        if (branch_taken_0x394dc0) {
            ctx->pc = 0x394DC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x394DC0u;
            // 0x394dc4: 0x94820000  lhu         $v0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x394DE0u;
            goto label_394de0;
        }
    }
    ctx->pc = 0x394DC8u;
    // 0x394dc8: 0x50c20005  beql        $a2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x394DC8u;
    {
        const bool branch_taken_0x394dc8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x394dc8) {
            ctx->pc = 0x394DCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x394DC8u;
            // 0x394dcc: 0x94820000  lhu         $v0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x394DE0u;
            goto label_394de0;
        }
    }
    ctx->pc = 0x394DD0u;
    // 0x394dd0: 0x51220003  beql        $t1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x394DD0u;
    {
        const bool branch_taken_0x394dd0 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 2));
        if (branch_taken_0x394dd0) {
            ctx->pc = 0x394DD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x394DD0u;
            // 0x394dd4: 0x94820000  lhu         $v0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x394DE0u;
            goto label_394de0;
        }
    }
    ctx->pc = 0x394DD8u;
    // 0x394dd8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x394DD8u;
    {
        const bool branch_taken_0x394dd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x394DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394DD8u;
        // 0x394ddc: 0xa7a30006  sh          $v1, 0x6($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 6), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394dd8) {
            ctx->pc = 0x394DE8u;
            goto label_394de8;
        }
    }
    ctx->pc = 0x394DE0u;
label_394de0:
    // 0x394de0: 0xc21026  xor         $v0, $a2, $v0
    ctx->pc = 0x394de0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 2));
    // 0x394de4: 0x1a2280a  movz        $a1, $t5, $v0
    ctx->pc = 0x394de4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 13));
label_394de8:
    // 0x394de8: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x394de8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x394dec: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x394decu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_394df0:
    // 0x394df0: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x394df0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_394df4:
    // 0x394df4: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x394df4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x394df8: 0x51020007  beql        $t0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x394DF8u;
    {
        const bool branch_taken_0x394df8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        if (branch_taken_0x394df8) {
            ctx->pc = 0x394DFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x394DF8u;
            // 0x394dfc: 0x94820000  lhu         $v0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x394E18u;
            goto label_394e18;
        }
    }
    ctx->pc = 0x394E00u;
    // 0x394e00: 0x50c20005  beql        $a2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x394E00u;
    {
        const bool branch_taken_0x394e00 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x394e00) {
            ctx->pc = 0x394E04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x394E00u;
            // 0x394e04: 0x94820000  lhu         $v0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x394E18u;
            goto label_394e18;
        }
    }
    ctx->pc = 0x394E08u;
    // 0x394e08: 0x51220003  beql        $t1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x394E08u;
    {
        const bool branch_taken_0x394e08 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 2));
        if (branch_taken_0x394e08) {
            ctx->pc = 0x394E0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x394E08u;
            // 0x394e0c: 0x94820000  lhu         $v0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x394E18u;
            goto label_394e18;
        }
    }
    ctx->pc = 0x394E10u;
    // 0x394e10: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x394E10u;
    {
        const bool branch_taken_0x394e10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x394E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394E10u;
        // 0x394e14: 0xa7a30006  sh          $v1, 0x6($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 6), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394e10) {
            ctx->pc = 0x394E20u;
            goto label_394e20;
        }
    }
    ctx->pc = 0x394E18u;
label_394e18:
    // 0x394e18: 0xc21026  xor         $v0, $a2, $v0
    ctx->pc = 0x394e18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 2));
    // 0x394e1c: 0x1a2280a  movz        $a1, $t5, $v0
    ctx->pc = 0x394e1cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 13));
label_394e20:
    // 0x394e20: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x394e20u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x394e24: 0x16c102b  sltu        $v0, $t3, $t4
    ctx->pc = 0x394e24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
    // 0x394e28: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x394E28u;
    {
        const bool branch_taken_0x394e28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x394E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394E28u;
        // 0x394e2c: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394e28) {
            ctx->pc = 0x394F00u;
            goto label_394f00;
        }
    }
    ctx->pc = 0x394E30u;
label_394e30:
    // 0x394e30: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x394e30u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_394e34:
    // 0x394e34: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x394e34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x394e38: 0x51020007  beql        $t0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x394E38u;
    {
        const bool branch_taken_0x394e38 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        if (branch_taken_0x394e38) {
            ctx->pc = 0x394E3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x394E38u;
            // 0x394e3c: 0x94820000  lhu         $v0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x394E58u;
            goto label_394e58;
        }
    }
    ctx->pc = 0x394E40u;
    // 0x394e40: 0x50c20005  beql        $a2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x394E40u;
    {
        const bool branch_taken_0x394e40 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x394e40) {
            ctx->pc = 0x394E44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x394E40u;
            // 0x394e44: 0x94820000  lhu         $v0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x394E58u;
            goto label_394e58;
        }
    }
    ctx->pc = 0x394E48u;
    // 0x394e48: 0x51220003  beql        $t1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x394E48u;
    {
        const bool branch_taken_0x394e48 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 2));
        if (branch_taken_0x394e48) {
            ctx->pc = 0x394E4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x394E48u;
            // 0x394e4c: 0x94820000  lhu         $v0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x394E58u;
            goto label_394e58;
        }
    }
    ctx->pc = 0x394E50u;
    // 0x394e50: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x394E50u;
    {
        const bool branch_taken_0x394e50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x394E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394E50u;
        // 0x394e54: 0xa7a30006  sh          $v1, 0x6($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 6), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394e50) {
            ctx->pc = 0x394E60u;
            goto label_394e60;
        }
    }
    ctx->pc = 0x394E58u;
label_394e58:
    // 0x394e58: 0xc21026  xor         $v0, $a2, $v0
    ctx->pc = 0x394e58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 2));
    // 0x394e5c: 0x1a2280a  movz        $a1, $t5, $v0
    ctx->pc = 0x394e5cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 13));
label_394e60:
    // 0x394e60: 0x94830002  lhu         $v1, 0x2($a0)
    ctx->pc = 0x394e60u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x394e64: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x394e64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x394e68: 0x51020007  beql        $t0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x394E68u;
    {
        const bool branch_taken_0x394e68 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        if (branch_taken_0x394e68) {
            ctx->pc = 0x394E6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x394E68u;
            // 0x394e6c: 0x94820002  lhu         $v0, 0x2($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x394E88u;
            goto label_394e88;
        }
    }
    ctx->pc = 0x394E70u;
    // 0x394e70: 0x50c20005  beql        $a2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x394E70u;
    {
        const bool branch_taken_0x394e70 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x394e70) {
            ctx->pc = 0x394E74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x394E70u;
            // 0x394e74: 0x94820002  lhu         $v0, 0x2($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x394E88u;
            goto label_394e88;
        }
    }
    ctx->pc = 0x394E78u;
    // 0x394e78: 0x51220003  beql        $t1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x394E78u;
    {
        const bool branch_taken_0x394e78 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 2));
        if (branch_taken_0x394e78) {
            ctx->pc = 0x394E7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x394E78u;
            // 0x394e7c: 0x94820002  lhu         $v0, 0x2($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x394E88u;
            goto label_394e88;
        }
    }
    ctx->pc = 0x394E80u;
    // 0x394e80: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x394E80u;
    {
        const bool branch_taken_0x394e80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x394E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394E80u;
        // 0x394e84: 0xa7a30006  sh          $v1, 0x6($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 6), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394e80) {
            ctx->pc = 0x394E90u;
            goto label_394e90;
        }
    }
    ctx->pc = 0x394E88u;
label_394e88:
    // 0x394e88: 0xc21026  xor         $v0, $a2, $v0
    ctx->pc = 0x394e88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 2));
    // 0x394e8c: 0x1a2280a  movz        $a1, $t5, $v0
    ctx->pc = 0x394e8cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 13));
label_394e90:
    // 0x394e90: 0x94830004  lhu         $v1, 0x4($a0)
    ctx->pc = 0x394e90u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x394e94: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x394e94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x394e98: 0x51020007  beql        $t0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x394E98u;
    {
        const bool branch_taken_0x394e98 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        if (branch_taken_0x394e98) {
            ctx->pc = 0x394E9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x394E98u;
            // 0x394e9c: 0x94820004  lhu         $v0, 0x4($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x394EB8u;
            goto label_394eb8;
        }
    }
    ctx->pc = 0x394EA0u;
    // 0x394ea0: 0x50c20005  beql        $a2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x394EA0u;
    {
        const bool branch_taken_0x394ea0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x394ea0) {
            ctx->pc = 0x394EA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x394EA0u;
            // 0x394ea4: 0x94820004  lhu         $v0, 0x4($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x394EB8u;
            goto label_394eb8;
        }
    }
    ctx->pc = 0x394EA8u;
    // 0x394ea8: 0x51220003  beql        $t1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x394EA8u;
    {
        const bool branch_taken_0x394ea8 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 2));
        if (branch_taken_0x394ea8) {
            ctx->pc = 0x394EACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x394EA8u;
            // 0x394eac: 0x94820004  lhu         $v0, 0x4($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x394EB8u;
            goto label_394eb8;
        }
    }
    ctx->pc = 0x394EB0u;
    // 0x394eb0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x394EB0u;
    {
        const bool branch_taken_0x394eb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x394EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394EB0u;
        // 0x394eb4: 0xa7a30006  sh          $v1, 0x6($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 6), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394eb0) {
            ctx->pc = 0x394EC0u;
            goto label_394ec0;
        }
    }
    ctx->pc = 0x394EB8u;
label_394eb8:
    // 0x394eb8: 0xc21026  xor         $v0, $a2, $v0
    ctx->pc = 0x394eb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 2));
    // 0x394ebc: 0x1a2280a  movz        $a1, $t5, $v0
    ctx->pc = 0x394ebcu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 13));
label_394ec0:
    // 0x394ec0: 0x94830006  lhu         $v1, 0x6($a0)
    ctx->pc = 0x394ec0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x394ec4: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x394ec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x394ec8: 0x51020007  beql        $t0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x394EC8u;
    {
        const bool branch_taken_0x394ec8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        if (branch_taken_0x394ec8) {
            ctx->pc = 0x394ECCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x394EC8u;
            // 0x394ecc: 0x94820006  lhu         $v0, 0x6($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x394EE8u;
            goto label_394ee8;
        }
    }
    ctx->pc = 0x394ED0u;
    // 0x394ed0: 0x50c20005  beql        $a2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x394ED0u;
    {
        const bool branch_taken_0x394ed0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x394ed0) {
            ctx->pc = 0x394ED4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x394ED0u;
            // 0x394ed4: 0x94820006  lhu         $v0, 0x6($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x394EE8u;
            goto label_394ee8;
        }
    }
    ctx->pc = 0x394ED8u;
    // 0x394ed8: 0x51220003  beql        $t1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x394ED8u;
    {
        const bool branch_taken_0x394ed8 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 2));
        if (branch_taken_0x394ed8) {
            ctx->pc = 0x394EDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x394ED8u;
            // 0x394edc: 0x94820006  lhu         $v0, 0x6($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x394EE8u;
            goto label_394ee8;
        }
    }
    ctx->pc = 0x394EE0u;
    // 0x394ee0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x394EE0u;
    {
        const bool branch_taken_0x394ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x394EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394EE0u;
        // 0x394ee4: 0xa7a30006  sh          $v1, 0x6($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 6), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394ee0) {
            ctx->pc = 0x394EF0u;
            goto label_394ef0;
        }
    }
    ctx->pc = 0x394EE8u;
label_394ee8:
    // 0x394ee8: 0xc21026  xor         $v0, $a2, $v0
    ctx->pc = 0x394ee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 2));
    // 0x394eec: 0x1a2280a  movz        $a1, $t5, $v0
    ctx->pc = 0x394eecu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 13));
label_394ef0:
    // 0x394ef0: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x394ef0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x394ef4: 0x16c102b  sltu        $v0, $t3, $t4
    ctx->pc = 0x394ef4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
    // 0x394ef8: 0x1440ffcd  bnez        $v0, . + 4 + (-0x33 << 2)
    ctx->pc = 0x394EF8u;
    {
        const bool branch_taken_0x394ef8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x394EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394EF8u;
        // 0x394efc: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394ef8) {
            ctx->pc = 0x394E30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_394e30;
        }
    }
    ctx->pc = 0x394F00u;
label_394f00:
    // 0x394f00: 0x10a0002e  beqz        $a1, . + 4 + (0x2E << 2)
    ctx->pc = 0x394F00u;
    {
        const bool branch_taken_0x394f00 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x394F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394F00u;
        // 0x394f04: 0x8fa70010  lw          $a3, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394f00) {
            ctx->pc = 0x394FBCu;
            goto label_394fbc;
        }
    }
    ctx->pc = 0x394F08u;
    // 0x394f08: 0x1240002a  beqz        $s2, . + 4 + (0x2A << 2)
    ctx->pc = 0x394F08u;
    {
        const bool branch_taken_0x394f08 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x394F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394F08u;
        // 0x394f0c: 0x8fa6000c  lw          $a2, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394f08) {
            ctx->pc = 0x394FB4u;
            goto label_394fb4;
        }
    }
    ctx->pc = 0x394F10u;
    // 0x394f10: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x394f10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394f14: 0x95477ffc  lhu         $a3, 0x7FFC($t2)
    ctx->pc = 0x394f14u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 32764)));
    // 0x394f18: 0x8cc30018  lw          $v1, 0x18($a2)
    ctx->pc = 0x394f18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x394f1c: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x394F1Cu;
    {
        const bool branch_taken_0x394f1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x394F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394F1Cu;
        // 0x394f20: 0x95497ffe  lhu         $t1, 0x7FFE($t2) (Delay Slot)
        SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 32766)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394f1c) {
            ctx->pc = 0x394F58u;
            goto label_394f58;
        }
    }
    ctx->pc = 0x394F24u;
    // 0x394f24: 0x94c20028  lhu         $v0, 0x28($a2)
    ctx->pc = 0x394f24u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 40)));
    // 0x394f28: 0x10e2000b  beq         $a3, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x394F28u;
    {
        const bool branch_taken_0x394f28 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x394F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394F28u;
        // 0x394f2c: 0x24c40028  addiu       $a0, $a2, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394f28) {
            ctx->pc = 0x394F58u;
            goto label_394f58;
        }
    }
    ctx->pc = 0x394F30u;
    // 0x394f30: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x394f30u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394f34: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x394f34u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394f38: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x394f38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x394f3c: 0x0  nop
    ctx->pc = 0x394f3cu;
    // NOP
label_394f40:
    // 0x394f40: 0xa8102b  sltu        $v0, $a1, $t0
    ctx->pc = 0x394f40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x394f44: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x394F44u;
    {
        const bool branch_taken_0x394f44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x394F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394F44u;
        // 0x394f48: 0x24630002  addiu       $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394f44) {
            ctx->pc = 0x394F58u;
            goto label_394f58;
        }
    }
    ctx->pc = 0x394F4Cu;
    // 0x394f4c: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x394f4cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x394f50: 0x54e2fffb  bnel        $a3, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x394F50u;
    {
        const bool branch_taken_0x394f50 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x394f50) {
            ctx->pc = 0x394F54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x394F50u;
            // 0x394f54: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x394F40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_394f40;
        }
    }
    ctx->pc = 0x394F58u;
label_394f58:
    // 0x394f58: 0x8cc40018  lw          $a0, 0x18($a2)
    ctx->pc = 0x394f58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x394f5c: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x394f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x394f60: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x394f60u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x394f64: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x394F64u;
    {
        const bool branch_taken_0x394f64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x394f64) {
            ctx->pc = 0x394F68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x394F64u;
            // 0x394f68: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x394F6Cu;
            goto label_394f6c;
        }
    }
    ctx->pc = 0x394F6Cu;
label_394f6c:
    // 0x394f6c: 0x1810  mfhi        $v1
    ctx->pc = 0x394f6cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x394f70: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x394f70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x394f74: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x394f74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x394f78: 0x94620028  lhu         $v0, 0x28($v1)
    ctx->pc = 0x394f78u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x394f7c: 0x15220002  bne         $t1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x394F7Cu;
    {
        const bool branch_taken_0x394f7c = (GPR_U64(ctx, 9) != GPR_U64(ctx, 2));
        ctx->pc = 0x394F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394F7Cu;
        // 0x394f80: 0x3a420002  xori        $v0, $s2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x394f7c) {
            ctx->pc = 0x394F88u;
            goto label_394f88;
        }
    }
    ctx->pc = 0x394F84u;
    // 0x394f84: 0x3a420001  xori        $v0, $s2, 0x1
    ctx->pc = 0x394f84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)1);
label_394f88:
    // 0x394f88: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x394f88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x394f8c: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x394F8Cu;
    {
        const bool branch_taken_0x394f8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x394f8c) {
            ctx->pc = 0x394F90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x394F8Cu;
            // 0x394f90: 0x95427ffc  lhu         $v0, 0x7FFC($t2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 32764)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x394F9Cu;
            goto label_394f9c;
        }
    }
    ctx->pc = 0x394F94u;
    // 0x394f94: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x394F94u;
    {
        const bool branch_taken_0x394f94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x394F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394F94u;
        // 0x394f98: 0x3a520003  xori        $s2, $s2, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x394f94) {
            ctx->pc = 0x394FB4u;
            goto label_394fb4;
        }
    }
    ctx->pc = 0x394F9Cu;
label_394f9c:
    // 0x394f9c: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x394f9cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x394fa0: 0x95437ffc  lhu         $v1, 0x7FFC($t2)
    ctx->pc = 0x394fa0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 32764)));
    // 0x394fa4: 0xa6030002  sh          $v1, 0x2($s0)
    ctx->pc = 0x394fa4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x394fa8: 0x95427ffe  lhu         $v0, 0x7FFE($t2)
    ctx->pc = 0x394fa8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 32766)));
    // 0x394fac: 0xa6020004  sh          $v0, 0x4($s0)
    ctx->pc = 0x394facu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x394fb0: 0x26100006  addiu       $s0, $s0, 0x6
    ctx->pc = 0x394fb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 6));
label_394fb4:
    // 0x394fb4: 0x1000018b  b           . + 4 + (0x18B << 2)
    ctx->pc = 0x394FB4u;
    {
        const bool branch_taken_0x394fb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x394FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394FB4u;
        // 0x394fb8: 0x97a20006  lhu         $v0, 0x6($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394fb4) {
            ctx->pc = 0x3955E4u;
            goto label_3955e4;
        }
    }
    ctx->pc = 0x394FBCu;
label_394fbc:
    // 0x394fbc: 0x10e00078  beqz        $a3, . + 4 + (0x78 << 2)
    ctx->pc = 0x394FBCu;
    {
        const bool branch_taken_0x394fbc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x394FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394FBCu;
        // 0x394fc0: 0x260e0002  addiu       $t6, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394fbc) {
            ctx->pc = 0x3951A0u;
            goto label_3951a0;
        }
    }
    ctx->pc = 0x394FC4u;
    // 0x394fc4: 0x95487ffa  lhu         $t0, 0x7FFA($t2)
    ctx->pc = 0x394fc4u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 32762)));
    // 0x394fc8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x394fc8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394fcc: 0x95467ffe  lhu         $a2, 0x7FFE($t2)
    ctx->pc = 0x394fccu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 32766)));
    // 0x394fd0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x394fd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394fd4: 0x8ce20018  lw          $v0, 0x18($a3)
    ctx->pc = 0x394fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x394fd8: 0x97a90006  lhu         $t1, 0x6($sp)
    ctx->pc = 0x394fd8u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 6)));
    // 0x394fdc: 0x1040006e  beqz        $v0, . + 4 + (0x6E << 2)
    ctx->pc = 0x394FDCu;
    {
        const bool branch_taken_0x394fdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x394FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394FDCu;
        // 0x394fe0: 0xa7a80008  sh          $t0, 0x8($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 8), (uint16_t)GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394fdc) {
            ctx->pc = 0x395198u;
            goto label_395198;
        }
    }
    ctx->pc = 0x394FE4u;
    // 0x394fe4: 0x40602d  daddu       $t4, $v0, $zero
    ctx->pc = 0x394fe4u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394fe8: 0x240d0001  addiu       $t5, $zero, 0x1
    ctx->pc = 0x394fe8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x394fec: 0x31830003  andi        $v1, $t4, 0x3
    ctx->pc = 0x394fecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)3);
    // 0x394ff0: 0x19800025  blez        $t4, . + 4 + (0x25 << 2)
    ctx->pc = 0x394FF0u;
    {
        const bool branch_taken_0x394ff0 = (GPR_S32(ctx, 12) <= 0);
        ctx->pc = 0x394FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394FF0u;
        // 0x394ff4: 0x24e40028  addiu       $a0, $a3, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394ff0) {
            ctx->pc = 0x395088u;
            goto label_395088;
        }
    }
    ctx->pc = 0x394FF8u;
    // 0x394ff8: 0x50600034  beql        $v1, $zero, . + 4 + (0x34 << 2)
    ctx->pc = 0x394FF8u;
    {
        const bool branch_taken_0x394ff8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x394ff8) {
            ctx->pc = 0x394FFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x394FF8u;
            // 0x394ffc: 0x94830000  lhu         $v1, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3950CCu;
            goto label_3950cc;
        }
    }
    ctx->pc = 0x395000u;
    // 0x395000: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x395000u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x395004: 0x54400021  bnel        $v0, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x395004u;
    {
        const bool branch_taken_0x395004 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x395004) {
            ctx->pc = 0x395008u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x395004u;
            // 0x395008: 0x94830000  lhu         $v1, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39508Cu;
            goto label_39508c;
        }
    }
    ctx->pc = 0x39500Cu;
    // 0x39500c: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x39500cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x395010: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x395010u;
    {
        const bool branch_taken_0x395010 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x395010) {
            ctx->pc = 0x395014u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x395010u;
            // 0x395014: 0x94830000  lhu         $v1, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x395054u;
            goto label_395054;
        }
    }
    ctx->pc = 0x395018u;
    // 0x395018: 0x94e30028  lhu         $v1, 0x28($a3)
    ctx->pc = 0x395018u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 40)));
    // 0x39501c: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x39501cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x395020: 0x51020007  beql        $t0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x395020u;
    {
        const bool branch_taken_0x395020 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        if (branch_taken_0x395020) {
            ctx->pc = 0x395024u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x395020u;
            // 0x395024: 0x94820000  lhu         $v0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x395040u;
            goto label_395040;
        }
    }
    ctx->pc = 0x395028u;
    // 0x395028: 0x50c20005  beql        $a2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x395028u;
    {
        const bool branch_taken_0x395028 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x395028) {
            ctx->pc = 0x39502Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x395028u;
            // 0x39502c: 0x94820000  lhu         $v0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x395040u;
            goto label_395040;
        }
    }
    ctx->pc = 0x395030u;
    // 0x395030: 0x51220003  beql        $t1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x395030u;
    {
        const bool branch_taken_0x395030 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 2));
        if (branch_taken_0x395030) {
            ctx->pc = 0x395034u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x395030u;
            // 0x395034: 0x94820000  lhu         $v0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x395040u;
            goto label_395040;
        }
    }
    ctx->pc = 0x395038u;
    // 0x395038: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x395038u;
    {
        const bool branch_taken_0x395038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39503Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395038u;
        // 0x39503c: 0xa7a30008  sh          $v1, 0x8($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 8), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395038) {
            ctx->pc = 0x395048u;
            goto label_395048;
        }
    }
    ctx->pc = 0x395040u;
label_395040:
    // 0x395040: 0xc21026  xor         $v0, $a2, $v0
    ctx->pc = 0x395040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 2));
    // 0x395044: 0x1a2280a  movz        $a1, $t5, $v0
    ctx->pc = 0x395044u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 13));
label_395048:
    // 0x395048: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x395048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x39504c: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x39504cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x395050: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x395050u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_395054:
    // 0x395054: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x395054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x395058: 0x51020007  beql        $t0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x395058u;
    {
        const bool branch_taken_0x395058 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        if (branch_taken_0x395058) {
            ctx->pc = 0x39505Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x395058u;
            // 0x39505c: 0x94820000  lhu         $v0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x395078u;
            goto label_395078;
        }
    }
    ctx->pc = 0x395060u;
    // 0x395060: 0x50c20005  beql        $a2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x395060u;
    {
        const bool branch_taken_0x395060 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x395060) {
            ctx->pc = 0x395064u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x395060u;
            // 0x395064: 0x94820000  lhu         $v0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x395078u;
            goto label_395078;
        }
    }
    ctx->pc = 0x395068u;
    // 0x395068: 0x51220003  beql        $t1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x395068u;
    {
        const bool branch_taken_0x395068 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 2));
        if (branch_taken_0x395068) {
            ctx->pc = 0x39506Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x395068u;
            // 0x39506c: 0x94820000  lhu         $v0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x395078u;
            goto label_395078;
        }
    }
    ctx->pc = 0x395070u;
    // 0x395070: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x395070u;
    {
        const bool branch_taken_0x395070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x395074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395070u;
        // 0x395074: 0xa7a30008  sh          $v1, 0x8($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 8), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395070) {
            ctx->pc = 0x395080u;
            goto label_395080;
        }
    }
    ctx->pc = 0x395078u;
label_395078:
    // 0x395078: 0xc21026  xor         $v0, $a2, $v0
    ctx->pc = 0x395078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 2));
    // 0x39507c: 0x1a2280a  movz        $a1, $t5, $v0
    ctx->pc = 0x39507cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 13));
label_395080:
    // 0x395080: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x395080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x395084: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x395084u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_395088:
    // 0x395088: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x395088u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_39508c:
    // 0x39508c: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x39508cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x395090: 0x51020007  beql        $t0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x395090u;
    {
        const bool branch_taken_0x395090 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        if (branch_taken_0x395090) {
            ctx->pc = 0x395094u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x395090u;
            // 0x395094: 0x94820000  lhu         $v0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3950B0u;
            goto label_3950b0;
        }
    }
    ctx->pc = 0x395098u;
    // 0x395098: 0x50c20005  beql        $a2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x395098u;
    {
        const bool branch_taken_0x395098 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x395098) {
            ctx->pc = 0x39509Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x395098u;
            // 0x39509c: 0x94820000  lhu         $v0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3950B0u;
            goto label_3950b0;
        }
    }
    ctx->pc = 0x3950A0u;
    // 0x3950a0: 0x51220003  beql        $t1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3950A0u;
    {
        const bool branch_taken_0x3950a0 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 2));
        if (branch_taken_0x3950a0) {
            ctx->pc = 0x3950A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3950A0u;
            // 0x3950a4: 0x94820000  lhu         $v0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3950B0u;
            goto label_3950b0;
        }
    }
    ctx->pc = 0x3950A8u;
    // 0x3950a8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3950A8u;
    {
        const bool branch_taken_0x3950a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3950ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3950A8u;
        // 0x3950ac: 0xa7a30008  sh          $v1, 0x8($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 8), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3950a8) {
            ctx->pc = 0x3950B8u;
            goto label_3950b8;
        }
    }
    ctx->pc = 0x3950B0u;
label_3950b0:
    // 0x3950b0: 0xc21026  xor         $v0, $a2, $v0
    ctx->pc = 0x3950b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 2));
    // 0x3950b4: 0x1a2280a  movz        $a1, $t5, $v0
    ctx->pc = 0x3950b4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 13));
label_3950b8:
    // 0x3950b8: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x3950b8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x3950bc: 0x16c102b  sltu        $v0, $t3, $t4
    ctx->pc = 0x3950bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
    // 0x3950c0: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x3950C0u;
    {
        const bool branch_taken_0x3950c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3950C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3950C0u;
        // 0x3950c4: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3950c0) {
            ctx->pc = 0x395198u;
            goto label_395198;
        }
    }
    ctx->pc = 0x3950C8u;
label_3950c8:
    // 0x3950c8: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x3950c8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_3950cc:
    // 0x3950cc: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x3950ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x3950d0: 0x51020007  beql        $t0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3950D0u;
    {
        const bool branch_taken_0x3950d0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        if (branch_taken_0x3950d0) {
            ctx->pc = 0x3950D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3950D0u;
            // 0x3950d4: 0x94820000  lhu         $v0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3950F0u;
            goto label_3950f0;
        }
    }
    ctx->pc = 0x3950D8u;
    // 0x3950d8: 0x50c20005  beql        $a2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3950D8u;
    {
        const bool branch_taken_0x3950d8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x3950d8) {
            ctx->pc = 0x3950DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3950D8u;
            // 0x3950dc: 0x94820000  lhu         $v0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3950F0u;
            goto label_3950f0;
        }
    }
    ctx->pc = 0x3950E0u;
    // 0x3950e0: 0x51220003  beql        $t1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3950E0u;
    {
        const bool branch_taken_0x3950e0 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 2));
        if (branch_taken_0x3950e0) {
            ctx->pc = 0x3950E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3950E0u;
            // 0x3950e4: 0x94820000  lhu         $v0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3950F0u;
            goto label_3950f0;
        }
    }
    ctx->pc = 0x3950E8u;
    // 0x3950e8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3950E8u;
    {
        const bool branch_taken_0x3950e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3950ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3950E8u;
        // 0x3950ec: 0xa7a30008  sh          $v1, 0x8($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 8), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3950e8) {
            ctx->pc = 0x3950F8u;
            goto label_3950f8;
        }
    }
    ctx->pc = 0x3950F0u;
label_3950f0:
    // 0x3950f0: 0xc21026  xor         $v0, $a2, $v0
    ctx->pc = 0x3950f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 2));
    // 0x3950f4: 0x1a2280a  movz        $a1, $t5, $v0
    ctx->pc = 0x3950f4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 13));
label_3950f8:
    // 0x3950f8: 0x94830002  lhu         $v1, 0x2($a0)
    ctx->pc = 0x3950f8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x3950fc: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x3950fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x395100: 0x51020007  beql        $t0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x395100u;
    {
        const bool branch_taken_0x395100 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        if (branch_taken_0x395100) {
            ctx->pc = 0x395104u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x395100u;
            // 0x395104: 0x94820002  lhu         $v0, 0x2($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x395120u;
            goto label_395120;
        }
    }
    ctx->pc = 0x395108u;
    // 0x395108: 0x50c20005  beql        $a2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x395108u;
    {
        const bool branch_taken_0x395108 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x395108) {
            ctx->pc = 0x39510Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x395108u;
            // 0x39510c: 0x94820002  lhu         $v0, 0x2($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x395120u;
            goto label_395120;
        }
    }
    ctx->pc = 0x395110u;
    // 0x395110: 0x51220003  beql        $t1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x395110u;
    {
        const bool branch_taken_0x395110 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 2));
        if (branch_taken_0x395110) {
            ctx->pc = 0x395114u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x395110u;
            // 0x395114: 0x94820002  lhu         $v0, 0x2($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x395120u;
            goto label_395120;
        }
    }
    ctx->pc = 0x395118u;
    // 0x395118: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x395118u;
    {
        const bool branch_taken_0x395118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39511Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395118u;
        // 0x39511c: 0xa7a30008  sh          $v1, 0x8($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 8), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395118) {
            ctx->pc = 0x395128u;
            goto label_395128;
        }
    }
    ctx->pc = 0x395120u;
label_395120:
    // 0x395120: 0xc21026  xor         $v0, $a2, $v0
    ctx->pc = 0x395120u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 2));
    // 0x395124: 0x1a2280a  movz        $a1, $t5, $v0
    ctx->pc = 0x395124u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 13));
label_395128:
    // 0x395128: 0x94830004  lhu         $v1, 0x4($a0)
    ctx->pc = 0x395128u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x39512c: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x39512cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x395130: 0x51020007  beql        $t0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x395130u;
    {
        const bool branch_taken_0x395130 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        if (branch_taken_0x395130) {
            ctx->pc = 0x395134u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x395130u;
            // 0x395134: 0x94820004  lhu         $v0, 0x4($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x395150u;
            goto label_395150;
        }
    }
    ctx->pc = 0x395138u;
    // 0x395138: 0x50c20005  beql        $a2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x395138u;
    {
        const bool branch_taken_0x395138 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x395138) {
            ctx->pc = 0x39513Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x395138u;
            // 0x39513c: 0x94820004  lhu         $v0, 0x4($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x395150u;
            goto label_395150;
        }
    }
    ctx->pc = 0x395140u;
    // 0x395140: 0x51220003  beql        $t1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x395140u;
    {
        const bool branch_taken_0x395140 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 2));
        if (branch_taken_0x395140) {
            ctx->pc = 0x395144u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x395140u;
            // 0x395144: 0x94820004  lhu         $v0, 0x4($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x395150u;
            goto label_395150;
        }
    }
    ctx->pc = 0x395148u;
    // 0x395148: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x395148u;
    {
        const bool branch_taken_0x395148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39514Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395148u;
        // 0x39514c: 0xa7a30008  sh          $v1, 0x8($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 8), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395148) {
            ctx->pc = 0x395158u;
            goto label_395158;
        }
    }
    ctx->pc = 0x395150u;
label_395150:
    // 0x395150: 0xc21026  xor         $v0, $a2, $v0
    ctx->pc = 0x395150u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 2));
    // 0x395154: 0x1a2280a  movz        $a1, $t5, $v0
    ctx->pc = 0x395154u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 13));
label_395158:
    // 0x395158: 0x94830006  lhu         $v1, 0x6($a0)
    ctx->pc = 0x395158u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x39515c: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x39515cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x395160: 0x51020007  beql        $t0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x395160u;
    {
        const bool branch_taken_0x395160 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        if (branch_taken_0x395160) {
            ctx->pc = 0x395164u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x395160u;
            // 0x395164: 0x94820006  lhu         $v0, 0x6($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x395180u;
            goto label_395180;
        }
    }
    ctx->pc = 0x395168u;
    // 0x395168: 0x50c20005  beql        $a2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x395168u;
    {
        const bool branch_taken_0x395168 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x395168) {
            ctx->pc = 0x39516Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x395168u;
            // 0x39516c: 0x94820006  lhu         $v0, 0x6($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x395180u;
            goto label_395180;
        }
    }
    ctx->pc = 0x395170u;
    // 0x395170: 0x51220003  beql        $t1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x395170u;
    {
        const bool branch_taken_0x395170 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 2));
        if (branch_taken_0x395170) {
            ctx->pc = 0x395174u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x395170u;
            // 0x395174: 0x94820006  lhu         $v0, 0x6($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x395180u;
            goto label_395180;
        }
    }
    ctx->pc = 0x395178u;
    // 0x395178: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x395178u;
    {
        const bool branch_taken_0x395178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39517Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395178u;
        // 0x39517c: 0xa7a30008  sh          $v1, 0x8($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 8), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395178) {
            ctx->pc = 0x395188u;
            goto label_395188;
        }
    }
    ctx->pc = 0x395180u;
label_395180:
    // 0x395180: 0xc21026  xor         $v0, $a2, $v0
    ctx->pc = 0x395180u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 2));
    // 0x395184: 0x1a2280a  movz        $a1, $t5, $v0
    ctx->pc = 0x395184u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 13));
label_395188:
    // 0x395188: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x395188u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x39518c: 0x16c102b  sltu        $v0, $t3, $t4
    ctx->pc = 0x39518cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
    // 0x395190: 0x1440ffcd  bnez        $v0, . + 4 + (-0x33 << 2)
    ctx->pc = 0x395190u;
    {
        const bool branch_taken_0x395190 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x395194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395190u;
        // 0x395194: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395190) {
            ctx->pc = 0x3950C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3950c8;
        }
    }
    ctx->pc = 0x395198u;
label_395198:
    // 0x395198: 0x10a00036  beqz        $a1, . + 4 + (0x36 << 2)
    ctx->pc = 0x395198u;
    {
        const bool branch_taken_0x395198 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x39519Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395198u;
        // 0x39519c: 0x8fa70014  lw          $a3, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395198) {
            ctx->pc = 0x395274u;
            goto label_395274;
        }
    }
    ctx->pc = 0x3951A0u;
label_3951a0:
    // 0x3951a0: 0x95427ffe  lhu         $v0, 0x7FFE($t2)
    ctx->pc = 0x3951a0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 32766)));
    // 0x3951a4: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x3951a4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x3951a8: 0x1c0802d  daddu       $s0, $t6, $zero
    ctx->pc = 0x3951a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3951ac: 0x95427ffa  lhu         $v0, 0x7FFA($t2)
    ctx->pc = 0x3951acu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 32762)));
    // 0x3951b0: 0x1240002e  beqz        $s2, . + 4 + (0x2E << 2)
    ctx->pc = 0x3951B0u;
    {
        const bool branch_taken_0x3951b0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3951B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3951B0u;
        // 0x3951b4: 0xa5427ffe  sh          $v0, 0x7FFE($t2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 10), 32766), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3951b0) {
            ctx->pc = 0x39526Cu;
            goto label_39526c;
        }
    }
    ctx->pc = 0x3951B8u;
    // 0x3951b8: 0x8fa6000c  lw          $a2, 0xC($sp)
    ctx->pc = 0x3951b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x3951bc: 0x26028000  addiu       $v0, $s0, -0x8000
    ctx->pc = 0x3951bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294934528));
    // 0x3951c0: 0x3a480003  xori        $t0, $s2, 0x3
    ctx->pc = 0x3951c0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)3);
    // 0x3951c4: 0x94477ffc  lhu         $a3, 0x7FFC($v0)
    ctx->pc = 0x3951c4u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 32764)));
    // 0x3951c8: 0x8cc40018  lw          $a0, 0x18($a2)
    ctx->pc = 0x3951c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x3951cc: 0x100582d  daddu       $t3, $t0, $zero
    ctx->pc = 0x3951ccu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3951d0: 0x94497ffe  lhu         $t1, 0x7FFE($v0)
    ctx->pc = 0x3951d0u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 32766)));
    // 0x3951d4: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x3951d4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3951d8: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x3951D8u;
    {
        const bool branch_taken_0x3951d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3951DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3951D8u;
        // 0x3951dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3951d8) {
            ctx->pc = 0x39520Cu;
            goto label_39520c;
        }
    }
    ctx->pc = 0x3951E0u;
    // 0x3951e0: 0x94c20028  lhu         $v0, 0x28($a2)
    ctx->pc = 0x3951e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 40)));
    // 0x3951e4: 0x10e20009  beq         $a3, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3951E4u;
    {
        const bool branch_taken_0x3951e4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x3951E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3951E4u;
        // 0x3951e8: 0x24c30028  addiu       $v1, $a2, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3951e4) {
            ctx->pc = 0x39520Cu;
            goto label_39520c;
        }
    }
    ctx->pc = 0x3951ECu;
    // 0x3951ec: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3951ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_3951f0:
    // 0x3951f0: 0xa4102b  sltu        $v0, $a1, $a0
    ctx->pc = 0x3951f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x3951f4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3951F4u;
    {
        const bool branch_taken_0x3951f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3951F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3951F4u;
        // 0x3951f8: 0x24630002  addiu       $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3951f4) {
            ctx->pc = 0x395208u;
            goto label_395208;
        }
    }
    ctx->pc = 0x3951FCu;
    // 0x3951fc: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x3951fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x395200: 0x54e2fffb  bnel        $a3, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x395200u;
    {
        const bool branch_taken_0x395200 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x395200) {
            ctx->pc = 0x395204u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x395200u;
            // 0x395204: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3951F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3951f0;
        }
    }
    ctx->pc = 0x395208u;
label_395208:
    // 0x395208: 0x8cc40018  lw          $a0, 0x18($a2)
    ctx->pc = 0x395208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
label_39520c:
    // 0x39520c: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x39520cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x395210: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x395210u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x395214: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x395214u;
    {
        const bool branch_taken_0x395214 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x395214) {
            ctx->pc = 0x395218u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x395214u;
            // 0x395218: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x39521Cu;
            goto label_39521c;
        }
    }
    ctx->pc = 0x39521Cu;
label_39521c:
    // 0x39521c: 0x1810  mfhi        $v1
    ctx->pc = 0x39521cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x395220: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x395220u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x395224: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x395224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x395228: 0x94620028  lhu         $v0, 0x28($v1)
    ctx->pc = 0x395228u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x39522c: 0x15220002  bne         $t1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x39522Cu;
    {
        const bool branch_taken_0x39522c = (GPR_U64(ctx, 9) != GPR_U64(ctx, 2));
        ctx->pc = 0x395230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39522Cu;
        // 0x395230: 0x39020002  xori        $v0, $t0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x39522c) {
            ctx->pc = 0x395238u;
            goto label_395238;
        }
    }
    ctx->pc = 0x395234u;
    // 0x395234: 0x39020001  xori        $v0, $t0, 0x1
    ctx->pc = 0x395234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) ^ (uint64_t)(uint16_t)1);
label_395238:
    // 0x395238: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x395238u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x39523c: 0x544000e9  bnel        $v0, $zero, . + 4 + (0xE9 << 2)
    ctx->pc = 0x39523Cu;
    {
        const bool branch_taken_0x39523c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39523c) {
            ctx->pc = 0x395240u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39523Cu;
            // 0x395240: 0x97a20006  lhu         $v0, 0x6($sp) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3955E4u;
            goto label_3955e4;
        }
    }
    ctx->pc = 0x395244u;
    // 0x395244: 0x95437ffc  lhu         $v1, 0x7FFC($t2)
    ctx->pc = 0x395244u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 32764)));
    // 0x395248: 0x25d00006  addiu       $s0, $t6, 0x6
    ctx->pc = 0x395248u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 14), 6));
    // 0x39524c: 0x160902d  daddu       $s2, $t3, $zero
    ctx->pc = 0x39524cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x395250: 0xa5c30002  sh          $v1, 0x2($t6)
    ctx->pc = 0x395250u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x395254: 0x95427ffe  lhu         $v0, 0x7FFE($t2)
    ctx->pc = 0x395254u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 32766)));
    // 0x395258: 0xa5c20004  sh          $v0, 0x4($t6)
    ctx->pc = 0x395258u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x39525c: 0x95437ffe  lhu         $v1, 0x7FFE($t2)
    ctx->pc = 0x39525cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 32766)));
    // 0x395260: 0xa5c30000  sh          $v1, 0x0($t6)
    ctx->pc = 0x395260u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x395264: 0x95427ffe  lhu         $v0, 0x7FFE($t2)
    ctx->pc = 0x395264u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 32766)));
    // 0x395268: 0xa5427ffc  sh          $v0, 0x7FFC($t2)
    ctx->pc = 0x395268u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 32764), (uint16_t)GPR_U32(ctx, 2));
label_39526c:
    // 0x39526c: 0x100000dd  b           . + 4 + (0xDD << 2)
    ctx->pc = 0x39526Cu;
    {
        const bool branch_taken_0x39526c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x395270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39526Cu;
        // 0x395270: 0x97a20006  lhu         $v0, 0x6($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39526c) {
            ctx->pc = 0x3955E4u;
            goto label_3955e4;
        }
    }
    ctx->pc = 0x395274u;
label_395274:
    // 0x395274: 0x10e00078  beqz        $a3, . + 4 + (0x78 << 2)
    ctx->pc = 0x395274u;
    {
        const bool branch_taken_0x395274 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x395278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395274u;
        // 0x395278: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395274) {
            ctx->pc = 0x395458u;
            goto label_395458;
        }
    }
    ctx->pc = 0x39527Cu;
    // 0x39527c: 0x95487ffa  lhu         $t0, 0x7FFA($t2)
    ctx->pc = 0x39527cu;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 32762)));
    // 0x395280: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x395280u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x395284: 0x97a90008  lhu         $t1, 0x8($sp)
    ctx->pc = 0x395284u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x395288: 0x8ce20018  lw          $v0, 0x18($a3)
    ctx->pc = 0x395288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x39528c: 0x97a60006  lhu         $a2, 0x6($sp)
    ctx->pc = 0x39528cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 6)));
    // 0x395290: 0x1040006f  beqz        $v0, . + 4 + (0x6F << 2)
    ctx->pc = 0x395290u;
    {
        const bool branch_taken_0x395290 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x395294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395290u;
        // 0x395294: 0xa7a80008  sh          $t0, 0x8($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 8), (uint16_t)GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395290) {
            ctx->pc = 0x395450u;
            goto label_395450;
        }
    }
    ctx->pc = 0x395298u;
    // 0x395298: 0x40602d  daddu       $t4, $v0, $zero
    ctx->pc = 0x395298u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39529c: 0x240d0001  addiu       $t5, $zero, 0x1
    ctx->pc = 0x39529cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3952a0: 0x31830003  andi        $v1, $t4, 0x3
    ctx->pc = 0x3952a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)3);
    // 0x3952a4: 0x19800025  blez        $t4, . + 4 + (0x25 << 2)
    ctx->pc = 0x3952A4u;
    {
        const bool branch_taken_0x3952a4 = (GPR_S32(ctx, 12) <= 0);
        ctx->pc = 0x3952A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3952A4u;
        // 0x3952a8: 0x24e40028  addiu       $a0, $a3, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3952a4) {
            ctx->pc = 0x39533Cu;
            goto label_39533c;
        }
    }
    ctx->pc = 0x3952ACu;
    // 0x3952ac: 0x50600035  beql        $v1, $zero, . + 4 + (0x35 << 2)
    ctx->pc = 0x3952ACu;
    {
        const bool branch_taken_0x3952ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3952ac) {
            ctx->pc = 0x3952B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3952ACu;
            // 0x3952b0: 0x94830000  lhu         $v1, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x395384u;
            goto label_395384;
        }
    }
    ctx->pc = 0x3952B4u;
    // 0x3952b4: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x3952b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3952b8: 0x54400021  bnel        $v0, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x3952B8u;
    {
        const bool branch_taken_0x3952b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3952b8) {
            ctx->pc = 0x3952BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3952B8u;
            // 0x3952bc: 0x94830000  lhu         $v1, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x395340u;
            goto label_395340;
        }
    }
    ctx->pc = 0x3952C0u;
    // 0x3952c0: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3952c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3952c4: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x3952C4u;
    {
        const bool branch_taken_0x3952c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3952c4) {
            ctx->pc = 0x3952C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3952C4u;
            // 0x3952c8: 0x94830000  lhu         $v1, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x395308u;
            goto label_395308;
        }
    }
    ctx->pc = 0x3952CCu;
    // 0x3952cc: 0x94e30028  lhu         $v1, 0x28($a3)
    ctx->pc = 0x3952ccu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 40)));
    // 0x3952d0: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x3952d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x3952d4: 0x51020007  beql        $t0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3952D4u;
    {
        const bool branch_taken_0x3952d4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        if (branch_taken_0x3952d4) {
            ctx->pc = 0x3952D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3952D4u;
            // 0x3952d8: 0x94820000  lhu         $v0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3952F4u;
            goto label_3952f4;
        }
    }
    ctx->pc = 0x3952DCu;
    // 0x3952dc: 0x50c20005  beql        $a2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3952DCu;
    {
        const bool branch_taken_0x3952dc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x3952dc) {
            ctx->pc = 0x3952E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3952DCu;
            // 0x3952e0: 0x94820000  lhu         $v0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3952F4u;
            goto label_3952f4;
        }
    }
    ctx->pc = 0x3952E4u;
    // 0x3952e4: 0x51220003  beql        $t1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3952E4u;
    {
        const bool branch_taken_0x3952e4 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 2));
        if (branch_taken_0x3952e4) {
            ctx->pc = 0x3952E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3952E4u;
            // 0x3952e8: 0x94820000  lhu         $v0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3952F4u;
            goto label_3952f4;
        }
    }
    ctx->pc = 0x3952ECu;
    // 0x3952ec: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3952ECu;
    {
        const bool branch_taken_0x3952ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3952F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3952ECu;
        // 0x3952f0: 0xa7a30008  sh          $v1, 0x8($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 8), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3952ec) {
            ctx->pc = 0x3952FCu;
            goto label_3952fc;
        }
    }
    ctx->pc = 0x3952F4u;
label_3952f4:
    // 0x3952f4: 0xc21026  xor         $v0, $a2, $v0
    ctx->pc = 0x3952f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 2));
    // 0x3952f8: 0x1a2280a  movz        $a1, $t5, $v0
    ctx->pc = 0x3952f8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 13));
label_3952fc:
    // 0x3952fc: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x3952fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x395300: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x395300u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x395304: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x395304u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_395308:
    // 0x395308: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x395308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x39530c: 0x51020007  beql        $t0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x39530Cu;
    {
        const bool branch_taken_0x39530c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        if (branch_taken_0x39530c) {
            ctx->pc = 0x395310u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39530Cu;
            // 0x395310: 0x94820000  lhu         $v0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39532Cu;
            goto label_39532c;
        }
    }
    ctx->pc = 0x395314u;
    // 0x395314: 0x50c20005  beql        $a2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x395314u;
    {
        const bool branch_taken_0x395314 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x395314) {
            ctx->pc = 0x395318u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x395314u;
            // 0x395318: 0x94820000  lhu         $v0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39532Cu;
            goto label_39532c;
        }
    }
    ctx->pc = 0x39531Cu;
    // 0x39531c: 0x51220003  beql        $t1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x39531Cu;
    {
        const bool branch_taken_0x39531c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 2));
        if (branch_taken_0x39531c) {
            ctx->pc = 0x395320u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39531Cu;
            // 0x395320: 0x94820000  lhu         $v0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39532Cu;
            goto label_39532c;
        }
    }
    ctx->pc = 0x395324u;
    // 0x395324: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x395324u;
    {
        const bool branch_taken_0x395324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x395328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395324u;
        // 0x395328: 0xa7a30008  sh          $v1, 0x8($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 8), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395324) {
            ctx->pc = 0x395334u;
            goto label_395334;
        }
    }
    ctx->pc = 0x39532Cu;
label_39532c:
    // 0x39532c: 0xc21026  xor         $v0, $a2, $v0
    ctx->pc = 0x39532cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 2));
    // 0x395330: 0x1a2280a  movz        $a1, $t5, $v0
    ctx->pc = 0x395330u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 13));
label_395334:
    // 0x395334: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x395334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x395338: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x395338u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_39533c:
    // 0x39533c: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x39533cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_395340:
    // 0x395340: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x395340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x395344: 0x51020007  beql        $t0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x395344u;
    {
        const bool branch_taken_0x395344 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        if (branch_taken_0x395344) {
            ctx->pc = 0x395348u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x395344u;
            // 0x395348: 0x94820000  lhu         $v0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x395364u;
            goto label_395364;
        }
    }
    ctx->pc = 0x39534Cu;
    // 0x39534c: 0x50c20005  beql        $a2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x39534Cu;
    {
        const bool branch_taken_0x39534c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x39534c) {
            ctx->pc = 0x395350u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39534Cu;
            // 0x395350: 0x94820000  lhu         $v0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x395364u;
            goto label_395364;
        }
    }
    ctx->pc = 0x395354u;
    // 0x395354: 0x51220003  beql        $t1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x395354u;
    {
        const bool branch_taken_0x395354 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 2));
        if (branch_taken_0x395354) {
            ctx->pc = 0x395358u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x395354u;
            // 0x395358: 0x94820000  lhu         $v0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x395364u;
            goto label_395364;
        }
    }
    ctx->pc = 0x39535Cu;
    // 0x39535c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x39535Cu;
    {
        const bool branch_taken_0x39535c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x395360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39535Cu;
        // 0x395360: 0xa7a30008  sh          $v1, 0x8($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 8), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39535c) {
            ctx->pc = 0x39536Cu;
            goto label_39536c;
        }
    }
    ctx->pc = 0x395364u;
label_395364:
    // 0x395364: 0xc21026  xor         $v0, $a2, $v0
    ctx->pc = 0x395364u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 2));
    // 0x395368: 0x1a2280a  movz        $a1, $t5, $v0
    ctx->pc = 0x395368u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 13));
label_39536c:
    // 0x39536c: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x39536cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x395370: 0x16c102b  sltu        $v0, $t3, $t4
    ctx->pc = 0x395370u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
    // 0x395374: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x395374u;
    {
        const bool branch_taken_0x395374 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x395378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395374u;
        // 0x395378: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395374) {
            ctx->pc = 0x395450u;
            goto label_395450;
        }
    }
    ctx->pc = 0x39537Cu;
    // 0x39537c: 0x0  nop
    ctx->pc = 0x39537cu;
    // NOP
label_395380:
    // 0x395380: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x395380u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_395384:
    // 0x395384: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x395384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x395388: 0x51020007  beql        $t0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x395388u;
    {
        const bool branch_taken_0x395388 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        if (branch_taken_0x395388) {
            ctx->pc = 0x39538Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x395388u;
            // 0x39538c: 0x94820000  lhu         $v0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3953A8u;
            goto label_3953a8;
        }
    }
    ctx->pc = 0x395390u;
    // 0x395390: 0x50c20005  beql        $a2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x395390u;
    {
        const bool branch_taken_0x395390 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x395390) {
            ctx->pc = 0x395394u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x395390u;
            // 0x395394: 0x94820000  lhu         $v0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3953A8u;
            goto label_3953a8;
        }
    }
    ctx->pc = 0x395398u;
    // 0x395398: 0x51220003  beql        $t1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x395398u;
    {
        const bool branch_taken_0x395398 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 2));
        if (branch_taken_0x395398) {
            ctx->pc = 0x39539Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x395398u;
            // 0x39539c: 0x94820000  lhu         $v0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3953A8u;
            goto label_3953a8;
        }
    }
    ctx->pc = 0x3953A0u;
    // 0x3953a0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3953A0u;
    {
        const bool branch_taken_0x3953a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3953A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3953A0u;
        // 0x3953a4: 0xa7a30008  sh          $v1, 0x8($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 8), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3953a0) {
            ctx->pc = 0x3953B0u;
            goto label_3953b0;
        }
    }
    ctx->pc = 0x3953A8u;
label_3953a8:
    // 0x3953a8: 0xc21026  xor         $v0, $a2, $v0
    ctx->pc = 0x3953a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 2));
    // 0x3953ac: 0x1a2280a  movz        $a1, $t5, $v0
    ctx->pc = 0x3953acu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 13));
label_3953b0:
    // 0x3953b0: 0x94830002  lhu         $v1, 0x2($a0)
    ctx->pc = 0x3953b0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x3953b4: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x3953b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x3953b8: 0x51020007  beql        $t0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3953B8u;
    {
        const bool branch_taken_0x3953b8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        if (branch_taken_0x3953b8) {
            ctx->pc = 0x3953BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3953B8u;
            // 0x3953bc: 0x94820002  lhu         $v0, 0x2($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3953D8u;
            goto label_3953d8;
        }
    }
    ctx->pc = 0x3953C0u;
    // 0x3953c0: 0x50c20005  beql        $a2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3953C0u;
    {
        const bool branch_taken_0x3953c0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x3953c0) {
            ctx->pc = 0x3953C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3953C0u;
            // 0x3953c4: 0x94820002  lhu         $v0, 0x2($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3953D8u;
            goto label_3953d8;
        }
    }
    ctx->pc = 0x3953C8u;
    // 0x3953c8: 0x51220003  beql        $t1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3953C8u;
    {
        const bool branch_taken_0x3953c8 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 2));
        if (branch_taken_0x3953c8) {
            ctx->pc = 0x3953CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3953C8u;
            // 0x3953cc: 0x94820002  lhu         $v0, 0x2($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3953D8u;
            goto label_3953d8;
        }
    }
    ctx->pc = 0x3953D0u;
    // 0x3953d0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3953D0u;
    {
        const bool branch_taken_0x3953d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3953D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3953D0u;
        // 0x3953d4: 0xa7a30008  sh          $v1, 0x8($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 8), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3953d0) {
            ctx->pc = 0x3953E0u;
            goto label_3953e0;
        }
    }
    ctx->pc = 0x3953D8u;
label_3953d8:
    // 0x3953d8: 0xc21026  xor         $v0, $a2, $v0
    ctx->pc = 0x3953d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 2));
    // 0x3953dc: 0x1a2280a  movz        $a1, $t5, $v0
    ctx->pc = 0x3953dcu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 13));
label_3953e0:
    // 0x3953e0: 0x94830004  lhu         $v1, 0x4($a0)
    ctx->pc = 0x3953e0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3953e4: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x3953e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x3953e8: 0x51020007  beql        $t0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3953E8u;
    {
        const bool branch_taken_0x3953e8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        if (branch_taken_0x3953e8) {
            ctx->pc = 0x3953ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3953E8u;
            // 0x3953ec: 0x94820004  lhu         $v0, 0x4($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x395408u;
            goto label_395408;
        }
    }
    ctx->pc = 0x3953F0u;
    // 0x3953f0: 0x50c20005  beql        $a2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3953F0u;
    {
        const bool branch_taken_0x3953f0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x3953f0) {
            ctx->pc = 0x3953F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3953F0u;
            // 0x3953f4: 0x94820004  lhu         $v0, 0x4($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x395408u;
            goto label_395408;
        }
    }
    ctx->pc = 0x3953F8u;
    // 0x3953f8: 0x51220003  beql        $t1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3953F8u;
    {
        const bool branch_taken_0x3953f8 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 2));
        if (branch_taken_0x3953f8) {
            ctx->pc = 0x3953FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3953F8u;
            // 0x3953fc: 0x94820004  lhu         $v0, 0x4($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x395408u;
            goto label_395408;
        }
    }
    ctx->pc = 0x395400u;
    // 0x395400: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x395400u;
    {
        const bool branch_taken_0x395400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x395404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395400u;
        // 0x395404: 0xa7a30008  sh          $v1, 0x8($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 8), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395400) {
            ctx->pc = 0x395410u;
            goto label_395410;
        }
    }
    ctx->pc = 0x395408u;
label_395408:
    // 0x395408: 0xc21026  xor         $v0, $a2, $v0
    ctx->pc = 0x395408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 2));
    // 0x39540c: 0x1a2280a  movz        $a1, $t5, $v0
    ctx->pc = 0x39540cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 13));
label_395410:
    // 0x395410: 0x94830006  lhu         $v1, 0x6($a0)
    ctx->pc = 0x395410u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x395414: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x395414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x395418: 0x51020007  beql        $t0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x395418u;
    {
        const bool branch_taken_0x395418 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        if (branch_taken_0x395418) {
            ctx->pc = 0x39541Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x395418u;
            // 0x39541c: 0x94820006  lhu         $v0, 0x6($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x395438u;
            goto label_395438;
        }
    }
    ctx->pc = 0x395420u;
    // 0x395420: 0x50c20005  beql        $a2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x395420u;
    {
        const bool branch_taken_0x395420 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x395420) {
            ctx->pc = 0x395424u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x395420u;
            // 0x395424: 0x94820006  lhu         $v0, 0x6($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x395438u;
            goto label_395438;
        }
    }
    ctx->pc = 0x395428u;
    // 0x395428: 0x51220003  beql        $t1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x395428u;
    {
        const bool branch_taken_0x395428 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 2));
        if (branch_taken_0x395428) {
            ctx->pc = 0x39542Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x395428u;
            // 0x39542c: 0x94820006  lhu         $v0, 0x6($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x395438u;
            goto label_395438;
        }
    }
    ctx->pc = 0x395430u;
    // 0x395430: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x395430u;
    {
        const bool branch_taken_0x395430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x395434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395430u;
        // 0x395434: 0xa7a30008  sh          $v1, 0x8($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 8), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395430) {
            ctx->pc = 0x395440u;
            goto label_395440;
        }
    }
    ctx->pc = 0x395438u;
label_395438:
    // 0x395438: 0xc21026  xor         $v0, $a2, $v0
    ctx->pc = 0x395438u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 2));
    // 0x39543c: 0x1a2280a  movz        $a1, $t5, $v0
    ctx->pc = 0x39543cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 13));
label_395440:
    // 0x395440: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x395440u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x395444: 0x16c102b  sltu        $v0, $t3, $t4
    ctx->pc = 0x395444u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
    // 0x395448: 0x1440ffcd  bnez        $v0, . + 4 + (-0x33 << 2)
    ctx->pc = 0x395448u;
    {
        const bool branch_taken_0x395448 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39544Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395448u;
        // 0x39544c: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395448) {
            ctx->pc = 0x395380u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_395380;
        }
    }
    ctx->pc = 0x395450u;
label_395450:
    // 0x395450: 0x50a00033  beql        $a1, $zero, . + 4 + (0x33 << 2)
    ctx->pc = 0x395450u;
    {
        const bool branch_taken_0x395450 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x395450) {
            ctx->pc = 0x395454u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x395450u;
            // 0x395454: 0x95427ffa  lhu         $v0, 0x7FFA($t2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 32762)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x395520u;
            goto label_395520;
        }
    }
    ctx->pc = 0x395458u;
label_395458:
    // 0x395458: 0x95427ffa  lhu         $v0, 0x7FFA($t2)
    ctx->pc = 0x395458u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 32762)));
    // 0x39545c: 0xa7a20000  sh          $v0, 0x0($sp)
    ctx->pc = 0x39545cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x395460: 0x95437ffe  lhu         $v1, 0x7FFE($t2)
    ctx->pc = 0x395460u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 32766)));
    // 0x395464: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x395464u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x395468: 0x12400028  beqz        $s2, . + 4 + (0x28 << 2)
    ctx->pc = 0x395468u;
    {
        const bool branch_taken_0x395468 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x39546Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395468u;
        // 0x39546c: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395468) {
            ctx->pc = 0x39550Cu;
            goto label_39550c;
        }
    }
    ctx->pc = 0x395470u;
    // 0x395470: 0x8fa6000c  lw          $a2, 0xC($sp)
    ctx->pc = 0x395470u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x395474: 0x26028000  addiu       $v0, $s0, -0x8000
    ctx->pc = 0x395474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294934528));
    // 0x395478: 0x94477ffe  lhu         $a3, 0x7FFE($v0)
    ctx->pc = 0x395478u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 32766)));
    // 0x39547c: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x39547cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x395480: 0x8cc30018  lw          $v1, 0x18($a2)
    ctx->pc = 0x395480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x395484: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x395484u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x395488: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x395488u;
    {
        const bool branch_taken_0x395488 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x39548Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395488u;
        // 0x39548c: 0x97a90000  lhu         $t1, 0x0($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395488) {
            ctx->pc = 0x3954C0u;
            goto label_3954c0;
        }
    }
    ctx->pc = 0x395490u;
    // 0x395490: 0x94c20028  lhu         $v0, 0x28($a2)
    ctx->pc = 0x395490u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 40)));
    // 0x395494: 0x10e2000a  beq         $a3, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x395494u;
    {
        const bool branch_taken_0x395494 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x395498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395494u;
        // 0x395498: 0x24c40028  addiu       $a0, $a2, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395494) {
            ctx->pc = 0x3954C0u;
            goto label_3954c0;
        }
    }
    ctx->pc = 0x39549Cu;
    // 0x39549c: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x39549cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3954a0: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x3954a0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3954a4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3954a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_3954a8:
    // 0x3954a8: 0xa8102b  sltu        $v0, $a1, $t0
    ctx->pc = 0x3954a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x3954ac: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3954ACu;
    {
        const bool branch_taken_0x3954ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3954B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3954ACu;
        // 0x3954b0: 0x24630002  addiu       $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3954ac) {
            ctx->pc = 0x3954C0u;
            goto label_3954c0;
        }
    }
    ctx->pc = 0x3954B4u;
    // 0x3954b4: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x3954b4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3954b8: 0x54e2fffb  bnel        $a3, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3954B8u;
    {
        const bool branch_taken_0x3954b8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x3954b8) {
            ctx->pc = 0x3954BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3954B8u;
            // 0x3954bc: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3954A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3954a8;
        }
    }
    ctx->pc = 0x3954C0u;
label_3954c0:
    // 0x3954c0: 0x8cc40018  lw          $a0, 0x18($a2)
    ctx->pc = 0x3954c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x3954c4: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x3954c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3954c8: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x3954c8u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x3954cc: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3954CCu;
    {
        const bool branch_taken_0x3954cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3954cc) {
            ctx->pc = 0x3954D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3954CCu;
            // 0x3954d0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3954D4u;
            goto label_3954d4;
        }
    }
    ctx->pc = 0x3954D4u;
label_3954d4:
    // 0x3954d4: 0x1810  mfhi        $v1
    ctx->pc = 0x3954d4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x3954d8: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x3954d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x3954dc: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x3954dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x3954e0: 0x94620028  lhu         $v0, 0x28($v1)
    ctx->pc = 0x3954e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x3954e4: 0x15220002  bne         $t1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3954E4u;
    {
        const bool branch_taken_0x3954e4 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 2));
        ctx->pc = 0x3954E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3954E4u;
        // 0x3954e8: 0x3a420002  xori        $v0, $s2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3954e4) {
            ctx->pc = 0x3954F0u;
            goto label_3954f0;
        }
    }
    ctx->pc = 0x3954ECu;
    // 0x3954ec: 0x3a420001  xori        $v0, $s2, 0x1
    ctx->pc = 0x3954ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)1);
label_3954f0:
    // 0x3954f0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x3954f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x3954f4: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x3954F4u;
    {
        const bool branch_taken_0x3954f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3954f4) {
            ctx->pc = 0x3954F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3954F4u;
            // 0x3954f8: 0x95427ffe  lhu         $v0, 0x7FFE($t2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 32766)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x395504u;
            goto label_395504;
        }
    }
    ctx->pc = 0x3954FCu;
    // 0x3954fc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3954FCu;
    {
        const bool branch_taken_0x3954fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x395500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3954FCu;
        // 0x395500: 0x3a520003  xori        $s2, $s2, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3954fc) {
            ctx->pc = 0x39550Cu;
            goto label_39550c;
        }
    }
    ctx->pc = 0x395504u;
label_395504:
    // 0x395504: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x395504u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x395508: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x395508u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
label_39550c:
    // 0x39550c: 0x97a20000  lhu         $v0, 0x0($sp)
    ctx->pc = 0x39550cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x395510: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x395510u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x395514: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x395514u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x395518: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x395518u;
    {
        const bool branch_taken_0x395518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39551Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395518u;
        // 0x39551c: 0x97a20006  lhu         $v0, 0x6($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395518) {
            ctx->pc = 0x3955E4u;
            goto label_3955e4;
        }
    }
    ctx->pc = 0x395520u;
label_395520:
    // 0x395520: 0xa7a20000  sh          $v0, 0x0($sp)
    ctx->pc = 0x395520u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x395524: 0x95437ffe  lhu         $v1, 0x7FFE($t2)
    ctx->pc = 0x395524u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 32766)));
    // 0x395528: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x395528u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x39552c: 0x12400029  beqz        $s2, . + 4 + (0x29 << 2)
    ctx->pc = 0x39552Cu;
    {
        const bool branch_taken_0x39552c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x395530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39552Cu;
        // 0x395530: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39552c) {
            ctx->pc = 0x3955D4u;
            goto label_3955d4;
        }
    }
    ctx->pc = 0x395534u;
    // 0x395534: 0x8fa6000c  lw          $a2, 0xC($sp)
    ctx->pc = 0x395534u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x395538: 0x26028000  addiu       $v0, $s0, -0x8000
    ctx->pc = 0x395538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294934528));
    // 0x39553c: 0x94477ffe  lhu         $a3, 0x7FFE($v0)
    ctx->pc = 0x39553cu;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 32766)));
    // 0x395540: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x395540u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x395544: 0x8cc30018  lw          $v1, 0x18($a2)
    ctx->pc = 0x395544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x395548: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x395548u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39554c: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x39554Cu;
    {
        const bool branch_taken_0x39554c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x395550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39554Cu;
        // 0x395550: 0x97a90006  lhu         $t1, 0x6($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39554c) {
            ctx->pc = 0x395588u;
            goto label_395588;
        }
    }
    ctx->pc = 0x395554u;
    // 0x395554: 0x94c20028  lhu         $v0, 0x28($a2)
    ctx->pc = 0x395554u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 40)));
    // 0x395558: 0x10e2000b  beq         $a3, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x395558u;
    {
        const bool branch_taken_0x395558 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x39555Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395558u;
        // 0x39555c: 0x24c40028  addiu       $a0, $a2, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395558) {
            ctx->pc = 0x395588u;
            goto label_395588;
        }
    }
    ctx->pc = 0x395560u;
    // 0x395560: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x395560u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x395564: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x395564u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x395568: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x395568u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x39556c: 0x0  nop
    ctx->pc = 0x39556cu;
    // NOP
label_395570:
    // 0x395570: 0xa8102b  sltu        $v0, $a1, $t0
    ctx->pc = 0x395570u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x395574: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x395574u;
    {
        const bool branch_taken_0x395574 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x395578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395574u;
        // 0x395578: 0x24630002  addiu       $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395574) {
            ctx->pc = 0x395588u;
            goto label_395588;
        }
    }
    ctx->pc = 0x39557Cu;
    // 0x39557c: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x39557cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x395580: 0x54e2fffb  bnel        $a3, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x395580u;
    {
        const bool branch_taken_0x395580 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x395580) {
            ctx->pc = 0x395584u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x395580u;
            // 0x395584: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x395570u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_395570;
        }
    }
    ctx->pc = 0x395588u;
label_395588:
    // 0x395588: 0x8cc40018  lw          $a0, 0x18($a2)
    ctx->pc = 0x395588u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x39558c: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x39558cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x395590: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x395590u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x395594: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x395594u;
    {
        const bool branch_taken_0x395594 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x395594) {
            ctx->pc = 0x395598u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x395594u;
            // 0x395598: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x39559Cu;
            goto label_39559c;
        }
    }
    ctx->pc = 0x39559Cu;
label_39559c:
    // 0x39559c: 0x1810  mfhi        $v1
    ctx->pc = 0x39559cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x3955a0: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x3955a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x3955a4: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x3955a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x3955a8: 0x94620028  lhu         $v0, 0x28($v1)
    ctx->pc = 0x3955a8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x3955ac: 0x15220002  bne         $t1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3955ACu;
    {
        const bool branch_taken_0x3955ac = (GPR_U64(ctx, 9) != GPR_U64(ctx, 2));
        ctx->pc = 0x3955B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3955ACu;
        // 0x3955b0: 0x3a420002  xori        $v0, $s2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3955ac) {
            ctx->pc = 0x3955B8u;
            goto label_3955b8;
        }
    }
    ctx->pc = 0x3955B4u;
    // 0x3955b4: 0x3a420001  xori        $v0, $s2, 0x1
    ctx->pc = 0x3955b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)1);
label_3955b8:
    // 0x3955b8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x3955b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x3955bc: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x3955BCu;
    {
        const bool branch_taken_0x3955bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3955bc) {
            ctx->pc = 0x3955C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3955BCu;
            // 0x3955c0: 0x95427ffe  lhu         $v0, 0x7FFE($t2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 32766)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3955CCu;
            goto label_3955cc;
        }
    }
    ctx->pc = 0x3955C4u;
    // 0x3955c4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3955C4u;
    {
        const bool branch_taken_0x3955c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3955C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3955C4u;
        // 0x3955c8: 0x3a520003  xori        $s2, $s2, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3955c4) {
            ctx->pc = 0x3955D4u;
            goto label_3955d4;
        }
    }
    ctx->pc = 0x3955CCu;
label_3955cc:
    // 0x3955cc: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x3955ccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x3955d0: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x3955d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
label_3955d4:
    // 0x3955d4: 0x97a20006  lhu         $v0, 0x6($sp)
    ctx->pc = 0x3955d4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 6)));
    // 0x3955d8: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x3955d8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x3955dc: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x3955dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x3955e0: 0x97a20000  lhu         $v0, 0x0($sp)
    ctx->pc = 0x3955e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
label_3955e4:
    // 0x3955e4: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x3955e4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x3955e8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x3955e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3955ec: 0x1440fdb6  bnez        $v0, . + 4 + (-0x24A << 2)
    ctx->pc = 0x3955ECu;
    {
        const bool branch_taken_0x3955ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3955F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3955ECu;
        // 0x3955f0: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3955ec) {
            ctx->pc = 0x394CC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_394cc8;
        }
    }
    ctx->pc = 0x3955F4u;
label_3955f4:
    // 0x3955f4: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x3955f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3955f8: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x3955f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x3955fc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x3955fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x395600: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x395600u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x395604: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x395604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x395608: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x395608u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x39560c: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x39560cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x395610: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x395610u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
    // 0x395614: 0x8ed30004  lw          $s3, 0x4($s6)
    ctx->pc = 0x395614u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x395618: 0x12750035  beq         $s3, $s5, . + 4 + (0x35 << 2)
    ctx->pc = 0x395618u;
    {
        const bool branch_taken_0x395618 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 21));
        ctx->pc = 0x39561Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395618u;
        // 0x39561c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395618) {
            ctx->pc = 0x3956F0u;
            goto label_3956f0;
        }
    }
    ctx->pc = 0x395620u;
    // 0x395620: 0x26118000  addiu       $s1, $s0, -0x8000
    ctx->pc = 0x395620u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4294934528));
    // 0x395624: 0x0  nop
    ctx->pc = 0x395624u;
    // NOP
label_395628:
    // 0x395628: 0x27a5000c  addiu       $a1, $sp, 0xC
    ctx->pc = 0x395628u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x39562c: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x39562cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x395630: 0x27a70014  addiu       $a3, $sp, 0x14
    ctx->pc = 0x395630u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x395634: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x395634u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x395638: 0x27a90002  addiu       $t1, $sp, 0x2
    ctx->pc = 0x395638u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 2));
    // 0x39563c: 0xc0e519e  jal         func_394678
    ctx->pc = 0x39563Cu;
    SET_GPR_U32(ctx, 31, 0x395644u);
    ctx->pc = 0x395640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39563Cu;
    // 0x395640: 0x27aa0004  addiu       $t2, $sp, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x394678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x394678u, 0x39563Cu, 0x395644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x395644u;
label_395644:
    // 0x395644: 0x97a30000  lhu         $v1, 0x0($sp)
    ctx->pc = 0x395644u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x395648: 0x96227ffe  lhu         $v0, 0x7FFE($s1)
    ctx->pc = 0x395648u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 32766)));
    // 0x39564c: 0x54620026  bnel        $v1, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x39564Cu;
    {
        const bool branch_taken_0x39564c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x39564c) {
            ctx->pc = 0x395650u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39564Cu;
            // 0x395650: 0x8e730000  lw          $s3, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3956E8u;
            goto label_3956e8;
        }
    }
    ctx->pc = 0x395654u;
    // 0x395654: 0x12400021  beqz        $s2, . + 4 + (0x21 << 2)
    ctx->pc = 0x395654u;
    {
        const bool branch_taken_0x395654 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x395658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395654u;
        // 0x395658: 0x8fa6000c  lw          $a2, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395654) {
            ctx->pc = 0x3956DCu;
            goto label_3956dc;
        }
    }
    ctx->pc = 0x39565Cu;
    // 0x39565c: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x39565cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x395660: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x395660u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x395664: 0x8cc30018  lw          $v1, 0x18($a2)
    ctx->pc = 0x395664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x395668: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x395668u;
    {
        const bool branch_taken_0x395668 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x39566Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395668u;
        // 0x39566c: 0x97a90002  lhu         $t1, 0x2($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395668) {
            ctx->pc = 0x3956A0u;
            goto label_3956a0;
        }
    }
    ctx->pc = 0x395670u;
    // 0x395670: 0x94c20028  lhu         $v0, 0x28($a2)
    ctx->pc = 0x395670u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 40)));
    // 0x395674: 0x10e2000a  beq         $a3, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x395674u;
    {
        const bool branch_taken_0x395674 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x395678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395674u;
        // 0x395678: 0x24c40028  addiu       $a0, $a2, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395674) {
            ctx->pc = 0x3956A0u;
            goto label_3956a0;
        }
    }
    ctx->pc = 0x39567Cu;
    // 0x39567c: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x39567cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x395680: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x395680u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x395684: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x395684u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_395688:
    // 0x395688: 0xa8102b  sltu        $v0, $a1, $t0
    ctx->pc = 0x395688u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x39568c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x39568Cu;
    {
        const bool branch_taken_0x39568c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x395690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39568Cu;
        // 0x395690: 0x24630002  addiu       $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39568c) {
            ctx->pc = 0x3956A0u;
            goto label_3956a0;
        }
    }
    ctx->pc = 0x395694u;
    // 0x395694: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x395694u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x395698: 0x54e2fffb  bnel        $a3, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x395698u;
    {
        const bool branch_taken_0x395698 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x395698) {
            ctx->pc = 0x39569Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x395698u;
            // 0x39569c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x395688u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_395688;
        }
    }
    ctx->pc = 0x3956A0u;
label_3956a0:
    // 0x3956a0: 0x8cc40018  lw          $a0, 0x18($a2)
    ctx->pc = 0x3956a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x3956a4: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x3956a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3956a8: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x3956a8u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x3956ac: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3956ACu;
    {
        const bool branch_taken_0x3956ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3956ac) {
            ctx->pc = 0x3956B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3956ACu;
            // 0x3956b0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3956B4u;
            goto label_3956b4;
        }
    }
    ctx->pc = 0x3956B4u;
label_3956b4:
    // 0x3956b4: 0x1810  mfhi        $v1
    ctx->pc = 0x3956b4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x3956b8: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x3956b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x3956bc: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x3956bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x3956c0: 0x94620028  lhu         $v0, 0x28($v1)
    ctx->pc = 0x3956c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x3956c4: 0x15220002  bne         $t1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3956C4u;
    {
        const bool branch_taken_0x3956c4 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 2));
        ctx->pc = 0x3956C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3956C4u;
        // 0x3956c8: 0x3a420002  xori        $v0, $s2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3956c4) {
            ctx->pc = 0x3956D0u;
            goto label_3956d0;
        }
    }
    ctx->pc = 0x3956CCu;
    // 0x3956cc: 0x3a420001  xori        $v0, $s2, 0x1
    ctx->pc = 0x3956ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)1);
label_3956d0:
    // 0x3956d0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x3956d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x3956d4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3956D4u;
    {
        const bool branch_taken_0x3956d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3956d4) {
            ctx->pc = 0x3956D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3956D4u;
            // 0x3956d8: 0x8e730000  lw          $s3, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3956E8u;
            goto label_3956e8;
        }
    }
    ctx->pc = 0x3956DCu;
label_3956dc:
    // 0x3956dc: 0x3a420003  xori        $v0, $s2, 0x3
    ctx->pc = 0x3956dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)3);
    // 0x3956e0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3956E0u;
    {
        const bool branch_taken_0x3956e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3956E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3956E0u;
        // 0x3956e4: 0x52900b  movn        $s2, $v0, $s2 (Delay Slot)
        if (GPR_U64(ctx, 18) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3956e0) {
            ctx->pc = 0x3956F0u;
            goto label_3956f0;
        }
    }
    ctx->pc = 0x3956E8u;
label_3956e8:
    // 0x3956e8: 0x1675ffcf  bne         $s3, $s5, . + 4 + (-0x31 << 2)
    ctx->pc = 0x3956E8u;
    {
        const bool branch_taken_0x3956e8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 21));
        ctx->pc = 0x3956ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3956E8u;
        // 0x3956ec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3956e8) {
            ctx->pc = 0x395628u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_395628;
        }
    }
    ctx->pc = 0x3956F0u;
label_3956f0:
    // 0x3956f0: 0x12400014  beqz        $s2, . + 4 + (0x14 << 2)
    ctx->pc = 0x3956F0u;
    {
        const bool branch_taken_0x3956f0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x3956f0) {
            ctx->pc = 0x395744u;
            goto label_395744;
        }
    }
    ctx->pc = 0x3956F8u;
    // 0x3956f8: 0x1675007a  bne         $s3, $s5, . + 4 + (0x7A << 2)
    ctx->pc = 0x3956F8u;
    {
        const bool branch_taken_0x3956f8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 21));
        if (branch_taken_0x3956f8) {
            ctx->pc = 0x3958E4u;
            goto label_3958e4;
        }
    }
    ctx->pc = 0x395700u;
    // 0x395700: 0x8ed30004  lw          $s3, 0x4($s6)
    ctx->pc = 0x395700u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x395704: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x395704u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_395708:
    // 0x395708: 0x12750010  beq         $s3, $s5, . + 4 + (0x10 << 2)
    ctx->pc = 0x395708u;
    {
        const bool branch_taken_0x395708 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 21));
        ctx->pc = 0x39570Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395708u;
        // 0x39570c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395708) {
            ctx->pc = 0x39574Cu;
            goto label_39574c;
        }
    }
    ctx->pc = 0x395710u;
    // 0x395710: 0x27a5000c  addiu       $a1, $sp, 0xC
    ctx->pc = 0x395710u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x395714: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x395714u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x395718: 0x27a70014  addiu       $a3, $sp, 0x14
    ctx->pc = 0x395718u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x39571c: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x39571cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x395720: 0x27a90002  addiu       $t1, $sp, 0x2
    ctx->pc = 0x395720u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 2));
    // 0x395724: 0xc0e519e  jal         func_394678
    ctx->pc = 0x395724u;
    SET_GPR_U32(ctx, 31, 0x39572Cu);
    ctx->pc = 0x395728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x395724u;
    // 0x395728: 0x27aa0004  addiu       $t2, $sp, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x394678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x394678u, 0x395724u, 0x39572Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39572Cu;
label_39572c:
    // 0x39572c: 0x97a30000  lhu         $v1, 0x0($sp)
    ctx->pc = 0x39572cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x395730: 0x9622fffe  lhu         $v0, -0x2($s1)
    ctx->pc = 0x395730u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4294967294)));
    // 0x395734: 0x5462fff4  bnel        $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x395734u;
    {
        const bool branch_taken_0x395734 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x395734) {
            ctx->pc = 0x395738u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x395734u;
            // 0x395738: 0x8e730000  lw          $s3, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x395708u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_395708;
        }
    }
    ctx->pc = 0x39573Cu;
    // 0x39573c: 0xa6230000  sh          $v1, 0x0($s1)
    ctx->pc = 0x39573cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x395740: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x395740u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
label_395744:
    // 0x395744: 0x16750067  bne         $s3, $s5, . + 4 + (0x67 << 2)
    ctx->pc = 0x395744u;
    {
        const bool branch_taken_0x395744 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 21));
        if (branch_taken_0x395744) {
            ctx->pc = 0x3958E4u;
            goto label_3958e4;
        }
    }
    ctx->pc = 0x39574Cu;
label_39574c:
    // 0x39574c: 0x8ed30004  lw          $s3, 0x4($s6)
    ctx->pc = 0x39574cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x395750: 0x12750064  beq         $s3, $s5, . + 4 + (0x64 << 2)
    ctx->pc = 0x395750u;
    {
        const bool branch_taken_0x395750 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 21));
        ctx->pc = 0x395754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395750u;
        // 0x395754: 0x27aa0004  addiu       $t2, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395750) {
            ctx->pc = 0x3958E4u;
            goto label_3958e4;
        }
    }
    ctx->pc = 0x395758u;
    // 0x395758: 0x26148000  addiu       $s4, $s0, -0x8000
    ctx->pc = 0x395758u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 4294934528));
    // 0x39575c: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x39575cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_395760:
    // 0x395760: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x395760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x395764: 0x27a5000c  addiu       $a1, $sp, 0xC
    ctx->pc = 0x395764u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x395768: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x395768u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x39576c: 0x27a70014  addiu       $a3, $sp, 0x14
    ctx->pc = 0x39576cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x395770: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x395770u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x395774: 0xc0e519e  jal         func_394678
    ctx->pc = 0x395774u;
    SET_GPR_U32(ctx, 31, 0x39577Cu);
    ctx->pc = 0x395778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x395774u;
    // 0x395778: 0x27a90002  addiu       $t1, $sp, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x394678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x394678u, 0x395774u, 0x39577Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39577Cu;
label_39577c:
    // 0x39577c: 0x97a30000  lhu         $v1, 0x0($sp)
    ctx->pc = 0x39577cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x395780: 0x9622fffc  lhu         $v0, -0x4($s1)
    ctx->pc = 0x395780u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4294967292)));
    // 0x395784: 0x14620029  bne         $v1, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x395784u;
    {
        const bool branch_taken_0x395784 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x395788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395784u;
        // 0x395788: 0x280502d  daddu       $t2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395784) {
            ctx->pc = 0x39582Cu;
            goto label_39582c;
        }
    }
    ctx->pc = 0x39578Cu;
    // 0x39578c: 0x12400023  beqz        $s2, . + 4 + (0x23 << 2)
    ctx->pc = 0x39578Cu;
    {
        const bool branch_taken_0x39578c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x395790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39578Cu;
        // 0x395790: 0x8fa6000c  lw          $a2, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39578c) {
            ctx->pc = 0x39581Cu;
            goto label_39581c;
        }
    }
    ctx->pc = 0x395794u;
    // 0x395794: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x395794u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x395798: 0x3a490003  xori        $t1, $s2, 0x3
    ctx->pc = 0x395798u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)3);
    // 0x39579c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x39579cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3957a0: 0x8cc30018  lw          $v1, 0x18($a2)
    ctx->pc = 0x3957a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x3957a4: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x3957A4u;
    {
        const bool branch_taken_0x3957a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3957A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3957A4u;
        // 0x3957a8: 0x97ab0002  lhu         $t3, 0x2($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3957a4) {
            ctx->pc = 0x3957E0u;
            goto label_3957e0;
        }
    }
    ctx->pc = 0x3957ACu;
    // 0x3957ac: 0x94c20028  lhu         $v0, 0x28($a2)
    ctx->pc = 0x3957acu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 40)));
    // 0x3957b0: 0x10e2000b  beq         $a3, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3957B0u;
    {
        const bool branch_taken_0x3957b0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x3957B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3957B0u;
        // 0x3957b4: 0x24c40028  addiu       $a0, $a2, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3957b0) {
            ctx->pc = 0x3957E0u;
            goto label_3957e0;
        }
    }
    ctx->pc = 0x3957B8u;
    // 0x3957b8: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x3957b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3957bc: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x3957bcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3957c0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3957c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3957c4: 0x0  nop
    ctx->pc = 0x3957c4u;
    // NOP
label_3957c8:
    // 0x3957c8: 0xa8102b  sltu        $v0, $a1, $t0
    ctx->pc = 0x3957c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x3957cc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3957CCu;
    {
        const bool branch_taken_0x3957cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3957D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3957CCu;
        // 0x3957d0: 0x24630002  addiu       $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3957cc) {
            ctx->pc = 0x3957E0u;
            goto label_3957e0;
        }
    }
    ctx->pc = 0x3957D4u;
    // 0x3957d4: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x3957d4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3957d8: 0x54e2fffb  bnel        $a3, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3957D8u;
    {
        const bool branch_taken_0x3957d8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x3957d8) {
            ctx->pc = 0x3957DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3957D8u;
            // 0x3957dc: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3957C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3957c8;
        }
    }
    ctx->pc = 0x3957E0u;
label_3957e0:
    // 0x3957e0: 0x8cc40018  lw          $a0, 0x18($a2)
    ctx->pc = 0x3957e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x3957e4: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x3957e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3957e8: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x3957e8u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x3957ec: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3957ECu;
    {
        const bool branch_taken_0x3957ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3957ec) {
            ctx->pc = 0x3957F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3957ECu;
            // 0x3957f0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3957F4u;
            goto label_3957f4;
        }
    }
    ctx->pc = 0x3957F4u;
label_3957f4:
    // 0x3957f4: 0x1810  mfhi        $v1
    ctx->pc = 0x3957f4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x3957f8: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x3957f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x3957fc: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x3957fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x395800: 0x94620028  lhu         $v0, 0x28($v1)
    ctx->pc = 0x395800u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x395804: 0x15620002  bne         $t3, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x395804u;
    {
        const bool branch_taken_0x395804 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 2));
        ctx->pc = 0x395808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395804u;
        // 0x395808: 0x39220002  xori        $v0, $t1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x395804) {
            ctx->pc = 0x395810u;
            goto label_395810;
        }
    }
    ctx->pc = 0x39580Cu;
    // 0x39580c: 0x39220001  xori        $v0, $t1, 0x1
    ctx->pc = 0x39580cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) ^ (uint64_t)(uint16_t)1);
label_395810:
    // 0x395810: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x395810u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x395814: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x395814u;
    {
        const bool branch_taken_0x395814 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x395818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395814u;
        // 0x395818: 0x97a20002  lhu         $v0, 0x2($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395814) {
            ctx->pc = 0x395830u;
            goto label_395830;
        }
    }
    ctx->pc = 0x39581Cu;
label_39581c:
    // 0x39581c: 0x97a20000  lhu         $v0, 0x0($sp)
    ctx->pc = 0x39581cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x395820: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x395820u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x395824: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x395824u;
    {
        const bool branch_taken_0x395824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x395828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395824u;
        // 0x395828: 0xa6220000  sh          $v0, 0x0($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395824) {
            ctx->pc = 0x3958E4u;
            goto label_3958e4;
        }
    }
    ctx->pc = 0x39582Cu;
label_39582c:
    // 0x39582c: 0x97a20002  lhu         $v0, 0x2($sp)
    ctx->pc = 0x39582cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 2)));
label_395830:
    // 0x395830: 0x95437ffe  lhu         $v1, 0x7FFE($t2)
    ctx->pc = 0x395830u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 32766)));
    // 0x395834: 0x14430028  bne         $v0, $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x395834u;
    {
        const bool branch_taken_0x395834 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x395838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395834u;
        // 0x395838: 0x40582d  daddu       $t3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395834) {
            ctx->pc = 0x3958D8u;
            goto label_3958d8;
        }
    }
    ctx->pc = 0x39583Cu;
    // 0x39583c: 0x12400023  beqz        $s2, . + 4 + (0x23 << 2)
    ctx->pc = 0x39583Cu;
    {
        const bool branch_taken_0x39583c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x395840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39583Cu;
        // 0x395840: 0x8fa6000c  lw          $a2, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39583c) {
            ctx->pc = 0x3958CCu;
            goto label_3958cc;
        }
    }
    ctx->pc = 0x395844u;
    // 0x395844: 0x3a490003  xori        $t1, $s2, 0x3
    ctx->pc = 0x395844u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)3);
    // 0x395848: 0x97a70000  lhu         $a3, 0x0($sp)
    ctx->pc = 0x395848u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39584c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x39584cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x395850: 0x8cc30018  lw          $v1, 0x18($a2)
    ctx->pc = 0x395850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x395854: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x395854u;
    {
        const bool branch_taken_0x395854 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x395858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395854u;
        // 0x395858: 0x304affff  andi        $t2, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x395854) {
            ctx->pc = 0x395890u;
            goto label_395890;
        }
    }
    ctx->pc = 0x39585Cu;
    // 0x39585c: 0x94c20028  lhu         $v0, 0x28($a2)
    ctx->pc = 0x39585cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 40)));
    // 0x395860: 0x10e2000b  beq         $a3, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x395860u;
    {
        const bool branch_taken_0x395860 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x395864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395860u;
        // 0x395864: 0x24c40028  addiu       $a0, $a2, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395860) {
            ctx->pc = 0x395890u;
            goto label_395890;
        }
    }
    ctx->pc = 0x395868u;
    // 0x395868: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x395868u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39586c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x39586cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x395870: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x395870u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x395874: 0x0  nop
    ctx->pc = 0x395874u;
    // NOP
label_395878:
    // 0x395878: 0xa8102b  sltu        $v0, $a1, $t0
    ctx->pc = 0x395878u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x39587c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x39587Cu;
    {
        const bool branch_taken_0x39587c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x395880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39587Cu;
        // 0x395880: 0x24630002  addiu       $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39587c) {
            ctx->pc = 0x395890u;
            goto label_395890;
        }
    }
    ctx->pc = 0x395884u;
    // 0x395884: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x395884u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x395888: 0x54e2fffb  bnel        $a3, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x395888u;
    {
        const bool branch_taken_0x395888 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x395888) {
            ctx->pc = 0x39588Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x395888u;
            // 0x39588c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x395878u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_395878;
        }
    }
    ctx->pc = 0x395890u;
label_395890:
    // 0x395890: 0x8cc40018  lw          $a0, 0x18($a2)
    ctx->pc = 0x395890u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x395894: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x395894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x395898: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x395898u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x39589c: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x39589Cu;
    {
        const bool branch_taken_0x39589c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x39589c) {
            ctx->pc = 0x3958A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39589Cu;
            // 0x3958a0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3958A4u;
            goto label_3958a4;
        }
    }
    ctx->pc = 0x3958A4u;
label_3958a4:
    // 0x3958a4: 0x1810  mfhi        $v1
    ctx->pc = 0x3958a4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x3958a8: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x3958a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x3958ac: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x3958acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x3958b0: 0x94620028  lhu         $v0, 0x28($v1)
    ctx->pc = 0x3958b0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x3958b4: 0x15420002  bne         $t2, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3958B4u;
    {
        const bool branch_taken_0x3958b4 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 2));
        ctx->pc = 0x3958B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3958B4u;
        // 0x3958b8: 0x39220002  xori        $v0, $t1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3958b4) {
            ctx->pc = 0x3958C0u;
            goto label_3958c0;
        }
    }
    ctx->pc = 0x3958BCu;
    // 0x3958bc: 0x39220001  xori        $v0, $t1, 0x1
    ctx->pc = 0x3958bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) ^ (uint64_t)(uint16_t)1);
label_3958c0:
    // 0x3958c0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x3958c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x3958c4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3958C4u;
    {
        const bool branch_taken_0x3958c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3958c4) {
            ctx->pc = 0x3958C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3958C4u;
            // 0x3958c8: 0x8e730000  lw          $s3, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3958DCu;
            goto label_3958dc;
        }
    }
    ctx->pc = 0x3958CCu;
label_3958cc:
    // 0x3958cc: 0xa62b0000  sh          $t3, 0x0($s1)
    ctx->pc = 0x3958ccu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 11));
    // 0x3958d0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3958D0u;
    {
        const bool branch_taken_0x3958d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3958D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3958D0u;
        // 0x3958d4: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3958d0) {
            ctx->pc = 0x3958E4u;
            goto label_3958e4;
        }
    }
    ctx->pc = 0x3958D8u;
label_3958d8:
    // 0x3958d8: 0x8e730000  lw          $s3, 0x0($s3)
    ctx->pc = 0x3958d8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3958dc:
    // 0x3958dc: 0x1675ffa0  bne         $s3, $s5, . + 4 + (-0x60 << 2)
    ctx->pc = 0x3958DCu;
    {
        const bool branch_taken_0x3958dc = (GPR_U64(ctx, 19) != GPR_U64(ctx, 21));
        ctx->pc = 0x3958E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3958DCu;
        // 0x3958e0: 0x27aa0004  addiu       $t2, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3958dc) {
            ctx->pc = 0x395760u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_395760;
        }
    }
    ctx->pc = 0x3958E4u;
label_3958e4:
    // 0x3958e4: 0x1240fc9a  beqz        $s2, . + 4 + (-0x366 << 2)
    ctx->pc = 0x3958E4u;
    {
        const bool branch_taken_0x3958e4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x3958e4) {
            ctx->pc = 0x394B50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_394b50;
        }
    }
    ctx->pc = 0x3958ECu;
    // 0x3958ec: 0x1675fceb  bne         $s3, $s5, . + 4 + (-0x315 << 2)
    ctx->pc = 0x3958ECu;
    {
        const bool branch_taken_0x3958ec = (GPR_U64(ctx, 19) != GPR_U64(ctx, 21));
        ctx->pc = 0x3958F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3958ECu;
        // 0x3958f0: 0x97a20000  lhu         $v0, 0x0($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3958ec) {
            ctx->pc = 0x394C9Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_394c9c;
        }
    }
    ctx->pc = 0x3958F4u;
    // 0x3958f4: 0x8ed30004  lw          $s3, 0x4($s6)
    ctx->pc = 0x3958f4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x3958f8: 0x26148000  addiu       $s4, $s0, -0x8000
    ctx->pc = 0x3958f8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 4294934528));
    // 0x3958fc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3958FCu;
    {
        const bool branch_taken_0x3958fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x395900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3958FCu;
        // 0x395900: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3958fc) {
            ctx->pc = 0x395918u;
            goto label_395918;
        }
    }
    ctx->pc = 0x395904u;
    // 0x395904: 0x0  nop
    ctx->pc = 0x395904u;
    // NOP
label_395908:
    // 0x395908: 0x96827ffe  lhu         $v0, 0x7FFE($s4)
    ctx->pc = 0x395908u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 32766)));
    // 0x39590c: 0x50620015  beql        $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x39590Cu;
    {
        const bool branch_taken_0x39590c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x39590c) {
            ctx->pc = 0x395910u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39590Cu;
            // 0x395910: 0xa6030000  sh          $v1, 0x0($s0) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x395964u;
            goto label_395964;
        }
    }
    ctx->pc = 0x395914u;
    // 0x395914: 0x8e730000  lw          $s3, 0x0($s3)
    ctx->pc = 0x395914u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_395918:
    // 0x395918: 0x1275fc8f  beq         $s3, $s5, . + 4 + (-0x371 << 2)
    ctx->pc = 0x395918u;
    {
        const bool branch_taken_0x395918 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 21));
        ctx->pc = 0x39591Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395918u;
        // 0x39591c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395918) {
            ctx->pc = 0x394B58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_394b58;
        }
    }
    ctx->pc = 0x395920u;
    // 0x395920: 0x27a5000c  addiu       $a1, $sp, 0xC
    ctx->pc = 0x395920u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x395924: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x395924u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x395928: 0x27a70014  addiu       $a3, $sp, 0x14
    ctx->pc = 0x395928u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x39592c: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x39592cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x395930: 0x27a90002  addiu       $t1, $sp, 0x2
    ctx->pc = 0x395930u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 2));
    // 0x395934: 0xc0e519e  jal         func_394678
    ctx->pc = 0x395934u;
    SET_GPR_U32(ctx, 31, 0x39593Cu);
    ctx->pc = 0x395938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x395934u;
    // 0x395938: 0x27aa0004  addiu       $t2, $sp, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x394678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x394678u, 0x395934u, 0x39593Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39593Cu;
label_39593c:
    // 0x39593c: 0x97a30000  lhu         $v1, 0x0($sp)
    ctx->pc = 0x39593cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x395940: 0x9622fffc  lhu         $v0, -0x4($s1)
    ctx->pc = 0x395940u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4294967292)));
    // 0x395944: 0x5462fff0  bnel        $v1, $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x395944u;
    {
        const bool branch_taken_0x395944 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x395944) {
            ctx->pc = 0x395948u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x395944u;
            // 0x395948: 0x97a30002  lhu         $v1, 0x2($sp) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x395908u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_395908;
        }
    }
    ctx->pc = 0x39594Cu;
    // 0x39594c: 0xa6230000  sh          $v1, 0x0($s1)
    ctx->pc = 0x39594cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x395950: 0x3a520003  xori        $s2, $s2, 0x3
    ctx->pc = 0x395950u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)3);
    // 0x395954: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x395954u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x395958: 0x97a20000  lhu         $v0, 0x0($sp)
    ctx->pc = 0x395958u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39595c: 0x1000fc7c  b           . + 4 + (-0x384 << 2)
    ctx->pc = 0x39595Cu;
    {
        const bool branch_taken_0x39595c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x395960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39595Cu;
        // 0x395960: 0xa6220002  sh          $v0, 0x2($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39595c) {
            ctx->pc = 0x394B50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_394b50;
        }
    }
    ctx->pc = 0x395964u;
label_395964:
    // 0x395964: 0x3a520003  xori        $s2, $s2, 0x3
    ctx->pc = 0x395964u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)3);
    // 0x395968: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x395968u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x39596c: 0x97a20002  lhu         $v0, 0x2($sp)
    ctx->pc = 0x39596cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x395970: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x395970u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x395974: 0x1000fc76  b           . + 4 + (-0x38A << 2)
    ctx->pc = 0x395974u;
    {
        const bool branch_taken_0x395974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x395978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395974u;
        // 0x395978: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395974) {
            ctx->pc = 0x394B50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_394b50;
        }
    }
    ctx->pc = 0x39597Cu;
label_39597c:
    // 0x39597c: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x39597cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x395980: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x395980u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x395984: 0x2021023  subu        $v0, $s0, $v0
    ctx->pc = 0x395984u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x395988: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x395988u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x39598c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x39598cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x395990: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x395990u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x395994: 0xaee20004  sw          $v0, 0x4($s7)
    ctx->pc = 0x395994u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4), GPR_U32(ctx, 2));
    // 0x395998: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x395998u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x39599c: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x39599cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3959a0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3959a0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3959a4: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x3959a4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3959a8: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x3959a8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3959ac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3959acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3959b0: 0x3e00008  jr          $ra
    ctx->pc = 0x3959B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3959B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3959B0u;
        // 0x3959b4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3959B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3959B8u;
}
