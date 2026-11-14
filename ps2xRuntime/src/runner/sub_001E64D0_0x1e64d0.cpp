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

// Function: sub_001E64D0
// Address: 0x1e64d0 - 0x1e6650
void sub_001E64D0_0x1e64d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E64D0_0x1e64d0");
#endif

    switch (ctx->pc) {
        case 0x1e6508u: goto label_1e6508;
        case 0x1e6528u: goto label_1e6528;
        default: break;
    }

    ctx->pc = 0x1e64d0u;

    // 0x1e64d0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1e64d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1e64d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e64d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1e64d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e64d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e64dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e64dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e64e0: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1e64e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x1e64e4: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x1e64e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x1e64e8: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x1e64e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x1e64ec: 0xa3a70060  sb          $a3, 0x60($sp)
    ctx->pc = 0x1e64ecu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 96), (uint8_t)GPR_U32(ctx, 7));
    // 0x1e64f0: 0xa3a80070  sb          $t0, 0x70($sp)
    ctx->pc = 0x1e64f0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 112), (uint8_t)GPR_U32(ctx, 8));
    // 0x1e64f4: 0xa3a90080  sb          $t1, 0x80($sp)
    ctx->pc = 0x1e64f4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 128), (uint8_t)GPR_U32(ctx, 9));
    // 0x1e64f8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1e64f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e64fc: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1e64fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1e6500: 0xc077f1c  jal         func_1DFC70
    ctx->pc = 0x1E6500u;
    SET_GPR_U32(ctx, 31, 0x1E6508u);
    ctx->pc = 0x1DFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFC70u, 0x1E6500u, 0x1E6508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6508u;
label_1e6508:
    // 0x1e6508: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1e6508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e650c: 0x622018  mult        $a0, $v1, $v0
    ctx->pc = 0x1e650cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1e6510: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1e6510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e6514: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1e6514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e6518: 0x38080  sll         $s0, $v1, 2
    ctx->pc = 0x1e6518u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e651c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1e651cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6520: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x1E6520u;
    {
        const bool branch_taken_0x1e6520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6520) {
            ctx->pc = 0x1E662Cu;
            goto label_1e662c;
        }
    }
    ctx->pc = 0x1E6528u;
label_1e6528:
    // 0x1e6528: 0x93a30060  lbu         $v1, 0x60($sp)
    ctx->pc = 0x1e6528u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e652c: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E652Cu;
    {
        const bool branch_taken_0x1e652c = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x1e652c) {
            ctx->pc = 0x1E6548u;
            goto label_1e6548;
        }
    }
    ctx->pc = 0x1E6534u;
    // 0x1e6534: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1e6534u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e6538: 0x0  nop
    ctx->pc = 0x1e6538u;
    // NOP
    // 0x1e653c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e653cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1e6540: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1E6540u;
    {
        const bool branch_taken_0x1e6540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6540) {
            ctx->pc = 0x1E6564u;
            goto label_1e6564;
        }
    }
    ctx->pc = 0x1E6548u;
label_1e6548:
    // 0x1e6548: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x1e6548u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x1e654c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1e654cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1e6550: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1e6550u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1e6554: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1e6554u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e6558: 0x0  nop
    ctx->pc = 0x1e6558u;
    // NOP
    // 0x1e655c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e655cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1e6560: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1e6560u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1e6564:
    // 0x1e6564: 0x102180  sll         $a0, $s0, 6
    ctx->pc = 0x1e6564u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x1e6568: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1e6568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e656c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1e656cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e6570: 0xe4600140  swc1        $f0, 0x140($v1)
    ctx->pc = 0x1e6570u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 320), bits); }
    // 0x1e6574: 0x93a30070  lbu         $v1, 0x70($sp)
    ctx->pc = 0x1e6574u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e6578: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E6578u;
    {
        const bool branch_taken_0x1e6578 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x1e6578) {
            ctx->pc = 0x1E6594u;
            goto label_1e6594;
        }
    }
    ctx->pc = 0x1E6580u;
    // 0x1e6580: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1e6580u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e6584: 0x0  nop
    ctx->pc = 0x1e6584u;
    // NOP
    // 0x1e6588: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e6588u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1e658c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1E658Cu;
    {
        const bool branch_taken_0x1e658c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e658c) {
            ctx->pc = 0x1E65B0u;
            goto label_1e65b0;
        }
    }
    ctx->pc = 0x1E6594u;
label_1e6594:
    // 0x1e6594: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x1e6594u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x1e6598: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1e6598u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1e659c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1e659cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1e65a0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1e65a0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e65a4: 0x0  nop
    ctx->pc = 0x1e65a4u;
    // NOP
    // 0x1e65a8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e65a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1e65ac: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1e65acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1e65b0:
    // 0x1e65b0: 0x102180  sll         $a0, $s0, 6
    ctx->pc = 0x1e65b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x1e65b4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1e65b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e65b8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1e65b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e65bc: 0xe4600144  swc1        $f0, 0x144($v1)
    ctx->pc = 0x1e65bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 324), bits); }
    // 0x1e65c0: 0x93a30080  lbu         $v1, 0x80($sp)
    ctx->pc = 0x1e65c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1e65c4: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E65C4u;
    {
        const bool branch_taken_0x1e65c4 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x1e65c4) {
            ctx->pc = 0x1E65E0u;
            goto label_1e65e0;
        }
    }
    ctx->pc = 0x1E65CCu;
    // 0x1e65cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1e65ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e65d0: 0x0  nop
    ctx->pc = 0x1e65d0u;
    // NOP
    // 0x1e65d4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e65d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1e65d8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1E65D8u;
    {
        const bool branch_taken_0x1e65d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e65d8) {
            ctx->pc = 0x1E65FCu;
            goto label_1e65fc;
        }
    }
    ctx->pc = 0x1E65E0u;
label_1e65e0:
    // 0x1e65e0: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x1e65e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x1e65e4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1e65e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1e65e8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1e65e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1e65ec: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1e65ecu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e65f0: 0x0  nop
    ctx->pc = 0x1e65f0u;
    // NOP
    // 0x1e65f4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e65f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1e65f8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1e65f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1e65fc:
    // 0x1e65fc: 0x102180  sll         $a0, $s0, 6
    ctx->pc = 0x1e65fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x1e6600: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1e6600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e6604: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1e6604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e6608: 0xe4600148  swc1        $f0, 0x148($v1)
    ctx->pc = 0x1e6608u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 328), bits); }
    // 0x1e660c: 0x3c03437f  lui         $v1, 0x437F
    ctx->pc = 0x1e660cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17279 << 16));
    // 0x1e6610: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1e6610u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e6614: 0x102180  sll         $a0, $s0, 6
    ctx->pc = 0x1e6614u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x1e6618: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1e6618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e661c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1e661cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e6620: 0xe460014c  swc1        $f0, 0x14C($v1)
    ctx->pc = 0x1e6620u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 332), bits); }
    // 0x1e6624: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1e6624u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1e6628: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1e6628u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1e662c:
    // 0x1e662c: 0x2e230004  sltiu       $v1, $s1, 0x4
    ctx->pc = 0x1e662cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1e6630: 0x1460ffbd  bnez        $v1, . + 4 + (-0x43 << 2)
    ctx->pc = 0x1E6630u;
    {
        const bool branch_taken_0x1e6630 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e6630) {
            ctx->pc = 0x1E6528u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e6528;
        }
    }
    ctx->pc = 0x1E6638u;
    // 0x1e6638: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e6638u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e663c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e663cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e6640: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e6640u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e6644: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x1e6644u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1e6648: 0x3e00008  jr          $ra
    ctx->pc = 0x1E6648u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E6648u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E6650u;
}
