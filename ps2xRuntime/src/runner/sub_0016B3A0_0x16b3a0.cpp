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

// Function: sub_0016B3A0
// Address: 0x16b3a0 - 0x16b6e0
void sub_0016B3A0_0x16b3a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016B3A0_0x16b3a0");
#endif

    switch (ctx->pc) {
        case 0x16b3c8u: goto label_16b3c8;
        case 0x16b47cu: goto label_16b47c;
        case 0x16b4b4u: goto label_16b4b4;
        case 0x16b4e8u: goto label_16b4e8;
        case 0x16b534u: goto label_16b534;
        case 0x16b56cu: goto label_16b56c;
        case 0x16b590u: goto label_16b590;
        case 0x16b5c4u: goto label_16b5c4;
        case 0x16b60cu: goto label_16b60c;
        case 0x16b630u: goto label_16b630;
        case 0x16b664u: goto label_16b664;
        case 0x16b6b0u: goto label_16b6b0;
        default: break;
    }

    ctx->pc = 0x16b3a0u;

    // 0x16b3a0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x16b3a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x16b3a4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x16b3a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x16b3a8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x16b3a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x16b3ac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x16b3acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x16b3b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16b3b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x16b3b4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16b3b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16b3b8: 0xafa40080  sw          $a0, 0x80($sp)
    ctx->pc = 0x16b3b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
    // 0x16b3bc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x16b3bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b3c0: 0x100000bc  b           . + 4 + (0xBC << 2)
    ctx->pc = 0x16B3C0u;
    {
        const bool branch_taken_0x16b3c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b3c0) {
            ctx->pc = 0x16B6B4u;
            goto label_16b6b4;
        }
    }
    ctx->pc = 0x16B3C8u;
label_16b3c8:
    // 0x16b3c8: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x16b3c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x16b3cc: 0x8f84bac8  lw          $a0, -0x4538($gp)
    ctx->pc = 0x16b3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949576)));
    // 0x16b3d0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x16b3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x16b3d4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16b3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16b3d8: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x16b3d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16b3dc: 0x8ca3005c  lw          $v1, 0x5C($a1)
    ctx->pc = 0x16b3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 92)));
    // 0x16b3e0: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x16b3e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16b3e4: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x16b3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x16b3e8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x16b3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x16b3ec: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x16b3ecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16b3f0: 0x8f848ee8  lw          $a0, -0x7118($gp)
    ctx->pc = 0x16b3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938344)));
    // 0x16b3f4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x16b3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16b3f8: 0x1083000d  beq         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x16B3F8u;
    {
        const bool branch_taken_0x16b3f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16b3f8) {
            ctx->pc = 0x16B430u;
            goto label_16b430;
        }
    }
    ctx->pc = 0x16B400u;
    // 0x16b400: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x16b400u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x16b404: 0x8f848ee8  lw          $a0, -0x7118($gp)
    ctx->pc = 0x16b404u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938344)));
    // 0x16b408: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x16b408u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x16b40c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16b40cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16b410: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x16b410u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16b414: 0x8ca3005c  lw          $v1, 0x5C($a1)
    ctx->pc = 0x16b414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 92)));
    // 0x16b418: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x16b418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16b41c: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x16b41cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x16b420: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x16b420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x16b424: 0x8c730000  lw          $s3, 0x0($v1)
    ctx->pc = 0x16b424u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16b428: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x16B428u;
    {
        const bool branch_taken_0x16b428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b428) {
            ctx->pc = 0x16B434u;
            goto label_16b434;
        }
    }
    ctx->pc = 0x16B430u;
label_16b430:
    // 0x16b430: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x16b430u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16b434:
    // 0x16b434: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x16b434u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b438: 0x12400076  beqz        $s2, . + 4 + (0x76 << 2)
    ctx->pc = 0x16B438u;
    {
        const bool branch_taken_0x16b438 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b438) {
            ctx->pc = 0x16B614u;
            goto label_16b614;
        }
    }
    ctx->pc = 0x16B440u;
    // 0x16b440: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x16b440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16b444: 0x1243004b  beq         $s2, $v1, . + 4 + (0x4B << 2)
    ctx->pc = 0x16B444u;
    {
        const bool branch_taken_0x16b444 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        if (branch_taken_0x16b444) {
            ctx->pc = 0x16B574u;
            goto label_16b574;
        }
    }
    ctx->pc = 0x16B44Cu;
    // 0x16b44c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x16b44cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16b450: 0x12430003  beq         $s2, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x16B450u;
    {
        const bool branch_taken_0x16b450 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        if (branch_taken_0x16b450) {
            ctx->pc = 0x16B460u;
            goto label_16b460;
        }
    }
    ctx->pc = 0x16B458u;
    // 0x16b458: 0x10000095  b           . + 4 + (0x95 << 2)
    ctx->pc = 0x16B458u;
    {
        const bool branch_taken_0x16b458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b458) {
            ctx->pc = 0x16B6B0u;
            goto label_16b6b0;
        }
    }
    ctx->pc = 0x16B460u;
label_16b460:
    // 0x16b460: 0x12000021  beqz        $s0, . + 4 + (0x21 << 2)
    ctx->pc = 0x16B460u;
    {
        const bool branch_taken_0x16b460 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b460) {
            ctx->pc = 0x16B4E8u;
            goto label_16b4e8;
        }
    }
    ctx->pc = 0x16B468u;
    // 0x16b468: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x16b468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x16b46c: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x16b46cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x16b470: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16b470u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b474: 0xc08c910  jal         func_232440
    ctx->pc = 0x16B474u;
    SET_GPR_U32(ctx, 31, 0x16B47Cu);
    ctx->pc = 0x232440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232440u, 0x16B474u, 0x16B47Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B47Cu;
label_16b47c:
    // 0x16b47c: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x16b47cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x16b480: 0xdf828f50  ld          $v0, -0x70B0($gp)
    ctx->pc = 0x16b480u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294938448)));
    // 0x16b484: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x16b484u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x16b488: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x16b488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x16b48c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x16b48cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x16b490: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x16b490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x16b494: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16b494u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b498: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x16b498u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16b49c: 0x27a70060  addiu       $a3, $sp, 0x60
    ctx->pc = 0x16b49cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x16b4a0: 0xc78d81b0  lwc1        $f13, -0x7E50($gp)
    ctx->pc = 0x16b4a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x16b4a4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x16b4a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b4a8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x16b4a8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b4ac: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x16B4ACu;
    SET_GPR_U32(ctx, 31, 0x16B4B4u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x16B4ACu, 0x16B4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B4B4u;
label_16b4b4:
    // 0x16b4b4: 0xc78080ac  lwc1        $f0, -0x7F54($gp)
    ctx->pc = 0x16b4b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934700)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16b4b8: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x16b4b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x16b4bc: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x16b4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x16b4c0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x16b4c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x16b4c4: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x16b4c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x16b4c8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16b4c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b4cc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x16b4ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16b4d0: 0x27a7007c  addiu       $a3, $sp, 0x7C
    ctx->pc = 0x16b4d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x16b4d4: 0xc78d81b0  lwc1        $f13, -0x7E50($gp)
    ctx->pc = 0x16b4d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x16b4d8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x16b4d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b4dc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x16b4dcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b4e0: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x16B4E0u;
    SET_GPR_U32(ctx, 31, 0x16B4E8u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x16B4E0u, 0x16B4E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B4E8u;
label_16b4e8:
    // 0x16b4e8: 0x12200071  beqz        $s1, . + 4 + (0x71 << 2)
    ctx->pc = 0x16B4E8u;
    {
        const bool branch_taken_0x16b4e8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b4e8) {
            ctx->pc = 0x16B6B0u;
            goto label_16b6b0;
        }
    }
    ctx->pc = 0x16B4F0u;
    // 0x16b4f0: 0x1211006f  beq         $s0, $s1, . + 4 + (0x6F << 2)
    ctx->pc = 0x16B4F0u;
    {
        const bool branch_taken_0x16b4f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 17));
        if (branch_taken_0x16b4f0) {
            ctx->pc = 0x16B6B0u;
            goto label_16b6b0;
        }
    }
    ctx->pc = 0x16B4F8u;
    // 0x16b4f8: 0x27a30058  addiu       $v1, $sp, 0x58
    ctx->pc = 0x16b4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x16b4fc: 0xdf828f58  ld          $v0, -0x70A8($gp)
    ctx->pc = 0x16b4fcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294938456)));
    // 0x16b500: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x16b500u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x16b504: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x16b504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x16b508: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x16b508u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x16b50c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x16b50cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x16b510: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x16b510u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x16b514: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x16b514u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b518: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x16b518u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16b51c: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x16b51cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x16b520: 0xc78c81b0  lwc1        $f12, -0x7E50($gp)
    ctx->pc = 0x16b520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x16b524: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x16b524u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b528: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x16b528u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b52c: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x16B52Cu;
    SET_GPR_U32(ctx, 31, 0x16B534u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x16B52Cu, 0x16B534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B534u;
label_16b534:
    // 0x16b534: 0xc78081b8  lwc1        $f0, -0x7E48($gp)
    ctx->pc = 0x16b534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934968)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16b538: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x16b538u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x16b53c: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x16b53cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x16b540: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x16b540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x16b544: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x16b544u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x16b548: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x16b548u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x16b54c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x16b54cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b550: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x16b550u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16b554: 0x27a70078  addiu       $a3, $sp, 0x78
    ctx->pc = 0x16b554u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x16b558: 0xc78c81b0  lwc1        $f12, -0x7E50($gp)
    ctx->pc = 0x16b558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x16b55c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x16b55cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b560: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x16b560u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b564: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x16B564u;
    SET_GPR_U32(ctx, 31, 0x16B56Cu);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x16B564u, 0x16B56Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B56Cu;
label_16b56c:
    // 0x16b56c: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x16B56Cu;
    {
        const bool branch_taken_0x16b56c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b56c) {
            ctx->pc = 0x16B6B0u;
            goto label_16b6b0;
        }
    }
    ctx->pc = 0x16B574u;
label_16b574:
    // 0x16b574: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x16B574u;
    {
        const bool branch_taken_0x16b574 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b574) {
            ctx->pc = 0x16B5C4u;
            goto label_16b5c4;
        }
    }
    ctx->pc = 0x16B57Cu;
    // 0x16b57c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x16b57cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x16b580: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x16b580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x16b584: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16b584u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b588: 0xc08c910  jal         func_232440
    ctx->pc = 0x16B588u;
    SET_GPR_U32(ctx, 31, 0x16B590u);
    ctx->pc = 0x232440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232440u, 0x16B588u, 0x16B590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B590u;
label_16b590:
    // 0x16b590: 0xc78080ac  lwc1        $f0, -0x7F54($gp)
    ctx->pc = 0x16b590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934700)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16b594: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x16b594u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x16b598: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x16b598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x16b59c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x16b59cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x16b5a0: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x16b5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x16b5a4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16b5a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b5a8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x16b5a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16b5ac: 0x27a70074  addiu       $a3, $sp, 0x74
    ctx->pc = 0x16b5acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    // 0x16b5b0: 0xc78d81b0  lwc1        $f13, -0x7E50($gp)
    ctx->pc = 0x16b5b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x16b5b4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x16b5b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b5b8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x16b5b8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b5bc: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x16B5BCu;
    SET_GPR_U32(ctx, 31, 0x16B5C4u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x16B5BCu, 0x16B5C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B5C4u;
label_16b5c4:
    // 0x16b5c4: 0x1220003a  beqz        $s1, . + 4 + (0x3A << 2)
    ctx->pc = 0x16B5C4u;
    {
        const bool branch_taken_0x16b5c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b5c4) {
            ctx->pc = 0x16B6B0u;
            goto label_16b6b0;
        }
    }
    ctx->pc = 0x16B5CCu;
    // 0x16b5cc: 0x12110038  beq         $s0, $s1, . + 4 + (0x38 << 2)
    ctx->pc = 0x16B5CCu;
    {
        const bool branch_taken_0x16b5cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 17));
        if (branch_taken_0x16b5cc) {
            ctx->pc = 0x16B6B0u;
            goto label_16b6b0;
        }
    }
    ctx->pc = 0x16B5D4u;
    // 0x16b5d4: 0xc78081b8  lwc1        $f0, -0x7E48($gp)
    ctx->pc = 0x16b5d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934968)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16b5d8: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x16b5d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x16b5dc: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x16b5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x16b5e0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x16b5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x16b5e4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x16b5e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x16b5e8: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x16b5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x16b5ec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x16b5ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b5f0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x16b5f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16b5f4: 0x27a70070  addiu       $a3, $sp, 0x70
    ctx->pc = 0x16b5f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x16b5f8: 0xc78c81b0  lwc1        $f12, -0x7E50($gp)
    ctx->pc = 0x16b5f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x16b5fc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x16b5fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b600: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x16b600u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b604: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x16B604u;
    SET_GPR_U32(ctx, 31, 0x16B60Cu);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x16B604u, 0x16B60Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B60Cu;
label_16b60c:
    // 0x16b60c: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x16B60Cu;
    {
        const bool branch_taken_0x16b60c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b60c) {
            ctx->pc = 0x16B6B0u;
            goto label_16b6b0;
        }
    }
    ctx->pc = 0x16B614u;
label_16b614:
    // 0x16b614: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x16B614u;
    {
        const bool branch_taken_0x16b614 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b614) {
            ctx->pc = 0x16B664u;
            goto label_16b664;
        }
    }
    ctx->pc = 0x16B61Cu;
    // 0x16b61c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x16b61cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x16b620: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x16b620u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x16b624: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16b624u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b628: 0xc08c910  jal         func_232440
    ctx->pc = 0x16B628u;
    SET_GPR_U32(ctx, 31, 0x16B630u);
    ctx->pc = 0x232440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232440u, 0x16B628u, 0x16B630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B630u;
label_16b630:
    // 0x16b630: 0xc78080ac  lwc1        $f0, -0x7F54($gp)
    ctx->pc = 0x16b630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934700)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16b634: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x16b634u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x16b638: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x16b638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x16b63c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x16b63cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x16b640: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x16b640u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x16b644: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16b644u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b648: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x16b648u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16b64c: 0x27a7006c  addiu       $a3, $sp, 0x6C
    ctx->pc = 0x16b64cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x16b650: 0xc78d81b0  lwc1        $f13, -0x7E50($gp)
    ctx->pc = 0x16b650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x16b654: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x16b654u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b658: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x16b658u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b65c: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x16B65Cu;
    SET_GPR_U32(ctx, 31, 0x16B664u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x16B65Cu, 0x16B664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B664u;
label_16b664:
    // 0x16b664: 0x12200012  beqz        $s1, . + 4 + (0x12 << 2)
    ctx->pc = 0x16B664u;
    {
        const bool branch_taken_0x16b664 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b664) {
            ctx->pc = 0x16B6B0u;
            goto label_16b6b0;
        }
    }
    ctx->pc = 0x16B66Cu;
    // 0x16b66c: 0x12110010  beq         $s0, $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x16B66Cu;
    {
        const bool branch_taken_0x16b66c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 17));
        if (branch_taken_0x16b66c) {
            ctx->pc = 0x16B6B0u;
            goto label_16b6b0;
        }
    }
    ctx->pc = 0x16B674u;
    // 0x16b674: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16b674u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16b678: 0x0  nop
    ctx->pc = 0x16b678u;
    // NOP
    // 0x16b67c: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x16b67cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x16b680: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x16b680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x16b684: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x16b684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x16b688: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x16b688u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x16b68c: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x16b68cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x16b690: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x16b690u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b694: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x16b694u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16b698: 0x27a70068  addiu       $a3, $sp, 0x68
    ctx->pc = 0x16b698u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x16b69c: 0xc78c81b0  lwc1        $f12, -0x7E50($gp)
    ctx->pc = 0x16b69cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x16b6a0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x16b6a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b6a4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x16b6a4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b6a8: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x16B6A8u;
    SET_GPR_U32(ctx, 31, 0x16B6B0u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x16B6A8u, 0x16B6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B6B0u;
label_16b6b0:
    // 0x16b6b0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x16b6b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_16b6b4:
    // 0x16b6b4: 0x2a430005  slti        $v1, $s2, 0x5
    ctx->pc = 0x16b6b4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x16b6b8: 0x1460ff43  bnez        $v1, . + 4 + (-0xBD << 2)
    ctx->pc = 0x16B6B8u;
    {
        const bool branch_taken_0x16b6b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16b6b8) {
            ctx->pc = 0x16B3C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16b3c8;
        }
    }
    ctx->pc = 0x16B6C0u;
    // 0x16b6c0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x16b6c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16b6c4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x16b6c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16b6c8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x16b6c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16b6cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16b6ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16b6d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16b6d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16b6d4: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x16b6d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x16b6d8: 0x3e00008  jr          $ra
    ctx->pc = 0x16B6D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16B6D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16B6E0u;
}
