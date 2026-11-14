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

// Function: sub_003CA3B0
// Address: 0x3ca3b0 - 0x3ca5d0
void sub_003CA3B0_0x3ca3b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CA3B0_0x3ca3b0");
#endif

    switch (ctx->pc) {
        case 0x3ca3f0u: goto label_3ca3f0;
        case 0x3ca3fcu: goto label_3ca3fc;
        case 0x3ca480u: goto label_3ca480;
        case 0x3ca488u: goto label_3ca488;
        case 0x3ca4a4u: goto label_3ca4a4;
        case 0x3ca4b8u: goto label_3ca4b8;
        case 0x3ca4c0u: goto label_3ca4c0;
        case 0x3ca57cu: goto label_3ca57c;
        case 0x3ca58cu: goto label_3ca58c;
        case 0x3ca594u: goto label_3ca594;
        default: break;
    }

    ctx->pc = 0x3ca3b0u;

    // 0x3ca3b0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3ca3b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x3ca3b4: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x3ca3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x3ca3b8: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x3ca3b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x3ca3bc: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x3ca3bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x3ca3c0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3ca3c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x3ca3c4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3ca3c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ca3c8: 0x8c54b348  lw          $s4, -0x4CB8($v0)
    ctx->pc = 0x3ca3c8u;
    SET_GPR_S32(ctx, 20, (int32_t)FAST_READ32(0x5DB348u));
    // 0x3ca3cc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3ca3ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ca3d0: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x3ca3d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x3ca3d4: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x3ca3d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x3ca3d8: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x3ca3d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x3ca3dc: 0x12800073  beqz        $s4, . + 4 + (0x73 << 2)
    ctx->pc = 0x3CA3DCu;
    {
        const bool branch_taken_0x3ca3dc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CA3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA3DCu;
        // 0x3ca3e0: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ca3dc) {
            ctx->pc = 0x3CA5ACu;
            goto label_3ca5ac;
        }
    }
    ctx->pc = 0x3CA3E4u;
    // 0x3ca3e4: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x3CA3E4u;
    {
        const bool branch_taken_0x3ca3e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CA3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA3E4u;
        // 0x3ca3e8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ca3e4) {
            ctx->pc = 0x3CA58Cu;
            goto label_3ca58c;
        }
    }
    ctx->pc = 0x3CA3ECu;
    // 0x3ca3ec: 0x0  nop
    ctx->pc = 0x3ca3ecu;
    // NOP
label_3ca3f0:
    // 0x3ca3f0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3ca3f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ca3f4: 0xc1036da  jal         func_40DB68
    ctx->pc = 0x3CA3F4u;
    SET_GPR_U32(ctx, 31, 0x3CA3FCu);
    ctx->pc = 0x3CA3F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CA3F4u;
    // 0x3ca3f8: 0x26150001  addiu       $s5, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB68u, 0x3CA3F4u, 0x3CA3FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CA3FCu;
label_3ca3fc:
    // 0x3ca3fc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3ca3fcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ca400: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3ca400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3ca404: 0x14400061  bnez        $v0, . + 4 + (0x61 << 2)
    ctx->pc = 0x3CA404u;
    {
        const bool branch_taken_0x3ca404 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CA408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA404u;
        // 0x3ca408: 0x2a0802d  daddu       $s0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ca404) {
            ctx->pc = 0x3CA58Cu;
            goto label_3ca58c;
        }
    }
    ctx->pc = 0x3CA40Cu;
    // 0x3ca40c: 0x8c72001c  lw          $s2, 0x1C($v1)
    ctx->pc = 0x3ca40cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x3ca410: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x3ca410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3ca414: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x3ca414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3ca418: 0xc6220004  lwc1        $f2, 0x4($s1)
    ctx->pc = 0x3ca418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3ca41c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3ca41cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3ca420: 0xc6230008  lwc1        $f3, 0x8($s1)
    ctx->pc = 0x3ca420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3ca424: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x3ca424u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3ca428: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x3ca428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3ca42c: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x3ca42cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x3ca430: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x3ca430u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3ca434: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x3ca434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3ca438: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x3ca438u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x3ca43c: 0xe7a30008  swc1        $f3, 0x8($sp)
    ctx->pc = 0x3ca43cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x3ca440: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x3ca440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3ca444: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x3ca444u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x3ca448: 0xc4640018  lwc1        $f4, 0x18($v1)
    ctx->pc = 0x3ca448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3ca44c: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x3ca44cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x3ca450: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x3ca450u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x3ca454: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x3ca454u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x3ca458: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x3ca458u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x3ca45c: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x3ca45cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x3ca460: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x3ca460u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x3ca464: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3ca464u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3ca468: 0x0  nop
    ctx->pc = 0x3ca468u;
    // NOP
    // 0x3ca46c: 0x45000041  bc1f        . + 4 + (0x41 << 2)
    ctx->pc = 0x3CA46Cu;
    {
        const bool branch_taken_0x3ca46c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3CA470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA46Cu;
        // 0x3ca470: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ca46c) {
            ctx->pc = 0x3CA574u;
            goto label_3ca574;
        }
    }
    ctx->pc = 0x3CA474u;
    // 0x3ca474: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3CA474u;
    {
        const bool branch_taken_0x3ca474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ca474) {
            ctx->pc = 0x3CA49Cu;
            goto label_3ca49c;
        }
    }
    ctx->pc = 0x3CA47Cu;
    // 0x3ca47c: 0x0  nop
    ctx->pc = 0x3ca47cu;
    // NOP
label_3ca480:
    // 0x3ca480: 0xc1036da  jal         func_40DB68
    ctx->pc = 0x3CA480u;
    SET_GPR_U32(ctx, 31, 0x3CA488u);
    ctx->pc = 0x3CA484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CA480u;
    // 0x3ca484: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB68u, 0x3CA480u, 0x3CA488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CA488u;
label_3ca488:
    // 0x3ca488: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3ca488u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3ca48c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3ca48cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ca490: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x3ca490u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3ca494: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x3ca494u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x3ca498: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x3ca498u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
label_3ca49c:
    // 0x3ca49c: 0xc10376a  jal         func_40DDA8
    ctx->pc = 0x3CA49Cu;
    SET_GPR_U32(ctx, 31, 0x3CA4A4u);
    ctx->pc = 0x3CA4A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CA49Cu;
    // 0x3ca4a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DDA8u, 0x3CA49Cu, 0x3CA4A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CA4A4u;
label_3ca4a4:
    // 0x3ca4a4: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x3ca4a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3ca4a8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x3CA4A8u;
    {
        const bool branch_taken_0x3ca4a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CA4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA4A8u;
        // 0x3ca4ac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ca4a8) {
            ctx->pc = 0x3CA480u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ca480;
        }
    }
    ctx->pc = 0x3CA4B0u;
    // 0x3ca4b0: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x3CA4B0u;
    {
        const bool branch_taken_0x3ca4b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CA4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA4B0u;
        // 0x3ca4b4: 0x2a0802d  daddu       $s0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ca4b0) {
            ctx->pc = 0x3CA58Cu;
            goto label_3ca58c;
        }
    }
    ctx->pc = 0x3CA4B8u;
label_3ca4b8:
    // 0x3ca4b8: 0xc1036da  jal         func_40DB68
    ctx->pc = 0x3CA4B8u;
    SET_GPR_U32(ctx, 31, 0x3CA4C0u);
    ctx->pc = 0x3CA4BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CA4B8u;
    // 0x3ca4bc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB68u, 0x3CA4B8u, 0x3CA4C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CA4C0u;
label_3ca4c0:
    // 0x3ca4c0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3ca4c0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ca4c4: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x3ca4c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3ca4c8: 0x24620008  addiu       $v0, $v1, 0x8
    ctx->pc = 0x3ca4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x3ca4cc: 0xc6230004  lwc1        $f3, 0x4($s1)
    ctx->pc = 0x3ca4ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3ca4d0: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x3ca4d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3ca4d4: 0xc4440004  lwc1        $f4, 0x4($v0)
    ctx->pc = 0x3ca4d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3ca4d8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3ca4d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3ca4dc: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x3ca4dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3ca4e0: 0x46032102  mul.s       $f4, $f4, $f3
    ctx->pc = 0x3ca4e0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x3ca4e4: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x3ca4e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3ca4e8: 0xc625000c  lwc1        $f5, 0xC($s1)
    ctx->pc = 0x3ca4e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x3ca4ec: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x3ca4ecu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x3ca4f0: 0xc443000c  lwc1        $f3, 0xC($v0)
    ctx->pc = 0x3ca4f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3ca4f4: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x3ca4f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x3ca4f8: 0x44803000  mtc1        $zero, $f6
    ctx->pc = 0x3ca4f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x3ca4fc: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x3ca4fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x3ca500: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x3ca500u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x3ca504: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x3ca504u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x3ca508: 0x46003034  c.lt.s      $f6, $f0
    ctx->pc = 0x3ca508u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3ca50c: 0x0  nop
    ctx->pc = 0x3ca50cu;
    // NOP
    // 0x3ca510: 0x45000015  bc1f        . + 4 + (0x15 << 2)
    ctx->pc = 0x3CA510u;
    {
        const bool branch_taken_0x3ca510 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3CA514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA510u;
        // 0x3ca514: 0x94620000  lhu         $v0, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ca510) {
            ctx->pc = 0x3CA568u;
            goto label_3ca568;
        }
    }
    ctx->pc = 0x3CA518u;
    // 0x3ca518: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x3ca518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3ca51c: 0xc463001c  lwc1        $f3, 0x1C($v1)
    ctx->pc = 0x3ca51cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3ca520: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x3ca520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3ca524: 0xc6640004  lwc1        $f4, 0x4($s3)
    ctx->pc = 0x3ca524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3ca528: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3ca528u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3ca52c: 0xc6620008  lwc1        $f2, 0x8($s3)
    ctx->pc = 0x3ca52cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3ca530: 0x46032102  mul.s       $f4, $f4, $f3
    ctx->pc = 0x3ca530u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x3ca534: 0xc4610020  lwc1        $f1, 0x20($v1)
    ctx->pc = 0x3ca534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3ca538: 0xc4650024  lwc1        $f5, 0x24($v1)
    ctx->pc = 0x3ca538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x3ca53c: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x3ca53cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x3ca540: 0xc663000c  lwc1        $f3, 0xC($s3)
    ctx->pc = 0x3ca540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3ca544: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x3ca544u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x3ca548: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x3ca548u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x3ca54c: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x3ca54cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x3ca550: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x3ca550u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x3ca554: 0x46003034  c.lt.s      $f6, $f0
    ctx->pc = 0x3ca554u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3ca558: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x3CA558u;
    {
        const bool branch_taken_0x3ca558 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3ca558) {
            ctx->pc = 0x3CA568u;
            goto label_3ca568;
        }
    }
    ctx->pc = 0x3CA560u;
    // 0x3ca560: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3CA560u;
    {
        const bool branch_taken_0x3ca560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CA564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA560u;
        // 0x3ca564: 0x3042fffe  andi        $v0, $v0, 0xFFFE (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65534);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ca560) {
            ctx->pc = 0x3CA56Cu;
            goto label_3ca56c;
        }
    }
    ctx->pc = 0x3CA568u;
label_3ca568:
    // 0x3ca568: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x3ca568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_3ca56c:
    // 0x3ca56c: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x3ca56cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x3ca570: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3ca570u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_3ca574:
    // 0x3ca574: 0xc10376a  jal         func_40DDA8
    ctx->pc = 0x3CA574u;
    SET_GPR_U32(ctx, 31, 0x3CA57Cu);
    ctx->pc = 0x3CA578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CA574u;
    // 0x3ca578: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DDA8u, 0x3CA574u, 0x3CA57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CA57Cu;
label_3ca57c:
    // 0x3ca57c: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x3ca57cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3ca580: 0x1440ffcd  bnez        $v0, . + 4 + (-0x33 << 2)
    ctx->pc = 0x3CA580u;
    {
        const bool branch_taken_0x3ca580 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CA584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA580u;
        // 0x3ca584: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ca580) {
            ctx->pc = 0x3CA4B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ca4b8;
        }
    }
    ctx->pc = 0x3CA588u;
    // 0x3ca588: 0x2a0802d  daddu       $s0, $s5, $zero
    ctx->pc = 0x3ca588u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3ca58c:
    // 0x3ca58c: 0xc10376a  jal         func_40DDA8
    ctx->pc = 0x3CA58Cu;
    SET_GPR_U32(ctx, 31, 0x3CA594u);
    ctx->pc = 0x3CA590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CA58Cu;
    // 0x3ca590: 0x8e840000  lw          $a0, 0x0($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DDA8u, 0x3CA58Cu, 0x3CA594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CA594u;
label_3ca594:
    // 0x3ca594: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x3ca594u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3ca598: 0x5440ff95  bnel        $v0, $zero, . + 4 + (-0x6B << 2)
    ctx->pc = 0x3CA598u;
    {
        const bool branch_taken_0x3ca598 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ca598) {
            ctx->pc = 0x3CA59Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3CA598u;
            // 0x3ca59c: 0x8e840000  lw          $a0, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CA3F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ca3f0;
        }
    }
    ctx->pc = 0x3CA5A0u;
    // 0x3ca5a0: 0x8e940008  lw          $s4, 0x8($s4)
    ctx->pc = 0x3ca5a0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x3ca5a4: 0x1680fff9  bnez        $s4, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3CA5A4u;
    {
        const bool branch_taken_0x3ca5a4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CA5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA5A4u;
        // 0x3ca5a8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ca5a4) {
            ctx->pc = 0x3CA58Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ca58c;
        }
    }
    ctx->pc = 0x3CA5ACu;
label_3ca5ac:
    // 0x3ca5ac: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x3ca5acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3ca5b0: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x3ca5b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3ca5b4: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x3ca5b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3ca5b8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3ca5b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3ca5bc: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x3ca5bcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3ca5c0: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x3ca5c0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3ca5c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3ca5c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ca5c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3CA5C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CA5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA5C8u;
        // 0x3ca5cc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CA5C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3CA5D0u;
}
