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

// Function: sub_00388120
// Address: 0x388120 - 0x388250
void sub_00388120_0x388120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00388120_0x388120");
#endif

    switch (ctx->pc) {
        case 0x388150u: goto label_388150;
        case 0x388158u: goto label_388158;
        case 0x38817cu: goto label_38817c;
        case 0x388190u: goto label_388190;
        default: break;
    }

    ctx->pc = 0x388120u;

    // 0x388120: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x388120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x388124: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x388124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x388128: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x388128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x38812c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x38812cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x388130: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x388130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x388134: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x388134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x388138: 0x8e42004c  lw          $v0, 0x4C($s2)
    ctx->pc = 0x388138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x38813c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x38813cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x388140: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x388140u;
    {
        const bool branch_taken_0x388140 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x388144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388140u;
        // 0x388144: 0x8e510004  lw          $s1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388140) {
            ctx->pc = 0x388150u;
            goto label_388150;
        }
    }
    ctx->pc = 0x388148u;
    // 0x388148: 0xc0e1fec  jal         func_387FB0
    ctx->pc = 0x388148u;
    SET_GPR_U32(ctx, 31, 0x388150u);
    ctx->pc = 0x387FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x387FB0u, 0x388148u, 0x388150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x388150u;
label_388150:
    // 0x388150: 0xc1067f6  jal         func_419FD8
    ctx->pc = 0x388150u;
    SET_GPR_U32(ctx, 31, 0x388158u);
    ctx->pc = 0x388154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388150u;
    // 0x388154: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419FD8u, 0x388150u, 0x388158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x388158u;
label_388158:
    // 0x388158: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x388158u;
    {
        const bool branch_taken_0x388158 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x388158) {
            ctx->pc = 0x38815Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x388158u;
            // 0x38815c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x388174u;
            goto label_388174;
        }
    }
    ctx->pc = 0x388160u;
    // 0x388160: 0x92420003  lbu         $v0, 0x3($s2)
    ctx->pc = 0x388160u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x388164: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x388164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x388168: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x388168u;
    {
        const bool branch_taken_0x388168 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38816Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388168u;
        // 0x38816c: 0x2650002c  addiu       $s0, $s2, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388168) {
            ctx->pc = 0x388234u;
            goto label_388234;
        }
    }
    ctx->pc = 0x388170u;
    // 0x388170: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x388170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_388174:
    // 0x388174: 0xc106784  jal         func_419E10
    ctx->pc = 0x388174u;
    SET_GPR_U32(ctx, 31, 0x38817Cu);
    ctx->pc = 0x388178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388174u;
    // 0x388178: 0x2650002c  addiu       $s0, $s2, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E10u, 0x388174u, 0x38817Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38817Cu;
label_38817c:
    // 0x38817c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x38817cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x388180: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x388180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x388184: 0x2645001c  addiu       $a1, $s2, 0x1C
    ctx->pc = 0x388184u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x388188: 0xc104d64  jal         func_413590
    ctx->pc = 0x388188u;
    SET_GPR_U32(ctx, 31, 0x388190u);
    ctx->pc = 0x38818Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388188u;
    // 0x38818c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x413590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413590u, 0x388188u, 0x388190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x388190u;
label_388190:
    // 0x388190: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x388190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x388194: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x388194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x388198: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x388198u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x38819c: 0x10620020  beq         $v1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x38819Cu;
    {
        const bool branch_taken_0x38819c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3881A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38819Cu;
        // 0x3881a0: 0x26220010  addiu       $v0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38819c) {
            ctx->pc = 0x388220u;
            goto label_388220;
        }
    }
    ctx->pc = 0x3881A4u;
    // 0x3881a4: 0x26230020  addiu       $v1, $s1, 0x20
    ctx->pc = 0x3881a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x3881a8: 0xc6220020  lwc1        $f2, 0x20($s1)
    ctx->pc = 0x3881a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3881ac: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x3881acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3881b0: 0xc4480004  lwc1        $f8, 0x4($v0)
    ctx->pc = 0x3881b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x3881b4: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x3881b4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x3881b8: 0xc4670004  lwc1        $f7, 0x4($v1)
    ctx->pc = 0x3881b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x3881bc: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x3881bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x3881c0: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x3881c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3881c4: 0x46084202  mul.s       $f8, $f8, $f8
    ctx->pc = 0x3881c4u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[8]);
    // 0x3881c8: 0xc6260004  lwc1        $f6, 0x4($s1)
    ctx->pc = 0x3881c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x3881cc: 0x460739c2  mul.s       $f7, $f7, $f7
    ctx->pc = 0x3881ccu;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[7]);
    // 0x3881d0: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x3881d0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x3881d4: 0xc4450008  lwc1        $f5, 0x8($v0)
    ctx->pc = 0x3881d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x3881d8: 0x46063182  mul.s       $f6, $f6, $f6
    ctx->pc = 0x3881d8u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
    // 0x3881dc: 0xc4630008  lwc1        $f3, 0x8($v1)
    ctx->pc = 0x3881dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3881e0: 0xc6240008  lwc1        $f4, 0x8($s1)
    ctx->pc = 0x3881e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3881e4: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x3881e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x3881e8: 0x46071080  add.s       $f2, $f2, $f7
    ctx->pc = 0x3881e8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[7]);
    // 0x3881ec: 0x46052942  mul.s       $f5, $f5, $f5
    ctx->pc = 0x3881ecu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x3881f0: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x3881f0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x3881f4: 0x46060840  add.s       $f1, $f1, $f6
    ctx->pc = 0x3881f4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
    // 0x3881f8: 0x46042102  mul.s       $f4, $f4, $f4
    ctx->pc = 0x3881f8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x3881fc: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x3881fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x388200: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x388200u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x388204: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x388204u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x388208: 0x46020028  max.s       $f0, $f0, $f2
    ctx->pc = 0x388208u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[2]);
    // 0x38820c: 0x46000868  max.s       $f1, $f1, $f0
    ctx->pc = 0x38820cu;
    ctx->f[1] = std::max(ctx->f[1], ctx->f[0]);
    // 0x388210: 0x46010044  c1          0x10044
    ctx->pc = 0x388210u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x388214: 0xc6400028  lwc1        $f0, 0x28($s2)
    ctx->pc = 0x388214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x388218: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x388218u;
    {
        const bool branch_taken_0x388218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38821Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388218u;
        // 0x38821c: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x388218) {
            ctx->pc = 0x388224u;
            goto label_388224;
        }
    }
    ctx->pc = 0x388220u;
label_388220:
    // 0x388220: 0xc6400028  lwc1        $f0, 0x28($s2)
    ctx->pc = 0x388220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_388224:
    // 0x388224: 0xe6400038  swc1        $f0, 0x38($s2)
    ctx->pc = 0x388224u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 56), bits); }
    // 0x388228: 0x92420003  lbu         $v0, 0x3($s2)
    ctx->pc = 0x388228u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x38822c: 0x304200fe  andi        $v0, $v0, 0xFE
    ctx->pc = 0x38822cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)254);
    // 0x388230: 0xa2420003  sb          $v0, 0x3($s2)
    ctx->pc = 0x388230u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 3), (uint8_t)GPR_U32(ctx, 2));
label_388234:
    // 0x388234: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x388234u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x388238: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x388238u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x38823c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x38823cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x388240: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x388240u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x388244: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x388244u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x388248: 0x3e00008  jr          $ra
    ctx->pc = 0x388248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38824Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388248u;
        // 0x38824c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x388248u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x388250u;
}
