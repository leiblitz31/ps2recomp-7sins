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

// Function: sub_00355670
// Address: 0x355670 - 0x355868
void sub_00355670_0x355670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00355670_0x355670");
#endif

    switch (ctx->pc) {
        case 0x3556ecu: goto label_3556ec;
        case 0x355744u: goto label_355744;
        case 0x3557bcu: goto label_3557bc;
        default: break;
    }

    ctx->pc = 0x355670u;

    // 0x355670: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x355670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x355674: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x355674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x355678: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x355678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x35567c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x35567cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x355680: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x355680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x355684: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x355684u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355688: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x355688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x35568c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x35568cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355690: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x355690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x355694: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x355694u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355698: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x355698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x35569c: 0x8e320008  lw          $s2, 0x8($s1)
    ctx->pc = 0x35569cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3556a0: 0x8f84bd78  lw          $a0, -0x4288($gp)
    ctx->pc = 0x3556a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950264)));
    // 0x3556a4: 0x8e460018  lw          $a2, 0x18($s2)
    ctx->pc = 0x3556a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x3556a8: 0x8c43e880  lw          $v1, -0x1780($v0)
    ctx->pc = 0x3556a8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x61E880u));
    // 0x3556ac: 0xc42821  addu        $a1, $a2, $a0
    ctx->pc = 0x3556acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x3556b0: 0x8cc20054  lw          $v0, 0x54($a2)
    ctx->pc = 0x3556b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 84)));
    // 0x3556b4: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x3556b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3556b8: 0x24700020  addiu       $s0, $v1, 0x20
    ctx->pc = 0x3556b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x3556bc: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3556BCu;
    {
        const bool branch_taken_0x3556bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3556C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3556BCu;
        // 0x3556c0: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3556bc) {
            ctx->pc = 0x3556D8u;
            goto label_3556d8;
        }
    }
    ctx->pc = 0x3556C4u;
    // 0x3556c4: 0x8cc20054  lw          $v0, 0x54($a2)
    ctx->pc = 0x3556c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 84)));
    // 0x3556c8: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x3556c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3556cc: 0x94430004  lhu         $v1, 0x4($v0)
    ctx->pc = 0x3556ccu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x3556d0: 0x50830008  beql        $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3556D0u;
    {
        const bool branch_taken_0x3556d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3556d0) {
            ctx->pc = 0x3556D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3556D0u;
            // 0x3556d4: 0x8e230014  lw          $v1, 0x14($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3556F4u;
            goto label_3556f4;
        }
    }
    ctx->pc = 0x3556D8u;
label_3556d8:
    // 0x3556d8: 0x8cc20054  lw          $v0, 0x54($a2)
    ctx->pc = 0x3556d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 84)));
    // 0x3556dc: 0x8f84bd78  lw          $a0, -0x4288($gp)
    ctx->pc = 0x3556dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950264)));
    // 0x3556e0: 0x94450004  lhu         $a1, 0x4($v0)
    ctx->pc = 0x3556e0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x3556e4: 0xc0e7eec  jal         func_39FBB0
    ctx->pc = 0x3556E4u;
    SET_GPR_U32(ctx, 31, 0x3556ECu);
    ctx->pc = 0x3556E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3556E4u;
    // 0x3556e8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39FBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39FBB0u, 0x3556E4u, 0x3556ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3556ECu;
label_3556ec:
    // 0x3556ec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3556ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3556f0: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x3556f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_3556f4:
    // 0x3556f4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3556f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x3556f8: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x3556f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3556fc: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x3556fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x355700: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x355700u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x355704: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x355704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x355708: 0xae250010  sw          $a1, 0x10($s1)
    ctx->pc = 0x355708u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 5));
    // 0x35570c: 0xae230014  sw          $v1, 0x14($s1)
    ctx->pc = 0x35570cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
    // 0x355710: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x355710u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x355714: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x355714u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x355718: 0x7a030010  lq          $v1, 0x10($s0)
    ctx->pc = 0x355718u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x35571c: 0x7c830010  sq          $v1, 0x10($a0)
    ctx->pc = 0x35571cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 3));
    // 0x355720: 0x7a020020  lq          $v0, 0x20($s0)
    ctx->pc = 0x355720u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x355724: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x355724u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
    // 0x355728: 0x7a030030  lq          $v1, 0x30($s0)
    ctx->pc = 0x355728u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x35572c: 0x7c830030  sq          $v1, 0x30($a0)
    ctx->pc = 0x35572cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 3));
    // 0x355730: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x355730u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355734: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x355734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x355738: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x355738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35573c: 0xc0e2048  jal         func_388120
    ctx->pc = 0x35573Cu;
    SET_GPR_U32(ctx, 31, 0x355744u);
    ctx->pc = 0x355740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35573Cu;
    // 0x355740: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x388120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x388120u, 0x35573Cu, 0x355744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355744u;
label_355744:
    // 0x355744: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x355744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355748: 0x8f83bebc  lw          $v1, -0x4144($gp)
    ctx->pc = 0x355748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950588)));
    // 0x35574c: 0x8e82e880  lw          $v0, -0x1780($s4)
    ctx->pc = 0x35574cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294961280)));
    // 0x355750: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x355750u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x355754: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x355754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x355758: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x355758u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35575c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x35575cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x355760: 0xc4850004  lwc1        $f5, 0x4($a0)
    ctx->pc = 0x355760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x355764: 0x24430060  addiu       $v1, $v0, 0x60
    ctx->pc = 0x355764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x355768: 0xc4400060  lwc1        $f0, 0x60($v0)
    ctx->pc = 0x355768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35576c: 0xc4640004  lwc1        $f4, 0x4($v1)
    ctx->pc = 0x35576cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x355770: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x355770u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x355774: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x355774u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x355778: 0xc4830008  lwc1        $f3, 0x8($a0)
    ctx->pc = 0x355778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x35577c: 0x46042942  mul.s       $f5, $f5, $f4
    ctx->pc = 0x35577cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x355780: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x355780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x355784: 0xc464000c  lwc1        $f4, 0xC($v1)
    ctx->pc = 0x355784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x355788: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x355788u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x35578c: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x35578cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x355790: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x355790u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x355794: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x355794u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x355798: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x355798u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x35579c: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x35579cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x3557a0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3557a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3557a4: 0x0  nop
    ctx->pc = 0x3557a4u;
    // NOP
    // 0x3557a8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x3557A8u;
    {
        const bool branch_taken_0x3557a8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3557ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3557A8u;
        // 0x3557ac: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3557a8) {
            ctx->pc = 0x3557B8u;
            goto label_3557b8;
        }
    }
    ctx->pc = 0x3557B0u;
    // 0x3557b0: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x3557B0u;
    {
        const bool branch_taken_0x3557b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3557B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3557B0u;
        // 0x3557b4: 0xafa70000  sw          $a3, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3557b0) {
            ctx->pc = 0x355814u;
            goto label_355814;
        }
    }
    ctx->pc = 0x3557B8u;
label_3557b8:
    // 0x3557b8: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x3557b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_3557bc:
    // 0x3557bc: 0x10c50015  beq         $a2, $a1, . + 4 + (0x15 << 2)
    ctx->pc = 0x3557BCu;
    {
        const bool branch_taken_0x3557bc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        ctx->pc = 0x3557C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3557BCu;
        // 0x3557c0: 0x24630014  addiu       $v1, $v1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3557bc) {
            ctx->pc = 0x355814u;
            goto label_355814;
        }
    }
    ctx->pc = 0x3557C4u;
    // 0x3557c4: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x3557c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3557c8: 0xc4650004  lwc1        $f5, 0x4($v1)
    ctx->pc = 0x3557c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x3557cc: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x3557ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3557d0: 0xc4840004  lwc1        $f4, 0x4($a0)
    ctx->pc = 0x3557d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3557d4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3557d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3557d8: 0xc4830008  lwc1        $f3, 0x8($a0)
    ctx->pc = 0x3557d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3557dc: 0x46052102  mul.s       $f4, $f4, $f5
    ctx->pc = 0x3557dcu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x3557e0: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x3557e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3557e4: 0xc465000c  lwc1        $f5, 0xC($v1)
    ctx->pc = 0x3557e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x3557e8: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x3557e8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3557ec: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x3557ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3557f0: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x3557f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x3557f4: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x3557f4u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x3557f8: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x3557f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x3557fc: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x3557fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x355800: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x355800u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x355804: 0x0  nop
    ctx->pc = 0x355804u;
    // NOP
    // 0x355808: 0x4502ffec  bc1fl       . + 4 + (-0x14 << 2)
    ctx->pc = 0x355808u;
    {
        const bool branch_taken_0x355808 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x355808) {
            ctx->pc = 0x35580Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x355808u;
            // 0x35580c: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3557BCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3557bc;
        }
    }
    ctx->pc = 0x355810u;
    // 0x355810: 0xae070000  sw          $a3, 0x0($s0)
    ctx->pc = 0x355810u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 7));
label_355814:
    // 0x355814: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x355814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x355818: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x355818u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35581c: 0xa2220029  sb          $v0, 0x29($s1)
    ctx->pc = 0x35581cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 41), (uint8_t)GPR_U32(ctx, 2));
    // 0x355820: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x355820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x355824: 0x9382aed0  lbu         $v0, -0x5130($gp)
    ctx->pc = 0x355824u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294946512)));
    // 0x355828: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x355828u;
    {
        const bool branch_taken_0x355828 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x35582Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355828u;
        // 0x35582c: 0xa2220028  sb          $v0, 0x28($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 40), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355828) {
            ctx->pc = 0x355838u;
            goto label_355838;
        }
    }
    ctx->pc = 0x355830u;
    // 0x355830: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x355830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x355834: 0xa2220028  sb          $v0, 0x28($s1)
    ctx->pc = 0x355834u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 40), (uint8_t)GPR_U32(ctx, 2));
label_355838:
    // 0x355838: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x355838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35583c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x35583cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x355840: 0xa223002a  sb          $v1, 0x2A($s1)
    ctx->pc = 0x355840u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 42), (uint8_t)GPR_U32(ctx, 3));
    // 0x355844: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x355844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x355848: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x355848u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x35584c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x35584cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x355850: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x355850u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x355854: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x355854u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x355858: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x355858u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35585c: 0x3e00008  jr          $ra
    ctx->pc = 0x35585Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x355860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35585Cu;
        // 0x355860: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35585Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x355864u;
    // 0x355864: 0x0  nop
    ctx->pc = 0x355864u;
    // NOP
    ctx->pc = 0x355868u;
}
