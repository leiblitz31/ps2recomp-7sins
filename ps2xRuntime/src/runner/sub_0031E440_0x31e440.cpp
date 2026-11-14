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

// Function: sub_0031E440
// Address: 0x31e440 - 0x31e5f0
void sub_0031E440_0x31e440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031E440_0x31e440");
#endif

    switch (ctx->pc) {
        case 0x31e440u: goto label_31e440;
        case 0x31e444u: goto label_31e444;
        case 0x31e448u: goto label_31e448;
        case 0x31e44cu: goto label_31e44c;
        case 0x31e450u: goto label_31e450;
        case 0x31e454u: goto label_31e454;
        case 0x31e458u: goto label_31e458;
        case 0x31e45cu: goto label_31e45c;
        case 0x31e460u: goto label_31e460;
        case 0x31e464u: goto label_31e464;
        case 0x31e468u: goto label_31e468;
        case 0x31e46cu: goto label_31e46c;
        case 0x31e470u: goto label_31e470;
        case 0x31e474u: goto label_31e474;
        case 0x31e478u: goto label_31e478;
        case 0x31e47cu: goto label_31e47c;
        case 0x31e480u: goto label_31e480;
        case 0x31e484u: goto label_31e484;
        case 0x31e488u: goto label_31e488;
        case 0x31e48cu: goto label_31e48c;
        case 0x31e490u: goto label_31e490;
        case 0x31e494u: goto label_31e494;
        case 0x31e498u: goto label_31e498;
        case 0x31e49cu: goto label_31e49c;
        case 0x31e4a0u: goto label_31e4a0;
        case 0x31e4a4u: goto label_31e4a4;
        case 0x31e4a8u: goto label_31e4a8;
        case 0x31e4acu: goto label_31e4ac;
        case 0x31e4b0u: goto label_31e4b0;
        case 0x31e4b4u: goto label_31e4b4;
        case 0x31e4b8u: goto label_31e4b8;
        case 0x31e4bcu: goto label_31e4bc;
        case 0x31e4c0u: goto label_31e4c0;
        case 0x31e4c4u: goto label_31e4c4;
        case 0x31e4c8u: goto label_31e4c8;
        case 0x31e4ccu: goto label_31e4cc;
        case 0x31e4d0u: goto label_31e4d0;
        case 0x31e4d4u: goto label_31e4d4;
        case 0x31e4d8u: goto label_31e4d8;
        case 0x31e4dcu: goto label_31e4dc;
        case 0x31e4e0u: goto label_31e4e0;
        case 0x31e4e4u: goto label_31e4e4;
        case 0x31e4e8u: goto label_31e4e8;
        case 0x31e4ecu: goto label_31e4ec;
        case 0x31e4f0u: goto label_31e4f0;
        case 0x31e4f4u: goto label_31e4f4;
        case 0x31e4f8u: goto label_31e4f8;
        case 0x31e4fcu: goto label_31e4fc;
        case 0x31e500u: goto label_31e500;
        case 0x31e504u: goto label_31e504;
        case 0x31e508u: goto label_31e508;
        case 0x31e50cu: goto label_31e50c;
        case 0x31e510u: goto label_31e510;
        case 0x31e514u: goto label_31e514;
        case 0x31e518u: goto label_31e518;
        case 0x31e51cu: goto label_31e51c;
        case 0x31e520u: goto label_31e520;
        case 0x31e524u: goto label_31e524;
        case 0x31e528u: goto label_31e528;
        case 0x31e52cu: goto label_31e52c;
        case 0x31e530u: goto label_31e530;
        case 0x31e534u: goto label_31e534;
        case 0x31e538u: goto label_31e538;
        case 0x31e53cu: goto label_31e53c;
        case 0x31e540u: goto label_31e540;
        case 0x31e544u: goto label_31e544;
        case 0x31e548u: goto label_31e548;
        case 0x31e54cu: goto label_31e54c;
        case 0x31e550u: goto label_31e550;
        case 0x31e554u: goto label_31e554;
        case 0x31e558u: goto label_31e558;
        case 0x31e55cu: goto label_31e55c;
        case 0x31e560u: goto label_31e560;
        case 0x31e564u: goto label_31e564;
        case 0x31e568u: goto label_31e568;
        case 0x31e56cu: goto label_31e56c;
        case 0x31e570u: goto label_31e570;
        case 0x31e574u: goto label_31e574;
        case 0x31e578u: goto label_31e578;
        case 0x31e57cu: goto label_31e57c;
        case 0x31e580u: goto label_31e580;
        case 0x31e584u: goto label_31e584;
        case 0x31e588u: goto label_31e588;
        case 0x31e58cu: goto label_31e58c;
        case 0x31e590u: goto label_31e590;
        case 0x31e594u: goto label_31e594;
        case 0x31e598u: goto label_31e598;
        case 0x31e59cu: goto label_31e59c;
        case 0x31e5a0u: goto label_31e5a0;
        case 0x31e5a4u: goto label_31e5a4;
        case 0x31e5a8u: goto label_31e5a8;
        case 0x31e5acu: goto label_31e5ac;
        case 0x31e5b0u: goto label_31e5b0;
        case 0x31e5b4u: goto label_31e5b4;
        case 0x31e5b8u: goto label_31e5b8;
        case 0x31e5bcu: goto label_31e5bc;
        case 0x31e5c0u: goto label_31e5c0;
        case 0x31e5c4u: goto label_31e5c4;
        case 0x31e5c8u: goto label_31e5c8;
        case 0x31e5ccu: goto label_31e5cc;
        case 0x31e5d0u: goto label_31e5d0;
        case 0x31e5d4u: goto label_31e5d4;
        case 0x31e5d8u: goto label_31e5d8;
        case 0x31e5dcu: goto label_31e5dc;
        case 0x31e5e0u: goto label_31e5e0;
        case 0x31e5e4u: goto label_31e5e4;
        case 0x31e5e8u: goto label_31e5e8;
        case 0x31e5ecu: goto label_31e5ec;
        default: break;
    }

    ctx->pc = 0x31e440u;

label_31e440:
    // 0x31e440: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x31e440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_31e444:
    // 0x31e444: 0x8f82a5cc  lw          $v0, -0x5A34($gp)
    ctx->pc = 0x31e444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944204)));
label_31e448:
    // 0x31e448: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x31e448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_31e44c:
    // 0x31e44c: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x31e44cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_31e450:
    // 0x31e450: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x31e450u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_31e454:
    // 0x31e454: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x31e454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_31e458:
    // 0x31e458: 0x3c13ffff  lui         $s3, 0xFFFF
    ctx->pc = 0x31e458u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65535 << 16));
label_31e45c:
    // 0x31e45c: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x31e45cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_31e460:
    // 0x31e460: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x31e460u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31e464:
    // 0x31e464: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x31e464u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
label_31e468:
    // 0x31e468: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x31e468u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31e46c:
    // 0x31e46c: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x31e46cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
label_31e470:
    // 0x31e470: 0x2c2b821  addu        $s7, $s6, $v0
    ctx->pc = 0x31e470u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_31e474:
    // 0x31e474: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x31e474u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_31e478:
    // 0x31e478: 0x3673ffff  ori         $s3, $s3, 0xFFFF
    ctx->pc = 0x31e478u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)65535);
label_31e47c:
    // 0x31e47c: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x31e47cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_31e480:
    // 0x31e480: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x31e480u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_31e484:
    // 0x31e484: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x31e484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_31e488:
    // 0x31e488: 0x241e0014  addiu       $fp, $zero, 0x14
    ctx->pc = 0x31e488u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_31e48c:
    // 0x31e48c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31e48cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_31e490:
    // 0x31e490: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x31e490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_31e494:
    // 0x31e494: 0x8ef20004  lw          $s2, 0x4($s7)
    ctx->pc = 0x31e494u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
label_31e498:
    // 0x31e498: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x31e498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31e49c:
    // 0x31e49c: 0x8e500008  lw          $s0, 0x8($s2)
    ctx->pc = 0x31e49cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_31e4a0:
    // 0x31e4a0: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x31e4a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_31e4a4:
    // 0x31e4a4: 0x8e51000c  lw          $s1, 0xC($s2)
    ctx->pc = 0x31e4a4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_31e4a8:
    // 0x31e4a8: 0x10000036  b           . + 4 + (0x36 << 2)
label_31e4ac:
    if (ctx->pc == 0x31E4ACu) {
        ctx->pc = 0x31E4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E4A8u;
        // 0x31e4ac: 0xe6400004  swc1        $f0, 0x4($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E4B0u;
        goto label_31e4b0;
    }
    ctx->pc = 0x31E4A8u;
    {
        const bool branch_taken_0x31e4a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E4A8u;
        // 0x31e4ac: 0xe6400004  swc1        $f0, 0x4($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e4a8) {
            ctx->pc = 0x31E584u;
            goto label_31e584;
        }
    }
    ctx->pc = 0x31E4B0u;
label_31e4b0:
    // 0x31e4b0: 0x26070004  addiu       $a3, $s0, 0x4
    ctx->pc = 0x31e4b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_31e4b4:
    // 0x31e4b4: 0x26290004  addiu       $t1, $s1, 0x4
    ctx->pc = 0x31e4b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_31e4b8:
    // 0x31e4b8: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
label_31e4bc:
    if (ctx->pc == 0x31E4BCu) {
        ctx->pc = 0x31E4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E4B8u;
        // 0x31e4bc: 0x26880001  addiu       $t0, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E4C0u;
        goto label_31e4c0;
    }
    ctx->pc = 0x31E4B8u;
    {
        const bool branch_taken_0x31e4b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E4B8u;
        // 0x31e4bc: 0x26880001  addiu       $t0, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e4b8) {
            ctx->pc = 0x31E578u;
            goto label_31e578;
        }
    }
    ctx->pc = 0x31E4C0u;
label_31e4c0:
    // 0x31e4c0: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x31e4c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31e4c4:
    // 0x31e4c4: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x31e4c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_31e4c8:
    // 0x31e4c8: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x31e4c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_31e4cc:
    // 0x31e4cc: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x31e4ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_31e4d0:
    // 0x31e4d0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x31e4d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_31e4d4:
    // 0x31e4d4: 0x0  nop
    ctx->pc = 0x31e4d4u;
    // NOP
label_31e4d8:
    // 0x31e4d8: 0x4502001a  bc1fl       . + 4 + (0x1A << 2)
label_31e4dc:
    if (ctx->pc == 0x31E4DCu) {
        ctx->pc = 0x31E4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E4D8u;
        // 0x31e4dc: 0x8e060000  lw          $a2, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E4E0u;
        goto label_31e4e0;
    }
    ctx->pc = 0x31E4D8u;
    {
        const bool branch_taken_0x31e4d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x31e4d8) {
            ctx->pc = 0x31E4DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31E4D8u;
            // 0x31e4dc: 0x8e060000  lw          $a2, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31E544u;
            goto label_31e544;
        }
    }
    ctx->pc = 0x31E4E0u;
label_31e4e0:
    // 0x31e4e0: 0x10000013  b           . + 4 + (0x13 << 2)
label_31e4e4:
    if (ctx->pc == 0x31E4E4u) {
        ctx->pc = 0x31E4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E4E0u;
        // 0x31e4e4: 0x46010001  sub.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E4E8u;
        goto label_31e4e8;
    }
    ctx->pc = 0x31E4E0u;
    {
        const bool branch_taken_0x31e4e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E4E0u;
        // 0x31e4e4: 0x46010001  sub.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e4e0) {
            ctx->pc = 0x31E530u;
            goto label_31e530;
        }
    }
    ctx->pc = 0x31E4E8u;
label_31e4e8:
    // 0x31e4e8: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x31e4e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_31e4ec:
    // 0x31e4ec: 0x1420c0  sll         $a0, $s4, 3
    ctx->pc = 0x31e4ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
label_31e4f0:
    // 0x31e4f0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x31e4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_31e4f4:
    // 0x31e4f4: 0x8cc30010  lw          $v1, 0x10($a2)
    ctx->pc = 0x31e4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
label_31e4f8:
    // 0x31e4f8: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x31e4f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_31e4fc:
    // 0x31e4fc: 0x7e1818  mult        $v1, $v1, $fp
    ctx->pc = 0x31e4fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_31e500:
    // 0x31e500: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x31e500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_31e504:
    // 0x31e504: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x31e504u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_31e508:
    // 0x31e508: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x31e508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_31e50c:
    // 0x31e50c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31e50cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_31e510:
    // 0x31e510: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x31e510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31e514:
    // 0x31e514: 0x46302b  sltu        $a2, $v0, $a2
    ctx->pc = 0x31e514u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_31e518:
    // 0x31e518: 0x2a6a825  or          $s5, $s5, $a2
    ctx->pc = 0x31e518u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | GPR_U64(ctx, 6));
label_31e51c:
    // 0x31e51c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x31e51cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_31e520:
    // 0x31e520: 0x0  nop
    ctx->pc = 0x31e520u;
    // NOP
label_31e524:
    // 0x31e524: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_31e528:
    if (ctx->pc == 0x31E528u) {
        ctx->pc = 0x31E528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E524u;
        // 0x31e528: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E52Cu;
        goto label_31e52c;
    }
    ctx->pc = 0x31E524u;
    {
        const bool branch_taken_0x31e524 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x31E528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E524u;
        // 0x31e528: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e524) {
            ctx->pc = 0x31E540u;
            goto label_31e540;
        }
    }
    ctx->pc = 0x31E52Cu;
label_31e52c:
    // 0x31e52c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x31e52cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_31e530:
    // 0x31e530: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x31e530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_31e534:
    // 0x31e534: 0x1453ffec  bne         $v0, $s3, . + 4 + (-0x14 << 2)
label_31e538:
    if (ctx->pc == 0x31E538u) {
        ctx->pc = 0x31E538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E534u;
        // 0x31e538: 0xe6200000  swc1        $f0, 0x0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E53Cu;
        goto label_31e53c;
    }
    ctx->pc = 0x31E534u;
    {
        const bool branch_taken_0x31e534 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x31E538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E534u;
        // 0x31e538: 0xe6200000  swc1        $f0, 0x0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e534) {
            ctx->pc = 0x31E4E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31e4e8;
        }
    }
    ctx->pc = 0x31E53Cu;
label_31e53c:
    // 0x31e53c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x31e53cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_31e540:
    // 0x31e540: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x31e540u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_31e544:
    // 0x31e544: 0x10c0000c  beqz        $a2, . + 4 + (0xC << 2)
label_31e548:
    if (ctx->pc == 0x31E548u) {
        ctx->pc = 0x31E548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E544u;
        // 0x31e548: 0x141880  sll         $v1, $s4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E54Cu;
        goto label_31e54c;
    }
    ctx->pc = 0x31E544u;
    {
        const bool branch_taken_0x31e544 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E544u;
        // 0x31e548: 0x141880  sll         $v1, $s4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e544) {
            ctx->pc = 0x31E578u;
            goto label_31e578;
        }
    }
    ctx->pc = 0x31E54Cu;
label_31e54c:
    // 0x31e54c: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x31e54cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_31e550:
    // 0x31e550: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x31e550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_31e554:
    // 0x31e554: 0xc4c2000c  lwc1        $f2, 0xC($a2)
    ctx->pc = 0x31e554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_31e558:
    // 0x31e558: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x31e558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31e55c:
    // 0x31e55c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x31e55cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_31e560:
    // 0x31e560: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x31e560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_31e564:
    // 0x31e564: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x31e564u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_31e568:
    // 0x31e568: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x31e568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_31e56c:
    // 0x31e56c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x31e56cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_31e570:
    // 0x31e570: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x31e570u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
label_31e574:
    // 0x31e574: 0xe4630000  swc1        $f3, 0x0($v1)
    ctx->pc = 0x31e574u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_31e578:
    // 0x31e578: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x31e578u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_31e57c:
    // 0x31e57c: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x31e57cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_31e580:
    // 0x31e580: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x31e580u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_31e584:
    // 0x31e584: 0xc0c7620  jal         func_31D880
label_31e588:
    if (ctx->pc == 0x31E588u) {
        ctx->pc = 0x31E588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E584u;
        // 0x31e588: 0x8ec40018  lw          $a0, 0x18($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E58Cu;
        goto label_31e58c;
    }
    ctx->pc = 0x31E584u;
    SET_GPR_U32(ctx, 31, 0x31E58Cu);
    ctx->pc = 0x31E588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E584u;
    // 0x31e588: 0x8ec40018  lw          $a0, 0x18($s6) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D880u, 0x31E584u, 0x31E58Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E58Cu;
label_31e58c:
    // 0x31e58c: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x31e58cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_31e590:
    // 0x31e590: 0x5440ffc7  bnel        $v0, $zero, . + 4 + (-0x39 << 2)
label_31e594:
    if (ctx->pc == 0x31E594u) {
        ctx->pc = 0x31E594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E590u;
        // 0x31e594: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E598u;
        goto label_31e598;
    }
    ctx->pc = 0x31E590u;
    {
        const bool branch_taken_0x31e590 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31e590) {
            ctx->pc = 0x31E594u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31E590u;
            // 0x31e594: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31E4B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31e4b0;
        }
    }
    ctx->pc = 0x31E598u;
label_31e598:
    // 0x31e598: 0x12a00008  beqz        $s5, . + 4 + (0x8 << 2)
label_31e59c:
    if (ctx->pc == 0x31E59Cu) {
        ctx->pc = 0x31E59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E598u;
        // 0x31e59c: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E5A0u;
        goto label_31e5a0;
    }
    ctx->pc = 0x31E598u;
    {
        const bool branch_taken_0x31e598 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E598u;
        // 0x31e59c: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e598) {
            ctx->pc = 0x31E5BCu;
            goto label_31e5bc;
        }
    }
    ctx->pc = 0x31E5A0u;
label_31e5a0:
    // 0x31e5a0: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x31e5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_31e5a4:
    // 0x31e5a4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_31e5a8:
    if (ctx->pc == 0x31E5A8u) {
        ctx->pc = 0x31E5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E5A4u;
        // 0x31e5a8: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E5ACu;
        goto label_31e5ac;
    }
    ctx->pc = 0x31E5A4u;
    {
        const bool branch_taken_0x31e5a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31e5a4) {
            ctx->pc = 0x31E5A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31E5A4u;
            // 0x31e5a8: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31E5BCu;
            goto label_31e5bc;
        }
    }
    ctx->pc = 0x31E5ACu;
label_31e5ac:
    // 0x31e5ac: 0x8e450014  lw          $a1, 0x14($s2)
    ctx->pc = 0x31e5acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_31e5b0:
    // 0x31e5b0: 0x40f809  jalr        $v0
label_31e5b4:
    if (ctx->pc == 0x31E5B4u) {
        ctx->pc = 0x31E5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E5B0u;
        // 0x31e5b4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E5B8u;
        goto label_31e5b8;
    }
    ctx->pc = 0x31E5B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x31E5B8u);
        ctx->pc = 0x31E5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E5B0u;
        // 0x31e5b4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31E5B0u, 0x31E5B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31E5B8u;
label_31e5b8:
    // 0x31e5b8: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x31e5b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_31e5bc:
    // 0x31e5bc: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x31e5bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_31e5c0:
    // 0x31e5c0: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x31e5c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_31e5c4:
    // 0x31e5c4: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x31e5c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_31e5c8:
    // 0x31e5c8: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x31e5c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_31e5cc:
    // 0x31e5cc: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x31e5ccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_31e5d0:
    // 0x31e5d0: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x31e5d0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_31e5d4:
    // 0x31e5d4: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x31e5d4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_31e5d8:
    // 0x31e5d8: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x31e5d8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_31e5dc:
    // 0x31e5dc: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x31e5dcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_31e5e0:
    // 0x31e5e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31e5e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_31e5e4:
    // 0x31e5e4: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x31e5e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_31e5e8:
    // 0x31e5e8: 0x3e00008  jr          $ra
label_31e5ec:
    if (ctx->pc == 0x31E5ECu) {
        ctx->pc = 0x31E5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E5E8u;
        // 0x31e5ec: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E5F0u;
        goto label_fallthrough_0x31e5e8;
    }
    ctx->pc = 0x31E5E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31E5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E5E8u;
        // 0x31e5ec: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31E5E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x31e5e8:
    ctx->pc = 0x31E5F0u;
}
