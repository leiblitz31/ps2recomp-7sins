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

// Function: sub_004090E0
// Address: 0x4090e0 - 0x4093a0
void sub_004090E0_0x4090e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004090E0_0x4090e0");
#endif

    switch (ctx->pc) {
        case 0x409110u: goto label_409110;
        case 0x40911cu: goto label_40911c;
        case 0x409170u: goto label_409170;
        case 0x409188u: goto label_409188;
        default: break;
    }

    ctx->pc = 0x4090e0u;

    // 0x4090e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4090e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4090e4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x4090e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x4090e8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x4090e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x4090ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4090ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4090f0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4090f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x4090f4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4090f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4090f8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x4090f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x4090fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4090fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x409100: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x409100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x409104: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x409104u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x409108: 0xc0de64a  jal         func_379928
    ctx->pc = 0x409108u;
    SET_GPR_U32(ctx, 31, 0x409110u);
    ctx->pc = 0x40910Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x409108u;
    // 0x40910c: 0x8c53002c  lw          $s3, 0x2C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x379928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x379928u, 0x409108u, 0x409110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x409110u;
label_409110:
    // 0x409110: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x409110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x409114: 0xc0de648  jal         func_379920
    ctx->pc = 0x409114u;
    SET_GPR_U32(ctx, 31, 0x40911Cu);
    ctx->pc = 0x409118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x409114u;
    // 0x409118: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x379920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x379920u, 0x409114u, 0x40911Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40911Cu;
label_40911c:
    // 0x40911c: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x40911cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x409120: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x409120u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x409124: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x409124u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x409128: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x409128u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x40912c: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x40912cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
    // 0x409130: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x409130u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
    // 0x409134: 0xae200020  sw          $zero, 0x20($s1)
    ctx->pc = 0x409134u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
    // 0x409138: 0xae200024  sw          $zero, 0x24($s1)
    ctx->pc = 0x409138u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
    // 0x40913c: 0xae200028  sw          $zero, 0x28($s1)
    ctx->pc = 0x40913cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 0));
    // 0x409140: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x409140u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x409144: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x409144u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x409148: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x409148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40914c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x40914cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x409150: 0x8e230088  lw          $v1, 0x88($s1)
    ctx->pc = 0x409150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
    // 0x409154: 0x10600089  beqz        $v1, . + 4 + (0x89 << 2)
    ctx->pc = 0x409154u;
    {
        const bool branch_taken_0x409154 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x409158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x409154u;
        // 0x409158: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x409154) {
            ctx->pc = 0x40937Cu;
            goto label_40937c;
        }
    }
    ctx->pc = 0x40915Cu;
    // 0x40915c: 0x8e2e008c  lw          $t6, 0x8C($s1)
    ctx->pc = 0x40915cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
    // 0x409160: 0x2629000c  addiu       $t1, $s1, 0xC
    ctx->pc = 0x409160u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x409164: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x409164u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x409168: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x409168u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x40916c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x40916cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_409170:
    // 0x409170: 0x248d0001  addiu       $t5, $a0, 0x1
    ctx->pc = 0x409170u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x409174: 0x6e1821  addu        $v1, $v1, $t6
    ctx->pc = 0x409174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 14)));
    // 0x409178: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x409178u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40917c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x40917cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x409180: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x409180u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x409184: 0x534021  addu        $t0, $v0, $s3
    ctx->pc = 0x409184u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_409188:
    // 0x409188: 0x95020000  lhu         $v0, 0x0($t0)
    ctx->pc = 0x409188u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x40918c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x40918cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x409190: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x409190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x409194: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x409194u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x409198: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x409198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40919c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x40919cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x4091a0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x4091a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4091a4: 0x0  nop
    ctx->pc = 0x4091a4u;
    // NOP
    // 0x4091a8: 0x45000015  bc1f        . + 4 + (0x15 << 2)
    ctx->pc = 0x4091A8u;
    {
        const bool branch_taken_0x4091a8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4091ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4091A8u;
        // 0x4091ac: 0x8c470000  lw          $a3, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4091a8) {
            ctx->pc = 0x409200u;
            goto label_409200;
        }
    }
    ctx->pc = 0x4091B0u;
    // 0x4091b0: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x4091b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x4091b4: 0x30e600ff  andi        $a2, $a3, 0xFF
    ctx->pc = 0x4091b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x4091b8: 0x61142  srl         $v0, $a2, 5
    ctx->pc = 0x4091b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 5));
    // 0x4091bc: 0x30e5001f  andi        $a1, $a3, 0x1F
    ctx->pc = 0x4091bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)31);
    // 0x4091c0: 0xc4182b  sltu        $v1, $a2, $a0
    ctx->pc = 0x4091c0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x4091c4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4091c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4091c8: 0xc3200b  movn        $a0, $a2, $v1
    ctx->pc = 0x4091c8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 6));
    // 0x4091cc: 0xae240008  sw          $a0, 0x8($s1)
    ctx->pc = 0x4091ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 4));
    // 0x4091d0: 0x1221821  addu        $v1, $t1, $v0
    ctx->pc = 0x4091d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x4091d4: 0xab2004  sllv        $a0, $t3, $a1
    ctx->pc = 0x4091d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 11), GPR_U32(ctx, 5) & 0x1F));
    // 0x4091d8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4091d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4091dc: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x4091dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x4091e0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x4091E0u;
    {
        const bool branch_taken_0x4091e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4091e0) {
            ctx->pc = 0x4091E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4091E0u;
            // 0x4091e4: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4091F8u;
            goto label_4091f8;
        }
    }
    ctx->pc = 0x4091E8u;
    // 0x4091e8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x4091e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x4091ec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4091ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x4091f0: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x4091f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x4091f4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4091f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4091f8:
    // 0x4091f8: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x4091f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x4091fc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x4091fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_409200:
    // 0x409200: 0x95020000  lhu         $v0, 0x0($t0)
    ctx->pc = 0x409200u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x409204: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x409204u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x409208: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x409208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x40920c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x40920cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x409210: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x409210u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x409214: 0x0  nop
    ctx->pc = 0x409214u;
    // NOP
    // 0x409218: 0x45020017  bc1fl       . + 4 + (0x17 << 2)
    ctx->pc = 0x409218u;
    {
        const bool branch_taken_0x409218 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x409218) {
            ctx->pc = 0x40921Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x409218u;
            // 0x40921c: 0x95020000  lhu         $v0, 0x0($t0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x409278u;
            goto label_409278;
        }
    }
    ctx->pc = 0x409220u;
    // 0x409220: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x409220u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x409224: 0x73a02  srl         $a3, $a3, 8
    ctx->pc = 0x409224u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 8));
    // 0x409228: 0x30e600ff  andi        $a2, $a3, 0xFF
    ctx->pc = 0x409228u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x40922c: 0x30e5001f  andi        $a1, $a3, 0x1F
    ctx->pc = 0x40922cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)31);
    // 0x409230: 0xc4182b  sltu        $v1, $a2, $a0
    ctx->pc = 0x409230u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x409234: 0x61142  srl         $v0, $a2, 5
    ctx->pc = 0x409234u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 5));
    // 0x409238: 0xc3200b  movn        $a0, $a2, $v1
    ctx->pc = 0x409238u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 6));
    // 0x40923c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x40923cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x409240: 0xae240008  sw          $a0, 0x8($s1)
    ctx->pc = 0x409240u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 4));
    // 0x409244: 0x1221821  addu        $v1, $t1, $v0
    ctx->pc = 0x409244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x409248: 0xab2004  sllv        $a0, $t3, $a1
    ctx->pc = 0x409248u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 11), GPR_U32(ctx, 5) & 0x1F));
    // 0x40924c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x40924cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x409250: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x409250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x409254: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x409254u;
    {
        const bool branch_taken_0x409254 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x409254) {
            ctx->pc = 0x409258u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x409254u;
            // 0x409258: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x40926Cu;
            goto label_40926c;
        }
    }
    ctx->pc = 0x40925Cu;
    // 0x40925c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x40925cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x409260: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x409260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x409264: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x409264u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x409268: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x409268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_40926c:
    // 0x40926c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x40926cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x409270: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x409270u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x409274: 0x95020000  lhu         $v0, 0x0($t0)
    ctx->pc = 0x409274u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
label_409278:
    // 0x409278: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x409278u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x40927c: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x40927cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x409280: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x409280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x409284: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x409284u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x409288: 0x0  nop
    ctx->pc = 0x409288u;
    // NOP
    // 0x40928c: 0x45020017  bc1fl       . + 4 + (0x17 << 2)
    ctx->pc = 0x40928Cu;
    {
        const bool branch_taken_0x40928c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x40928c) {
            ctx->pc = 0x409290u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x40928Cu;
            // 0x409290: 0x95020000  lhu         $v0, 0x0($t0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4092ECu;
            goto label_4092ec;
        }
    }
    ctx->pc = 0x409294u;
    // 0x409294: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x409294u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x409298: 0x73a02  srl         $a3, $a3, 8
    ctx->pc = 0x409298u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 8));
    // 0x40929c: 0x30e600ff  andi        $a2, $a3, 0xFF
    ctx->pc = 0x40929cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x4092a0: 0x30e5001f  andi        $a1, $a3, 0x1F
    ctx->pc = 0x4092a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)31);
    // 0x4092a4: 0xc4182b  sltu        $v1, $a2, $a0
    ctx->pc = 0x4092a4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x4092a8: 0x61142  srl         $v0, $a2, 5
    ctx->pc = 0x4092a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 5));
    // 0x4092ac: 0xc3200b  movn        $a0, $a2, $v1
    ctx->pc = 0x4092acu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 6));
    // 0x4092b0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4092b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4092b4: 0xae240008  sw          $a0, 0x8($s1)
    ctx->pc = 0x4092b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 4));
    // 0x4092b8: 0x1221821  addu        $v1, $t1, $v0
    ctx->pc = 0x4092b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x4092bc: 0xab2004  sllv        $a0, $t3, $a1
    ctx->pc = 0x4092bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 11), GPR_U32(ctx, 5) & 0x1F));
    // 0x4092c0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4092c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4092c4: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x4092c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x4092c8: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x4092C8u;
    {
        const bool branch_taken_0x4092c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4092c8) {
            ctx->pc = 0x4092CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4092C8u;
            // 0x4092cc: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4092E0u;
            goto label_4092e0;
        }
    }
    ctx->pc = 0x4092D0u;
    // 0x4092d0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x4092d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x4092d4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4092d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x4092d8: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x4092d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x4092dc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4092dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4092e0:
    // 0x4092e0: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x4092e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x4092e4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x4092e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x4092e8: 0x95020000  lhu         $v0, 0x0($t0)
    ctx->pc = 0x4092e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
label_4092ec:
    // 0x4092ec: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x4092ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x4092f0: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x4092f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x4092f4: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x4092f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4092f8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x4092f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4092fc: 0x0  nop
    ctx->pc = 0x4092fcu;
    // NOP
    // 0x409300: 0x45000015  bc1f        . + 4 + (0x15 << 2)
    ctx->pc = 0x409300u;
    {
        const bool branch_taken_0x409300 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x409304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x409300u;
        // 0x409304: 0x73a02  srl         $a3, $a3, 8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x409300) {
            ctx->pc = 0x409358u;
            goto label_409358;
        }
    }
    ctx->pc = 0x409308u;
    // 0x409308: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x409308u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x40930c: 0x30e600ff  andi        $a2, $a3, 0xFF
    ctx->pc = 0x40930cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x409310: 0x30e5001f  andi        $a1, $a3, 0x1F
    ctx->pc = 0x409310u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)31);
    // 0x409314: 0xc4182b  sltu        $v1, $a2, $a0
    ctx->pc = 0x409314u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x409318: 0x61142  srl         $v0, $a2, 5
    ctx->pc = 0x409318u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 5));
    // 0x40931c: 0xc3200b  movn        $a0, $a2, $v1
    ctx->pc = 0x40931cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 6));
    // 0x409320: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x409320u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x409324: 0xae240008  sw          $a0, 0x8($s1)
    ctx->pc = 0x409324u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 4));
    // 0x409328: 0x1221821  addu        $v1, $t1, $v0
    ctx->pc = 0x409328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x40932c: 0xab2804  sllv        $a1, $t3, $a1
    ctx->pc = 0x40932cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 11), GPR_U32(ctx, 5) & 0x1F));
    // 0x409330: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x409330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x409334: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x409334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x409338: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x409338u;
    {
        const bool branch_taken_0x409338 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x409338) {
            ctx->pc = 0x40933Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x409338u;
            // 0x40933c: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x409350u;
            goto label_409350;
        }
    }
    ctx->pc = 0x409340u;
    // 0x409340: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x409340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x409344: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x409344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x409348: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x409348u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x40934c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x40934cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_409350:
    // 0x409350: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x409350u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x409354: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x409354u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_409358:
    // 0x409358: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x409358u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x40935c: 0x2d820003  sltiu       $v0, $t4, 0x3
    ctx->pc = 0x40935cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x409360: 0x1440ff89  bnez        $v0, . + 4 + (-0x77 << 2)
    ctx->pc = 0x409360u;
    {
        const bool branch_taken_0x409360 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x409364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x409360u;
        // 0x409364: 0x25080002  addiu       $t0, $t0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x409360) {
            ctx->pc = 0x409188u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_409188;
        }
    }
    ctx->pc = 0x409368u;
    // 0x409368: 0x8e220088  lw          $v0, 0x88($s1)
    ctx->pc = 0x409368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
    // 0x40936c: 0x1a0202d  daddu       $a0, $t5, $zero
    ctx->pc = 0x40936cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x409370: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x409370u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x409374: 0x1440ff7e  bnez        $v0, . + 4 + (-0x82 << 2)
    ctx->pc = 0x409374u;
    {
        const bool branch_taken_0x409374 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x409378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x409374u;
        // 0x409378: 0x41880  sll         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x409374) {
            ctx->pc = 0x409170u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_409170;
        }
    }
    ctx->pc = 0x40937Cu;
label_40937c:
    // 0x40937c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x40937cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x409380: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x409380u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x409384: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x409384u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x409388: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x409388u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x40938c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x40938cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x409390: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x409390u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x409394: 0x3e00008  jr          $ra
    ctx->pc = 0x409394u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x409398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x409394u;
        // 0x409398: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x409394u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x40939Cu;
    // 0x40939c: 0x0  nop
    ctx->pc = 0x40939cu;
    // NOP
    ctx->pc = 0x4093a0u;
}
