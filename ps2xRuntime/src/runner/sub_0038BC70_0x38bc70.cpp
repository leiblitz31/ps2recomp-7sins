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

// Function: sub_0038BC70
// Address: 0x38bc70 - 0x38c0f8
void sub_0038BC70_0x38bc70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038BC70_0x38bc70");
#endif

    switch (ctx->pc) {
        case 0x38bca4u: goto label_38bca4;
        case 0x38bcc0u: goto label_38bcc0;
        case 0x38bdb8u: goto label_38bdb8;
        case 0x38be5cu: goto label_38be5c;
        case 0x38be9cu: goto label_38be9c;
        case 0x38bed4u: goto label_38bed4;
        case 0x38bf00u: goto label_38bf00;
        case 0x38bf10u: goto label_38bf10;
        case 0x38bf40u: goto label_38bf40;
        case 0x38bf7cu: goto label_38bf7c;
        case 0x38bfb0u: goto label_38bfb0;
        case 0x38c018u: goto label_38c018;
        case 0x38c044u: goto label_38c044;
        case 0x38c074u: goto label_38c074;
        case 0x38c0a4u: goto label_38c0a4;
        case 0x38c0bcu: goto label_38c0bc;
        default: break;
    }

    ctx->pc = 0x38bc70u;

    // 0x38bc70: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x38bc70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x38bc74: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x38bc74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x38bc78: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x38bc78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x38bc7c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x38bc7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38bc80: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x38bc80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x38bc84: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x38bc84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x38bc88: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x38bc88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x38bc8c: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x38bc8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x38bc90: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x38bc90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x38bc94: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x38bc94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
    // 0x38bc98: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x38bc98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x38bc9c: 0xc0e2ea2  jal         func_38BA88
    ctx->pc = 0x38BC9Cu;
    SET_GPR_U32(ctx, 31, 0x38BCA4u);
    ctx->pc = 0x38BCA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38BC9Cu;
    // 0x38bca0: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38BA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38BA88u, 0x38BC9Cu, 0x38BCA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38BCA4u;
label_38bca4:
    // 0x38bca4: 0x3c070003  lui         $a3, 0x3
    ctx->pc = 0x38bca4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
    // 0x38bca8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x38bca8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38bcac: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x38bcacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38bcb0: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x38bcb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x38bcb4: 0x34e77002  ori         $a3, $a3, 0x7002
    ctx->pc = 0x38bcb4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)28674);
    // 0x38bcb8: 0xc103404  jal         func_40D010
    ctx->pc = 0x38BCB8u;
    SET_GPR_U32(ctx, 31, 0x38BCC0u);
    ctx->pc = 0x38BCBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38BCB8u;
    // 0x38bcbc: 0x2408002d  addiu       $t0, $zero, 0x2D (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D010u, 0x38BCB8u, 0x38BCC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38BCC0u;
label_38bcc0:
    // 0x38bcc0: 0x10400101  beqz        $v0, . + 4 + (0x101 << 2)
    ctx->pc = 0x38BCC0u;
    {
        const bool branch_taken_0x38bcc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38BCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BCC0u;
        // 0x38bcc4: 0x3c020100  lui         $v0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38bcc0) {
            ctx->pc = 0x38C0C8u;
            goto label_38c0c8;
        }
    }
    ctx->pc = 0x38BCC8u;
    // 0x38bcc8: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x38bcc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x38bccc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x38bcccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x38bcd0: 0x1440005b  bnez        $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x38BCD0u;
    {
        const bool branch_taken_0x38bcd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38BCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BCD0u;
        // 0x38bcd4: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38bcd0) {
            ctx->pc = 0x38BE40u;
            goto label_38be40;
        }
    }
    ctx->pc = 0x38BCD8u;
    // 0x38bcd8: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x38bcd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x38bcdc: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x38BCDCu;
    {
        const bool branch_taken_0x38bcdc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x38BCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BCDCu;
        // 0x38bce0: 0x30620008  andi        $v0, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38bcdc) {
            ctx->pc = 0x38BD0Cu;
            goto label_38bd0c;
        }
    }
    ctx->pc = 0x38BCE4u;
    // 0x38bce4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x38BCE4u;
    {
        const bool branch_taken_0x38bce4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38BCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BCE4u;
        // 0x38bce8: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38bce4) {
            ctx->pc = 0x38BCF0u;
            goto label_38bcf0;
        }
    }
    ctx->pc = 0x38BCECu;
    // 0x38bcec: 0x24460010  addiu       $a2, $v0, 0x10
    ctx->pc = 0x38bcecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_38bcf0:
    // 0x38bcf0: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x38bcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x38bcf4: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x38bcf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x38bcf8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x38bcf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x38bcfc: 0x822818  mult        $a1, $a0, $v0
    ctx->pc = 0x38bcfcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x38bd00: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x38bd00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x38bd04: 0xa63021  addu        $a2, $a1, $a2
    ctx->pc = 0x38bd04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x38bd08: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x38bd08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_38bd0c:
    // 0x38bd0c: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x38bd0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x38bd10: 0x1860004c  blez        $v1, . + 4 + (0x4C << 2)
    ctx->pc = 0x38BD10u;
    {
        const bool branch_taken_0x38bd10 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x38BD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BD10u;
        // 0x38bd14: 0x60502d  daddu       $t2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38bd10) {
            ctx->pc = 0x38BE44u;
            goto label_38be44;
        }
    }
    ctx->pc = 0x38BD18u;
    // 0x38bd18: 0x8e29005c  lw          $t1, 0x5C($s1)
    ctx->pc = 0x38bd18u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x38bd1c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x38bd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x38bd20: 0xa1823  negu        $v1, $t2
    ctx->pc = 0x38bd20u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 10)));
    // 0x38bd24: 0x823818  mult        $a3, $a0, $v0
    ctx->pc = 0x38bd24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x38bd28: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x38bd28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x38bd2c: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x38BD2Cu;
    {
        const bool branch_taken_0x38bd2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x38BD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BD2Cu;
        // 0x38bd30: 0x25280018  addiu       $t0, $t1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38bd2c) {
            ctx->pc = 0x38BDB4u;
            goto label_38bdb4;
        }
    }
    ctx->pc = 0x38BD34u;
    // 0x38bd34: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x38bd34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x38bd38: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x38BD38u;
    {
        const bool branch_taken_0x38bd38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38BD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BD38u;
        // 0x38bd3c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38bd38) {
            ctx->pc = 0x38BD8Cu;
            goto label_38bd8c;
        }
    }
    ctx->pc = 0x38BD40u;
    // 0x38bd40: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x38BD40u;
    {
        const bool branch_taken_0x38bd40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38BD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BD40u;
        // 0x38bd44: 0x24c60018  addiu       $a2, $a2, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38bd40) {
            ctx->pc = 0x38BD6Cu;
            goto label_38bd6c;
        }
    }
    ctx->pc = 0x38BD48u;
    // 0x38bd48: 0x8d04fffc  lw          $a0, -0x4($t0)
    ctx->pc = 0x38bd48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294967292)));
    // 0x38bd4c: 0xc71021  addu        $v0, $a2, $a3
    ctx->pc = 0x38bd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x38bd50: 0x8d250018  lw          $a1, 0x18($t1)
    ctx->pc = 0x38bd50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 24)));
    // 0x38bd54: 0x44300b  movn        $a2, $v0, $a0
    ctx->pc = 0x38bd54u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
    // 0x38bd58: 0x25280034  addiu       $t0, $t1, 0x34
    ctx->pc = 0x38bd58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), 52));
    // 0x38bd5c: 0xc71021  addu        $v0, $a2, $a3
    ctx->pc = 0x38bd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x38bd60: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x38bd60u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x38bd64: 0x45300b  movn        $a2, $v0, $a1
    ctx->pc = 0x38bd64u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
    // 0x38bd68: 0x24c60018  addiu       $a2, $a2, 0x18
    ctx->pc = 0x38bd68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 24));
label_38bd6c:
    // 0x38bd6c: 0x8d04fffc  lw          $a0, -0x4($t0)
    ctx->pc = 0x38bd6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294967292)));
    // 0x38bd70: 0xc71021  addu        $v0, $a2, $a3
    ctx->pc = 0x38bd70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x38bd74: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x38bd74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x38bd78: 0x44300b  movn        $a2, $v0, $a0
    ctx->pc = 0x38bd78u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
    // 0x38bd7c: 0x2508001c  addiu       $t0, $t0, 0x1C
    ctx->pc = 0x38bd7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 28));
    // 0x38bd80: 0xc71021  addu        $v0, $a2, $a3
    ctx->pc = 0x38bd80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x38bd84: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x38bd84u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x38bd88: 0x45300b  movn        $a2, $v0, $a1
    ctx->pc = 0x38bd88u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
label_38bd8c:
    // 0x38bd8c: 0x24c60018  addiu       $a2, $a2, 0x18
    ctx->pc = 0x38bd8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 24));
    // 0x38bd90: 0x8d04fffc  lw          $a0, -0x4($t0)
    ctx->pc = 0x38bd90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294967292)));
    // 0x38bd94: 0xc71021  addu        $v0, $a2, $a3
    ctx->pc = 0x38bd94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x38bd98: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x38bd98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x38bd9c: 0x44300b  movn        $a2, $v0, $a0
    ctx->pc = 0x38bd9cu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
    // 0x38bda0: 0x2508001c  addiu       $t0, $t0, 0x1C
    ctx->pc = 0x38bda0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 28));
    // 0x38bda4: 0xc71021  addu        $v0, $a2, $a3
    ctx->pc = 0x38bda4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x38bda8: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x38bda8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x38bdac: 0x11400025  beqz        $t2, . + 4 + (0x25 << 2)
    ctx->pc = 0x38BDACu;
    {
        const bool branch_taken_0x38bdac = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x38BDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BDACu;
        // 0x38bdb0: 0x45300b  movn        $a2, $v0, $a1 (Delay Slot)
        if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38bdac) {
            ctx->pc = 0x38BE44u;
            goto label_38be44;
        }
    }
    ctx->pc = 0x38BDB4u;
label_38bdb4:
    // 0x38bdb4: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x38bdb4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_38bdb8:
    // 0x38bdb8: 0x8d24fffc  lw          $a0, -0x4($t1)
    ctx->pc = 0x38bdb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294967292)));
    // 0x38bdbc: 0x24c60018  addiu       $a2, $a2, 0x18
    ctx->pc = 0x38bdbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 24));
    // 0x38bdc0: 0xc71021  addu        $v0, $a2, $a3
    ctx->pc = 0x38bdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x38bdc4: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x38bdc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x38bdc8: 0x44300b  movn        $a2, $v0, $a0
    ctx->pc = 0x38bdc8u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
    // 0x38bdcc: 0x254afffc  addiu       $t2, $t2, -0x4
    ctx->pc = 0x38bdccu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967292));
    // 0x38bdd0: 0xc71021  addu        $v0, $a2, $a3
    ctx->pc = 0x38bdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x38bdd4: 0x8d240018  lw          $a0, 0x18($t1)
    ctx->pc = 0x38bdd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 24)));
    // 0x38bdd8: 0x45300b  movn        $a2, $v0, $a1
    ctx->pc = 0x38bdd8u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
    // 0x38bddc: 0x24c60018  addiu       $a2, $a2, 0x18
    ctx->pc = 0x38bddcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 24));
    // 0x38bde0: 0x8d05001c  lw          $a1, 0x1C($t0)
    ctx->pc = 0x38bde0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 28)));
    // 0x38bde4: 0xc71021  addu        $v0, $a2, $a3
    ctx->pc = 0x38bde4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x38bde8: 0x44300b  movn        $a2, $v0, $a0
    ctx->pc = 0x38bde8u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
    // 0x38bdec: 0xc71821  addu        $v1, $a2, $a3
    ctx->pc = 0x38bdecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x38bdf0: 0x8d240034  lw          $a0, 0x34($t1)
    ctx->pc = 0x38bdf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 52)));
    // 0x38bdf4: 0x65300b  movn        $a2, $v1, $a1
    ctx->pc = 0x38bdf4u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    // 0x38bdf8: 0x24c60018  addiu       $a2, $a2, 0x18
    ctx->pc = 0x38bdf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 24));
    // 0x38bdfc: 0x8d050038  lw          $a1, 0x38($t0)
    ctx->pc = 0x38bdfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 56)));
    // 0x38be00: 0xc71021  addu        $v0, $a2, $a3
    ctx->pc = 0x38be00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x38be04: 0x44300b  movn        $a2, $v0, $a0
    ctx->pc = 0x38be04u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
    // 0x38be08: 0xc71821  addu        $v1, $a2, $a3
    ctx->pc = 0x38be08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x38be0c: 0x8d240050  lw          $a0, 0x50($t1)
    ctx->pc = 0x38be0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 80)));
    // 0x38be10: 0x65300b  movn        $a2, $v1, $a1
    ctx->pc = 0x38be10u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    // 0x38be14: 0x25290070  addiu       $t1, $t1, 0x70
    ctx->pc = 0x38be14u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 112));
    // 0x38be18: 0x24c60018  addiu       $a2, $a2, 0x18
    ctx->pc = 0x38be18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 24));
    // 0x38be1c: 0x8d050054  lw          $a1, 0x54($t0)
    ctx->pc = 0x38be1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 84)));
    // 0x38be20: 0xc71821  addu        $v1, $a2, $a3
    ctx->pc = 0x38be20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x38be24: 0x25080070  addiu       $t0, $t0, 0x70
    ctx->pc = 0x38be24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 112));
    // 0x38be28: 0x64300b  movn        $a2, $v1, $a0
    ctx->pc = 0x38be28u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    // 0x38be2c: 0xc71021  addu        $v0, $a2, $a3
    ctx->pc = 0x38be2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x38be30: 0x1540ffe1  bnez        $t2, . + 4 + (-0x1F << 2)
    ctx->pc = 0x38BE30u;
    {
        const bool branch_taken_0x38be30 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x38BE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BE30u;
        // 0x38be34: 0x45300b  movn        $a2, $v0, $a1 (Delay Slot)
        if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38be30) {
            ctx->pc = 0x38BDB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38bdb8;
        }
    }
    ctx->pc = 0x38BE38u;
    // 0x38be38: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x38BE38u;
    {
        const bool branch_taken_0x38be38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38BE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BE38u;
        // 0x38be3c: 0x3c070003  lui         $a3, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38be38) {
            ctx->pc = 0x38BE48u;
            goto label_38be48;
        }
    }
    ctx->pc = 0x38BE40u;
label_38be40:
    // 0x38be40: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x38be40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_38be44:
    // 0x38be44: 0x3c070003  lui         $a3, 0x3
    ctx->pc = 0x38be44u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
label_38be48:
    // 0x38be48: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x38be48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38be4c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x38be4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38be50: 0x34e77002  ori         $a3, $a3, 0x7002
    ctx->pc = 0x38be50u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)28674);
    // 0x38be54: 0xc103404  jal         func_40D010
    ctx->pc = 0x38BE54u;
    SET_GPR_U32(ctx, 31, 0x38BE5Cu);
    ctx->pc = 0x38BE58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38BE54u;
    // 0x38be58: 0x2408002d  addiu       $t0, $zero, 0x2D (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D010u, 0x38BE54u, 0x38BE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38BE5Cu;
label_38be5c:
    // 0x38be5c: 0x1040009a  beqz        $v0, . + 4 + (0x9A << 2)
    ctx->pc = 0x38BE5Cu;
    {
        const bool branch_taken_0x38be5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38BE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BE5Cu;
        // 0x38be60: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38be5c) {
            ctx->pc = 0x38C0C8u;
            goto label_38c0c8;
        }
    }
    ctx->pc = 0x38BE64u;
    // 0x38be64: 0x9222001c  lbu         $v0, 0x1C($s1)
    ctx->pc = 0x38be64u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x38be68: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x38be68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x38be6c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x38be6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38be70: 0x8e280010  lw          $t0, 0x10($s1)
    ctx->pc = 0x38be70u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x38be74: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x38be74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x38be78: 0x8e290014  lw          $t1, 0x14($s1)
    ctx->pc = 0x38be78u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x38be7c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x38be7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x38be80: 0x8e270018  lw          $a3, 0x18($s1)
    ctx->pc = 0x38be80u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x38be84: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x38be84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x38be88: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x38be88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x38be8c: 0xafa80004  sw          $t0, 0x4($sp)
    ctx->pc = 0x38be8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 8));
    // 0x38be90: 0xafa90008  sw          $t1, 0x8($sp)
    ctx->pc = 0x38be90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 9));
    // 0x38be94: 0xc10486e  jal         func_4121B8
    ctx->pc = 0x38BE94u;
    SET_GPR_U32(ctx, 31, 0x38BE9Cu);
    ctx->pc = 0x38BE98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38BE94u;
    // 0x38be98: 0xafa7000c  sw          $a3, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4121B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4121B8u, 0x38BE94u, 0x38BE9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38BE9Cu;
label_38be9c:
    // 0x38be9c: 0x1040008a  beqz        $v0, . + 4 + (0x8A << 2)
    ctx->pc = 0x38BE9Cu;
    {
        const bool branch_taken_0x38be9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38BEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BE9Cu;
        // 0x38bea0: 0x3c020100  lui         $v0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38be9c) {
            ctx->pc = 0x38C0C8u;
            goto label_38c0c8;
        }
    }
    ctx->pc = 0x38BEA4u;
    // 0x38bea4: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x38bea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x38bea8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x38bea8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x38beac: 0x54400038  bnel        $v0, $zero, . + 4 + (0x38 << 2)
    ctx->pc = 0x38BEACu;
    {
        const bool branch_taken_0x38beac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x38beac) {
            ctx->pc = 0x38BEB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38BEACu;
            // 0x38beb0: 0x8e220018  lw          $v0, 0x18($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38BF90u;
            goto label_38bf90;
        }
    }
    ctx->pc = 0x38BEB4u;
    // 0x38beb4: 0x8e260014  lw          $a2, 0x14($s1)
    ctx->pc = 0x38beb4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x38beb8: 0x10c00034  beqz        $a2, . + 4 + (0x34 << 2)
    ctx->pc = 0x38BEB8u;
    {
        const bool branch_taken_0x38beb8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x38BEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BEB8u;
        // 0x38bebc: 0x30620008  andi        $v0, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38beb8) {
            ctx->pc = 0x38BF8Cu;
            goto label_38bf8c;
        }
    }
    ctx->pc = 0x38BEC0u;
    // 0x38bec0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x38BEC0u;
    {
        const bool branch_taken_0x38bec0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38BEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BEC0u;
        // 0x38bec4: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38bec0) {
            ctx->pc = 0x38BEDCu;
            goto label_38bedc;
        }
    }
    ctx->pc = 0x38BEC8u;
    // 0x38bec8: 0x8e250030  lw          $a1, 0x30($s1)
    ctx->pc = 0x38bec8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x38becc: 0xc10486e  jal         func_4121B8
    ctx->pc = 0x38BECCu;
    SET_GPR_U32(ctx, 31, 0x38BED4u);
    ctx->pc = 0x38BED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38BECCu;
    // 0x38bed0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4121B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4121B8u, 0x38BECCu, 0x38BED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38BED4u;
label_38bed4:
    // 0x38bed4: 0x1040007d  beqz        $v0, . + 4 + (0x7D << 2)
    ctx->pc = 0x38BED4u;
    {
        const bool branch_taken_0x38bed4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38BED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BED4u;
        // 0x38bed8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38bed4) {
            ctx->pc = 0x38C0CCu;
            goto label_38c0cc;
        }
    }
    ctx->pc = 0x38BEDCu;
label_38bedc:
    // 0x38bedc: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x38bedcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x38bee0: 0x58600012  blezl       $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x38BEE0u;
    {
        const bool branch_taken_0x38bee0 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x38bee0) {
            ctx->pc = 0x38BEE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38BEE0u;
            // 0x38bee4: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38BF2Cu;
            goto label_38bf2c;
        }
    }
    ctx->pc = 0x38BEE8u;
    // 0x38bee8: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x38bee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x38beec: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x38beecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38bef0: 0x1860000d  blez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x38BEF0u;
    {
        const bool branch_taken_0x38bef0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x38BEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BEF0u;
        // 0x38bef4: 0x2a0c0  sll         $s4, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38bef0) {
            ctx->pc = 0x38BF28u;
            goto label_38bf28;
        }
    }
    ctx->pc = 0x38BEF8u;
    // 0x38bef8: 0x26300034  addiu       $s0, $s1, 0x34
    ctx->pc = 0x38bef8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 52));
    // 0x38befc: 0x0  nop
    ctx->pc = 0x38befcu;
    // NOP
label_38bf00:
    // 0x38bf00: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x38bf00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x38bf04: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x38bf04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38bf08: 0xc10341a  jal         func_40D068
    ctx->pc = 0x38BF08u;
    SET_GPR_U32(ctx, 31, 0x38BF10u);
    ctx->pc = 0x38BF0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38BF08u;
    // 0x38bf0c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D068u, 0x38BF08u, 0x38BF10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38BF10u;
label_38bf10:
    // 0x38bf10: 0x1040006d  beqz        $v0, . + 4 + (0x6D << 2)
    ctx->pc = 0x38BF10u;
    {
        const bool branch_taken_0x38bf10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38BF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BF10u;
        // 0x38bf14: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38bf10) {
            ctx->pc = 0x38C0C8u;
            goto label_38c0c8;
        }
    }
    ctx->pc = 0x38BF18u;
    // 0x38bf18: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x38bf18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x38bf1c: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x38bf1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x38bf20: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x38BF20u;
    {
        const bool branch_taken_0x38bf20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38BF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BF20u;
        // 0x38bf24: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38bf20) {
            ctx->pc = 0x38BF00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38bf00;
        }
    }
    ctx->pc = 0x38BF28u;
label_38bf28:
    // 0x38bf28: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x38bf28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_38bf2c:
    // 0x38bf2c: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x38BF2Cu;
    {
        const bool branch_taken_0x38bf2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38BF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BF2Cu;
        // 0x38bf30: 0x2452ffff  addiu       $s2, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38bf2c) {
            ctx->pc = 0x38BF8Cu;
            goto label_38bf8c;
        }
    }
    ctx->pc = 0x38BF34u;
    // 0x38bf34: 0x8e30002c  lw          $s0, 0x2C($s1)
    ctx->pc = 0x38bf34u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x38bf38: 0x27b40010  addiu       $s4, $sp, 0x10
    ctx->pc = 0x38bf38u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x38bf3c: 0x0  nop
    ctx->pc = 0x38bf3cu;
    // NOP
label_38bf40:
    // 0x38bf40: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x38bf40u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x38bf44: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x38bf44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38bf48: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x38bf48u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x38bf4c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x38bf4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38bf50: 0x96060002  lhu         $a2, 0x2($s0)
    ctx->pc = 0x38bf50u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x38bf54: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x38bf54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x38bf58: 0x96070006  lhu         $a3, 0x6($s0)
    ctx->pc = 0x38bf58u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x38bf5c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x38bf5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x38bf60: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x38bf60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x38bf64: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x38bf64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x38bf68: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x38bf68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x38bf6c: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x38bf6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x38bf70: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x38bf70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x38bf74: 0xc10486e  jal         func_4121B8
    ctx->pc = 0x38BF74u;
    SET_GPR_U32(ctx, 31, 0x38BF7Cu);
    ctx->pc = 0x38BF78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38BF74u;
    // 0x38bf78: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4121B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4121B8u, 0x38BF74u, 0x38BF7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38BF7Cu;
label_38bf7c:
    // 0x38bf7c: 0x10400052  beqz        $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x38BF7Cu;
    {
        const bool branch_taken_0x38bf7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38BF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BF7Cu;
        // 0x38bf80: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38bf7c) {
            ctx->pc = 0x38C0C8u;
            goto label_38c0c8;
        }
    }
    ctx->pc = 0x38BF84u;
    // 0x38bf84: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x38BF84u;
    {
        const bool branch_taken_0x38bf84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38BF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BF84u;
        // 0x38bf88: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38bf84) {
            ctx->pc = 0x38BF40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38bf40;
        }
    }
    ctx->pc = 0x38BF8Cu;
label_38bf8c:
    // 0x38bf8c: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x38bf8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_38bf90:
    // 0x38bf90: 0x18400041  blez        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x38BF90u;
    {
        const bool branch_taken_0x38bf90 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x38BF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BF90u;
        // 0x38bf94: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38bf90) {
            ctx->pc = 0x38C098u;
            goto label_38c098;
        }
    }
    ctx->pc = 0x38BF98u;
    // 0x38bf98: 0x3c170100  lui         $s7, 0x100
    ctx->pc = 0x38bf98u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)256 << 16));
    // 0x38bf9c: 0x2416000c  addiu       $s6, $zero, 0xC
    ctx->pc = 0x38bf9cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x38bfa0: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x38bfa0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38bfa4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x38bfa4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38bfa8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x38bfa8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38bfac: 0x0  nop
    ctx->pc = 0x38bfacu;
    // NOP
label_38bfb0:
    // 0x38bfb0: 0x8e23005c  lw          $v1, 0x5C($s1)
    ctx->pc = 0x38bfb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x38bfb4: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x38bfb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x38bfb8: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x38bfb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x38bfbc: 0x571024  and         $v0, $v0, $s7
    ctx->pc = 0x38bfbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 23));
    // 0x38bfc0: 0x6866000b  ldl         $a2, 0xB($v1)
    ctx->pc = 0x38bfc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 11); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x38bfc4: 0x6c660004  ldr         $a2, 0x4($v1)
    ctx->pc = 0x38bfc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x38bfc8: 0x68670013  ldl         $a3, 0x13($v1)
    ctx->pc = 0x38bfc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x38bfcc: 0x6c67000c  ldr         $a3, 0xC($v1)
    ctx->pc = 0x38bfccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x38bfd0: 0xb3a60027  sdl         $a2, 0x27($sp)
    ctx->pc = 0x38bfd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x38bfd4: 0xb7a60020  sdr         $a2, 0x20($sp)
    ctx->pc = 0x38bfd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x38bfd8: 0xb3a7002f  sdl         $a3, 0x2F($sp)
    ctx->pc = 0x38bfd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x38bfdc: 0xb7a70028  sdr         $a3, 0x28($sp)
    ctx->pc = 0x38bfdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x38bfe0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x38BFE0u;
    {
        const bool branch_taken_0x38bfe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38bfe0) {
            ctx->pc = 0x38BFE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38BFE0u;
            // 0x38bfe4: 0x8c620018  lw          $v0, 0x18($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38BFF4u;
            goto label_38bff4;
        }
    }
    ctx->pc = 0x38BFE8u;
    // 0x38bfe8: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x38bfe8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x38bfec: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x38BFECu;
    {
        const bool branch_taken_0x38bfec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38BFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BFECu;
        // 0x38bff0: 0xafa00034  sw          $zero, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38bfec) {
            ctx->pc = 0x38C008u;
            goto label_38c008;
        }
    }
    ctx->pc = 0x38BFF4u;
label_38bff4:
    // 0x38bff4: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x38bff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x38bff8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x38bff8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x38bffc: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x38bffcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x38c000: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x38c000u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    // 0x38c004: 0xafa30030  sw          $v1, 0x30($sp)
    ctx->pc = 0x38c004u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
label_38c008:
    // 0x38c008: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x38c008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38c00c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x38c00cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x38c010: 0xc10486e  jal         func_4121B8
    ctx->pc = 0x38C010u;
    SET_GPR_U32(ctx, 31, 0x38C018u);
    ctx->pc = 0x38C014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C010u;
    // 0x38c014: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4121B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4121B8u, 0x38C010u, 0x38C018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C018u;
label_38c018:
    // 0x38c018: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x38C018u;
    {
        const bool branch_taken_0x38c018 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38C01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C018u;
        // 0x38c01c: 0x8fa20030  lw          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c018) {
            ctx->pc = 0x38C0C8u;
            goto label_38c0c8;
        }
    }
    ctx->pc = 0x38C020u;
    // 0x38c020: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x38C020u;
    {
        const bool branch_taken_0x38c020 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38C024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C020u;
        // 0x38c024: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c020) {
            ctx->pc = 0x38C04Cu;
            goto label_38c04c;
        }
    }
    ctx->pc = 0x38C028u;
    // 0x38c028: 0x8e260014  lw          $a2, 0x14($s1)
    ctx->pc = 0x38c028u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x38c02c: 0x8e22005c  lw          $v0, 0x5C($s1)
    ctx->pc = 0x38c02cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x38c030: 0xd60018  mult        $zero, $a2, $s6
    ctx->pc = 0x38c030u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x38c034: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x38c034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x38c038: 0x3012  mflo        $a2
    ctx->pc = 0x38c038u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x38c03c: 0xc10341a  jal         func_40D068
    ctx->pc = 0x38C03Cu;
    SET_GPR_U32(ctx, 31, 0x38C044u);
    ctx->pc = 0x38C040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C03Cu;
    // 0x38c040: 0x8c450014  lw          $a1, 0x14($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D068u, 0x38C03Cu, 0x38C044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C044u;
label_38c044:
    // 0x38c044: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x38C044u;
    {
        const bool branch_taken_0x38c044 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38C048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C044u;
        // 0x38c048: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c044) {
            ctx->pc = 0x38C0CCu;
            goto label_38c0cc;
        }
    }
    ctx->pc = 0x38C04Cu;
label_38c04c:
    // 0x38c04c: 0x8fa20034  lw          $v0, 0x34($sp)
    ctx->pc = 0x38c04cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x38c050: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x38C050u;
    {
        const bool branch_taken_0x38c050 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38C054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C050u;
        // 0x38c054: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c050) {
            ctx->pc = 0x38C07Cu;
            goto label_38c07c;
        }
    }
    ctx->pc = 0x38C058u;
    // 0x38c058: 0x8e260014  lw          $a2, 0x14($s1)
    ctx->pc = 0x38c058u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x38c05c: 0x8e22005c  lw          $v0, 0x5C($s1)
    ctx->pc = 0x38c05cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x38c060: 0xd60018  mult        $zero, $a2, $s6
    ctx->pc = 0x38c060u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x38c064: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x38c064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x38c068: 0x3012  mflo        $a2
    ctx->pc = 0x38c068u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x38c06c: 0xc10341a  jal         func_40D068
    ctx->pc = 0x38C06Cu;
    SET_GPR_U32(ctx, 31, 0x38C074u);
    ctx->pc = 0x38C070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C06Cu;
    // 0x38c070: 0x8c450018  lw          $a1, 0x18($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D068u, 0x38C06Cu, 0x38C074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C074u;
label_38c074:
    // 0x38c074: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x38C074u;
    {
        const bool branch_taken_0x38c074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38C078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C074u;
        // 0x38c078: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c074) {
            ctx->pc = 0x38C0CCu;
            goto label_38c0cc;
        }
    }
    ctx->pc = 0x38C07Cu;
label_38c07c:
    // 0x38c07c: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x38c07cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x38c080: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x38c080u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x38c084: 0x26b5001c  addiu       $s5, $s5, 0x1C
    ctx->pc = 0x38c084u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 28));
    // 0x38c088: 0x2694001c  addiu       $s4, $s4, 0x1C
    ctx->pc = 0x38c088u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 28));
    // 0x38c08c: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x38c08cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x38c090: 0x1440ffc7  bnez        $v0, . + 4 + (-0x39 << 2)
    ctx->pc = 0x38C090u;
    {
        const bool branch_taken_0x38c090 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38C094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C090u;
        // 0x38c094: 0x2610001c  addiu       $s0, $s0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c090) {
            ctx->pc = 0x38BFB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38bfb0;
        }
    }
    ctx->pc = 0x38C098u;
label_38c098:
    // 0x38c098: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x38c098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x38c09c: 0xc0e3b5e  jal         func_38ED78
    ctx->pc = 0x38C09Cu;
    SET_GPR_U32(ctx, 31, 0x38C0A4u);
    ctx->pc = 0x38C0A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C09Cu;
    // 0x38c0a0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38ED78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38ED78u, 0x38C09Cu, 0x38C0A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C0A4u;
label_38c0a4:
    // 0x38c0a4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x38C0A4u;
    {
        const bool branch_taken_0x38c0a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38C0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C0A4u;
        // 0x38c0a8: 0x3c04005e  lui         $a0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c0a4) {
            ctx->pc = 0x38C0C8u;
            goto label_38c0c8;
        }
    }
    ctx->pc = 0x38C0ACu;
    // 0x38c0ac: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x38c0acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38c0b0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x38c0b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38c0b4: 0xc104a72  jal         func_4129C8
    ctx->pc = 0x38C0B4u;
    SET_GPR_U32(ctx, 31, 0x38C0BCu);
    ctx->pc = 0x38C0B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C0B4u;
    // 0x38c0b8: 0x2484add0  addiu       $a0, $a0, -0x5230 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4129C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4129C8u, 0x38C0B4u, 0x38C0BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C0BCu;
label_38c0bc:
    // 0x38c0bc: 0x2880a  movz        $s1, $zero, $v0
    ctx->pc = 0x38c0bcu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 0));
    // 0x38c0c0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x38C0C0u;
    {
        const bool branch_taken_0x38c0c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38C0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C0C0u;
        // 0x38c0c4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c0c0) {
            ctx->pc = 0x38C0CCu;
            goto label_38c0cc;
        }
    }
    ctx->pc = 0x38C0C8u;
label_38c0c8:
    // 0x38c0c8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x38c0c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38c0cc:
    // 0x38c0cc: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x38c0ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x38c0d0: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x38c0d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x38c0d4: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x38c0d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x38c0d8: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x38c0d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x38c0dc: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x38c0dcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x38c0e0: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x38c0e0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x38c0e4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x38c0e4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x38c0e8: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x38c0e8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x38c0ec: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x38c0ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x38c0f0: 0x3e00008  jr          $ra
    ctx->pc = 0x38C0F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38C0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C0F0u;
        // 0x38c0f4: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38C0F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38C0F8u;
}
