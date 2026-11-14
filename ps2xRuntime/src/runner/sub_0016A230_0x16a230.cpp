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

// Function: sub_0016A230
// Address: 0x16a230 - 0x16a5b0
void sub_0016A230_0x16a230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016A230_0x16a230");
#endif

    switch (ctx->pc) {
        case 0x16a284u: goto label_16a284;
        case 0x16a2bcu: goto label_16a2bc;
        case 0x16a2f0u: goto label_16a2f0;
        case 0x16a370u: goto label_16a370;
        case 0x16a3a4u: goto label_16a3a4;
        case 0x16a3d4u: goto label_16a3d4;
        case 0x16a3e0u: goto label_16a3e0;
        case 0x16a3f4u: goto label_16a3f4;
        case 0x16a410u: goto label_16a410;
        case 0x16a44cu: goto label_16a44c;
        case 0x16a484u: goto label_16a484;
        case 0x16a4c0u: goto label_16a4c0;
        case 0x16a540u: goto label_16a540;
        case 0x16a578u: goto label_16a578;
        case 0x16a588u: goto label_16a588;
        default: break;
    }

    ctx->pc = 0x16a230u;

    // 0x16a230: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x16a230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x16a234: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x16a234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x16a238: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x16a238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x16a23c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16a23cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x16a240: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16a240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16a244: 0xafa400a0  sw          $a0, 0xA0($sp)
    ctx->pc = 0x16a244u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 4));
    // 0x16a248: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x16a248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x16a24c: 0x8f83bac4  lw          $v1, -0x453C($gp)
    ctx->pc = 0x16a24cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949572)));
    // 0x16a250: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x16a250u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16a254: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16a254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16a258: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x16a258u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x16a25c: 0x8c820058  lw          $v0, 0x58($a0)
    ctx->pc = 0x16a25cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x16a260: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16a260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16a264: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x16a264u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x16a268: 0x12000021  beqz        $s0, . + 4 + (0x21 << 2)
    ctx->pc = 0x16A268u;
    {
        const bool branch_taken_0x16a268 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a268) {
            ctx->pc = 0x16A2F0u;
            goto label_16a2f0;
        }
    }
    ctx->pc = 0x16A270u;
    // 0x16a270: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x16a270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x16a274: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x16a274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x16a278: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16a278u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a27c: 0xc08c910  jal         func_232440
    ctx->pc = 0x16A27Cu;
    SET_GPR_U32(ctx, 31, 0x16A284u);
    ctx->pc = 0x232440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232440u, 0x16A27Cu, 0x16A284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A284u;
label_16a284:
    // 0x16a284: 0x27a30088  addiu       $v1, $sp, 0x88
    ctx->pc = 0x16a284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x16a288: 0xdf828f18  ld          $v0, -0x70E8($gp)
    ctx->pc = 0x16a288u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294938392)));
    // 0x16a28c: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x16a28cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x16a290: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x16a290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x16a294: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x16a294u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x16a298: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x16a298u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x16a29c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16a29cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a2a0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x16a2a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16a2a4: 0x27a70088  addiu       $a3, $sp, 0x88
    ctx->pc = 0x16a2a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x16a2a8: 0xc78d81b0  lwc1        $f13, -0x7E50($gp)
    ctx->pc = 0x16a2a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x16a2ac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x16a2acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a2b0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x16a2b0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a2b4: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x16A2B4u;
    SET_GPR_U32(ctx, 31, 0x16A2BCu);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x16A2B4u, 0x16A2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A2BCu;
label_16a2bc:
    // 0x16a2bc: 0xc78080ac  lwc1        $f0, -0x7F54($gp)
    ctx->pc = 0x16a2bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934700)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16a2c0: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x16a2c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x16a2c4: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x16a2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x16a2c8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x16a2c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x16a2cc: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x16a2ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x16a2d0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16a2d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a2d4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x16a2d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16a2d8: 0x27a7009c  addiu       $a3, $sp, 0x9C
    ctx->pc = 0x16a2d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    // 0x16a2dc: 0xc78d81b0  lwc1        $f13, -0x7E50($gp)
    ctx->pc = 0x16a2dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x16a2e0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x16a2e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a2e4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x16a2e4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a2e8: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x16A2E8u;
    SET_GPR_U32(ctx, 31, 0x16A2F0u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x16A2E8u, 0x16A2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A2F0u;
label_16a2f0:
    // 0x16a2f0: 0x8f838ee4  lw          $v1, -0x711C($gp)
    ctx->pc = 0x16a2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938340)));
    // 0x16a2f4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x16a2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16a2f8: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x16A2F8u;
    {
        const bool branch_taken_0x16a2f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x16a2f8) {
            ctx->pc = 0x16A328u;
            goto label_16a328;
        }
    }
    ctx->pc = 0x16A300u;
    // 0x16a300: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x16a300u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x16a304: 0x8f838ee4  lw          $v1, -0x711C($gp)
    ctx->pc = 0x16a304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938340)));
    // 0x16a308: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x16a308u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16a30c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16a30cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16a310: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x16a310u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x16a314: 0x8c820058  lw          $v0, 0x58($a0)
    ctx->pc = 0x16a314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x16a318: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16a318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16a31c: 0x8c520004  lw          $s2, 0x4($v0)
    ctx->pc = 0x16a31cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x16a320: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x16A320u;
    {
        const bool branch_taken_0x16a320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a320) {
            ctx->pc = 0x16A32Cu;
            goto label_16a32c;
        }
    }
    ctx->pc = 0x16A328u;
label_16a328:
    // 0x16a328: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x16a328u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16a32c:
    // 0x16a32c: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x16a32cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a330: 0x1200001c  beqz        $s0, . + 4 + (0x1C << 2)
    ctx->pc = 0x16A330u;
    {
        const bool branch_taken_0x16a330 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a330) {
            ctx->pc = 0x16A3A4u;
            goto label_16a3a4;
        }
    }
    ctx->pc = 0x16A338u;
    // 0x16a338: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x16a338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x16a33c: 0xdf828f20  ld          $v0, -0x70E0($gp)
    ctx->pc = 0x16a33cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294938400)));
    // 0x16a340: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x16a340u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x16a344: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x16a344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x16a348: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x16a348u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x16a34c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16a34cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a350: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x16a350u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16a354: 0x27a70080  addiu       $a3, $sp, 0x80
    ctx->pc = 0x16a354u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x16a358: 0xc78c81b0  lwc1        $f12, -0x7E50($gp)
    ctx->pc = 0x16a358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x16a35c: 0xc78d842c  lwc1        $f13, -0x7BD4($gp)
    ctx->pc = 0x16a35cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x16a360: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x16a360u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a364: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x16a364u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a368: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x16A368u;
    SET_GPR_U32(ctx, 31, 0x16A370u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x16A368u, 0x16A370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A370u;
label_16a370:
    // 0x16a370: 0xc78081b8  lwc1        $f0, -0x7E48($gp)
    ctx->pc = 0x16a370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934968)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16a374: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x16a374u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x16a378: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x16a378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x16a37c: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x16a37cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x16a380: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16a380u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a384: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x16a384u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16a388: 0x27a70098  addiu       $a3, $sp, 0x98
    ctx->pc = 0x16a388u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x16a38c: 0xc78c81b0  lwc1        $f12, -0x7E50($gp)
    ctx->pc = 0x16a38cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x16a390: 0xc78d842c  lwc1        $f13, -0x7BD4($gp)
    ctx->pc = 0x16a390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x16a394: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x16a394u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a398: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x16a398u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a39c: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x16A39Cu;
    SET_GPR_U32(ctx, 31, 0x16A3A4u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x16A39Cu, 0x16A3A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A3A4u;
label_16a3a4:
    // 0x16a3a4: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x16a3a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x16a3a8: 0x8f83bac4  lw          $v1, -0x453C($gp)
    ctx->pc = 0x16a3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949572)));
    // 0x16a3ac: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x16a3acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16a3b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16a3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16a3b4: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x16a3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x16a3b8: 0x8c820058  lw          $v0, 0x58($a0)
    ctx->pc = 0x16a3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x16a3bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16a3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16a3c0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x16a3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x16a3c4: 0x27858f38  addiu       $a1, $gp, -0x70C8
    ctx->pc = 0x16a3c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938424));
    // 0x16a3c8: 0x24460008  addiu       $a2, $v0, 0x8
    ctx->pc = 0x16a3c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x16a3cc: 0xc0bc3e2  jal         func_2F0F88
    ctx->pc = 0x16A3CCu;
    SET_GPR_U32(ctx, 31, 0x16A3D4u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x16A3CCu, 0x16A3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A3D4u;
label_16a3d4:
    // 0x16a3d4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x16a3d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x16a3d8: 0xc0495d4  jal         func_125750
    ctx->pc = 0x16A3D8u;
    SET_GPR_U32(ctx, 31, 0x16A3E0u);
    ctx->pc = 0x125750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125750u, 0x16A3D8u, 0x16A3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A3E0u;
label_16a3e0:
    // 0x16a3e0: 0x8f84bbdc  lw          $a0, -0x4424($gp)
    ctx->pc = 0x16a3e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
    // 0x16a3e4: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x16a3e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x16a3e8: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x16a3e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x16a3ec: 0xc08e514  jal         func_239450
    ctx->pc = 0x16A3ECu;
    SET_GPR_U32(ctx, 31, 0x16A3F4u);
    ctx->pc = 0x239450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239450u, 0x16A3ECu, 0x16A3F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A3F4u;
label_16a3f4:
    // 0x16a3f4: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x16a3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x16a3f8: 0x8f85bac0  lw          $a1, -0x4540($gp)
    ctx->pc = 0x16a3f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949568)));
    // 0x16a3fc: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x16a3fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x16a400: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x16a400u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x16a404: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x16a404u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16a408: 0xc08c378  jal         func_230DE0
    ctx->pc = 0x16A408u;
    SET_GPR_U32(ctx, 31, 0x16A410u);
    ctx->pc = 0x230DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230DE0u, 0x16A408u, 0x16A410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A410u;
label_16a410:
    // 0x16a410: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x16a410u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x16a414: 0x8f83bac4  lw          $v1, -0x453C($gp)
    ctx->pc = 0x16a414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949572)));
    // 0x16a418: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x16a418u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16a41c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16a41cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16a420: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x16a420u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x16a424: 0x8c820058  lw          $v0, 0x58($a0)
    ctx->pc = 0x16a424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x16a428: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16a428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16a42c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x16a42cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16a430: 0x12000023  beqz        $s0, . + 4 + (0x23 << 2)
    ctx->pc = 0x16A430u;
    {
        const bool branch_taken_0x16a430 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a430) {
            ctx->pc = 0x16A4C0u;
            goto label_16a4c0;
        }
    }
    ctx->pc = 0x16A438u;
    // 0x16a438: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x16a438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x16a43c: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x16a43cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x16a440: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16a440u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a444: 0xc08c910  jal         func_232440
    ctx->pc = 0x16A444u;
    SET_GPR_U32(ctx, 31, 0x16A44Cu);
    ctx->pc = 0x232440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232440u, 0x16A444u, 0x16A44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A44Cu;
label_16a44c:
    // 0x16a44c: 0x27a30068  addiu       $v1, $sp, 0x68
    ctx->pc = 0x16a44cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x16a450: 0xdf828f28  ld          $v0, -0x70D8($gp)
    ctx->pc = 0x16a450u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294938408)));
    // 0x16a454: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x16a454u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x16a458: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x16a458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x16a45c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x16a45cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x16a460: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x16a460u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x16a464: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16a464u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a468: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x16a468u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16a46c: 0x27a70068  addiu       $a3, $sp, 0x68
    ctx->pc = 0x16a46cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x16a470: 0xc78d81b0  lwc1        $f13, -0x7E50($gp)
    ctx->pc = 0x16a470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x16a474: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x16a474u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a478: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x16a478u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a47c: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x16A47Cu;
    SET_GPR_U32(ctx, 31, 0x16A484u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x16A47Cu, 0x16A484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A484u;
label_16a484:
    // 0x16a484: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x16a484u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x16a488: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16a488u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16a48c: 0x0  nop
    ctx->pc = 0x16a48cu;
    // NOP
    // 0x16a490: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x16a490u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x16a494: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x16a494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x16a498: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x16a498u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x16a49c: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x16a49cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x16a4a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16a4a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a4a4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x16a4a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16a4a8: 0x27a70094  addiu       $a3, $sp, 0x94
    ctx->pc = 0x16a4a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
    // 0x16a4ac: 0xc78d81b0  lwc1        $f13, -0x7E50($gp)
    ctx->pc = 0x16a4acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x16a4b0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x16a4b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a4b4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x16a4b4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a4b8: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x16A4B8u;
    SET_GPR_U32(ctx, 31, 0x16A4C0u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x16A4B8u, 0x16A4C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A4C0u;
label_16a4c0:
    // 0x16a4c0: 0x8f838ee4  lw          $v1, -0x711C($gp)
    ctx->pc = 0x16a4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938340)));
    // 0x16a4c4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x16a4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16a4c8: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x16A4C8u;
    {
        const bool branch_taken_0x16a4c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x16a4c8) {
            ctx->pc = 0x16A4F8u;
            goto label_16a4f8;
        }
    }
    ctx->pc = 0x16A4D0u;
    // 0x16a4d0: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x16a4d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x16a4d4: 0x8f838ee4  lw          $v1, -0x711C($gp)
    ctx->pc = 0x16a4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938340)));
    // 0x16a4d8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x16a4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16a4dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16a4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16a4e0: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x16a4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x16a4e4: 0x8c820058  lw          $v0, 0x58($a0)
    ctx->pc = 0x16a4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x16a4e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16a4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16a4ec: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x16a4ecu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16a4f0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x16A4F0u;
    {
        const bool branch_taken_0x16a4f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a4f0) {
            ctx->pc = 0x16A4FCu;
            goto label_16a4fc;
        }
    }
    ctx->pc = 0x16A4F8u;
label_16a4f8:
    // 0x16a4f8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x16a4f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16a4fc:
    // 0x16a4fc: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x16a4fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a500: 0x1200001d  beqz        $s0, . + 4 + (0x1D << 2)
    ctx->pc = 0x16A500u;
    {
        const bool branch_taken_0x16a500 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a500) {
            ctx->pc = 0x16A578u;
            goto label_16a578;
        }
    }
    ctx->pc = 0x16A508u;
    // 0x16a508: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x16a508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x16a50c: 0xdf828f30  ld          $v0, -0x70D0($gp)
    ctx->pc = 0x16a50cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294938416)));
    // 0x16a510: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x16a510u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x16a514: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x16a514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x16a518: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x16a518u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x16a51c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16a51cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a520: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x16a520u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16a524: 0x27a70060  addiu       $a3, $sp, 0x60
    ctx->pc = 0x16a524u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x16a528: 0xc78c81b0  lwc1        $f12, -0x7E50($gp)
    ctx->pc = 0x16a528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x16a52c: 0xc78d8278  lwc1        $f13, -0x7D88($gp)
    ctx->pc = 0x16a52cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x16a530: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x16a530u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a534: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x16a534u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a538: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x16A538u;
    SET_GPR_U32(ctx, 31, 0x16A540u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x16A538u, 0x16A540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A540u;
label_16a540:
    // 0x16a540: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16a540u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16a544: 0x0  nop
    ctx->pc = 0x16a544u;
    // NOP
    // 0x16a548: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x16a548u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x16a54c: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x16a54cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x16a550: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x16a550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x16a554: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16a554u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a558: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x16a558u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16a55c: 0x27a70090  addiu       $a3, $sp, 0x90
    ctx->pc = 0x16a55cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x16a560: 0xc78c81b0  lwc1        $f12, -0x7E50($gp)
    ctx->pc = 0x16a560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x16a564: 0xc78d8278  lwc1        $f13, -0x7D88($gp)
    ctx->pc = 0x16a564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x16a568: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x16a568u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a56c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x16a56cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a570: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x16A570u;
    SET_GPR_U32(ctx, 31, 0x16A578u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x16A570u, 0x16A578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A578u;
label_16a578:
    // 0x16a578: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x16a578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x16a57c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x16a57cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16a580: 0xc0406a0  jal         func_101A80
    ctx->pc = 0x16A580u;
    SET_GPR_U32(ctx, 31, 0x16A588u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x16A580u, 0x16A588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A588u;
label_16a588:
    // 0x16a588: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x16a588u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16a58c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x16a58cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16a590: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16a590u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16a594: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16a594u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16a598: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x16a598u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x16a59c: 0x3e00008  jr          $ra
    ctx->pc = 0x16A59Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16A59Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16A5A4u;
    // 0x16a5a4: 0x0  nop
    ctx->pc = 0x16a5a4u;
    // NOP
    // 0x16a5a8: 0x0  nop
    ctx->pc = 0x16a5a8u;
    // NOP
    // 0x16a5ac: 0x0  nop
    ctx->pc = 0x16a5acu;
    // NOP
    ctx->pc = 0x16a5b0u;
}
