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

// Function: sub_00489550
// Address: 0x489550 - 0x4897c0
void sub_00489550_0x489550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00489550_0x489550");
#endif

    switch (ctx->pc) {
        case 0x4895a0u: goto label_4895a0;
        case 0x4895b8u: goto label_4895b8;
        case 0x4895d4u: goto label_4895d4;
        case 0x4895f0u: goto label_4895f0;
        case 0x48962cu: goto label_48962c;
        case 0x489658u: goto label_489658;
        case 0x48966cu: goto label_48966c;
        case 0x489724u: goto label_489724;
        case 0x489748u: goto label_489748;
        case 0x489760u: goto label_489760;
        case 0x489774u: goto label_489774;
        case 0x489788u: goto label_489788;
        default: break;
    }

    ctx->pc = 0x489550u;

    // 0x489550: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x489550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x489554: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x489554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x489558: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x489558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x48955c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x48955cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x489560: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x489560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x489564: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x489564u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x489568: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x489568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x48956c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x48956cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x489570: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x489570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x489574: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x489574u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x489578: 0xafa400a0  sw          $a0, 0xA0($sp)
    ctx->pc = 0x489578u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 4));
    // 0x48957c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x48957cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x489580: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x489580u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x489584: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x489584u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x489588: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x489588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
    // 0x48958c: 0x8c547c30  lw          $s4, 0x7C30($v0)
    ctx->pc = 0x48958cu;
    SET_GPR_S32(ctx, 20, (int32_t)FAST_READ32(0x657C30u));
    // 0x489590: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x489590u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
    // 0x489594: 0x8c537c34  lw          $s3, 0x7C34($v0)
    ctx->pc = 0x489594u;
    SET_GPR_S32(ctx, 19, (int32_t)FAST_READ32(0x657C34u));
    // 0x489598: 0xc105eea  jal         func_417BA8
    ctx->pc = 0x489598u;
    SET_GPR_U32(ctx, 31, 0x4895A0u);
    ctx->pc = 0x417BA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x417BA8u, 0x489598u, 0x4895A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4895A0u;
label_4895a0:
    // 0x4895a0: 0xaf82c0e0  sw          $v0, -0x3F20($gp)
    ctx->pc = 0x4895a0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951136), GPR_U32(ctx, 2));
    // 0x4895a4: 0x8f82c0e0  lw          $v0, -0x3F20($gp)
    ctx->pc = 0x4895a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951136)));
    // 0x4895a8: 0x10400061  beqz        $v0, . + 4 + (0x61 << 2)
    ctx->pc = 0x4895A8u;
    {
        const bool branch_taken_0x4895a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4895a8) {
            ctx->pc = 0x489730u;
            goto label_489730;
        }
    }
    ctx->pc = 0x4895B0u;
    // 0x4895b0: 0xc1067b0  jal         func_419EC0
    ctx->pc = 0x4895B0u;
    SET_GPR_U32(ctx, 31, 0x4895B8u);
    ctx->pc = 0x419EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419EC0u, 0x4895B0u, 0x4895B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4895B8u;
label_4895b8:
    // 0x4895b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4895b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4895bc: 0x1200005c  beqz        $s0, . + 4 + (0x5C << 2)
    ctx->pc = 0x4895BCu;
    {
        const bool branch_taken_0x4895bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4895bc) {
            ctx->pc = 0x489730u;
            goto label_489730;
        }
    }
    ctx->pc = 0x4895C4u;
    // 0x4895c4: 0x8f84c0e0  lw          $a0, -0x3F20($gp)
    ctx->pc = 0x4895c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951136)));
    // 0x4895c8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4895c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4895cc: 0xc1083aa  jal         func_420EA8
    ctx->pc = 0x4895CCu;
    SET_GPR_U32(ctx, 31, 0x4895D4u);
    ctx->pc = 0x420EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420EA8u, 0x4895CCu, 0x4895D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4895D4u;
label_4895d4:
    // 0x4895d4: 0x2797c0e0  addiu       $s7, $gp, -0x3F20
    ctx->pc = 0x4895d4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951136));
    // 0x4895d8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4895d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4895dc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4895dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4895e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4895e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4895e4: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x4895e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4895e8: 0xc10746c  jal         func_41D1B0
    ctx->pc = 0x4895E8u;
    SET_GPR_U32(ctx, 31, 0x4895F0u);
    ctx->pc = 0x41D1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D1B0u, 0x4895E8u, 0x4895F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4895F0u;
label_4895f0:
    // 0x4895f0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4895f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4895f4: 0x1240004e  beqz        $s2, . + 4 + (0x4E << 2)
    ctx->pc = 0x4895F4u;
    {
        const bool branch_taken_0x4895f4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x4895f4) {
            ctx->pc = 0x489730u;
            goto label_489730;
        }
    }
    ctx->pc = 0x4895FCu;
    // 0x4895fc: 0x8f82c0e0  lw          $v0, -0x3F20($gp)
    ctx->pc = 0x4895fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951136)));
    // 0x489600: 0xac520060  sw          $s2, 0x60($v0)
    ctx->pc = 0x489600u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 18));
    // 0x489604: 0x2796c0e0  addiu       $s6, $gp, -0x3F20
    ctx->pc = 0x489604u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951136));
    // 0x489608: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x489608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x48960c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x48960Cu;
    {
        const bool branch_taken_0x48960c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48960c) {
            ctx->pc = 0x489644u;
            goto label_489644;
        }
    }
    ctx->pc = 0x489614u;
    // 0x489614: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x489614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x489618: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x489618u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48961c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x48961cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x489620: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x489620u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x489624: 0xc10746c  jal         func_41D1B0
    ctx->pc = 0x489624u;
    SET_GPR_U32(ctx, 31, 0x48962Cu);
    ctx->pc = 0x41D1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D1B0u, 0x489624u, 0x48962Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48962Cu;
label_48962c:
    // 0x48962c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x48962cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x489630: 0x1220003f  beqz        $s1, . + 4 + (0x3F << 2)
    ctx->pc = 0x489630u;
    {
        const bool branch_taken_0x489630 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x489630) {
            ctx->pc = 0x489730u;
            goto label_489730;
        }
    }
    ctx->pc = 0x489638u;
    // 0x489638: 0x8f82c0e0  lw          $v0, -0x3F20($gp)
    ctx->pc = 0x489638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951136)));
    // 0x48963c: 0xac510064  sw          $s1, 0x64($v0)
    ctx->pc = 0x48963cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 17));
    // 0x489640: 0x2795c0e0  addiu       $s5, $gp, -0x3F20
    ctx->pc = 0x489640u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951136));
label_489644:
    // 0x489644: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x489644u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x489648: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x489648u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x48964c: 0x8f84c0e0  lw          $a0, -0x3F20($gp)
    ctx->pc = 0x48964cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951136)));
    // 0x489650: 0xc10604c  jal         func_418130
    ctx->pc = 0x489650u;
    SET_GPR_U32(ctx, 31, 0x489658u);
    ctx->pc = 0x418130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x418130u, 0x489650u, 0x489658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x489658u;
label_489658:
    // 0x489658: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x489658u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x48965c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x48965cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x489660: 0x8f84c0e0  lw          $a0, -0x3F20($gp)
    ctx->pc = 0x489660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951136)));
    // 0x489664: 0xc106080  jal         func_418200
    ctx->pc = 0x489664u;
    SET_GPR_U32(ctx, 31, 0x48966Cu);
    ctx->pc = 0x418200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x418200u, 0x489664u, 0x48966Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48966Cu;
label_48966c:
    // 0x48966c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x48966cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x489670: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x489670u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x489674: 0x0  nop
    ctx->pc = 0x489674u;
    // NOP
    // 0x489678: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x489678u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x48967c: 0x6800006  bltz        $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x48967Cu;
    {
        const bool branch_taken_0x48967c = (GPR_S32(ctx, 20) < 0);
        if (branch_taken_0x48967c) {
            ctx->pc = 0x489698u;
            goto label_489698;
        }
    }
    ctx->pc = 0x489684u;
    // 0x489684: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x489684u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x489688: 0x0  nop
    ctx->pc = 0x489688u;
    // NOP
    // 0x48968c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x48968cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x489690: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x489690u;
    {
        const bool branch_taken_0x489690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x489690) {
            ctx->pc = 0x4896B4u;
            goto label_4896b4;
        }
    }
    ctx->pc = 0x489698u;
label_489698:
    // 0x489698: 0x141842  srl         $v1, $s4, 1
    ctx->pc = 0x489698u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 20), 1));
    // 0x48969c: 0x32820001  andi        $v0, $s4, 0x1
    ctx->pc = 0x48969cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
    // 0x4896a0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4896a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4896a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4896a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4896a8: 0x0  nop
    ctx->pc = 0x4896a8u;
    // NOP
    // 0x4896ac: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x4896acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x4896b0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x4896b0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_4896b4:
    // 0x4896b4: 0x6600006  bltz        $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x4896B4u;
    {
        const bool branch_taken_0x4896b4 = (GPR_S32(ctx, 19) < 0);
        if (branch_taken_0x4896b4) {
            ctx->pc = 0x4896D0u;
            goto label_4896d0;
        }
    }
    ctx->pc = 0x4896BCu;
    // 0x4896bc: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x4896bcu;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4896c0: 0x0  nop
    ctx->pc = 0x4896c0u;
    // NOP
    // 0x4896c4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4896c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x4896c8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4896C8u;
    {
        const bool branch_taken_0x4896c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4896c8) {
            ctx->pc = 0x4896ECu;
            goto label_4896ec;
        }
    }
    ctx->pc = 0x4896D0u;
label_4896d0:
    // 0x4896d0: 0x131842  srl         $v1, $s3, 1
    ctx->pc = 0x4896d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 19), 1));
    // 0x4896d4: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x4896d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x4896d8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4896d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4896dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4896dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4896e0: 0x0  nop
    ctx->pc = 0x4896e0u;
    // NOP
    // 0x4896e4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4896e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x4896e8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x4896e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_4896ec:
    // 0x4896ec: 0x0  nop
    ctx->pc = 0x4896ecu;
    // NOP
    // 0x4896f0: 0x0  nop
    ctx->pc = 0x4896f0u;
    // NOP
    // 0x4896f4: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x4896f4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x4896f8: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x4896f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x4896fc: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x4896fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x489700: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x489700u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x489704: 0xc7a1009c  lwc1        $f1, 0x9C($sp)
    ctx->pc = 0x489704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x489708: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x489708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x48970c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x48970cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x489710: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x489710u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x489714: 0x8f84c0e0  lw          $a0, -0x3F20($gp)
    ctx->pc = 0x489714u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951136)));
    // 0x489718: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x489718u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x48971c: 0xc105fee  jal         func_417FB8
    ctx->pc = 0x48971Cu;
    SET_GPR_U32(ctx, 31, 0x489724u);
    ctx->pc = 0x417FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x417FB8u, 0x48971Cu, 0x489724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x489724u;
label_489724:
    // 0x489724: 0x8f82c0e0  lw          $v0, -0x3F20($gp)
    ctx->pc = 0x489724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951136)));
    // 0x489728: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x489728u;
    {
        const bool branch_taken_0x489728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x489728) {
            ctx->pc = 0x48978Cu;
            goto label_48978c;
        }
    }
    ctx->pc = 0x489730u;
label_489730:
    // 0x489730: 0x8f82c0e0  lw          $v0, -0x3F20($gp)
    ctx->pc = 0x489730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951136)));
    // 0x489734: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x489734u;
    {
        const bool branch_taken_0x489734 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x489734) {
            ctx->pc = 0x48974Cu;
            goto label_48974c;
        }
    }
    ctx->pc = 0x48973Cu;
    // 0x48973c: 0x8f84c0e0  lw          $a0, -0x3F20($gp)
    ctx->pc = 0x48973cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951136)));
    // 0x489740: 0xc105fc4  jal         func_417F10
    ctx->pc = 0x489740u;
    SET_GPR_U32(ctx, 31, 0x489748u);
    ctx->pc = 0x417F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x417F10u, 0x489740u, 0x489748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x489748u;
label_489748:
    // 0x489748: 0xaf80c0e0  sw          $zero, -0x3F20($gp)
    ctx->pc = 0x489748u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951136), GPR_U32(ctx, 0));
label_48974c:
    // 0x48974c: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x48974Cu;
    {
        const bool branch_taken_0x48974c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x48974c) {
            ctx->pc = 0x489760u;
            goto label_489760;
        }
    }
    ctx->pc = 0x489754u;
    // 0x489754: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x489754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x489758: 0xc1067c6  jal         func_419F18
    ctx->pc = 0x489758u;
    SET_GPR_U32(ctx, 31, 0x489760u);
    ctx->pc = 0x419F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419F18u, 0x489758u, 0x489760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x489760u;
label_489760:
    // 0x489760: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x489760u;
    {
        const bool branch_taken_0x489760 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x489760) {
            ctx->pc = 0x489774u;
            goto label_489774;
        }
    }
    ctx->pc = 0x489768u;
    // 0x489768: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x489768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48976c: 0xc1074ac  jal         func_41D2B0
    ctx->pc = 0x48976Cu;
    SET_GPR_U32(ctx, 31, 0x489774u);
    ctx->pc = 0x41D2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D2B0u, 0x48976Cu, 0x489774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x489774u;
label_489774:
    // 0x489774: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x489774u;
    {
        const bool branch_taken_0x489774 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x489774) {
            ctx->pc = 0x489788u;
            goto label_489788;
        }
    }
    ctx->pc = 0x48977Cu;
    // 0x48977c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x48977cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x489780: 0xc1074ac  jal         func_41D2B0
    ctx->pc = 0x489780u;
    SET_GPR_U32(ctx, 31, 0x489788u);
    ctx->pc = 0x41D2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D2B0u, 0x489780u, 0x489788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x489788u;
label_489788:
    // 0x489788: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x489788u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_48978c:
    // 0x48978c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x48978cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x489790: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x489790u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x489794: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x489794u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x489798: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x489798u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x48979c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x48979cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4897a0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4897a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4897a4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4897a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4897a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4897a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4897ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4897acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4897b0: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x4897b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x4897b4: 0x3e00008  jr          $ra
    ctx->pc = 0x4897B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4897B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4897BCu;
    // 0x4897bc: 0x0  nop
    ctx->pc = 0x4897bcu;
    // NOP
    ctx->pc = 0x4897c0u;
}
