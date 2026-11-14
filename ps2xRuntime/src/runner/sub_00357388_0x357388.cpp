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

// Function: sub_00357388
// Address: 0x357388 - 0x357580
void sub_00357388_0x357388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00357388_0x357388");
#endif

    switch (ctx->pc) {
        case 0x357404u: goto label_357404;
        case 0x35745cu: goto label_35745c;
        case 0x3574d4u: goto label_3574d4;
        default: break;
    }

    ctx->pc = 0x357388u;

    // 0x357388: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x357388u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x35738c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x35738cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x357390: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x357390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x357394: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x357394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x357398: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x357398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x35739c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x35739cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3573a0: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x3573a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x3573a4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x3573a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3573a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3573a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3573ac: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3573acu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3573b0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3573b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x3573b4: 0x8e320008  lw          $s2, 0x8($s1)
    ctx->pc = 0x3573b4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3573b8: 0x8f84bd78  lw          $a0, -0x4288($gp)
    ctx->pc = 0x3573b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950264)));
    // 0x3573bc: 0x8e460018  lw          $a2, 0x18($s2)
    ctx->pc = 0x3573bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x3573c0: 0x8c43e880  lw          $v1, -0x1780($v0)
    ctx->pc = 0x3573c0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x61E880u));
    // 0x3573c4: 0xc42821  addu        $a1, $a2, $a0
    ctx->pc = 0x3573c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x3573c8: 0x8cc20054  lw          $v0, 0x54($a2)
    ctx->pc = 0x3573c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 84)));
    // 0x3573cc: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x3573ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3573d0: 0x24700020  addiu       $s0, $v1, 0x20
    ctx->pc = 0x3573d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x3573d4: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3573D4u;
    {
        const bool branch_taken_0x3573d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3573D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3573D4u;
        // 0x3573d8: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3573d4) {
            ctx->pc = 0x3573F0u;
            goto label_3573f0;
        }
    }
    ctx->pc = 0x3573DCu;
    // 0x3573dc: 0x8cc20054  lw          $v0, 0x54($a2)
    ctx->pc = 0x3573dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 84)));
    // 0x3573e0: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x3573e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3573e4: 0x94430004  lhu         $v1, 0x4($v0)
    ctx->pc = 0x3573e4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x3573e8: 0x50830008  beql        $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3573E8u;
    {
        const bool branch_taken_0x3573e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3573e8) {
            ctx->pc = 0x3573ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3573E8u;
            // 0x3573ec: 0x8e230014  lw          $v1, 0x14($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35740Cu;
            goto label_35740c;
        }
    }
    ctx->pc = 0x3573F0u;
label_3573f0:
    // 0x3573f0: 0x8cc20054  lw          $v0, 0x54($a2)
    ctx->pc = 0x3573f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 84)));
    // 0x3573f4: 0x8f84bd78  lw          $a0, -0x4288($gp)
    ctx->pc = 0x3573f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950264)));
    // 0x3573f8: 0x94450004  lhu         $a1, 0x4($v0)
    ctx->pc = 0x3573f8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x3573fc: 0xc0e7eec  jal         func_39FBB0
    ctx->pc = 0x3573FCu;
    SET_GPR_U32(ctx, 31, 0x357404u);
    ctx->pc = 0x357400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3573FCu;
    // 0x357400: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39FBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39FBB0u, 0x3573FCu, 0x357404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357404u;
label_357404:
    // 0x357404: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x357404u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357408: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x357408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_35740c:
    // 0x35740c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x35740cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x357410: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x357410u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x357414: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x357414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x357418: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x357418u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x35741c: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x35741cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x357420: 0xae250010  sw          $a1, 0x10($s1)
    ctx->pc = 0x357420u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 5));
    // 0x357424: 0xae230014  sw          $v1, 0x14($s1)
    ctx->pc = 0x357424u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
    // 0x357428: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x357428u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x35742c: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x35742cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x357430: 0x7a030010  lq          $v1, 0x10($s0)
    ctx->pc = 0x357430u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x357434: 0x7c830010  sq          $v1, 0x10($a0)
    ctx->pc = 0x357434u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 3));
    // 0x357438: 0x7a020020  lq          $v0, 0x20($s0)
    ctx->pc = 0x357438u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x35743c: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x35743cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
    // 0x357440: 0x7a030030  lq          $v1, 0x30($s0)
    ctx->pc = 0x357440u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x357444: 0x7c830030  sq          $v1, 0x30($a0)
    ctx->pc = 0x357444u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 3));
    // 0x357448: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x357448u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35744c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x35744cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x357450: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x357450u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357454: 0xc0e2048  jal         func_388120
    ctx->pc = 0x357454u;
    SET_GPR_U32(ctx, 31, 0x35745Cu);
    ctx->pc = 0x357458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357454u;
    // 0x357458: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x388120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x388120u, 0x357454u, 0x35745Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35745Cu;
label_35745c:
    // 0x35745c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x35745cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357460: 0x8f83bebc  lw          $v1, -0x4144($gp)
    ctx->pc = 0x357460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950588)));
    // 0x357464: 0x8e82e880  lw          $v0, -0x1780($s4)
    ctx->pc = 0x357464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294961280)));
    // 0x357468: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x357468u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x35746c: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x35746cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x357470: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x357470u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x357474: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x357474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x357478: 0xc4850004  lwc1        $f5, 0x4($a0)
    ctx->pc = 0x357478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x35747c: 0x24430060  addiu       $v1, $v0, 0x60
    ctx->pc = 0x35747cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x357480: 0xc4400060  lwc1        $f0, 0x60($v0)
    ctx->pc = 0x357480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x357484: 0xc4640004  lwc1        $f4, 0x4($v1)
    ctx->pc = 0x357484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x357488: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x357488u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x35748c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x35748cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x357490: 0xc4830008  lwc1        $f3, 0x8($a0)
    ctx->pc = 0x357490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x357494: 0x46042942  mul.s       $f5, $f5, $f4
    ctx->pc = 0x357494u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x357498: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x357498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x35749c: 0xc464000c  lwc1        $f4, 0xC($v1)
    ctx->pc = 0x35749cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3574a0: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x3574a0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3574a4: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x3574a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3574a8: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x3574a8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x3574ac: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x3574acu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x3574b0: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x3574b0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x3574b4: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x3574b4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x3574b8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3574b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3574bc: 0x0  nop
    ctx->pc = 0x3574bcu;
    // NOP
    // 0x3574c0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x3574C0u;
    {
        const bool branch_taken_0x3574c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3574C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3574C0u;
        // 0x3574c4: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3574c0) {
            ctx->pc = 0x3574D0u;
            goto label_3574d0;
        }
    }
    ctx->pc = 0x3574C8u;
    // 0x3574c8: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x3574C8u;
    {
        const bool branch_taken_0x3574c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3574CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3574C8u;
        // 0x3574cc: 0xafa70000  sw          $a3, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3574c8) {
            ctx->pc = 0x35752Cu;
            goto label_35752c;
        }
    }
    ctx->pc = 0x3574D0u;
label_3574d0:
    // 0x3574d0: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x3574d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_3574d4:
    // 0x3574d4: 0x10c50015  beq         $a2, $a1, . + 4 + (0x15 << 2)
    ctx->pc = 0x3574D4u;
    {
        const bool branch_taken_0x3574d4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        ctx->pc = 0x3574D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3574D4u;
        // 0x3574d8: 0x24630014  addiu       $v1, $v1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3574d4) {
            ctx->pc = 0x35752Cu;
            goto label_35752c;
        }
    }
    ctx->pc = 0x3574DCu;
    // 0x3574dc: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x3574dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3574e0: 0xc4650004  lwc1        $f5, 0x4($v1)
    ctx->pc = 0x3574e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x3574e4: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x3574e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3574e8: 0xc4840004  lwc1        $f4, 0x4($a0)
    ctx->pc = 0x3574e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3574ec: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3574ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3574f0: 0xc4830008  lwc1        $f3, 0x8($a0)
    ctx->pc = 0x3574f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3574f4: 0x46052102  mul.s       $f4, $f4, $f5
    ctx->pc = 0x3574f4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x3574f8: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x3574f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3574fc: 0xc465000c  lwc1        $f5, 0xC($v1)
    ctx->pc = 0x3574fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x357500: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x357500u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x357504: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x357504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x357508: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x357508u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x35750c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x35750cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x357510: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x357510u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x357514: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x357514u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x357518: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x357518u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x35751c: 0x0  nop
    ctx->pc = 0x35751cu;
    // NOP
    // 0x357520: 0x4502ffec  bc1fl       . + 4 + (-0x14 << 2)
    ctx->pc = 0x357520u;
    {
        const bool branch_taken_0x357520 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x357520) {
            ctx->pc = 0x357524u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x357520u;
            // 0x357524: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3574D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3574d4;
        }
    }
    ctx->pc = 0x357528u;
    // 0x357528: 0xae070000  sw          $a3, 0x0($s0)
    ctx->pc = 0x357528u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 7));
label_35752c:
    // 0x35752c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x35752cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x357530: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x357530u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x357534: 0xa2220029  sb          $v0, 0x29($s1)
    ctx->pc = 0x357534u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 41), (uint8_t)GPR_U32(ctx, 2));
    // 0x357538: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x357538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35753c: 0x9382aed0  lbu         $v0, -0x5130($gp)
    ctx->pc = 0x35753cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294946512)));
    // 0x357540: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x357540u;
    {
        const bool branch_taken_0x357540 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x357544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357540u;
        // 0x357544: 0xa2220028  sb          $v0, 0x28($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 40), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357540) {
            ctx->pc = 0x357550u;
            goto label_357550;
        }
    }
    ctx->pc = 0x357548u;
    // 0x357548: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x357548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x35754c: 0xa2220028  sb          $v0, 0x28($s1)
    ctx->pc = 0x35754cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 40), (uint8_t)GPR_U32(ctx, 2));
label_357550:
    // 0x357550: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x357550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x357554: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x357554u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x357558: 0xa223002a  sb          $v1, 0x2A($s1)
    ctx->pc = 0x357558u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 42), (uint8_t)GPR_U32(ctx, 3));
    // 0x35755c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35755cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x357560: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x357560u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x357564: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x357564u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x357568: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x357568u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35756c: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x35756cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x357570: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x357570u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x357574: 0x3e00008  jr          $ra
    ctx->pc = 0x357574u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x357578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357574u;
        // 0x357578: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x357574u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35757Cu;
    // 0x35757c: 0x0  nop
    ctx->pc = 0x35757cu;
    // NOP
    ctx->pc = 0x357580u;
}
