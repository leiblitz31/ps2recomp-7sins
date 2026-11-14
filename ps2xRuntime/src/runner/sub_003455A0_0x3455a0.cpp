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

// Function: sub_003455A0
// Address: 0x3455a0 - 0x3463c0
void sub_003455A0_0x3455a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003455A0_0x3455a0");
#endif

    switch (ctx->pc) {
        case 0x345920u: goto label_345920;
        case 0x345a94u: goto label_345a94;
        case 0x345ca8u: goto label_345ca8;
        case 0x345d0cu: goto label_345d0c;
        default: break;
    }

    ctx->pc = 0x3455a0u;

    // 0x3455a0: 0x27bdfda0  addiu       $sp, $sp, -0x260
    ctx->pc = 0x3455a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966688));
    // 0x3455a4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3455a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x3455a8: 0xafa400c0  sw          $a0, 0xC0($sp)
    ctx->pc = 0x3455a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 4));
    // 0x3455ac: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x3455acu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3455b0: 0xe7b60240  swc1        $f22, 0x240($sp)
    ctx->pc = 0x3455b0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 576), bits); }
    // 0x3455b4: 0x2444c2c8  addiu       $a0, $v0, -0x3D38
    ctx->pc = 0x3455b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951624));
    // 0x3455b8: 0x7fb00220  sq          $s0, 0x220($sp)
    ctx->pc = 0x3455b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 16));
    // 0x3455bc: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x3455bcu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3455c0: 0x7fb10210  sq          $s1, 0x210($sp)
    ctx->pc = 0x3455c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), GPR_VEC(ctx, 17));
    // 0x3455c4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3455c4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3455c8: 0x7fb20200  sq          $s2, 0x200($sp)
    ctx->pc = 0x3455c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), GPR_VEC(ctx, 18));
    // 0x3455cc: 0x7fb301f0  sq          $s3, 0x1F0($sp)
    ctx->pc = 0x3455ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), GPR_VEC(ctx, 19));
    // 0x3455d0: 0x7fb401e0  sq          $s4, 0x1E0($sp)
    ctx->pc = 0x3455d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), GPR_VEC(ctx, 20));
    // 0x3455d4: 0x7fb501d0  sq          $s5, 0x1D0($sp)
    ctx->pc = 0x3455d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 21));
    // 0x3455d8: 0x7fb601c0  sq          $s6, 0x1C0($sp)
    ctx->pc = 0x3455d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 22));
    // 0x3455dc: 0x7fb701b0  sq          $s7, 0x1B0($sp)
    ctx->pc = 0x3455dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 23));
    // 0x3455e0: 0x7fbe01a0  sq          $fp, 0x1A0($sp)
    ctx->pc = 0x3455e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 30));
    // 0x3455e4: 0xffbf0190  sd          $ra, 0x190($sp)
    ctx->pc = 0x3455e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 400), GPR_U64(ctx, 31));
    // 0x3455e8: 0xe7b80250  swc1        $f24, 0x250($sp)
    ctx->pc = 0x3455e8u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 592), bits); }
    // 0x3455ec: 0xe7b70248  swc1        $f23, 0x248($sp)
    ctx->pc = 0x3455ecu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 584), bits); }
    // 0x3455f0: 0xe7b50238  swc1        $f21, 0x238($sp)
    ctx->pc = 0x3455f0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 568), bits); }
    // 0x3455f4: 0xe7b40230  swc1        $f20, 0x230($sp)
    ctx->pc = 0x3455f4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 560), bits); }
    // 0x3455f8: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x3455f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x3455fc: 0x8c8300ac  lw          $v1, 0xAC($a0)
    ctx->pc = 0x3455fcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x61C374u));
    // 0x345600: 0xafa500c4  sw          $a1, 0xC4($sp)
    ctx->pc = 0x345600u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 5));
    // 0x345604: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x345604u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x345608: 0x8c820098  lw          $v0, 0x98($a0)
    ctx->pc = 0x345608u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x61C360u));
    // 0x34560c: 0xafa000d0  sw          $zero, 0xD0($sp)
    ctx->pc = 0x34560cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 0));
    // 0x345610: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x345610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x345614: 0xc4d50000  lwc1        $f21, 0x0($a2)
    ctx->pc = 0x345614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x345618: 0xafa000d4  sw          $zero, 0xD4($sp)
    ctx->pc = 0x345618u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 0));
    // 0x34561c: 0xafa200c8  sw          $v0, 0xC8($sp)
    ctx->pc = 0x34561cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 2));
    // 0x345620: 0xafa000d8  sw          $zero, 0xD8($sp)
    ctx->pc = 0x345620u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 0));
    // 0x345624: 0xafa000dc  sw          $zero, 0xDC($sp)
    ctx->pc = 0x345624u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 0));
    // 0x345628: 0xafa000e0  sw          $zero, 0xE0($sp)
    ctx->pc = 0x345628u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 0));
    // 0x34562c: 0xafa000e4  sw          $zero, 0xE4($sp)
    ctx->pc = 0x34562cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 0));
    // 0x345630: 0xafa000e8  sw          $zero, 0xE8($sp)
    ctx->pc = 0x345630u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 0));
    // 0x345634: 0xafa000ec  sw          $zero, 0xEC($sp)
    ctx->pc = 0x345634u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 0));
    // 0x345638: 0xafa000f8  sw          $zero, 0xF8($sp)
    ctx->pc = 0x345638u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 0));
    // 0x34563c: 0xafa000fc  sw          $zero, 0xFC($sp)
    ctx->pc = 0x34563cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 0));
    // 0x345640: 0xafa00100  sw          $zero, 0x100($sp)
    ctx->pc = 0x345640u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 0));
    // 0x345644: 0xafa00104  sw          $zero, 0x104($sp)
    ctx->pc = 0x345644u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 0));
    // 0x345648: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x345648u;
    {
        const bool branch_taken_0x345648 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x34564Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345648u;
        // 0x34564c: 0xafa00110  sw          $zero, 0x110($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345648) {
            ctx->pc = 0x345660u;
            goto label_345660;
        }
    }
    ctx->pc = 0x345650u;
    // 0x345650: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x345650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x345654: 0x8c620070  lw          $v0, 0x70($v1)
    ctx->pc = 0x345654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 112)));
    // 0x345658: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x345658u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x34565c: 0xafa30110  sw          $v1, 0x110($sp)
    ctx->pc = 0x34565cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 3));
label_345660:
    // 0x345660: 0x8c8200a8  lw          $v0, 0xA8($a0)
    ctx->pc = 0x345660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 168)));
    // 0x345664: 0x8fa600c0  lw          $a2, 0xC0($sp)
    ctx->pc = 0x345664u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x345668: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x345668u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x34566c: 0xc29821  addu        $s3, $a2, $v0
    ctx->pc = 0x34566cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x345670: 0x3980b  movn        $s3, $zero, $v1
    ctx->pc = 0x345670u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 0));
    // 0x345674: 0x12600079  beqz        $s3, . + 4 + (0x79 << 2)
    ctx->pc = 0x345674u;
    {
        const bool branch_taken_0x345674 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x345678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345674u;
        // 0x345678: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345674) {
            ctx->pc = 0x34585Cu;
            goto label_34585c;
        }
    }
    ctx->pc = 0x34567Cu;
    // 0x34567c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x34567cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x345680: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x345680u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345684: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x345684u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345688: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x345688u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34568c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x34568cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x345690: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x345690u;
    {
        const bool branch_taken_0x345690 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x345694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345690u;
        // 0x345694: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345690) {
            ctx->pc = 0x3456C0u;
            goto label_3456c0;
        }
    }
    ctx->pc = 0x345698u;
    // 0x345698: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x345698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x34569c: 0x8e640020  lw          $a0, 0x20($s3)
    ctx->pc = 0x34569cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x3456a0: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x3456a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x3456a4: 0x8c4d0000  lw          $t5, 0x0($v0)
    ctx->pc = 0x3456a4u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3456a8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x3456a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x3456ac: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3456ACu;
    {
        const bool branch_taken_0x3456ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3456B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3456ACu;
        // 0x3456b0: 0x8c8c0000  lw          $t4, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3456ac) {
            ctx->pc = 0x3456BCu;
            goto label_3456bc;
        }
    }
    ctx->pc = 0x3456B4u;
    // 0x3456b4: 0x8e620024  lw          $v0, 0x24($s3)
    ctx->pc = 0x3456b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x3456b8: 0x8c4b0000  lw          $t3, 0x0($v0)
    ctx->pc = 0x3456b8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3456bc:
    // 0x3456bc: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x3456bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3456c0:
    // 0x3456c0: 0xafa000d0  sw          $zero, 0xD0($sp)
    ctx->pc = 0x3456c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 0));
    // 0x3456c4: 0x30e20002  andi        $v0, $a3, 0x2
    ctx->pc = 0x3456c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)2);
    // 0x3456c8: 0xafa000d4  sw          $zero, 0xD4($sp)
    ctx->pc = 0x3456c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 0));
    // 0x3456cc: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x3456CCu;
    {
        const bool branch_taken_0x3456cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3456D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3456CCu;
        // 0x3456d0: 0xafa000f8  sw          $zero, 0xF8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3456cc) {
            ctx->pc = 0x345718u;
            goto label_345718;
        }
    }
    ctx->pc = 0x3456D4u;
    // 0x3456d4: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x3456d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x3456d8: 0x82880  sll         $a1, $t0, 2
    ctx->pc = 0x3456d8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x3456dc: 0x8e630020  lw          $v1, 0x20($s3)
    ctx->pc = 0x3456dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x3456e0: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x3456e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x3456e4: 0x8e640010  lw          $a0, 0x10($s3)
    ctx->pc = 0x3456e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x3456e8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3456e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3456ec: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x3456ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x3456f0: 0x30840002  andi        $a0, $a0, 0x2
    ctx->pc = 0x3456f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x3456f4: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x3456f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
    // 0x3456f8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3456f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3456fc: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3456FCu;
    {
        const bool branch_taken_0x3456fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x345700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3456FCu;
        // 0x345700: 0xafa300d4  sw          $v1, 0xD4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3456fc) {
            ctx->pc = 0x345714u;
            goto label_345714;
        }
    }
    ctx->pc = 0x345704u;
    // 0x345704: 0x8e620024  lw          $v0, 0x24($s3)
    ctx->pc = 0x345704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x345708: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x345708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x34570c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x34570cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x345710: 0xafa200f8  sw          $v0, 0xF8($sp)
    ctx->pc = 0x345710u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 2));
label_345714:
    // 0x345714: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x345714u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_345718:
    // 0x345718: 0xafa000e0  sw          $zero, 0xE0($sp)
    ctx->pc = 0x345718u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 0));
    // 0x34571c: 0x30e20004  andi        $v0, $a3, 0x4
    ctx->pc = 0x34571cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4);
    // 0x345720: 0xafa000e4  sw          $zero, 0xE4($sp)
    ctx->pc = 0x345720u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 0));
    // 0x345724: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x345724u;
    {
        const bool branch_taken_0x345724 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x345728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345724u;
        // 0x345728: 0xafa00100  sw          $zero, 0x100($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345724) {
            ctx->pc = 0x345770u;
            goto label_345770;
        }
    }
    ctx->pc = 0x34572Cu;
    // 0x34572c: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x34572cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x345730: 0x82880  sll         $a1, $t0, 2
    ctx->pc = 0x345730u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x345734: 0x8e630020  lw          $v1, 0x20($s3)
    ctx->pc = 0x345734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x345738: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x345738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x34573c: 0x8e640010  lw          $a0, 0x10($s3)
    ctx->pc = 0x34573cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x345740: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x345740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x345744: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x345744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x345748: 0x30840004  andi        $a0, $a0, 0x4
    ctx->pc = 0x345748u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
    // 0x34574c: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x34574cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
    // 0x345750: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x345750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x345754: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x345754u;
    {
        const bool branch_taken_0x345754 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x345758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345754u;
        // 0x345758: 0xafa300e4  sw          $v1, 0xE4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345754) {
            ctx->pc = 0x34576Cu;
            goto label_34576c;
        }
    }
    ctx->pc = 0x34575Cu;
    // 0x34575c: 0x8e620024  lw          $v0, 0x24($s3)
    ctx->pc = 0x34575cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x345760: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x345760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x345764: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x345764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x345768: 0xafa20100  sw          $v0, 0x100($sp)
    ctx->pc = 0x345768u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
label_34576c:
    // 0x34576c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x34576cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_345770:
    // 0x345770: 0x30e20008  andi        $v0, $a3, 0x8
    ctx->pc = 0x345770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)8);
    // 0x345774: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x345774u;
    {
        const bool branch_taken_0x345774 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x345778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345774u;
        // 0x345778: 0x83080  sll         $a2, $t0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345774) {
            ctx->pc = 0x3457B0u;
            goto label_3457b0;
        }
    }
    ctx->pc = 0x34577Cu;
    // 0x34577c: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x34577cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x345780: 0x8e630020  lw          $v1, 0x20($s3)
    ctx->pc = 0x345780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x345784: 0x8e640010  lw          $a0, 0x10($s3)
    ctx->pc = 0x345784u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x345788: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x345788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x34578c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x34578cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x345790: 0x8c4d0000  lw          $t5, 0x0($v0)
    ctx->pc = 0x345790u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x345794: 0x30840008  andi        $a0, $a0, 0x8
    ctx->pc = 0x345794u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
    // 0x345798: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x345798u;
    {
        const bool branch_taken_0x345798 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x34579Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345798u;
        // 0x34579c: 0x8c6c0000  lw          $t4, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345798) {
            ctx->pc = 0x3457ACu;
            goto label_3457ac;
        }
    }
    ctx->pc = 0x3457A0u;
    // 0x3457a0: 0x8e620024  lw          $v0, 0x24($s3)
    ctx->pc = 0x3457a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x3457a4: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x3457a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x3457a8: 0x8c4b0000  lw          $t3, 0x0($v0)
    ctx->pc = 0x3457a8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3457ac:
    // 0x3457ac: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3457acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_3457b0:
    // 0x3457b0: 0xafa000e8  sw          $zero, 0xE8($sp)
    ctx->pc = 0x3457b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 0));
    // 0x3457b4: 0x30e20020  andi        $v0, $a3, 0x20
    ctx->pc = 0x3457b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)32);
    // 0x3457b8: 0xafa000ec  sw          $zero, 0xEC($sp)
    ctx->pc = 0x3457b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 0));
    // 0x3457bc: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x3457BCu;
    {
        const bool branch_taken_0x3457bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3457C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3457BCu;
        // 0x3457c0: 0xafa00104  sw          $zero, 0x104($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3457bc) {
            ctx->pc = 0x345808u;
            goto label_345808;
        }
    }
    ctx->pc = 0x3457C4u;
    // 0x3457c4: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x3457c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x3457c8: 0x82880  sll         $a1, $t0, 2
    ctx->pc = 0x3457c8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x3457cc: 0x8e630020  lw          $v1, 0x20($s3)
    ctx->pc = 0x3457ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x3457d0: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x3457d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x3457d4: 0x8e640010  lw          $a0, 0x10($s3)
    ctx->pc = 0x3457d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x3457d8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3457d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3457dc: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x3457dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x3457e0: 0x30840020  andi        $a0, $a0, 0x20
    ctx->pc = 0x3457e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
    // 0x3457e4: 0xafa200e8  sw          $v0, 0xE8($sp)
    ctx->pc = 0x3457e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 2));
    // 0x3457e8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3457e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3457ec: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3457ECu;
    {
        const bool branch_taken_0x3457ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3457F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3457ECu;
        // 0x3457f0: 0xafa300ec  sw          $v1, 0xEC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3457ec) {
            ctx->pc = 0x345804u;
            goto label_345804;
        }
    }
    ctx->pc = 0x3457F4u;
    // 0x3457f4: 0x8e620024  lw          $v0, 0x24($s3)
    ctx->pc = 0x3457f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x3457f8: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x3457f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x3457fc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3457fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x345800: 0xafa20104  sw          $v0, 0x104($sp)
    ctx->pc = 0x345800u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 2));
label_345804:
    // 0x345804: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x345804u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_345808:
    // 0x345808: 0x30e20080  andi        $v0, $a3, 0x80
    ctx->pc = 0x345808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)128);
    // 0x34580c: 0xafa000d8  sw          $zero, 0xD8($sp)
    ctx->pc = 0x34580cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 0));
    // 0x345810: 0xafa000dc  sw          $zero, 0xDC($sp)
    ctx->pc = 0x345810u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 0));
    // 0x345814: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x345814u;
    {
        const bool branch_taken_0x345814 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x345818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345814u;
        // 0x345818: 0xafa000fc  sw          $zero, 0xFC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345814) {
            ctx->pc = 0x34585Cu;
            goto label_34585c;
        }
    }
    ctx->pc = 0x34581Cu;
    // 0x34581c: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x34581cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x345820: 0x82880  sll         $a1, $t0, 2
    ctx->pc = 0x345820u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x345824: 0x8e630020  lw          $v1, 0x20($s3)
    ctx->pc = 0x345824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x345828: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x345828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x34582c: 0x8e640010  lw          $a0, 0x10($s3)
    ctx->pc = 0x34582cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x345830: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x345830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x345834: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x345834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x345838: 0x30840080  andi        $a0, $a0, 0x80
    ctx->pc = 0x345838u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)128);
    // 0x34583c: 0xafa200d8  sw          $v0, 0xD8($sp)
    ctx->pc = 0x34583cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
    // 0x345840: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x345840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x345844: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x345844u;
    {
        const bool branch_taken_0x345844 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x345848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345844u;
        // 0x345848: 0xafa300dc  sw          $v1, 0xDC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345844) {
            ctx->pc = 0x34585Cu;
            goto label_34585c;
        }
    }
    ctx->pc = 0x34584Cu;
    // 0x34584c: 0x8e620024  lw          $v0, 0x24($s3)
    ctx->pc = 0x34584cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x345850: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x345850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x345854: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x345854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x345858: 0xafa200fc  sw          $v0, 0xFC($sp)
    ctx->pc = 0x345858u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 2));
label_34585c:
    // 0x34585c: 0x8fa700c4  lw          $a3, 0xC4($sp)
    ctx->pc = 0x34585cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x345860: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x345860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x345864: 0x8ce20014  lw          $v0, 0x14($a3)
    ctx->pc = 0x345864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x345868: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x345868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x34586c: 0x8fa500c8  lw          $a1, 0xC8($sp)
    ctx->pc = 0x34586cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x345870: 0xe2b021  addu        $s6, $a3, $v0
    ctx->pc = 0x345870u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x345874: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x345874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x345878: 0x8ca200a8  lw          $v0, 0xA8($a1)
    ctx->pc = 0x345878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 168)));
    // 0x34587c: 0xafa30108  sw          $v1, 0x108($sp)
    ctx->pc = 0x34587cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 3));
    // 0x345880: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x345880u;
    {
        const bool branch_taken_0x345880 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x345884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345880u;
        // 0x345884: 0xafb600f0  sw          $s6, 0xF0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345880) {
            ctx->pc = 0x3458A8u;
            goto label_3458a8;
        }
    }
    ctx->pc = 0x345888u;
    // 0x345888: 0x68460037  ldl         $a2, 0x37($v0)
    ctx->pc = 0x345888u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x34588c: 0x6c460030  ldr         $a2, 0x30($v0)
    ctx->pc = 0x34588cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x345890: 0x8c470038  lw          $a3, 0x38($v0)
    ctx->pc = 0x345890u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x345894: 0xb3a60007  sdl         $a2, 0x7($sp)
    ctx->pc = 0x345894u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x345898: 0xb7a60000  sdr         $a2, 0x0($sp)
    ctx->pc = 0x345898u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x34589c: 0xafa70008  sw          $a3, 0x8($sp)
    ctx->pc = 0x34589cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
    // 0x3458a0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3458A0u;
    {
        const bool branch_taken_0x3458a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3458A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3458A0u;
        // 0x3458a4: 0x8fa500c4  lw          $a1, 0xC4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3458a0) {
            ctx->pc = 0x3458B8u;
            goto label_3458b8;
        }
    }
    ctx->pc = 0x3458A8u;
label_3458a8:
    // 0x3458a8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x3458a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x3458ac: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x3458acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x3458b0: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x3458b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x3458b4: 0x8fa500c4  lw          $a1, 0xC4($sp)
    ctx->pc = 0x3458b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
label_3458b8:
    // 0x3458b8: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x3458b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3458bc: 0xafa000f4  sw          $zero, 0xF4($sp)
    ctx->pc = 0x3458bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 0));
    // 0x3458c0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x3458c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3458c4: 0x18400257  blez        $v0, . + 4 + (0x257 << 2)
    ctx->pc = 0x3458C4u;
    {
        const bool branch_taken_0x3458c4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x3458C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3458C4u;
        // 0x3458c8: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3458c4) {
            ctx->pc = 0x346224u;
            goto label_346224;
        }
    }
    ctx->pc = 0x3458CCu;
    // 0x3458cc: 0xafa30114  sw          $v1, 0x114($sp)
    ctx->pc = 0x3458ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 3));
    // 0x3458d0: 0x1a0802d  daddu       $s0, $t5, $zero
    ctx->pc = 0x3458d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3458d4: 0x8fa600e8  lw          $a2, 0xE8($sp)
    ctx->pc = 0x3458d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x3458d8: 0x26ca000c  addiu       $t2, $s6, 0xC
    ctx->pc = 0x3458d8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 22), 12));
    // 0x3458dc: 0x8fa700e0  lw          $a3, 0xE0($sp)
    ctx->pc = 0x3458dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x3458e0: 0x180882d  daddu       $s1, $t4, $zero
    ctx->pc = 0x3458e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3458e4: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x3458e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x3458e8: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x3458e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x3458ec: 0x8fa400ec  lw          $a0, 0xEC($sp)
    ctx->pc = 0x3458ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x3458f0: 0x8fa500e4  lw          $a1, 0xE4($sp)
    ctx->pc = 0x3458f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x3458f4: 0x4480c000  mtc1        $zero, $f24
    ctx->pc = 0x3458f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x3458f8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3458f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3458fc: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x3458fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x345900: 0xafa60118  sw          $a2, 0x118($sp)
    ctx->pc = 0x345900u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 6));
    // 0x345904: 0xafa7011c  sw          $a3, 0x11C($sp)
    ctx->pc = 0x345904u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 7));
    // 0x345908: 0xafa20120  sw          $v0, 0x120($sp)
    ctx->pc = 0x345908u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
    // 0x34590c: 0xafa30124  sw          $v1, 0x124($sp)
    ctx->pc = 0x34590cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 3));
    // 0x345910: 0xafa40128  sw          $a0, 0x128($sp)
    ctx->pc = 0x345910u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 4));
    // 0x345914: 0x8fa800dc  lw          $t0, 0xDC($sp)
    ctx->pc = 0x345914u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x345918: 0x8fa900d4  lw          $t1, 0xD4($sp)
    ctx->pc = 0x345918u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x34591c: 0xafa5012c  sw          $a1, 0x12C($sp)
    ctx->pc = 0x34591cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 5));
label_345920:
    // 0x345920: 0xc541fff8  lwc1        $f1, -0x8($t2)
    ctx->pc = 0x345920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4294967288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x345924: 0xc540fffc  lwc1        $f0, -0x4($t2)
    ctx->pc = 0x345924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x345928: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x345928u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34592c: 0x0  nop
    ctx->pc = 0x34592cu;
    // NOP
    // 0x345930: 0x45000216  bc1f        . + 4 + (0x216 << 2)
    ctx->pc = 0x345930u;
    {
        const bool branch_taken_0x345930 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x345934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345930u;
        // 0x345934: 0x3c060062  lui         $a2, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345930) {
            ctx->pc = 0x34618Cu;
            goto label_34618c;
        }
    }
    ctx->pc = 0x345938u;
    // 0x345938: 0xc5400000  lwc1        $f0, 0x0($t2)
    ctx->pc = 0x345938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34593c: 0x24d4c2c8  addiu       $s4, $a2, -0x3D38
    ctx->pc = 0x34593cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 6), 4294951624));
    // 0x345940: 0x46150840  add.s       $f1, $f1, $f21
    ctx->pc = 0x345940u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[21]);
    // 0x345944: 0x8e8200bc  lw          $v0, 0xBC($s4)
    ctx->pc = 0x345944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 188)));
    // 0x345948: 0x8e8300cc  lw          $v1, 0xCC($s4)
    ctx->pc = 0x345948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 204)));
    // 0x34594c: 0x2c2b821  addu        $s7, $s6, $v0
    ctx->pc = 0x34594cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x345950: 0x8e8400c0  lw          $a0, 0xC0($s4)
    ctx->pc = 0x345950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 192)));
    // 0x345954: 0x8e8500c8  lw          $a1, 0xC8($s4)
    ctx->pc = 0x345954u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 200)));
    // 0x345958: 0x2c31821  addu        $v1, $s6, $v1
    ctx->pc = 0x345958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x34595c: 0x8e8200c4  lw          $v0, 0xC4($s4)
    ctx->pc = 0x34595cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 196)));
    // 0x345960: 0x2c4f021  addu        $fp, $s6, $a0
    ctx->pc = 0x345960u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
    // 0x345964: 0xafa3010c  sw          $v1, 0x10C($sp)
    ctx->pc = 0x345964u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 3));
    // 0x345968: 0x46000d02  mul.s       $f20, $f1, $f0
    ctx->pc = 0x345968u;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x34596c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x34596cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x345970: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x345970u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x345974: 0x2c59021  addu        $s2, $s6, $a1
    ctx->pc = 0x345974u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 5)));
    // 0x345978: 0x8e8400d0  lw          $a0, 0xD0($s4)
    ctx->pc = 0x345978u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 208)));
    // 0x34597c: 0x2c2a821  addu        $s5, $s6, $v0
    ctx->pc = 0x34597cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x345980: 0xe541fff8  swc1        $f1, -0x8($t2)
    ctx->pc = 0x345980u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4294967288), bits); }
    // 0x345984: 0x4606a529  min.s       $f20, $f20, $f6
    ctx->pc = 0x345984u;
    ctx->f[20] = std::min(ctx->f[20], ctx->f[6]);
    // 0x345988: 0x2c42021  addu        $a0, $s6, $a0
    ctx->pc = 0x345988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
    // 0x34598c: 0x4a00011  bltz        $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x34598Cu;
    {
        const bool branch_taken_0x34598c = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x345990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34598Cu;
        // 0x345990: 0xafa400cc  sw          $a0, 0xCC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34598c) {
            ctx->pc = 0x3459D4u;
            goto label_3459d4;
        }
    }
    ctx->pc = 0x345994u;
    // 0x345994: 0x8fa700c8  lw          $a3, 0xC8($sp)
    ctx->pc = 0x345994u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x345998: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x345998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34599c: 0xc4e00010  lwc1        $f0, 0x10($a3)
    ctx->pc = 0x34599cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3459a0: 0xc6420004  lwc1        $f2, 0x4($s2)
    ctx->pc = 0x3459a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3459a4: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x3459a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x3459a8: 0xc6430008  lwc1        $f3, 0x8($s2)
    ctx->pc = 0x3459a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3459ac: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x3459acu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3459b0: 0xe6410000  swc1        $f1, 0x0($s2)
    ctx->pc = 0x3459b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x3459b4: 0xc4e00014  lwc1        $f0, 0x14($a3)
    ctx->pc = 0x3459b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3459b8: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x3459b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x3459bc: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x3459bcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x3459c0: 0xe6420004  swc1        $f2, 0x4($s2)
    ctx->pc = 0x3459c0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x3459c4: 0xc4e00018  lwc1        $f0, 0x18($a3)
    ctx->pc = 0x3459c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3459c8: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x3459c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x3459cc: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x3459ccu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x3459d0: 0xe6430008  swc1        $f3, 0x8($s2)
    ctx->pc = 0x3459d0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
label_3459d4:
    // 0x3459d4: 0x8e8200b4  lw          $v0, 0xB4($s4)
    ctx->pc = 0x3459d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 180)));
    // 0x3459d8: 0x4400010  bltz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3459D8u;
    {
        const bool branch_taken_0x3459d8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3459DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3459D8u;
        // 0x3459dc: 0x2c21021  addu        $v0, $s6, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3459d8) {
            ctx->pc = 0x345A1Cu;
            goto label_345a1c;
        }
    }
    ctx->pc = 0x3459E0u;
    // 0x3459e0: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x3459e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3459e4: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x3459e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3459e8: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x3459e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x3459ec: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x3459ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3459f0: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x3459f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3459f4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x3459f4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3459f8: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x3459f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x3459fc: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x3459fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x345a00: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x345a00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x345a04: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x345a04u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x345a08: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x345a08u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x345a0c: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x345a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x345a10: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x345a10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x345a14: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x345a14u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x345a18: 0xe4430008  swc1        $f3, 0x8($v0)
    ctx->pc = 0x345a18u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_345a1c:
    // 0x345a1c: 0x8e8200c4  lw          $v0, 0xC4($s4)
    ctx->pc = 0x345a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 196)));
    // 0x345a20: 0x4400011  bltz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x345A20u;
    {
        const bool branch_taken_0x345a20 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x345A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345A20u;
        // 0x345a24: 0x8fa200f0  lw          $v0, 0xF0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345a20) {
            ctx->pc = 0x345A68u;
            goto label_345a68;
        }
    }
    ctx->pc = 0x345A28u;
    // 0x345a28: 0xc6a00008  lwc1        $f0, 0x8($s5)
    ctx->pc = 0x345a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x345a2c: 0xc6a1000c  lwc1        $f1, 0xC($s5)
    ctx->pc = 0x345a2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x345a30: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x345a30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x345a34: 0xc6a40000  lwc1        $f4, 0x0($s5)
    ctx->pc = 0x345a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x345a38: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x345a38u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x345a3c: 0xc6a20004  lwc1        $f2, 0x4($s5)
    ctx->pc = 0x345a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x345a40: 0xc6a50010  lwc1        $f5, 0x10($s5)
    ctx->pc = 0x345a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x345a44: 0xc6a30014  lwc1        $f3, 0x14($s5)
    ctx->pc = 0x345a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x345a48: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x345a48u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x345a4c: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x345a4cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x345a50: 0xe7a50030  swc1        $f5, 0x30($sp)
    ctx->pc = 0x345a50u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x345a54: 0xe7a30034  swc1        $f3, 0x34($sp)
    ctx->pc = 0x345a54u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x345a58: 0xe7a60038  swc1        $f6, 0x38($sp)
    ctx->pc = 0x345a58u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x345a5c: 0xe6a40010  swc1        $f4, 0x10($s5)
    ctx->pc = 0x345a5cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 16), bits); }
    // 0x345a60: 0xe6a20014  swc1        $f2, 0x14($s5)
    ctx->pc = 0x345a60u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 20), bits); }
    // 0x345a64: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x345a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_345a68:
    // 0x345a68: 0x12c20010  beq         $s6, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x345A68u;
    {
        const bool branch_taken_0x345a68 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        ctx->pc = 0x345A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345A68u;
        // 0x345a6c: 0x8fa60108  lw          $a2, 0x108($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345a68) {
            ctx->pc = 0x345AACu;
            goto label_345aac;
        }
    }
    ctx->pc = 0x345A70u;
    // 0x345a70: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x345a70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345a74: 0x7fa80130  sq          $t0, 0x130($sp)
    ctx->pc = 0x345a74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 8));
    // 0x345a78: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x345a78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345a7c: 0x7fa90140  sq          $t1, 0x140($sp)
    ctx->pc = 0x345a7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 9));
    // 0x345a80: 0x7faa0150  sq          $t2, 0x150($sp)
    ctx->pc = 0x345a80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 10));
    // 0x345a84: 0x7fab0160  sq          $t3, 0x160($sp)
    ctx->pc = 0x345a84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 11));
    // 0x345a88: 0x7fac0170  sq          $t4, 0x170($sp)
    ctx->pc = 0x345a88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 12));
    // 0x345a8c: 0xc0bb778  jal         func_2EDDE0
    ctx->pc = 0x345A8Cu;
    SET_GPR_U32(ctx, 31, 0x345A94u);
    ctx->pc = 0x345A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345A8Cu;
    // 0x345a90: 0x7fad0180  sq          $t5, 0x180($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x345A8Cu, 0x345A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345A94u;
label_345a94:
    // 0x345a94: 0x7bad0180  lq          $t5, 0x180($sp)
    ctx->pc = 0x345a94u;
    SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x345a98: 0x7bac0170  lq          $t4, 0x170($sp)
    ctx->pc = 0x345a98u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x345a9c: 0x7bab0160  lq          $t3, 0x160($sp)
    ctx->pc = 0x345a9cu;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x345aa0: 0x7baa0150  lq          $t2, 0x150($sp)
    ctx->pc = 0x345aa0u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x345aa4: 0x7ba90140  lq          $t1, 0x140($sp)
    ctx->pc = 0x345aa4u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x345aa8: 0x7ba80130  lq          $t0, 0x130($sp)
    ctx->pc = 0x345aa8u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_345aac:
    // 0x345aac: 0x126001b1  beqz        $s3, . + 4 + (0x1B1 << 2)
    ctx->pc = 0x345AACu;
    {
        const bool branch_taken_0x345aac = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x345AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345AACu;
        // 0x345ab0: 0x8fa300f0  lw          $v1, 0xF0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345aac) {
            ctx->pc = 0x346174u;
            goto label_346174;
        }
    }
    ctx->pc = 0x345AB4u;
    // 0x345ab4: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x345ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x345ab8: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x345ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x345abc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x345abcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x345ac0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x345ac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x345ac4: 0x50400029  beql        $v0, $zero, . + 4 + (0x29 << 2)
    ctx->pc = 0x345AC4u;
    {
        const bool branch_taken_0x345ac4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x345ac4) {
            ctx->pc = 0x345AC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x345AC4u;
            // 0x345ac8: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x345B6Cu;
            goto label_345b6c;
        }
    }
    ctx->pc = 0x345ACCu;
    // 0x345acc: 0x8e8200c8  lw          $v0, 0xC8($s4)
    ctx->pc = 0x345accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 200)));
    // 0x345ad0: 0x4420023  bltzl       $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x345AD0u;
    {
        const bool branch_taken_0x345ad0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x345ad0) {
            ctx->pc = 0x345AD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x345AD0u;
            // 0x345ad4: 0x22b8821  addu        $s1, $s1, $t3 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 11)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x345B60u;
            goto label_345b60;
        }
    }
    ctx->pc = 0x345AD8u;
    // 0x345ad8: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x345ad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x345adc: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x345adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x345ae0: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x345ae0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x345ae4: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x345ae4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x345ae8: 0xe6220000  swc1        $f2, 0x0($s1)
    ctx->pc = 0x345ae8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x345aec: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x345aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x345af0: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x345af0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x345af4: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x345af4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x345af8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x345af8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x345afc: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x345afcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x345b00: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x345b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x345b04: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x345b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x345b08: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x345b08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x345b0c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x345b0cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x345b10: 0xe6210008  swc1        $f1, 0x8($s1)
    ctx->pc = 0x345b10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x345b14: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x345b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x345b18: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x345b18u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x345b1c: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x345b1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x345b20: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x345b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x345b24: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x345b24u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x345b28: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x345b28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x345b2c: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x345b2cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x345b30: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x345b30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x345b34: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x345b34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x345b38: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x345b38u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x345b3c: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x345b3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x345b40: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x345b40u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x345b44: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x345b44u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x345b48: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x345b48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x345b4c: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x345b4cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x345b50: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x345b50u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x345b54: 0x461615a8  max.s       $f22, $f2, $f22
    ctx->pc = 0x345b54u;
    ctx->f[22] = std::max(ctx->f[2], ctx->f[22]);
    // 0x345b58: 0x22b8821  addu        $s1, $s1, $t3
    ctx->pc = 0x345b58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 11)));
    // 0x345b5c: 0x0  nop
    ctx->pc = 0x345b5cu;
    // NOP
label_345b60:
    // 0x345b60: 0x18b6021  addu        $t4, $t4, $t3
    ctx->pc = 0x345b60u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 11)));
    // 0x345b64: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x345b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x345b68: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x345b68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_345b6c:
    // 0x345b6c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x345b6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x345b70: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x345b70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x345b74: 0x104000d4  beqz        $v0, . + 4 + (0xD4 << 2)
    ctx->pc = 0x345B74u;
    {
        const bool branch_taken_0x345b74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x345B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345B74u;
        // 0x345b78: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345b74) {
            ctx->pc = 0x345EC8u;
            goto label_345ec8;
        }
    }
    ctx->pc = 0x345B7Cu;
    // 0x345b7c: 0x2463c2c8  addiu       $v1, $v1, -0x3D38
    ctx->pc = 0x345b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951624));
    // 0x345b80: 0x8c6200c4  lw          $v0, 0xC4($v1)
    ctx->pc = 0x345b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
    // 0x345b84: 0x4400011  bltz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x345B84u;
    {
        const bool branch_taken_0x345b84 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x345B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345B84u;
        // 0x345b88: 0xc7a10030  lwc1        $f1, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x345b84) {
            ctx->pc = 0x345BCCu;
            goto label_345bcc;
        }
    }
    ctx->pc = 0x345B8Cu;
    // 0x345b8c: 0x46180832  c.eq.s      $f1, $f24
    ctx->pc = 0x345b8cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[24])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x345b90: 0x0  nop
    ctx->pc = 0x345b90u;
    // NOP
    // 0x345b94: 0x45030004  bc1tl       . + 4 + (0x4 << 2)
    ctx->pc = 0x345B94u;
    {
        const bool branch_taken_0x345b94 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x345b94) {
            ctx->pc = 0x345B98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x345B94u;
            // 0x345b98: 0xe7b70030  swc1        $f23, 0x30($sp) (Delay Slot)
            { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x345BA8u;
            goto label_345ba8;
        }
    }
    ctx->pc = 0x345B9Cu;
    // 0x345b9c: 0xc6a00010  lwc1        $f0, 0x10($s5)
    ctx->pc = 0x345b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x345ba0: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x345ba0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x345ba4: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x345ba4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_345ba8:
    // 0x345ba8: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x345ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x345bac: 0x46180832  c.eq.s      $f1, $f24
    ctx->pc = 0x345bacu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[24])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x345bb0: 0x0  nop
    ctx->pc = 0x345bb0u;
    // NOP
    // 0x345bb4: 0x45030004  bc1tl       . + 4 + (0x4 << 2)
    ctx->pc = 0x345BB4u;
    {
        const bool branch_taken_0x345bb4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x345bb4) {
            ctx->pc = 0x345BB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x345BB4u;
            // 0x345bb8: 0xe7b70034  swc1        $f23, 0x34($sp) (Delay Slot)
            { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x345BC8u;
            goto label_345bc8;
        }
    }
    ctx->pc = 0x345BBCu;
    // 0x345bbc: 0xc6a00014  lwc1        $f0, 0x14($s5)
    ctx->pc = 0x345bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x345bc0: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x345bc0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x345bc4: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x345bc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_345bc8:
    // 0x345bc8: 0xe7b70038  swc1        $f23, 0x38($sp)
    ctx->pc = 0x345bc8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_345bcc:
    // 0x345bcc: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x345bccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x345bd0: 0x2483c2c8  addiu       $v1, $a0, -0x3D38
    ctx->pc = 0x345bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951624));
    // 0x345bd4: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x345bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x61C394u));
    // 0x345bd8: 0x4430005  bgezl       $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x345BD8u;
    {
        const bool branch_taken_0x345bd8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x345bd8) {
            ctx->pc = 0x345BDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x345BD8u;
            // 0x345bdc: 0x8c6200c4  lw          $v0, 0xC4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x345BF0u;
            goto label_345bf0;
        }
    }
    ctx->pc = 0x345BE0u;
    // 0x345be0: 0x8fa50110  lw          $a1, 0x110($sp)
    ctx->pc = 0x345be0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x345be4: 0x10a00058  beqz        $a1, . + 4 + (0x58 << 2)
    ctx->pc = 0x345BE4u;
    {
        const bool branch_taken_0x345be4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x345be4) {
            ctx->pc = 0x345D48u;
            goto label_345d48;
        }
    }
    ctx->pc = 0x345BECu;
    // 0x345bec: 0x8c6200c4  lw          $v0, 0xC4($v1)
    ctx->pc = 0x345becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
label_345bf0:
    // 0x345bf0: 0x6a060037  ldl         $a2, 0x37($s0)
    ctx->pc = 0x345bf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x345bf4: 0x6e060030  ldr         $a2, 0x30($s0)
    ctx->pc = 0x345bf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x345bf8: 0x8e070038  lw          $a3, 0x38($s0)
    ctx->pc = 0x345bf8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x345bfc: 0xb3a60027  sdl         $a2, 0x27($sp)
    ctx->pc = 0x345bfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x345c00: 0xb7a60020  sdr         $a2, 0x20($sp)
    ctx->pc = 0x345c00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x345c04: 0xafa70028  sw          $a3, 0x28($sp)
    ctx->pc = 0x345c04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 7));
    // 0x345c08: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x345c08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x345c0c: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x345c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x345c10: 0x4400019  bltz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x345C10u;
    {
        const bool branch_taken_0x345c10 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x345C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345C10u;
        // 0x345c14: 0xae000038  sw          $zero, 0x38($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345c10) {
            ctx->pc = 0x345C78u;
            goto label_345c78;
        }
    }
    ctx->pc = 0x345C18u;
    // 0x345c18: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x345c18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x345c1c: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x345c1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x345c20: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x345c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x345c24: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x345c24u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x345c28: 0xc6030008  lwc1        $f3, 0x8($s0)
    ctx->pc = 0x345c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x345c2c: 0xe6010000  swc1        $f1, 0x0($s0)
    ctx->pc = 0x345c2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x345c30: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x345c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x345c34: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x345c34u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x345c38: 0xe6020004  swc1        $f2, 0x4($s0)
    ctx->pc = 0x345c38u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x345c3c: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x345c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x345c40: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x345c40u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x345c44: 0xe6030008  swc1        $f3, 0x8($s0)
    ctx->pc = 0x345c44u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x345c48: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x345c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x345c4c: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x345c4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x345c50: 0xc6020014  lwc1        $f2, 0x14($s0)
    ctx->pc = 0x345c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x345c54: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x345c54u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x345c58: 0xc6030018  lwc1        $f3, 0x18($s0)
    ctx->pc = 0x345c58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x345c5c: 0xe6010010  swc1        $f1, 0x10($s0)
    ctx->pc = 0x345c5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x345c60: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x345c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x345c64: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x345c64u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x345c68: 0xe6020014  swc1        $f2, 0x14($s0)
    ctx->pc = 0x345c68u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x345c6c: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x345c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x345c70: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x345c70u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x345c74: 0xe6030018  swc1        $f3, 0x18($s0)
    ctx->pc = 0x345c74u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
label_345c78:
    // 0x345c78: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x345c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
    // 0x345c7c: 0x4400019  bltz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x345C7Cu;
    {
        const bool branch_taken_0x345c7c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x345C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345C7Cu;
        // 0x345c80: 0x8fa6010c  lw          $a2, 0x10C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345c7c) {
            ctx->pc = 0x345CE4u;
            goto label_345ce4;
        }
    }
    ctx->pc = 0x345C84u;
    // 0x345c84: 0x1a0282d  daddu       $a1, $t5, $zero
    ctx->pc = 0x345c84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345c88: 0x7fa80130  sq          $t0, 0x130($sp)
    ctx->pc = 0x345c88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 8));
    // 0x345c8c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x345c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x345c90: 0x7fa90140  sq          $t1, 0x140($sp)
    ctx->pc = 0x345c90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 9));
    // 0x345c94: 0x7faa0150  sq          $t2, 0x150($sp)
    ctx->pc = 0x345c94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 10));
    // 0x345c98: 0x7fab0160  sq          $t3, 0x160($sp)
    ctx->pc = 0x345c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 11));
    // 0x345c9c: 0x7fac0170  sq          $t4, 0x170($sp)
    ctx->pc = 0x345c9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 12));
    // 0x345ca0: 0xc103dd4  jal         func_40F750
    ctx->pc = 0x345CA0u;
    SET_GPR_U32(ctx, 31, 0x345CA8u);
    ctx->pc = 0x345CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345CA0u;
    // 0x345ca4: 0x7fad0180  sq          $t5, 0x180($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40F750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F750u, 0x345CA0u, 0x345CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345CA8u;
label_345ca8:
    // 0x345ca8: 0x7ba30040  lq          $v1, 0x40($sp)
    ctx->pc = 0x345ca8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x345cac: 0x7e230000  sq          $v1, 0x0($s1)
    ctx->pc = 0x345cacu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 3));
    // 0x345cb0: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x345cb0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x345cb4: 0x7e220010  sq          $v0, 0x10($s1)
    ctx->pc = 0x345cb4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
    // 0x345cb8: 0x7ba30060  lq          $v1, 0x60($sp)
    ctx->pc = 0x345cb8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x345cbc: 0x7e230020  sq          $v1, 0x20($s1)
    ctx->pc = 0x345cbcu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 3));
    // 0x345cc0: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x345cc0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x345cc4: 0x7e220030  sq          $v0, 0x30($s1)
    ctx->pc = 0x345cc4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), GPR_VEC(ctx, 2));
    // 0x345cc8: 0x7ba80130  lq          $t0, 0x130($sp)
    ctx->pc = 0x345cc8u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x345ccc: 0x7ba90140  lq          $t1, 0x140($sp)
    ctx->pc = 0x345cccu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x345cd0: 0x7baa0150  lq          $t2, 0x150($sp)
    ctx->pc = 0x345cd0u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x345cd4: 0x7bab0160  lq          $t3, 0x160($sp)
    ctx->pc = 0x345cd4u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x345cd8: 0x7bac0170  lq          $t4, 0x170($sp)
    ctx->pc = 0x345cd8u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x345cdc: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x345CDCu;
    {
        const bool branch_taken_0x345cdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x345CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345CDCu;
        // 0x345ce0: 0x7bad0180  lq          $t5, 0x180($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345cdc) {
            ctx->pc = 0x345E20u;
            goto label_345e20;
        }
    }
    ctx->pc = 0x345CE4u;
label_345ce4:
    // 0x345ce4: 0x8fa60110  lw          $a2, 0x110($sp)
    ctx->pc = 0x345ce4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x345ce8: 0x1a0282d  daddu       $a1, $t5, $zero
    ctx->pc = 0x345ce8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345cec: 0x7fa80130  sq          $t0, 0x130($sp)
    ctx->pc = 0x345cecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 8));
    // 0x345cf0: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x345cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x345cf4: 0x7fa90140  sq          $t1, 0x140($sp)
    ctx->pc = 0x345cf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 9));
    // 0x345cf8: 0x7faa0150  sq          $t2, 0x150($sp)
    ctx->pc = 0x345cf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 10));
    // 0x345cfc: 0x7fab0160  sq          $t3, 0x160($sp)
    ctx->pc = 0x345cfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 11));
    // 0x345d00: 0x7fac0170  sq          $t4, 0x170($sp)
    ctx->pc = 0x345d00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 12));
    // 0x345d04: 0xc103dd4  jal         func_40F750
    ctx->pc = 0x345D04u;
    SET_GPR_U32(ctx, 31, 0x345D0Cu);
    ctx->pc = 0x345D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345D04u;
    // 0x345d08: 0x7fad0180  sq          $t5, 0x180($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40F750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F750u, 0x345D04u, 0x345D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345D0Cu;
label_345d0c:
    // 0x345d0c: 0x7ba30080  lq          $v1, 0x80($sp)
    ctx->pc = 0x345d0cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x345d10: 0x7e230000  sq          $v1, 0x0($s1)
    ctx->pc = 0x345d10u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 3));
    // 0x345d14: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x345d14u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x345d18: 0x7e220010  sq          $v0, 0x10($s1)
    ctx->pc = 0x345d18u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
    // 0x345d1c: 0x7ba300a0  lq          $v1, 0xA0($sp)
    ctx->pc = 0x345d1cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x345d20: 0x7e230020  sq          $v1, 0x20($s1)
    ctx->pc = 0x345d20u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 3));
    // 0x345d24: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x345d24u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x345d28: 0x7e220030  sq          $v0, 0x30($s1)
    ctx->pc = 0x345d28u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), GPR_VEC(ctx, 2));
    // 0x345d2c: 0x7bad0180  lq          $t5, 0x180($sp)
    ctx->pc = 0x345d2cu;
    SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x345d30: 0x7bac0170  lq          $t4, 0x170($sp)
    ctx->pc = 0x345d30u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x345d34: 0x7bab0160  lq          $t3, 0x160($sp)
    ctx->pc = 0x345d34u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x345d38: 0x7baa0150  lq          $t2, 0x150($sp)
    ctx->pc = 0x345d38u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x345d3c: 0x7ba90140  lq          $t1, 0x140($sp)
    ctx->pc = 0x345d3cu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x345d40: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x345D40u;
    {
        const bool branch_taken_0x345d40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x345D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345D40u;
        // 0x345d44: 0x7ba80130  lq          $t0, 0x130($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345d40) {
            ctx->pc = 0x345E20u;
            goto label_345e20;
        }
    }
    ctx->pc = 0x345D48u;
label_345d48:
    // 0x345d48: 0x518d0016  beql        $t4, $t5, . + 4 + (0x16 << 2)
    ctx->pc = 0x345D48u;
    {
        const bool branch_taken_0x345d48 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 13));
        if (branch_taken_0x345d48) {
            ctx->pc = 0x345D4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x345D48u;
            // 0x345d4c: 0x8c6200c4  lw          $v0, 0xC4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x345DA4u;
            goto label_345da4;
        }
    }
    ctx->pc = 0x345D50u;
    // 0x345d50: 0x6a060027  ldl         $a2, 0x27($s0)
    ctx->pc = 0x345d50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x345d54: 0x6e060020  ldr         $a2, 0x20($s0)
    ctx->pc = 0x345d54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x345d58: 0x8e070028  lw          $a3, 0x28($s0)
    ctx->pc = 0x345d58u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x345d5c: 0xb2260027  sdl         $a2, 0x27($s1)
    ctx->pc = 0x345d5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x345d60: 0xb6260020  sdr         $a2, 0x20($s1)
    ctx->pc = 0x345d60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x345d64: 0xae270028  sw          $a3, 0x28($s1)
    ctx->pc = 0x345d64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 7));
    // 0x345d68: 0x6a050017  ldl         $a1, 0x17($s0)
    ctx->pc = 0x345d68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x345d6c: 0x6e050010  ldr         $a1, 0x10($s0)
    ctx->pc = 0x345d6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x345d70: 0x8e060018  lw          $a2, 0x18($s0)
    ctx->pc = 0x345d70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x345d74: 0xb2250017  sdl         $a1, 0x17($s1)
    ctx->pc = 0x345d74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x345d78: 0xb6250010  sdr         $a1, 0x10($s1)
    ctx->pc = 0x345d78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x345d7c: 0xae260018  sw          $a2, 0x18($s1)
    ctx->pc = 0x345d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 6));
    // 0x345d80: 0x6a040007  ldl         $a0, 0x7($s0)
    ctx->pc = 0x345d80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x345d84: 0x6e040000  ldr         $a0, 0x0($s0)
    ctx->pc = 0x345d84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x345d88: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x345d88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x345d8c: 0xb2240007  sdl         $a0, 0x7($s1)
    ctx->pc = 0x345d8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x345d90: 0xb6240000  sdr         $a0, 0x0($s1)
    ctx->pc = 0x345d90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x345d94: 0xae250008  sw          $a1, 0x8($s1)
    ctx->pc = 0x345d94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 5));
    // 0x345d98: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x345d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x345d9c: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x345d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x345da0: 0x8c6200c4  lw          $v0, 0xC4($v1)
    ctx->pc = 0x345da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
label_345da4:
    // 0x345da4: 0x6a030037  ldl         $v1, 0x37($s0)
    ctx->pc = 0x345da4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x345da8: 0x6e030030  ldr         $v1, 0x30($s0)
    ctx->pc = 0x345da8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x345dac: 0x8e040038  lw          $a0, 0x38($s0)
    ctx->pc = 0x345dacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x345db0: 0xb3a30027  sdl         $v1, 0x27($sp)
    ctx->pc = 0x345db0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x345db4: 0xb7a30020  sdr         $v1, 0x20($sp)
    ctx->pc = 0x345db4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x345db8: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x345db8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x345dbc: 0x4400018  bltz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x345DBCu;
    {
        const bool branch_taken_0x345dbc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x345DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345DBCu;
        // 0x345dc0: 0xc7a00030  lwc1        $f0, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x345dbc) {
            ctx->pc = 0x345E20u;
            goto label_345e20;
        }
    }
    ctx->pc = 0x345DC4u;
    // 0x345dc4: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x345dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x345dc8: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x345dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x345dcc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x345dccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x345dd0: 0xc6030008  lwc1        $f3, 0x8($s0)
    ctx->pc = 0x345dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x345dd4: 0xe6010000  swc1        $f1, 0x0($s0)
    ctx->pc = 0x345dd4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x345dd8: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x345dd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x345ddc: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x345ddcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x345de0: 0xe6020004  swc1        $f2, 0x4($s0)
    ctx->pc = 0x345de0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x345de4: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x345de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x345de8: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x345de8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x345dec: 0xe6030008  swc1        $f3, 0x8($s0)
    ctx->pc = 0x345decu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x345df0: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x345df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x345df4: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x345df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x345df8: 0xc6020014  lwc1        $f2, 0x14($s0)
    ctx->pc = 0x345df8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x345dfc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x345dfcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x345e00: 0xc6030018  lwc1        $f3, 0x18($s0)
    ctx->pc = 0x345e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x345e04: 0xe6010010  swc1        $f1, 0x10($s0)
    ctx->pc = 0x345e04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x345e08: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x345e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x345e0c: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x345e0cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x345e10: 0xe6020014  swc1        $f2, 0x14($s0)
    ctx->pc = 0x345e10u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x345e14: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x345e14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x345e18: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x345e18u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x345e1c: 0xe6030018  swc1        $f3, 0x18($s0)
    ctx->pc = 0x345e1cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
label_345e20:
    // 0x345e20: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x345e20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x345e24: 0xc7a20020  lwc1        $f2, 0x20($sp)
    ctx->pc = 0x345e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x345e28: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x345e28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x345e2c: 0xc6210030  lwc1        $f1, 0x30($s1)
    ctx->pc = 0x345e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x345e30: 0xc6230034  lwc1        $f3, 0x34($s1)
    ctx->pc = 0x345e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x345e34: 0xc6240038  lwc1        $f4, 0x38($s1)
    ctx->pc = 0x345e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x345e38: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x345e38u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x345e3c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x345e3cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x345e40: 0xe6210030  swc1        $f1, 0x30($s1)
    ctx->pc = 0x345e40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
    // 0x345e44: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x345e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x345e48: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x345e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x345e4c: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x345e4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x345e50: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x345e50u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x345e54: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x345e54u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x345e58: 0xe6230034  swc1        $f3, 0x34($s1)
    ctx->pc = 0x345e58u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x345e5c: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x345e5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x345e60: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x345e60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x345e64: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x345e64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x345e68: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x345e68u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x345e6c: 0x46012100  add.s       $f4, $f4, $f1
    ctx->pc = 0x345e6cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
    // 0x345e70: 0xe6240038  swc1        $f4, 0x38($s1)
    ctx->pc = 0x345e70u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
    // 0x345e74: 0xc6220030  lwc1        $f2, 0x30($s1)
    ctx->pc = 0x345e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x345e78: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x345e78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x345e7c: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x345e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x345e80: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x345e80u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x345e84: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x345e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x345e88: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x345e88u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x345e8c: 0xc6210034  lwc1        $f1, 0x34($s1)
    ctx->pc = 0x345e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x345e90: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x345e90u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x345e94: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x345e94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x345e98: 0xc6200038  lwc1        $f0, 0x38($s1)
    ctx->pc = 0x345e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x345e9c: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x345e9cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x345ea0: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x345ea0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x345ea4: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x345ea4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x345ea8: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x345ea8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x345eac: 0x22b8821  addu        $s1, $s1, $t3
    ctx->pc = 0x345eacu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 11)));
    // 0x345eb0: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x345eb0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x345eb4: 0x18b6021  addu        $t4, $t4, $t3
    ctx->pc = 0x345eb4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 11)));
    // 0x345eb8: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x345eb8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x345ebc: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x345ebcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x345ec0: 0x461615a8  max.s       $f22, $f2, $f22
    ctx->pc = 0x345ec0u;
    ctx->f[22] = std::max(ctx->f[2], ctx->f[22]);
    // 0x345ec4: 0x0  nop
    ctx->pc = 0x345ec4u;
    // NOP
label_345ec8:
    // 0x345ec8: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x345ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x345ecc: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x345eccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x345ed0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x345ed0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345ed4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x345ed4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x345ed8: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x345ed8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x345edc: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x345EDCu;
    {
        const bool branch_taken_0x345edc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x345EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345EDCu;
        // 0x345ee0: 0xe31024  and         $v0, $a3, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345edc) {
            ctx->pc = 0x345F70u;
            goto label_345f70;
        }
    }
    ctx->pc = 0x345EE4u;
    // 0x345ee4: 0x3c070062  lui         $a3, 0x62
    ctx->pc = 0x345ee4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)98 << 16));
    // 0x345ee8: 0x24e7c2c8  addiu       $a3, $a3, -0x3D38
    ctx->pc = 0x345ee8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294951624));
    // 0x345eec: 0x8ce200c4  lw          $v0, 0xC4($a3)
    ctx->pc = 0x345eecu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x61C38Cu));
    // 0x345ef0: 0x440000c  bltz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x345EF0u;
    {
        const bool branch_taken_0x345ef0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x345EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345EF0u;
        // 0x345ef4: 0x8fa2012c  lw          $v0, 0x12C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345ef0) {
            ctx->pc = 0x345F24u;
            goto label_345f24;
        }
    }
    ctx->pc = 0x345EF8u;
    // 0x345ef8: 0xc6a00008  lwc1        $f0, 0x8($s5)
    ctx->pc = 0x345ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x345efc: 0xc6a10000  lwc1        $f1, 0x0($s5)
    ctx->pc = 0x345efcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x345f00: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x345f00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x345f04: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x345f04u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x345f08: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x345f08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x345f0c: 0xc6a0000c  lwc1        $f0, 0xC($s5)
    ctx->pc = 0x345f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x345f10: 0xc6a10004  lwc1        $f1, 0x4($s5)
    ctx->pc = 0x345f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x345f14: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x345f14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x345f18: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x345f18u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x345f1c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x345F1Cu;
    {
        const bool branch_taken_0x345f1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x345F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345F1Cu;
        // 0x345f20: 0xe4410004  swc1        $f1, 0x4($v0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x345f1c) {
            ctx->pc = 0x345F48u;
            goto label_345f48;
        }
    }
    ctx->pc = 0x345F24u;
label_345f24:
    // 0x345f24: 0x8fa300e4  lw          $v1, 0xE4($sp)
    ctx->pc = 0x345f24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x345f28: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x345f28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x345f2c: 0x10640006  beq         $v1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x345F2Cu;
    {
        const bool branch_taken_0x345f2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x345F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345F2Cu;
        // 0x345f30: 0x8fa5012c  lw          $a1, 0x12C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345f2c) {
            ctx->pc = 0x345F48u;
            goto label_345f48;
        }
    }
    ctx->pc = 0x345F34u;
    // 0x345f34: 0x8fa6011c  lw          $a2, 0x11C($sp)
    ctx->pc = 0x345f34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
    // 0x345f38: 0x68c70007  ldl         $a3, 0x7($a2)
    ctx->pc = 0x345f38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x345f3c: 0x6cc70000  ldr         $a3, 0x0($a2)
    ctx->pc = 0x345f3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x345f40: 0xb0a70007  sdl         $a3, 0x7($a1)
    ctx->pc = 0x345f40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x345f44: 0xb4a70000  sdr         $a3, 0x0($a1)
    ctx->pc = 0x345f44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_345f48:
    // 0x345f48: 0x8fa5012c  lw          $a1, 0x12C($sp)
    ctx->pc = 0x345f48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
    // 0x345f4c: 0x8fa60100  lw          $a2, 0x100($sp)
    ctx->pc = 0x345f4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x345f50: 0x8e670000  lw          $a3, 0x0($s3)
    ctx->pc = 0x345f50u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x345f54: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x345f54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x345f58: 0x8fa200e4  lw          $v0, 0xE4($sp)
    ctx->pc = 0x345f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x345f5c: 0xafa5012c  sw          $a1, 0x12C($sp)
    ctx->pc = 0x345f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 5));
    // 0x345f60: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x345f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x345f64: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x345f64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x345f68: 0xafa200e4  sw          $v0, 0xE4($sp)
    ctx->pc = 0x345f68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 2));
    // 0x345f6c: 0xe31024  and         $v0, $a3, $v1
    ctx->pc = 0x345f6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
label_345f70:
    // 0x345f70: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x345f70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x345f74: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x345F74u;
    {
        const bool branch_taken_0x345f74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x345F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345F74u;
        // 0x345f78: 0xe31024  and         $v0, $a3, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345f74) {
            ctx->pc = 0x346044u;
            goto label_346044;
        }
    }
    ctx->pc = 0x345F7Cu;
    // 0x345f7c: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x345f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x345f80: 0x2463c2c8  addiu       $v1, $v1, -0x3D38
    ctx->pc = 0x345f80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951624));
    // 0x345f84: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x345f84u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x61C384u));
    // 0x345f88: 0x440001e  bltz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x345F88u;
    {
        const bool branch_taken_0x345f88 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x345F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345F88u;
        // 0x345f8c: 0x8fa200d4  lw          $v0, 0xD4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345f88) {
            ctx->pc = 0x346004u;
            goto label_346004;
        }
    }
    ctx->pc = 0x345F90u;
    // 0x345f90: 0xc6e00010  lwc1        $f0, 0x10($s7)
    ctx->pc = 0x345f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x345f94: 0xc6e10000  lwc1        $f1, 0x0($s7)
    ctx->pc = 0x345f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x345f98: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x345f98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x345f9c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x345f9cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x345fa0: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x345fa0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x345fa4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x345fa4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x345fa8: 0xa1220000  sb          $v0, 0x0($t1)
    ctx->pc = 0x345fa8u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x345fac: 0xc6e00014  lwc1        $f0, 0x14($s7)
    ctx->pc = 0x345facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x345fb0: 0xc6e10004  lwc1        $f1, 0x4($s7)
    ctx->pc = 0x345fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x345fb4: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x345fb4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x345fb8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x345fb8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x345fbc: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x345fbcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x345fc0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x345fc0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x345fc4: 0xa1220001  sb          $v0, 0x1($t1)
    ctx->pc = 0x345fc4u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x345fc8: 0xc6e00018  lwc1        $f0, 0x18($s7)
    ctx->pc = 0x345fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x345fcc: 0xc6e10008  lwc1        $f1, 0x8($s7)
    ctx->pc = 0x345fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x345fd0: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x345fd0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x345fd4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x345fd4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x345fd8: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x345fd8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x345fdc: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x345fdcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x345fe0: 0xa1220002  sb          $v0, 0x2($t1)
    ctx->pc = 0x345fe0u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x345fe4: 0xc6e0001c  lwc1        $f0, 0x1C($s7)
    ctx->pc = 0x345fe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x345fe8: 0xc6e1000c  lwc1        $f1, 0xC($s7)
    ctx->pc = 0x345fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x345fec: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x345fecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x345ff0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x345ff0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x345ff4: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x345ff4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x345ff8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x345ff8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x345ffc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x345FFCu;
    {
        const bool branch_taken_0x345ffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x346000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345FFCu;
        // 0x346000: 0xa1220003  sb          $v0, 0x3($t1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 9), 3), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345ffc) {
            ctx->pc = 0x346020u;
            goto label_346020;
        }
    }
    ctx->pc = 0x346004u;
label_346004:
    // 0x346004: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x346004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x346008: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x346008u;
    {
        const bool branch_taken_0x346008 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x34600Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346008u;
        // 0x34600c: 0x8fa40124  lw          $a0, 0x124($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346008) {
            ctx->pc = 0x346020u;
            goto label_346020;
        }
    }
    ctx->pc = 0x346010u;
    // 0x346010: 0x88850003  lwl         $a1, 0x3($a0)
    ctx->pc = 0x346010u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 5) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 5, (int32_t)merged); }
    // 0x346014: 0x98850000  lwr         $a1, 0x0($a0)
    ctx->pc = 0x346014u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 5) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 5) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 5, merged64); }
    // 0x346018: 0xa9250003  swl         $a1, 0x3($t1)
    ctx->pc = 0x346018u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 5); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x34601c: 0xb9250000  swr         $a1, 0x0($t1)
    ctx->pc = 0x34601cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 5); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_346020:
    // 0x346020: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x346020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x346024: 0x8fa400d4  lw          $a0, 0xD4($sp)
    ctx->pc = 0x346024u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x346028: 0x8fa500f8  lw          $a1, 0xF8($sp)
    ctx->pc = 0x346028u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34602c: 0x1234821  addu        $t1, $t1, $v1
    ctx->pc = 0x34602cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x346030: 0x8e670000  lw          $a3, 0x0($s3)
    ctx->pc = 0x346030u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x346034: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x346034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x346038: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x346038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x34603c: 0xafa400d4  sw          $a0, 0xD4($sp)
    ctx->pc = 0x34603cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 4));
    // 0x346040: 0xe31024  and         $v0, $a3, $v1
    ctx->pc = 0x346040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
label_346044:
    // 0x346044: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x346044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x346048: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x346048u;
    {
        const bool branch_taken_0x346048 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34604Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346048u;
        // 0x34604c: 0x3c060062  lui         $a2, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346048) {
            ctx->pc = 0x3460FCu;
            goto label_3460fc;
        }
    }
    ctx->pc = 0x346050u;
    // 0x346050: 0x24c6c2c8  addiu       $a2, $a2, -0x3D38
    ctx->pc = 0x346050u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294951624));
    // 0x346054: 0x8cc200c0  lw          $v0, 0xC0($a2)
    ctx->pc = 0x346054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 192)));
    // 0x346058: 0x4400016  bltz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x346058u;
    {
        const bool branch_taken_0x346058 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x34605Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346058u;
        // 0x34605c: 0x8fa700dc  lw          $a3, 0xDC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346058) {
            ctx->pc = 0x3460B4u;
            goto label_3460b4;
        }
    }
    ctx->pc = 0x346060u;
    // 0x346060: 0xc7c00010  lwc1        $f0, 0x10($fp)
    ctx->pc = 0x346060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x346064: 0xc7c10000  lwc1        $f1, 0x0($fp)
    ctx->pc = 0x346064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x346068: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x346068u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x34606c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x34606cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x346070: 0xe5010000  swc1        $f1, 0x0($t0)
    ctx->pc = 0x346070u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x346074: 0xc7c00014  lwc1        $f0, 0x14($fp)
    ctx->pc = 0x346074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x346078: 0xc7c10004  lwc1        $f1, 0x4($fp)
    ctx->pc = 0x346078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34607c: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x34607cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x346080: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x346080u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x346084: 0xe5010004  swc1        $f1, 0x4($t0)
    ctx->pc = 0x346084u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    // 0x346088: 0xc7c00018  lwc1        $f0, 0x18($fp)
    ctx->pc = 0x346088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34608c: 0xc7c10008  lwc1        $f1, 0x8($fp)
    ctx->pc = 0x34608cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x346090: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x346090u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x346094: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x346094u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x346098: 0xe5010008  swc1        $f1, 0x8($t0)
    ctx->pc = 0x346098u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
    // 0x34609c: 0xc7c0001c  lwc1        $f0, 0x1C($fp)
    ctx->pc = 0x34609cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3460a0: 0xc7c1000c  lwc1        $f1, 0xC($fp)
    ctx->pc = 0x3460a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3460a4: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x3460a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x3460a8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x3460a8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3460ac: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3460ACu;
    {
        const bool branch_taken_0x3460ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3460B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3460ACu;
        // 0x3460b0: 0xe501000c  swc1        $f1, 0xC($t0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3460ac) {
            ctx->pc = 0x3460E0u;
            goto label_3460e0;
        }
    }
    ctx->pc = 0x3460B4u;
label_3460b4:
    // 0x3460b4: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x3460b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x3460b8: 0x10e20009  beq         $a3, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3460B8u;
    {
        const bool branch_taken_0x3460b8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x3460BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3460B8u;
        // 0x3460bc: 0x8fa30120  lw          $v1, 0x120($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3460b8) {
            ctx->pc = 0x3460E0u;
            goto label_3460e0;
        }
    }
    ctx->pc = 0x3460C0u;
    // 0x3460c0: 0x68640007  ldl         $a0, 0x7($v1)
    ctx->pc = 0x3460c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x3460c4: 0x6c640000  ldr         $a0, 0x0($v1)
    ctx->pc = 0x3460c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x3460c8: 0xb1040007  sdl         $a0, 0x7($t0)
    ctx->pc = 0x3460c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3460cc: 0xb5040000  sdr         $a0, 0x0($t0)
    ctx->pc = 0x3460ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3460d0: 0x6862000f  ldl         $v0, 0xF($v1)
    ctx->pc = 0x3460d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x3460d4: 0x6c620008  ldr         $v0, 0x8($v1)
    ctx->pc = 0x3460d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x3460d8: 0xb102000f  sdl         $v0, 0xF($t0)
    ctx->pc = 0x3460d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3460dc: 0xb5020008  sdr         $v0, 0x8($t0)
    ctx->pc = 0x3460dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3460e0:
    // 0x3460e0: 0x8fa200fc  lw          $v0, 0xFC($sp)
    ctx->pc = 0x3460e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x3460e4: 0x8fa400dc  lw          $a0, 0xDC($sp)
    ctx->pc = 0x3460e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x3460e8: 0x8e670000  lw          $a3, 0x0($s3)
    ctx->pc = 0x3460e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3460ec: 0x1024021  addu        $t0, $t0, $v0
    ctx->pc = 0x3460ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x3460f0: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x3460f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x3460f4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3460f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3460f8: 0xafa400dc  sw          $a0, 0xDC($sp)
    ctx->pc = 0x3460f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 4));
label_3460fc:
    // 0x3460fc: 0xe31024  and         $v0, $a3, $v1
    ctx->pc = 0x3460fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x346100: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x346100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x346104: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x346104u;
    {
        const bool branch_taken_0x346104 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x346108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346104u;
        // 0x346108: 0x3c050062  lui         $a1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346104) {
            ctx->pc = 0x346170u;
            goto label_346170;
        }
    }
    ctx->pc = 0x34610Cu;
    // 0x34610c: 0x24a5c2c8  addiu       $a1, $a1, -0x3D38
    ctx->pc = 0x34610cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951624));
    // 0x346110: 0x8ca200d0  lw          $v0, 0xD0($a1)
    ctx->pc = 0x346110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 208)));
    // 0x346114: 0x4400008  bltz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x346114u;
    {
        const bool branch_taken_0x346114 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x346118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346114u;
        // 0x346118: 0x8fa600cc  lw          $a2, 0xCC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346114) {
            ctx->pc = 0x346138u;
            goto label_346138;
        }
    }
    ctx->pc = 0x34611Cu;
    // 0x34611c: 0x8fa70128  lw          $a3, 0x128($sp)
    ctx->pc = 0x34611cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x346120: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x346120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x346124: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x346124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x346128: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x346128u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x34612c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x34612cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x346130: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x346130u;
    {
        const bool branch_taken_0x346130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x346134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346130u;
        // 0x346134: 0xe4e10000  swc1        $f1, 0x0($a3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x346130) {
            ctx->pc = 0x346154u;
            goto label_346154;
        }
    }
    ctx->pc = 0x346138u;
label_346138:
    // 0x346138: 0x8fa200ec  lw          $v0, 0xEC($sp)
    ctx->pc = 0x346138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x34613c: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x34613cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x346140: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x346140u;
    {
        const bool branch_taken_0x346140 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x346144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346140u;
        // 0x346144: 0x8fa40118  lw          $a0, 0x118($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346140) {
            ctx->pc = 0x346154u;
            goto label_346154;
        }
    }
    ctx->pc = 0x346148u;
    // 0x346148: 0x8fa50128  lw          $a1, 0x128($sp)
    ctx->pc = 0x346148u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34614c: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x34614cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x346150: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x346150u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_346154:
    // 0x346154: 0x8fa60128  lw          $a2, 0x128($sp)
    ctx->pc = 0x346154u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x346158: 0x8fa70104  lw          $a3, 0x104($sp)
    ctx->pc = 0x346158u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x34615c: 0x8fa200ec  lw          $v0, 0xEC($sp)
    ctx->pc = 0x34615cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x346160: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x346160u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x346164: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x346164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x346168: 0xafa60128  sw          $a2, 0x128($sp)
    ctx->pc = 0x346168u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 6));
    // 0x34616c: 0xafa200ec  sw          $v0, 0xEC($sp)
    ctx->pc = 0x34616cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 2));
label_346170:
    // 0x346170: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x346170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_346174:
    // 0x346174: 0x8fa500f4  lw          $a1, 0xF4($sp)
    ctx->pc = 0x346174u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
    // 0x346178: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x346178u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x34617c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x34617cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x346180: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x346180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x346184: 0xafa500f4  sw          $a1, 0xF4($sp)
    ctx->pc = 0x346184u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 5));
    // 0x346188: 0xafa300f0  sw          $v1, 0xF0($sp)
    ctx->pc = 0x346188u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 3));
label_34618c:
    // 0x34618c: 0x8fa60108  lw          $a2, 0x108($sp)
    ctx->pc = 0x34618cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x346190: 0x20b8021  addu        $s0, $s0, $t3
    ctx->pc = 0x346190u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 11)));
    // 0x346194: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x346194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x346198: 0x1ab6821  addu        $t5, $t5, $t3
    ctx->pc = 0x346198u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 11)));
    // 0x34619c: 0x8fa70124  lw          $a3, 0x124($sp)
    ctx->pc = 0x34619cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
    // 0x3461a0: 0x1465021  addu        $t2, $t2, $a2
    ctx->pc = 0x3461a0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
    // 0x3461a4: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x3461a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x3461a8: 0x2c6b021  addu        $s6, $s6, $a2
    ctx->pc = 0x3461a8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 6)));
    // 0x3461ac: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x3461acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x3461b0: 0x8fa600fc  lw          $a2, 0xFC($sp)
    ctx->pc = 0x3461b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x3461b4: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x3461b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3461b8: 0x8fa50120  lw          $a1, 0x120($sp)
    ctx->pc = 0x3461b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x3461bc: 0xafa70124  sw          $a3, 0x124($sp)
    ctx->pc = 0x3461bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 7));
    // 0x3461c0: 0xafa400d0  sw          $a0, 0xD0($sp)
    ctx->pc = 0x3461c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 4));
    // 0x3461c4: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x3461c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x3461c8: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x3461c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x3461cc: 0x8fa700d8  lw          $a3, 0xD8($sp)
    ctx->pc = 0x3461ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x3461d0: 0x8fa3011c  lw          $v1, 0x11C($sp)
    ctx->pc = 0x3461d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
    // 0x3461d4: 0xafa50120  sw          $a1, 0x120($sp)
    ctx->pc = 0x3461d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 5));
    // 0x3461d8: 0xe63821  addu        $a3, $a3, $a2
    ctx->pc = 0x3461d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x3461dc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3461dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3461e0: 0x8fa500e0  lw          $a1, 0xE0($sp)
    ctx->pc = 0x3461e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x3461e4: 0x8fa20114  lw          $v0, 0x114($sp)
    ctx->pc = 0x3461e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 276)));
    // 0x3461e8: 0xafa700d8  sw          $a3, 0xD8($sp)
    ctx->pc = 0x3461e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 7));
    // 0x3461ec: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x3461ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x3461f0: 0xafa3011c  sw          $v1, 0x11C($sp)
    ctx->pc = 0x3461f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 3));
    // 0x3461f4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3461f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3461f8: 0x8fa60118  lw          $a2, 0x118($sp)
    ctx->pc = 0x3461f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x3461fc: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3461fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x346200: 0x8fa70104  lw          $a3, 0x104($sp)
    ctx->pc = 0x346200u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x346204: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x346204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x346208: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x346208u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x34620c: 0xafa500e0  sw          $a1, 0xE0($sp)
    ctx->pc = 0x34620cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 5));
    // 0x346210: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x346210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x346214: 0xafa60118  sw          $a2, 0x118($sp)
    ctx->pc = 0x346214u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 6));
    // 0x346218: 0xafa300e8  sw          $v1, 0xE8($sp)
    ctx->pc = 0x346218u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 3));
    // 0x34621c: 0x1c40fdc0  bgtz        $v0, . + 4 + (-0x240 << 2)
    ctx->pc = 0x34621Cu;
    {
        const bool branch_taken_0x34621c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x346220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34621Cu;
        // 0x346220: 0xafa40114  sw          $a0, 0x114($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34621c) {
            ctx->pc = 0x345920u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_345920;
        }
    }
    ctx->pc = 0x346224u;
label_346224:
    // 0x346224: 0x8fa600f4  lw          $a2, 0xF4($sp)
    ctx->pc = 0x346224u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
    // 0x346228: 0x8fa500c4  lw          $a1, 0xC4($sp)
    ctx->pc = 0x346228u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x34622c: 0x1260004b  beqz        $s3, . + 4 + (0x4B << 2)
    ctx->pc = 0x34622Cu;
    {
        const bool branch_taken_0x34622c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x346230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34622Cu;
        // 0x346230: 0xaca60008  sw          $a2, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34622c) {
            ctx->pc = 0x34635Cu;
            goto label_34635c;
        }
    }
    ctx->pc = 0x346234u;
    // 0x346234: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x346234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x346238: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x346238u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34623c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x34623cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x346240: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x346240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x346244: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x346244u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x346248: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x346248u;
    {
        const bool branch_taken_0x346248 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x34624Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346248u;
        // 0x34624c: 0xae620008  sw          $v0, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346248) {
            ctx->pc = 0x346264u;
            goto label_346264;
        }
    }
    ctx->pc = 0x346250u;
    // 0x346250: 0x8e63001c  lw          $v1, 0x1C($s3)
    ctx->pc = 0x346250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x346254: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x346254u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x346258: 0x8e620020  lw          $v0, 0x20($s3)
    ctx->pc = 0x346258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x34625c: 0xac6d0000  sw          $t5, 0x0($v1)
    ctx->pc = 0x34625cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 13));
    // 0x346260: 0xac4c0000  sw          $t4, 0x0($v0)
    ctx->pc = 0x346260u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 12));
label_346264:
    // 0x346264: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x346264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x346268: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x346268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x34626c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x34626Cu;
    {
        const bool branch_taken_0x34626c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x346270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34626Cu;
        // 0x346270: 0x81880  sll         $v1, $t0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34626c) {
            ctx->pc = 0x346298u;
            goto label_346298;
        }
    }
    ctx->pc = 0x346274u;
    // 0x346274: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x346274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x346278: 0x8fa700d0  lw          $a3, 0xD0($sp)
    ctx->pc = 0x346278u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x34627c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x34627cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x346280: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x346280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x346284: 0x8e640020  lw          $a0, 0x20($s3)
    ctx->pc = 0x346284u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x346288: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x346288u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
    // 0x34628c: 0x8fa200d4  lw          $v0, 0xD4($sp)
    ctx->pc = 0x34628cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x346290: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x346290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x346294: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x346294u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_346298:
    // 0x346298: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x346298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x34629c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x34629cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x3462a0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3462A0u;
    {
        const bool branch_taken_0x3462a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3462A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3462A0u;
        // 0x3462a4: 0x81880  sll         $v1, $t0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3462a0) {
            ctx->pc = 0x3462CCu;
            goto label_3462cc;
        }
    }
    ctx->pc = 0x3462A8u;
    // 0x3462a8: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x3462a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x3462ac: 0x8fa500e0  lw          $a1, 0xE0($sp)
    ctx->pc = 0x3462acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x3462b0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3462b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3462b4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3462b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3462b8: 0x8e640020  lw          $a0, 0x20($s3)
    ctx->pc = 0x3462b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x3462bc: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x3462bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x3462c0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3462c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3462c4: 0x8fa600e4  lw          $a2, 0xE4($sp)
    ctx->pc = 0x3462c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x3462c8: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x3462c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
label_3462cc:
    // 0x3462cc: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x3462ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3462d0: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x3462d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x3462d4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3462D4u;
    {
        const bool branch_taken_0x3462d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3462D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3462D4u;
        // 0x3462d8: 0x81880  sll         $v1, $t0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3462d4) {
            ctx->pc = 0x3462F8u;
            goto label_3462f8;
        }
    }
    ctx->pc = 0x3462DCu;
    // 0x3462dc: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x3462dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x3462e0: 0x8e640020  lw          $a0, 0x20($s3)
    ctx->pc = 0x3462e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x3462e4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3462e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3462e8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3462e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3462ec: 0xac4d0000  sw          $t5, 0x0($v0)
    ctx->pc = 0x3462ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 13));
    // 0x3462f0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3462f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3462f4: 0xac6c0000  sw          $t4, 0x0($v1)
    ctx->pc = 0x3462f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 12));
label_3462f8:
    // 0x3462f8: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x3462f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3462fc: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x3462fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x346300: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x346300u;
    {
        const bool branch_taken_0x346300 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x346304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346300u;
        // 0x346304: 0x81880  sll         $v1, $t0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346300) {
            ctx->pc = 0x34632Cu;
            goto label_34632c;
        }
    }
    ctx->pc = 0x346308u;
    // 0x346308: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x346308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x34630c: 0x8fa700e8  lw          $a3, 0xE8($sp)
    ctx->pc = 0x34630cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x346310: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x346310u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x346314: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x346314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x346318: 0x8e640020  lw          $a0, 0x20($s3)
    ctx->pc = 0x346318u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x34631c: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x34631cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
    // 0x346320: 0x8fa200ec  lw          $v0, 0xEC($sp)
    ctx->pc = 0x346320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x346324: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x346324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x346328: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x346328u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_34632c:
    // 0x34632c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x34632cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x346330: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x346330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x346334: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x346334u;
    {
        const bool branch_taken_0x346334 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x346338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346334u;
        // 0x346338: 0x81880  sll         $v1, $t0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346334) {
            ctx->pc = 0x34635Cu;
            goto label_34635c;
        }
    }
    ctx->pc = 0x34633Cu;
    // 0x34633c: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x34633cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x346340: 0x8fa500d8  lw          $a1, 0xD8($sp)
    ctx->pc = 0x346340u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x346344: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x346344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x346348: 0x8e640020  lw          $a0, 0x20($s3)
    ctx->pc = 0x346348u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x34634c: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x34634cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x346350: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x346350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x346354: 0x8fa600dc  lw          $a2, 0xDC($sp)
    ctx->pc = 0x346354u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x346358: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x346358u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
label_34635c:
    // 0x34635c: 0x8fa700c0  lw          $a3, 0xC0($sp)
    ctx->pc = 0x34635cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x346360: 0xc4e00024  lwc1        $f0, 0x24($a3)
    ctx->pc = 0x346360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x346364: 0x46160034  c.lt.s      $f0, $f22
    ctx->pc = 0x346364u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x346368: 0x0  nop
    ctx->pc = 0x346368u;
    // NOP
    // 0x34636c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x34636Cu;
    {
        const bool branch_taken_0x34636c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x34636c) {
            ctx->pc = 0x346370u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34636Cu;
            // 0x346370: 0xe4f60024  swc1        $f22, 0x24($a3) (Delay Slot)
            { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 36), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x346374u;
            goto label_346374;
        }
    }
    ctx->pc = 0x346374u;
label_346374:
    // 0x346374: 0x8fa200c4  lw          $v0, 0xC4($sp)
    ctx->pc = 0x346374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x346378: 0x7bb00220  lq          $s0, 0x220($sp)
    ctx->pc = 0x346378u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x34637c: 0x7bb10210  lq          $s1, 0x210($sp)
    ctx->pc = 0x34637cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x346380: 0x7bb20200  lq          $s2, 0x200($sp)
    ctx->pc = 0x346380u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x346384: 0x7bb301f0  lq          $s3, 0x1F0($sp)
    ctx->pc = 0x346384u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x346388: 0x7bb401e0  lq          $s4, 0x1E0($sp)
    ctx->pc = 0x346388u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x34638c: 0x7bb501d0  lq          $s5, 0x1D0($sp)
    ctx->pc = 0x34638cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x346390: 0x7bb601c0  lq          $s6, 0x1C0($sp)
    ctx->pc = 0x346390u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x346394: 0x7bb701b0  lq          $s7, 0x1B0($sp)
    ctx->pc = 0x346394u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x346398: 0x7bbe01a0  lq          $fp, 0x1A0($sp)
    ctx->pc = 0x346398u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x34639c: 0xdfbf0190  ld          $ra, 0x190($sp)
    ctx->pc = 0x34639cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x3463a0: 0xc7b80250  lwc1        $f24, 0x250($sp)
    ctx->pc = 0x3463a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x3463a4: 0xc7b70248  lwc1        $f23, 0x248($sp)
    ctx->pc = 0x3463a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x3463a8: 0xc7b60240  lwc1        $f22, 0x240($sp)
    ctx->pc = 0x3463a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x3463ac: 0xc7b50238  lwc1        $f21, 0x238($sp)
    ctx->pc = 0x3463acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x3463b0: 0xc7b40230  lwc1        $f20, 0x230($sp)
    ctx->pc = 0x3463b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3463b4: 0x3e00008  jr          $ra
    ctx->pc = 0x3463B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3463B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3463B4u;
        // 0x3463b8: 0x27bd0260  addiu       $sp, $sp, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3463B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3463BCu;
    // 0x3463bc: 0x0  nop
    ctx->pc = 0x3463bcu;
    // NOP
    ctx->pc = 0x3463c0u;
}
