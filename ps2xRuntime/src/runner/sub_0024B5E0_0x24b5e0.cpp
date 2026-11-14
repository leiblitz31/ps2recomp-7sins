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

// Function: sub_0024B5E0
// Address: 0x24b5e0 - 0x24c5a0
void sub_0024B5E0_0x24b5e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024B5E0_0x24b5e0");
#endif

    switch (ctx->pc) {
        case 0x24b638u: goto label_24b638;
        case 0x24b664u: goto label_24b664;
        case 0x24b690u: goto label_24b690;
        case 0x24b6bcu: goto label_24b6bc;
        case 0x24b8b0u: goto label_24b8b0;
        case 0x24b95cu: goto label_24b95c;
        case 0x24bae4u: goto label_24bae4;
        case 0x24bcc0u: goto label_24bcc0;
        case 0x24bcd0u: goto label_24bcd0;
        case 0x24bce8u: goto label_24bce8;
        case 0x24bd64u: goto label_24bd64;
        case 0x24bd88u: goto label_24bd88;
        case 0x24bda8u: goto label_24bda8;
        case 0x24bdc8u: goto label_24bdc8;
        case 0x24bde4u: goto label_24bde4;
        case 0x24bdf4u: goto label_24bdf4;
        case 0x24bfe0u: goto label_24bfe0;
        case 0x24c04cu: goto label_24c04c;
        case 0x24c058u: goto label_24c058;
        case 0x24c088u: goto label_24c088;
        case 0x24c0a0u: goto label_24c0a0;
        case 0x24c0b0u: goto label_24c0b0;
        case 0x24c0e8u: goto label_24c0e8;
        case 0x24c12cu: goto label_24c12c;
        case 0x24c144u: goto label_24c144;
        case 0x24c154u: goto label_24c154;
        case 0x24c18cu: goto label_24c18c;
        case 0x24c1e0u: goto label_24c1e0;
        case 0x24c1f4u: goto label_24c1f4;
        case 0x24c2a4u: goto label_24c2a4;
        case 0x24c2b0u: goto label_24c2b0;
        case 0x24c2d0u: goto label_24c2d0;
        case 0x24c2f8u: goto label_24c2f8;
        case 0x24c320u: goto label_24c320;
        case 0x24c348u: goto label_24c348;
        case 0x24c364u: goto label_24c364;
        case 0x24c390u: goto label_24c390;
        case 0x24c3a8u: goto label_24c3a8;
        case 0x24c3b8u: goto label_24c3b8;
        case 0x24c3d8u: goto label_24c3d8;
        case 0x24c3fcu: goto label_24c3fc;
        case 0x24c428u: goto label_24c428;
        case 0x24c450u: goto label_24c450;
        case 0x24c474u: goto label_24c474;
        case 0x24c494u: goto label_24c494;
        case 0x24c4acu: goto label_24c4ac;
        case 0x24c4bcu: goto label_24c4bc;
        case 0x24c4f4u: goto label_24c4f4;
        case 0x24c51cu: goto label_24c51c;
        case 0x24c538u: goto label_24c538;
        case 0x24c558u: goto label_24c558;
        default: break;
    }

    ctx->pc = 0x24b5e0u;

    // 0x24b5e0: 0x27bdfd60  addiu       $sp, $sp, -0x2A0
    ctx->pc = 0x24b5e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966624));
    // 0x24b5e4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x24b5e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x24b5e8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x24b5e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x24b5ec: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x24b5ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x24b5f0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x24b5f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x24b5f4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x24b5f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x24b5f8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x24b5f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x24b5fc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x24b5fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x24b600: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x24b600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x24b604: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x24b604u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x24b608: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x24b608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x24b60c: 0xafa40250  sw          $a0, 0x250($sp)
    ctx->pc = 0x24b60cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 592), GPR_U32(ctx, 4));
    // 0x24b610: 0xafa50260  sw          $a1, 0x260($sp)
    ctx->pc = 0x24b610u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 608), GPR_U32(ctx, 5));
    // 0x24b614: 0xafa60270  sw          $a2, 0x270($sp)
    ctx->pc = 0x24b614u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 624), GPR_U32(ctx, 6));
    // 0x24b618: 0xafa70280  sw          $a3, 0x280($sp)
    ctx->pc = 0x24b618u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 640), GPR_U32(ctx, 7));
    // 0x24b61c: 0xafa80290  sw          $t0, 0x290($sp)
    ctx->pc = 0x24b61cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 656), GPR_U32(ctx, 8));
    // 0x24b620: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x24b620u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24b624: 0x32b400ff  andi        $s4, $s5, 0xFF
    ctx->pc = 0x24b624u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
    // 0x24b628: 0x8fa40250  lw          $a0, 0x250($sp)
    ctx->pc = 0x24b628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x24b62c: 0x8fa50260  lw          $a1, 0x260($sp)
    ctx->pc = 0x24b62cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x24b630: 0xc09355c  jal         func_24D570
    ctx->pc = 0x24B630u;
    SET_GPR_U32(ctx, 31, 0x24B638u);
    ctx->pc = 0x24D570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24D570u, 0x24B630u, 0x24B638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B638u;
label_24b638:
    // 0x24b638: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x24b638u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x24b63c: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x24b63cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x24b640: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x24b640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x24b644: 0x2202b  sltu        $a0, $zero, $v0
    ctx->pc = 0x24b644u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x24b648: 0x38820001  xori        $v0, $a0, 0x1
    ctx->pc = 0x24b648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x24b64c: 0x38430001  xori        $v1, $v0, 0x1
    ctx->pc = 0x24b64cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x24b650: 0x307400ff  andi        $s4, $v1, 0xFF
    ctx->pc = 0x24b650u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x24b654: 0x8fa40250  lw          $a0, 0x250($sp)
    ctx->pc = 0x24b654u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x24b658: 0x8fa50270  lw          $a1, 0x270($sp)
    ctx->pc = 0x24b658u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x24b65c: 0xc09355c  jal         func_24D570
    ctx->pc = 0x24B65Cu;
    SET_GPR_U32(ctx, 31, 0x24B664u);
    ctx->pc = 0x24D570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24D570u, 0x24B65Cu, 0x24B664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B664u;
label_24b664:
    // 0x24b664: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x24b664u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x24b668: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x24b668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x24b66c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x24b66cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x24b670: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x24b670u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x24b674: 0x38620001  xori        $v0, $v1, 0x1
    ctx->pc = 0x24b674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x24b678: 0x38550001  xori        $s5, $v0, 0x1
    ctx->pc = 0x24b678u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x24b67c: 0x32b400ff  andi        $s4, $s5, 0xFF
    ctx->pc = 0x24b67cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
    // 0x24b680: 0x8fa40250  lw          $a0, 0x250($sp)
    ctx->pc = 0x24b680u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x24b684: 0x8fa50260  lw          $a1, 0x260($sp)
    ctx->pc = 0x24b684u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x24b688: 0xc0935ac  jal         func_24D6B0
    ctx->pc = 0x24B688u;
    SET_GPR_U32(ctx, 31, 0x24B690u);
    ctx->pc = 0x24D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24D6B0u, 0x24B688u, 0x24B690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B690u;
label_24b690:
    // 0x24b690: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x24b690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x24b694: 0x328500ff  andi        $a1, $s4, 0xFF
    ctx->pc = 0x24b694u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x24b698: 0xa22024  and         $a0, $a1, $v0
    ctx->pc = 0x24b698u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x24b69c: 0x4102b  sltu        $v0, $zero, $a0
    ctx->pc = 0x24b69cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x24b6a0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x24b6a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x24b6a4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x24b6a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x24b6a8: 0x305400ff  andi        $s4, $v0, 0xFF
    ctx->pc = 0x24b6a8u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x24b6ac: 0x8fa40250  lw          $a0, 0x250($sp)
    ctx->pc = 0x24b6acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x24b6b0: 0x8fa50270  lw          $a1, 0x270($sp)
    ctx->pc = 0x24b6b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x24b6b4: 0xc0935ac  jal         func_24D6B0
    ctx->pc = 0x24B6B4u;
    SET_GPR_U32(ctx, 31, 0x24B6BCu);
    ctx->pc = 0x24D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24D6B0u, 0x24B6B4u, 0x24B6BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B6BCu;
label_24b6bc:
    // 0x24b6bc: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x24b6bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x24b6c0: 0x328400ff  andi        $a0, $s4, 0xFF
    ctx->pc = 0x24b6c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x24b6c4: 0x851024  and         $v0, $a0, $a1
    ctx->pc = 0x24b6c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x24b6c8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x24b6c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x24b6cc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x24b6ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x24b6d0: 0x38440001  xori        $a0, $v0, 0x1
    ctx->pc = 0x24b6d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x24b6d4: 0x309400ff  andi        $s4, $a0, 0xFF
    ctx->pc = 0x24b6d4u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x24b6d8: 0x8fa20260  lw          $v0, 0x260($sp)
    ctx->pc = 0x24b6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x24b6dc: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x24b6dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24b6e0: 0x8fa20270  lw          $v0, 0x270($sp)
    ctx->pc = 0x24b6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x24b6e4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x24b6e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24b6e8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x24b6e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24b6ec: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x24B6ECu;
    {
        const bool branch_taken_0x24b6ec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x24b6ec) {
            ctx->pc = 0x24B708u;
            goto label_24b708;
        }
    }
    ctx->pc = 0x24B6F4u;
    // 0x24b6f4: 0x8fa30260  lw          $v1, 0x260($sp)
    ctx->pc = 0x24b6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x24b6f8: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x24b6f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24b6fc: 0xe7a00224  swc1        $f0, 0x224($sp)
    ctx->pc = 0x24b6fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 548), bits); }
    // 0x24b700: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x24B700u;
    {
        const bool branch_taken_0x24b700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24b700) {
            ctx->pc = 0x24B714u;
            goto label_24b714;
        }
    }
    ctx->pc = 0x24B708u;
label_24b708:
    // 0x24b708: 0x8fa20270  lw          $v0, 0x270($sp)
    ctx->pc = 0x24b708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x24b70c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x24b70cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24b710: 0xe7a00224  swc1        $f0, 0x224($sp)
    ctx->pc = 0x24b710u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 548), bits); }
label_24b714:
    // 0x24b714: 0xc7a00224  lwc1        $f0, 0x224($sp)
    ctx->pc = 0x24b714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24b718: 0xe7a001e0  swc1        $f0, 0x1E0($sp)
    ctx->pc = 0x24b718u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 480), bits); }
    // 0x24b71c: 0x8fa20260  lw          $v0, 0x260($sp)
    ctx->pc = 0x24b71cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x24b720: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x24b720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24b724: 0x8fa40270  lw          $a0, 0x270($sp)
    ctx->pc = 0x24b724u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x24b728: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x24b728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24b72c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x24b72cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24b730: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x24B730u;
    {
        const bool branch_taken_0x24b730 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x24b730) {
            ctx->pc = 0x24B74Cu;
            goto label_24b74c;
        }
    }
    ctx->pc = 0x24B738u;
    // 0x24b738: 0x8fa50260  lw          $a1, 0x260($sp)
    ctx->pc = 0x24b738u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x24b73c: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x24b73cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24b740: 0xe7a00220  swc1        $f0, 0x220($sp)
    ctx->pc = 0x24b740u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 544), bits); }
    // 0x24b744: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x24B744u;
    {
        const bool branch_taken_0x24b744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24b744) {
            ctx->pc = 0x24B758u;
            goto label_24b758;
        }
    }
    ctx->pc = 0x24B74Cu;
label_24b74c:
    // 0x24b74c: 0x8fa20270  lw          $v0, 0x270($sp)
    ctx->pc = 0x24b74cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x24b750: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x24b750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24b754: 0xe7a00220  swc1        $f0, 0x220($sp)
    ctx->pc = 0x24b754u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 544), bits); }
label_24b758:
    // 0x24b758: 0xc7a00220  lwc1        $f0, 0x220($sp)
    ctx->pc = 0x24b758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24b75c: 0xe7a001e8  swc1        $f0, 0x1E8($sp)
    ctx->pc = 0x24b75cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 488), bits); }
    // 0x24b760: 0x8fa20260  lw          $v0, 0x260($sp)
    ctx->pc = 0x24b760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x24b764: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x24b764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24b768: 0x8fa40270  lw          $a0, 0x270($sp)
    ctx->pc = 0x24b768u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x24b76c: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x24b76cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24b770: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x24b770u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24b774: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x24B774u;
    {
        const bool branch_taken_0x24b774 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24b774) {
            ctx->pc = 0x24B790u;
            goto label_24b790;
        }
    }
    ctx->pc = 0x24B77Cu;
    // 0x24b77c: 0x8fa50260  lw          $a1, 0x260($sp)
    ctx->pc = 0x24b77cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x24b780: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x24b780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24b784: 0xe7a0021c  swc1        $f0, 0x21C($sp)
    ctx->pc = 0x24b784u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 540), bits); }
    // 0x24b788: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x24B788u;
    {
        const bool branch_taken_0x24b788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24b788) {
            ctx->pc = 0x24B79Cu;
            goto label_24b79c;
        }
    }
    ctx->pc = 0x24B790u;
label_24b790:
    // 0x24b790: 0x8fa60270  lw          $a2, 0x270($sp)
    ctx->pc = 0x24b790u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x24b794: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x24b794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24b798: 0xe7a0021c  swc1        $f0, 0x21C($sp)
    ctx->pc = 0x24b798u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 540), bits); }
label_24b79c:
    // 0x24b79c: 0xc7a0021c  lwc1        $f0, 0x21C($sp)
    ctx->pc = 0x24b79cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24b7a0: 0xe7a001d0  swc1        $f0, 0x1D0($sp)
    ctx->pc = 0x24b7a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 464), bits); }
    // 0x24b7a4: 0x8fa40260  lw          $a0, 0x260($sp)
    ctx->pc = 0x24b7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x24b7a8: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x24b7a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24b7ac: 0x8fa50270  lw          $a1, 0x270($sp)
    ctx->pc = 0x24b7acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x24b7b0: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x24b7b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24b7b4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x24b7b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24b7b8: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x24B7B8u;
    {
        const bool branch_taken_0x24b7b8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24b7b8) {
            ctx->pc = 0x24B7D4u;
            goto label_24b7d4;
        }
    }
    ctx->pc = 0x24B7C0u;
    // 0x24b7c0: 0x8fa20260  lw          $v0, 0x260($sp)
    ctx->pc = 0x24b7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x24b7c4: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x24b7c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24b7c8: 0xe7a00218  swc1        $f0, 0x218($sp)
    ctx->pc = 0x24b7c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 536), bits); }
    // 0x24b7cc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x24B7CCu;
    {
        const bool branch_taken_0x24b7cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24b7cc) {
            ctx->pc = 0x24B7E0u;
            goto label_24b7e0;
        }
    }
    ctx->pc = 0x24B7D4u;
label_24b7d4:
    // 0x24b7d4: 0x8fa20270  lw          $v0, 0x270($sp)
    ctx->pc = 0x24b7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x24b7d8: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x24b7d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24b7dc: 0xe7a00218  swc1        $f0, 0x218($sp)
    ctx->pc = 0x24b7dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 536), bits); }
label_24b7e0:
    // 0x24b7e0: 0xc7a00218  lwc1        $f0, 0x218($sp)
    ctx->pc = 0x24b7e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24b7e4: 0xe7a001d8  swc1        $f0, 0x1D8($sp)
    ctx->pc = 0x24b7e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 472), bits); }
    // 0x24b7e8: 0xc7a101d0  lwc1        $f1, 0x1D0($sp)
    ctx->pc = 0x24b7e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24b7ec: 0xc7a001e0  lwc1        $f0, 0x1E0($sp)
    ctx->pc = 0x24b7ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24b7f0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x24b7f0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x24b7f4: 0x3c044f00  lui         $a0, 0x4F00
    ctx->pc = 0x24b7f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20224 << 16));
    // 0x24b7f8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x24b7f8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24b7fc: 0x0  nop
    ctx->pc = 0x24b7fcu;
    // NOP
    // 0x24b800: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x24b800u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24b804: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x24B804u;
    {
        const bool branch_taken_0x24b804 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24b804) {
            ctx->pc = 0x24B81Cu;
            goto label_24b81c;
        }
    }
    ctx->pc = 0x24B80Cu;
    // 0x24b80c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x24b80cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x24b810: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x24b810u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x24b814: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x24B814u;
    {
        const bool branch_taken_0x24b814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24b814) {
            ctx->pc = 0x24B830u;
            goto label_24b830;
        }
    }
    ctx->pc = 0x24B81Cu;
label_24b81c:
    // 0x24b81c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x24b81cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x24b820: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x24b820u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x24b824: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x24b824u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x24b828: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x24b828u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x24b82c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x24b82cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_24b830:
    // 0x24b830: 0xafa20248  sw          $v0, 0x248($sp)
    ctx->pc = 0x24b830u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 584), GPR_U32(ctx, 2));
    // 0x24b834: 0xc7a101d8  lwc1        $f1, 0x1D8($sp)
    ctx->pc = 0x24b834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24b838: 0xc7a001e8  lwc1        $f0, 0x1E8($sp)
    ctx->pc = 0x24b838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24b83c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x24b83cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x24b840: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x24b840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x24b844: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24b844u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24b848: 0x0  nop
    ctx->pc = 0x24b848u;
    // NOP
    // 0x24b84c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x24b84cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24b850: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x24B850u;
    {
        const bool branch_taken_0x24b850 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24b850) {
            ctx->pc = 0x24B868u;
            goto label_24b868;
        }
    }
    ctx->pc = 0x24B858u;
    // 0x24b858: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x24b858u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x24b85c: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x24b85cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x24b860: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x24B860u;
    {
        const bool branch_taken_0x24b860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24b860) {
            ctx->pc = 0x24B87Cu;
            goto label_24b87c;
        }
    }
    ctx->pc = 0x24B868u;
label_24b868:
    // 0x24b868: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x24b868u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x24b86c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x24b86cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x24b870: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x24b870u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x24b874: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x24b874u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x24b878: 0xc43025  or          $a2, $a2, $a0
    ctx->pc = 0x24b878u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
label_24b87c:
    // 0x24b87c: 0xafa60244  sw          $a2, 0x244($sp)
    ctx->pc = 0x24b87cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 580), GPR_U32(ctx, 6));
    // 0x24b880: 0x8fa20248  lw          $v0, 0x248($sp)
    ctx->pc = 0x24b880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
    // 0x24b884: 0x1040005a  beqz        $v0, . + 4 + (0x5A << 2)
    ctx->pc = 0x24B884u;
    {
        const bool branch_taken_0x24b884 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24b884) {
            ctx->pc = 0x24B9F0u;
            goto label_24b9f0;
        }
    }
    ctx->pc = 0x24B88Cu;
    // 0x24b88c: 0x8fa20244  lw          $v0, 0x244($sp)
    ctx->pc = 0x24b88cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 580)));
    // 0x24b890: 0x10400057  beqz        $v0, . + 4 + (0x57 << 2)
    ctx->pc = 0x24B890u;
    {
        const bool branch_taken_0x24b890 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24b890) {
            ctx->pc = 0x24B9F0u;
            goto label_24b9f0;
        }
    }
    ctx->pc = 0x24B898u;
    // 0x24b898: 0x8fa20248  lw          $v0, 0x248($sp)
    ctx->pc = 0x24b898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
    // 0x24b89c: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x24b89cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
    // 0x24b8a0: 0x8fa40250  lw          $a0, 0x250($sp)
    ctx->pc = 0x24b8a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x24b8a4: 0x8c840048  lw          $a0, 0x48($a0)
    ctx->pc = 0x24b8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x24b8a8: 0xc0477e0  jal         func_11DF80
    ctx->pc = 0x24B8A8u;
    SET_GPR_U32(ctx, 31, 0x24B8B0u);
    ctx->pc = 0x11DF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DF80u, 0x24B8A8u, 0x24B8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B8B0u;
label_24b8b0:
    // 0x24b8b0: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x24B8B0u;
    {
        const bool branch_taken_0x24b8b0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x24b8b0) {
            ctx->pc = 0x24B8CCu;
            goto label_24b8cc;
        }
    }
    ctx->pc = 0x24B8B8u;
    // 0x24b8b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24b8b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24b8bc: 0x0  nop
    ctx->pc = 0x24b8bcu;
    // NOP
    // 0x24b8c0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x24b8c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x24b8c4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x24B8C4u;
    {
        const bool branch_taken_0x24b8c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24b8c4) {
            ctx->pc = 0x24B8E8u;
            goto label_24b8e8;
        }
    }
    ctx->pc = 0x24B8CCu;
label_24b8cc:
    // 0x24b8cc: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x24b8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x24b8d0: 0x30460001  andi        $a2, $v0, 0x1
    ctx->pc = 0x24b8d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x24b8d4: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x24b8d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x24b8d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x24b8d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24b8dc: 0x0  nop
    ctx->pc = 0x24b8dcu;
    // NOP
    // 0x24b8e0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x24b8e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x24b8e4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x24b8e4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_24b8e8:
    // 0x24b8e8: 0x3c0442a0  lui         $a0, 0x42A0
    ctx->pc = 0x24b8e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17056 << 16));
    // 0x24b8ec: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x24b8ecu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24b8f0: 0x0  nop
    ctx->pc = 0x24b8f0u;
    // NOP
    // 0x24b8f4: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x24b8f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x24b8f8: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x24b8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x24b8fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24b8fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24b900: 0x0  nop
    ctx->pc = 0x24b900u;
    // NOP
    // 0x24b904: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x24b904u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24b908: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x24B908u;
    {
        const bool branch_taken_0x24b908 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24b908) {
            ctx->pc = 0x24B920u;
            goto label_24b920;
        }
    }
    ctx->pc = 0x24B910u;
    // 0x24b910: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x24b910u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x24b914: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x24b914u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x24b918: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x24B918u;
    {
        const bool branch_taken_0x24b918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24b918) {
            ctx->pc = 0x24B934u;
            goto label_24b934;
        }
    }
    ctx->pc = 0x24B920u;
label_24b920:
    // 0x24b920: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x24b920u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x24b924: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x24b924u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x24b928: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x24b928u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x24b92c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x24b92cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x24b930: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x24b930u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_24b934:
    // 0x24b934: 0x7ba200e0  lq          $v0, 0xE0($sp)
    ctx->pc = 0x24b934u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x24b938: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x24b938u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x24b93c: 0x1420002c  bnez        $at, . + 4 + (0x2C << 2)
    ctx->pc = 0x24B93Cu;
    {
        const bool branch_taken_0x24b93c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x24b93c) {
            ctx->pc = 0x24B9F0u;
            goto label_24b9f0;
        }
    }
    ctx->pc = 0x24B944u;
    // 0x24b944: 0x8fa20244  lw          $v0, 0x244($sp)
    ctx->pc = 0x24b944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 580)));
    // 0x24b948: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x24b948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
    // 0x24b94c: 0x8fa20250  lw          $v0, 0x250($sp)
    ctx->pc = 0x24b94cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x24b950: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x24b950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x24b954: 0xc0477d8  jal         func_11DF60
    ctx->pc = 0x24B954u;
    SET_GPR_U32(ctx, 31, 0x24B95Cu);
    ctx->pc = 0x11DF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DF60u, 0x24B954u, 0x24B95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B95Cu;
label_24b95c:
    // 0x24b95c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x24B95Cu;
    {
        const bool branch_taken_0x24b95c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x24b95c) {
            ctx->pc = 0x24B978u;
            goto label_24b978;
        }
    }
    ctx->pc = 0x24B964u;
    // 0x24b964: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24b964u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24b968: 0x0  nop
    ctx->pc = 0x24b968u;
    // NOP
    // 0x24b96c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x24b96cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x24b970: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x24B970u;
    {
        const bool branch_taken_0x24b970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24b970) {
            ctx->pc = 0x24B994u;
            goto label_24b994;
        }
    }
    ctx->pc = 0x24B978u;
label_24b978:
    // 0x24b978: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x24b978u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x24b97c: 0x30440001  andi        $a0, $v0, 0x1
    ctx->pc = 0x24b97cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x24b980: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x24b980u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x24b984: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x24b984u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24b988: 0x0  nop
    ctx->pc = 0x24b988u;
    // NOP
    // 0x24b98c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x24b98cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x24b990: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x24b990u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_24b994:
    // 0x24b994: 0x3c0542a0  lui         $a1, 0x42A0
    ctx->pc = 0x24b994u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17056 << 16));
    // 0x24b998: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x24b998u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24b99c: 0x0  nop
    ctx->pc = 0x24b99cu;
    // NOP
    // 0x24b9a0: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x24b9a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x24b9a4: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x24b9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x24b9a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24b9a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24b9ac: 0x0  nop
    ctx->pc = 0x24b9acu;
    // NOP
    // 0x24b9b0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x24b9b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24b9b4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x24B9B4u;
    {
        const bool branch_taken_0x24b9b4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24b9b4) {
            ctx->pc = 0x24B9CCu;
            goto label_24b9cc;
        }
    }
    ctx->pc = 0x24B9BCu;
    // 0x24b9bc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x24b9bcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x24b9c0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x24b9c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x24b9c4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x24B9C4u;
    {
        const bool branch_taken_0x24b9c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24b9c4) {
            ctx->pc = 0x24B9E0u;
            goto label_24b9e0;
        }
    }
    ctx->pc = 0x24B9CCu;
label_24b9cc:
    // 0x24b9cc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x24b9ccu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x24b9d0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x24b9d0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x24b9d4: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x24b9d4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x24b9d8: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x24b9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x24b9dc: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x24b9dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_24b9e0:
    // 0x24b9e0: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x24b9e0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x24b9e4: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x24b9e4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x24b9e8: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x24B9E8u;
    {
        const bool branch_taken_0x24b9e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x24b9e8) {
            ctx->pc = 0x24B9F4u;
            goto label_24b9f4;
        }
    }
    ctx->pc = 0x24B9F0u;
label_24b9f0:
    // 0x24b9f0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x24b9f0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24b9f4:
    // 0x24b9f4: 0x8fa50260  lw          $a1, 0x260($sp)
    ctx->pc = 0x24b9f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x24b9f8: 0x27a601c8  addiu       $a2, $sp, 0x1C8
    ctx->pc = 0x24b9f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 456));
    // 0x24b9fc: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x24b9fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24ba00: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x24ba00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24ba04: 0xe4c10000  swc1        $f1, 0x0($a2)
    ctx->pc = 0x24ba04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x24ba08: 0xe4c00004  swc1        $f0, 0x4($a2)
    ctx->pc = 0x24ba08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x24ba0c: 0x8fa40260  lw          $a0, 0x260($sp)
    ctx->pc = 0x24ba0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x24ba10: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x24ba10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24ba14: 0x8fa50270  lw          $a1, 0x270($sp)
    ctx->pc = 0x24ba14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x24ba18: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x24ba18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24ba1c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x24ba1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24ba20: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x24BA20u;
    {
        const bool branch_taken_0x24ba20 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x24ba20) {
            ctx->pc = 0x24BA40u;
            goto label_24ba40;
        }
    }
    ctx->pc = 0x24BA28u;
    // 0x24ba28: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x24ba28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x24ba2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24ba2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24ba30: 0x0  nop
    ctx->pc = 0x24ba30u;
    // NOP
    // 0x24ba34: 0xe7a00214  swc1        $f0, 0x214($sp)
    ctx->pc = 0x24ba34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 532), bits); }
    // 0x24ba38: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x24BA38u;
    {
        const bool branch_taken_0x24ba38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24ba38) {
            ctx->pc = 0x24BA50u;
            goto label_24ba50;
        }
    }
    ctx->pc = 0x24BA40u;
label_24ba40:
    // 0x24ba40: 0x3c13c0a0  lui         $s3, 0xC0A0
    ctx->pc = 0x24ba40u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)49312 << 16));
    // 0x24ba44: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x24ba44u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24ba48: 0x0  nop
    ctx->pc = 0x24ba48u;
    // NOP
    // 0x24ba4c: 0xe7a00214  swc1        $f0, 0x214($sp)
    ctx->pc = 0x24ba4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 532), bits); }
label_24ba50:
    // 0x24ba50: 0xc7a101c8  lwc1        $f1, 0x1C8($sp)
    ctx->pc = 0x24ba50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24ba54: 0xc7a00214  lwc1        $f0, 0x214($sp)
    ctx->pc = 0x24ba54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24ba58: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x24ba58u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x24ba5c: 0xe7a001c8  swc1        $f0, 0x1C8($sp)
    ctx->pc = 0x24ba5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 456), bits); }
    // 0x24ba60: 0x8fb50260  lw          $s5, 0x260($sp)
    ctx->pc = 0x24ba60u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x24ba64: 0xc6a10004  lwc1        $f1, 0x4($s5)
    ctx->pc = 0x24ba64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24ba68: 0x8fa20270  lw          $v0, 0x270($sp)
    ctx->pc = 0x24ba68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x24ba6c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x24ba6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24ba70: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x24ba70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24ba74: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x24BA74u;
    {
        const bool branch_taken_0x24ba74 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x24ba74) {
            ctx->pc = 0x24BA94u;
            goto label_24ba94;
        }
    }
    ctx->pc = 0x24BA7Cu;
    // 0x24ba7c: 0x3c1240a0  lui         $s2, 0x40A0
    ctx->pc = 0x24ba7cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)16544 << 16));
    // 0x24ba80: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x24ba80u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24ba84: 0x0  nop
    ctx->pc = 0x24ba84u;
    // NOP
    // 0x24ba88: 0xe7a00210  swc1        $f0, 0x210($sp)
    ctx->pc = 0x24ba88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 528), bits); }
    // 0x24ba8c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x24BA8Cu;
    {
        const bool branch_taken_0x24ba8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24ba8c) {
            ctx->pc = 0x24BAA4u;
            goto label_24baa4;
        }
    }
    ctx->pc = 0x24BA94u;
label_24ba94:
    // 0x24ba94: 0x3c02c0a0  lui         $v0, 0xC0A0
    ctx->pc = 0x24ba94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49312 << 16));
    // 0x24ba98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24ba98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24ba9c: 0x0  nop
    ctx->pc = 0x24ba9cu;
    // NOP
    // 0x24baa0: 0xe7a00210  swc1        $f0, 0x210($sp)
    ctx->pc = 0x24baa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 528), bits); }
label_24baa4:
    // 0x24baa4: 0xc7a101cc  lwc1        $f1, 0x1CC($sp)
    ctx->pc = 0x24baa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24baa8: 0xc7a00210  lwc1        $f0, 0x210($sp)
    ctx->pc = 0x24baa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24baac: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x24baacu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x24bab0: 0xe7a001cc  swc1        $f0, 0x1CC($sp)
    ctx->pc = 0x24bab0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 460), bits); }
    // 0x24bab4: 0x8fa20250  lw          $v0, 0x250($sp)
    ctx->pc = 0x24bab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x24bab8: 0x8c440044  lw          $a0, 0x44($v0)
    ctx->pc = 0x24bab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x24babc: 0x14040004  bne         $zero, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24BABCu;
    {
        const bool branch_taken_0x24babc = (GPR_U64(ctx, 0) != GPR_U64(ctx, 4));
        if (branch_taken_0x24babc) {
            ctx->pc = 0x24BAD0u;
            goto label_24bad0;
        }
    }
    ctx->pc = 0x24BAC4u;
    // 0x24bac4: 0xafa0020c  sw          $zero, 0x20C($sp)
    ctx->pc = 0x24bac4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 524), GPR_U32(ctx, 0));
    // 0x24bac8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x24BAC8u;
    {
        const bool branch_taken_0x24bac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24bac8) {
            ctx->pc = 0x24BAE8u;
            goto label_24bae8;
        }
    }
    ctx->pc = 0x24BAD0u;
label_24bad0:
    // 0x24bad0: 0x8fa20250  lw          $v0, 0x250($sp)
    ctx->pc = 0x24bad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x24bad4: 0x8c440044  lw          $a0, 0x44($v0)
    ctx->pc = 0x24bad4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x24bad8: 0x27a501c8  addiu       $a1, $sp, 0x1C8
    ctx->pc = 0x24bad8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 456));
    // 0x24badc: 0xc094ce0  jal         func_253380
    ctx->pc = 0x24BADCu;
    SET_GPR_U32(ctx, 31, 0x24BAE4u);
    ctx->pc = 0x253380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253380u, 0x24BADCu, 0x24BAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BAE4u;
label_24bae4:
    // 0x24bae4: 0xafa2020c  sw          $v0, 0x20C($sp)
    ctx->pc = 0x24bae4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 524), GPR_U32(ctx, 2));
label_24bae8:
    // 0x24bae8: 0x8fb1020c  lw          $s1, 0x20C($sp)
    ctx->pc = 0x24bae8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 524)));
    // 0x24baec: 0xafa00240  sw          $zero, 0x240($sp)
    ctx->pc = 0x24baecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 576), GPR_U32(ctx, 0));
    // 0x24baf0: 0x8fa20260  lw          $v0, 0x260($sp)
    ctx->pc = 0x24baf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x24baf4: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x24baf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24baf8: 0x8fa40270  lw          $a0, 0x270($sp)
    ctx->pc = 0x24baf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x24bafc: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x24bafcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24bb00: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x24bb00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24bb04: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x24BB04u;
    {
        const bool branch_taken_0x24bb04 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x24bb04) {
            ctx->pc = 0x24BB1Cu;
            goto label_24bb1c;
        }
    }
    ctx->pc = 0x24BB0Cu;
    // 0x24bb0c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x24bb0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24bb10: 0xafa50208  sw          $a1, 0x208($sp)
    ctx->pc = 0x24bb10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 520), GPR_U32(ctx, 5));
    // 0x24bb14: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x24BB14u;
    {
        const bool branch_taken_0x24bb14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24bb14) {
            ctx->pc = 0x24BB24u;
            goto label_24bb24;
        }
    }
    ctx->pc = 0x24BB1Cu;
label_24bb1c:
    // 0x24bb1c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x24bb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x24bb20: 0xafa20208  sw          $v0, 0x208($sp)
    ctx->pc = 0x24bb20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 520), GPR_U32(ctx, 2));
label_24bb24:
    // 0x24bb24: 0x8fa30208  lw          $v1, 0x208($sp)
    ctx->pc = 0x24bb24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x24bb28: 0x8fa20240  lw          $v0, 0x240($sp)
    ctx->pc = 0x24bb28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x24bb2c: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x24bb2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x24bb30: 0xafa40240  sw          $a0, 0x240($sp)
    ctx->pc = 0x24bb30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 576), GPR_U32(ctx, 4));
    // 0x24bb34: 0x8fa20260  lw          $v0, 0x260($sp)
    ctx->pc = 0x24bb34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x24bb38: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x24bb38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24bb3c: 0x8fa20270  lw          $v0, 0x270($sp)
    ctx->pc = 0x24bb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x24bb40: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x24bb40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24bb44: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x24bb44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24bb48: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x24BB48u;
    {
        const bool branch_taken_0x24bb48 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x24bb48) {
            ctx->pc = 0x24BB60u;
            goto label_24bb60;
        }
    }
    ctx->pc = 0x24BB50u;
    // 0x24bb50: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x24bb50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x24bb54: 0xafa20204  sw          $v0, 0x204($sp)
    ctx->pc = 0x24bb54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 516), GPR_U32(ctx, 2));
    // 0x24bb58: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x24BB58u;
    {
        const bool branch_taken_0x24bb58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24bb58) {
            ctx->pc = 0x24BB68u;
            goto label_24bb68;
        }
    }
    ctx->pc = 0x24BB60u;
label_24bb60:
    // 0x24bb60: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x24bb60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x24bb64: 0xafa20204  sw          $v0, 0x204($sp)
    ctx->pc = 0x24bb64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 516), GPR_U32(ctx, 2));
label_24bb68:
    // 0x24bb68: 0x8fa30204  lw          $v1, 0x204($sp)
    ctx->pc = 0x24bb68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 516)));
    // 0x24bb6c: 0x8fa20240  lw          $v0, 0x240($sp)
    ctx->pc = 0x24bb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x24bb70: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x24bb70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x24bb74: 0xafa20240  sw          $v0, 0x240($sp)
    ctx->pc = 0x24bb74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 576), GPR_U32(ctx, 2));
    // 0x24bb78: 0x1011004a  beq         $zero, $s1, . + 4 + (0x4A << 2)
    ctx->pc = 0x24BB78u;
    {
        const bool branch_taken_0x24bb78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 17));
        if (branch_taken_0x24bb78) {
            ctx->pc = 0x24BCA4u;
            goto label_24bca4;
        }
    }
    ctx->pc = 0x24BB80u;
    // 0x24bb80: 0xc621001c  lwc1        $f1, 0x1C($s1)
    ctx->pc = 0x24bb80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24bb84: 0xc7a001e0  lwc1        $f0, 0x1E0($sp)
    ctx->pc = 0x24bb84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24bb88: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x24bb88u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24bb8c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x24BB8Cu;
    {
        const bool branch_taken_0x24bb8c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24bb8c) {
            ctx->pc = 0x24BBA4u;
            goto label_24bba4;
        }
    }
    ctx->pc = 0x24BB94u;
    // 0x24bb94: 0xc7a001e0  lwc1        $f0, 0x1E0($sp)
    ctx->pc = 0x24bb94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24bb98: 0xe7a00200  swc1        $f0, 0x200($sp)
    ctx->pc = 0x24bb98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 512), bits); }
    // 0x24bb9c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x24BB9Cu;
    {
        const bool branch_taken_0x24bb9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24bb9c) {
            ctx->pc = 0x24BBACu;
            goto label_24bbac;
        }
    }
    ctx->pc = 0x24BBA4u;
label_24bba4:
    // 0x24bba4: 0xc620001c  lwc1        $f0, 0x1C($s1)
    ctx->pc = 0x24bba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24bba8: 0xe7a00200  swc1        $f0, 0x200($sp)
    ctx->pc = 0x24bba8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 512), bits); }
label_24bbac:
    // 0x24bbac: 0xc7a00200  lwc1        $f0, 0x200($sp)
    ctx->pc = 0x24bbacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24bbb0: 0xe7a001e0  swc1        $f0, 0x1E0($sp)
    ctx->pc = 0x24bbb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 480), bits); }
    // 0x24bbb4: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x24bbb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24bbb8: 0xc7a001e8  lwc1        $f0, 0x1E8($sp)
    ctx->pc = 0x24bbb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24bbbc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x24bbbcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24bbc0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x24BBC0u;
    {
        const bool branch_taken_0x24bbc0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24bbc0) {
            ctx->pc = 0x24BBD8u;
            goto label_24bbd8;
        }
    }
    ctx->pc = 0x24BBC8u;
    // 0x24bbc8: 0xc7a001e8  lwc1        $f0, 0x1E8($sp)
    ctx->pc = 0x24bbc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24bbcc: 0xe7a001fc  swc1        $f0, 0x1FC($sp)
    ctx->pc = 0x24bbccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 508), bits); }
    // 0x24bbd0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x24BBD0u;
    {
        const bool branch_taken_0x24bbd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24bbd0) {
            ctx->pc = 0x24BBE0u;
            goto label_24bbe0;
        }
    }
    ctx->pc = 0x24BBD8u;
label_24bbd8:
    // 0x24bbd8: 0xc6200024  lwc1        $f0, 0x24($s1)
    ctx->pc = 0x24bbd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24bbdc: 0xe7a001fc  swc1        $f0, 0x1FC($sp)
    ctx->pc = 0x24bbdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 508), bits); }
label_24bbe0:
    // 0x24bbe0: 0xc7a001fc  lwc1        $f0, 0x1FC($sp)
    ctx->pc = 0x24bbe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24bbe4: 0xe7a001e8  swc1        $f0, 0x1E8($sp)
    ctx->pc = 0x24bbe4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 488), bits); }
    // 0x24bbe8: 0xc6210010  lwc1        $f1, 0x10($s1)
    ctx->pc = 0x24bbe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24bbec: 0xc7a001d0  lwc1        $f0, 0x1D0($sp)
    ctx->pc = 0x24bbecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24bbf0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x24bbf0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24bbf4: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x24BBF4u;
    {
        const bool branch_taken_0x24bbf4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x24bbf4) {
            ctx->pc = 0x24BC0Cu;
            goto label_24bc0c;
        }
    }
    ctx->pc = 0x24BBFCu;
    // 0x24bbfc: 0xc7a001d0  lwc1        $f0, 0x1D0($sp)
    ctx->pc = 0x24bbfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24bc00: 0xe7a001f8  swc1        $f0, 0x1F8($sp)
    ctx->pc = 0x24bc00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 504), bits); }
    // 0x24bc04: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x24BC04u;
    {
        const bool branch_taken_0x24bc04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24bc04) {
            ctx->pc = 0x24BC14u;
            goto label_24bc14;
        }
    }
    ctx->pc = 0x24BC0Cu;
label_24bc0c:
    // 0x24bc0c: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x24bc0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24bc10: 0xe7a001f8  swc1        $f0, 0x1F8($sp)
    ctx->pc = 0x24bc10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 504), bits); }
label_24bc14:
    // 0x24bc14: 0xc7a001f8  lwc1        $f0, 0x1F8($sp)
    ctx->pc = 0x24bc14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24bc18: 0xe7a001d0  swc1        $f0, 0x1D0($sp)
    ctx->pc = 0x24bc18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 464), bits); }
    // 0x24bc1c: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x24bc1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24bc20: 0xc7a001d8  lwc1        $f0, 0x1D8($sp)
    ctx->pc = 0x24bc20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24bc24: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x24bc24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24bc28: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x24BC28u;
    {
        const bool branch_taken_0x24bc28 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x24bc28) {
            ctx->pc = 0x24BC40u;
            goto label_24bc40;
        }
    }
    ctx->pc = 0x24BC30u;
    // 0x24bc30: 0xc7a001d8  lwc1        $f0, 0x1D8($sp)
    ctx->pc = 0x24bc30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24bc34: 0xe7a001f4  swc1        $f0, 0x1F4($sp)
    ctx->pc = 0x24bc34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 500), bits); }
    // 0x24bc38: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x24BC38u;
    {
        const bool branch_taken_0x24bc38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24bc38) {
            ctx->pc = 0x24BC48u;
            goto label_24bc48;
        }
    }
    ctx->pc = 0x24BC40u;
label_24bc40:
    // 0x24bc40: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x24bc40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24bc44: 0xe7a001f4  swc1        $f0, 0x1F4($sp)
    ctx->pc = 0x24bc44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 500), bits); }
label_24bc48:
    // 0x24bc48: 0xc7a001f4  lwc1        $f0, 0x1F4($sp)
    ctx->pc = 0x24bc48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24bc4c: 0xe7a001d8  swc1        $f0, 0x1D8($sp)
    ctx->pc = 0x24bc4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 472), bits); }
    // 0x24bc50: 0xc621001c  lwc1        $f1, 0x1C($s1)
    ctx->pc = 0x24bc50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24bc54: 0xc7a001e0  lwc1        $f0, 0x1E0($sp)
    ctx->pc = 0x24bc54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24bc58: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x24bc58u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24bc5c: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x24BC5Cu;
    {
        const bool branch_taken_0x24bc5c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x24bc5c) {
            ctx->pc = 0x24BCA4u;
            goto label_24bca4;
        }
    }
    ctx->pc = 0x24BC64u;
    // 0x24bc64: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x24bc64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24bc68: 0xc7a001e8  lwc1        $f0, 0x1E8($sp)
    ctx->pc = 0x24bc68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24bc6c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x24bc6cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24bc70: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x24BC70u;
    {
        const bool branch_taken_0x24bc70 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x24bc70) {
            ctx->pc = 0x24BCA4u;
            goto label_24bca4;
        }
    }
    ctx->pc = 0x24BC78u;
    // 0x24bc78: 0xc6210010  lwc1        $f1, 0x10($s1)
    ctx->pc = 0x24bc78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24bc7c: 0xc7a001d0  lwc1        $f0, 0x1D0($sp)
    ctx->pc = 0x24bc7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24bc80: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x24bc80u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24bc84: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x24BC84u;
    {
        const bool branch_taken_0x24bc84 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x24bc84) {
            ctx->pc = 0x24BCA4u;
            goto label_24bca4;
        }
    }
    ctx->pc = 0x24BC8Cu;
    // 0x24bc8c: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x24bc8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24bc90: 0xc7a001d8  lwc1        $f0, 0x1D8($sp)
    ctx->pc = 0x24bc90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24bc94: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x24bc94u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24bc98: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x24BC98u;
    {
        const bool branch_taken_0x24bc98 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x24bc98) {
            ctx->pc = 0x24BCA4u;
            goto label_24bca4;
        }
    }
    ctx->pc = 0x24BCA0u;
    // 0x24bca0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x24bca0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24bca4:
    // 0x24bca4: 0x328300ff  andi        $v1, $s4, 0xFF
    ctx->pc = 0x24bca4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x24bca8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24bca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24bcac: 0x1462022d  bne         $v1, $v0, . + 4 + (0x22D << 2)
    ctx->pc = 0x24BCACu;
    {
        const bool branch_taken_0x24bcac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x24bcac) {
            ctx->pc = 0x24C564u;
            goto label_24c564;
        }
    }
    ctx->pc = 0x24BCB4u;
    // 0x24bcb4: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x24bcb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x24bcb8: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x24BCB8u;
    SET_GPR_U32(ctx, 31, 0x24BCC0u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x24BCB8u, 0x24BCC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BCC0u;
label_24bcc0:
    // 0x24bcc0: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x24bcc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x24bcc4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x24bcc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24bcc8: 0xc0400e0  jal         func_100380
    ctx->pc = 0x24BCC8u;
    SET_GPR_U32(ctx, 31, 0x24BCD0u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x24BCC8u, 0x24BCD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BCD0u;
label_24bcd0:
    // 0x24bcd0: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x24bcd0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24bcd4: 0x12c00005  beqz        $s6, . + 4 + (0x5 << 2)
    ctx->pc = 0x24BCD4u;
    {
        const bool branch_taken_0x24bcd4 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x24bcd4) {
            ctx->pc = 0x24BCECu;
            goto label_24bcec;
        }
    }
    ctx->pc = 0x24BCDCu;
    // 0x24bcdc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x24bcdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24bce0: 0xc094b4c  jal         func_252D30
    ctx->pc = 0x24BCE0u;
    SET_GPR_U32(ctx, 31, 0x24BCE8u);
    ctx->pc = 0x252D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252D30u, 0x24BCE0u, 0x24BCE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BCE8u;
label_24bce8:
    // 0x24bce8: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x24bce8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24bcec:
    // 0x24bcec: 0x2c0802d  daddu       $s0, $s6, $zero
    ctx->pc = 0x24bcecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24bcf0: 0xc7a001e0  lwc1        $f0, 0x1E0($sp)
    ctx->pc = 0x24bcf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24bcf4: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x24bcf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x24bcf8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24bcf8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24bcfc: 0x0  nop
    ctx->pc = 0x24bcfcu;
    // NOP
    // 0x24bd00: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x24bd00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x24bd04: 0xc7a001e8  lwc1        $f0, 0x1E8($sp)
    ctx->pc = 0x24bd04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24bd08: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x24bd08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x24bd0c: 0xc7a001d0  lwc1        $f0, 0x1D0($sp)
    ctx->pc = 0x24bd0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24bd10: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x24bd10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x24bd14: 0x3c0243af  lui         $v0, 0x43AF
    ctx->pc = 0x24bd14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17327 << 16));
    // 0x24bd18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24bd18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24bd1c: 0x0  nop
    ctx->pc = 0x24bd1cu;
    // NOP
    // 0x24bd20: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x24bd20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x24bd24: 0xc7a001d8  lwc1        $f0, 0x1D8($sp)
    ctx->pc = 0x24bd24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24bd28: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x24bd28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x24bd2c: 0x8fa20240  lw          $v0, 0x240($sp)
    ctx->pc = 0x24bd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x24bd30: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x24bd30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x24bd34: 0x8fa20250  lw          $v0, 0x250($sp)
    ctx->pc = 0x24bd34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x24bd38: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x24bd38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x24bd3c: 0x14020003  bne         $zero, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24BD3Cu;
    {
        const bool branch_taken_0x24bd3c = (GPR_U64(ctx, 0) != GPR_U64(ctx, 2));
        if (branch_taken_0x24bd3c) {
            ctx->pc = 0x24BD4Cu;
            goto label_24bd4c;
        }
    }
    ctx->pc = 0x24BD44u;
    // 0x24bd44: 0x8fa20250  lw          $v0, 0x250($sp)
    ctx->pc = 0x24bd44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x24bd48: 0xac500044  sw          $s0, 0x44($v0)
    ctx->pc = 0x24bd48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 16));
label_24bd4c:
    // 0x24bd4c: 0x10110005  beq         $zero, $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x24BD4Cu;
    {
        const bool branch_taken_0x24bd4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 17));
        if (branch_taken_0x24bd4c) {
            ctx->pc = 0x24BD64u;
            goto label_24bd64;
        }
    }
    ctx->pc = 0x24BD54u;
    // 0x24bd54: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24bd54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24bd58: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x24bd58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24bd5c: 0xc094b80  jal         func_252E00
    ctx->pc = 0x24BD5Cu;
    SET_GPR_U32(ctx, 31, 0x24BD64u);
    ctx->pc = 0x252E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252E00u, 0x24BD5Cu, 0x24BD64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BD64u;
label_24bd64:
    // 0x24bd64: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x24bd64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x24bd68: 0x10020019  beq         $zero, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x24BD68u;
    {
        const bool branch_taken_0x24bd68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x24bd68) {
            ctx->pc = 0x24BDD0u;
            goto label_24bdd0;
        }
    }
    ctx->pc = 0x24BD70u;
    // 0x24bd70: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x24bd70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x24bd74: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x24bd74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24bd78: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x24bd78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    // 0x24bd7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24bd7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24bd80: 0xc094d24  jal         func_253490
    ctx->pc = 0x24BD80u;
    SET_GPR_U32(ctx, 31, 0x24BD88u);
    ctx->pc = 0x253490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253490u, 0x24BD80u, 0x24BD88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BD88u;
label_24bd88:
    // 0x24bd88: 0x7ba300c0  lq          $v1, 0xC0($sp)
    ctx->pc = 0x24bd88u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x24bd8c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x24bd8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x24bd90: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x24bd90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x24bd94: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x24bd94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x24bd98: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x24bd98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x24bd9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24bd9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24bda0: 0xc094d24  jal         func_253490
    ctx->pc = 0x24BDA0u;
    SET_GPR_U32(ctx, 31, 0x24BDA8u);
    ctx->pc = 0x253490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253490u, 0x24BDA0u, 0x24BDA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BDA8u;
label_24bda8:
    // 0x24bda8: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x24bda8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x24bdac: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x24bdacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x24bdb0: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x24bdb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x24bdb4: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x24bdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x24bdb8: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x24bdb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x24bdbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24bdbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24bdc0: 0xc094d24  jal         func_253490
    ctx->pc = 0x24BDC0u;
    SET_GPR_U32(ctx, 31, 0x24BDC8u);
    ctx->pc = 0x253490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253490u, 0x24BDC0u, 0x24BDC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BDC8u;
label_24bdc8:
    // 0x24bdc8: 0x7ba300a0  lq          $v1, 0xA0($sp)
    ctx->pc = 0x24bdc8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x24bdcc: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x24bdccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
label_24bdd0:
    // 0x24bdd0: 0x8fa40250  lw          $a0, 0x250($sp)
    ctx->pc = 0x24bdd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x24bdd4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x24bdd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24bdd8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x24bdd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24bddc: 0xc09364c  jal         func_24D930
    ctx->pc = 0x24BDDCu;
    SET_GPR_U32(ctx, 31, 0x24BDE4u);
    ctx->pc = 0x24D930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24D930u, 0x24BDDCu, 0x24BDE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BDE4u;
label_24bde4:
    // 0x24bde4: 0x8fa20250  lw          $v0, 0x250($sp)
    ctx->pc = 0x24bde4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x24bde8: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x24bde8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x24bdec: 0xc0477e0  jal         func_11DF80
    ctx->pc = 0x24BDECu;
    SET_GPR_U32(ctx, 31, 0x24BDF4u);
    ctx->pc = 0x11DF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DF80u, 0x24BDECu, 0x24BDF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BDF4u;
label_24bdf4:
    // 0x24bdf4: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x24bdf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x24bdf8: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x24bdf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x24bdfc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x24bdfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24be00: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x24be00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24be04: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x24be04u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x24be08: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x24be08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x24be0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24be0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24be10: 0x0  nop
    ctx->pc = 0x24be10u;
    // NOP
    // 0x24be14: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x24be14u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24be18: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x24BE18u;
    {
        const bool branch_taken_0x24be18 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24be18) {
            ctx->pc = 0x24BE30u;
            goto label_24be30;
        }
    }
    ctx->pc = 0x24BE20u;
    // 0x24be20: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x24be20u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x24be24: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x24be24u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x24be28: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x24BE28u;
    {
        const bool branch_taken_0x24be28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24be28) {
            ctx->pc = 0x24BE44u;
            goto label_24be44;
        }
    }
    ctx->pc = 0x24BE30u;
label_24be30:
    // 0x24be30: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x24be30u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x24be34: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x24be34u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x24be38: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x24be38u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x24be3c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x24be3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x24be40: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x24be40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_24be44:
    // 0x24be44: 0x642018  mult        $a0, $v1, $a0
    ctx->pc = 0x24be44u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x24be48: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x24be48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x24be4c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x24be4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24be50: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x24be50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24be54: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x24be54u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x24be58: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x24be58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x24be5c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24be5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24be60: 0x0  nop
    ctx->pc = 0x24be60u;
    // NOP
    // 0x24be64: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x24be64u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24be68: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x24BE68u;
    {
        const bool branch_taken_0x24be68 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24be68) {
            ctx->pc = 0x24BE80u;
            goto label_24be80;
        }
    }
    ctx->pc = 0x24BE70u;
    // 0x24be70: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x24be70u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x24be74: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x24be74u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x24be78: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x24BE78u;
    {
        const bool branch_taken_0x24be78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24be78) {
            ctx->pc = 0x24BE94u;
            goto label_24be94;
        }
    }
    ctx->pc = 0x24BE80u;
label_24be80:
    // 0x24be80: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x24be80u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x24be84: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x24be84u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x24be88: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x24be88u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x24be8c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x24be8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x24be90: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x24be90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_24be94:
    // 0x24be94: 0x64a821  addu        $s5, $v1, $a0
    ctx->pc = 0x24be94u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x24be98: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x24be98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x24be9c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x24be9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24bea0: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x24bea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24bea4: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x24bea4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x24bea8: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x24bea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x24beac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24beacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24beb0: 0x0  nop
    ctx->pc = 0x24beb0u;
    // NOP
    // 0x24beb4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x24beb4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24beb8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x24BEB8u;
    {
        const bool branch_taken_0x24beb8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24beb8) {
            ctx->pc = 0x24BED0u;
            goto label_24bed0;
        }
    }
    ctx->pc = 0x24BEC0u;
    // 0x24bec0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x24bec0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x24bec4: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x24bec4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x24bec8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x24BEC8u;
    {
        const bool branch_taken_0x24bec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24bec8) {
            ctx->pc = 0x24BEE4u;
            goto label_24bee4;
        }
    }
    ctx->pc = 0x24BED0u;
label_24bed0:
    // 0x24bed0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x24bed0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x24bed4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x24bed4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x24bed8: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x24bed8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x24bedc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x24bedcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x24bee0: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x24bee0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_24bee4:
    // 0x24bee4: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x24bee4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x24bee8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x24bee8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24beec: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x24beecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24bef0: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x24bef0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x24bef4: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x24bef4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x24bef8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24bef8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24befc: 0x0  nop
    ctx->pc = 0x24befcu;
    // NOP
    // 0x24bf00: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x24bf00u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24bf04: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x24BF04u;
    {
        const bool branch_taken_0x24bf04 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24bf04) {
            ctx->pc = 0x24BF1Cu;
            goto label_24bf1c;
        }
    }
    ctx->pc = 0x24BF0Cu;
    // 0x24bf0c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x24bf0cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x24bf10: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x24bf10u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x24bf14: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x24BF14u;
    {
        const bool branch_taken_0x24bf14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24bf14) {
            ctx->pc = 0x24BF30u;
            goto label_24bf30;
        }
    }
    ctx->pc = 0x24BF1Cu;
label_24bf1c:
    // 0x24bf1c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x24bf1cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x24bf20: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x24bf20u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x24bf24: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x24bf24u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x24bf28: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x24bf28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x24bf2c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x24bf2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_24bf30:
    // 0x24bf30: 0x83f023  subu        $fp, $a0, $v1
    ctx->pc = 0x24bf30u;
    SET_GPR_S32(ctx, 30, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x24bf34: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x24bf34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x24bf38: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x24bf38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24bf3c: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x24bf3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24bf40: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x24bf40u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x24bf44: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x24bf44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x24bf48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24bf48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24bf4c: 0x0  nop
    ctx->pc = 0x24bf4cu;
    // NOP
    // 0x24bf50: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x24bf50u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24bf54: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x24BF54u;
    {
        const bool branch_taken_0x24bf54 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24bf54) {
            ctx->pc = 0x24BF6Cu;
            goto label_24bf6c;
        }
    }
    ctx->pc = 0x24BF5Cu;
    // 0x24bf5c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x24bf5cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x24bf60: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x24bf60u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x24bf64: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x24BF64u;
    {
        const bool branch_taken_0x24bf64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24bf64) {
            ctx->pc = 0x24BF80u;
            goto label_24bf80;
        }
    }
    ctx->pc = 0x24BF6Cu;
label_24bf6c:
    // 0x24bf6c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x24bf6cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x24bf70: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x24bf70u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x24bf74: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x24bf74u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x24bf78: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x24bf78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x24bf7c: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x24bf7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_24bf80:
    // 0x24bf80: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x24bf80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x24bf84: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x24bf84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24bf88: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x24bf88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24bf8c: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x24bf8cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x24bf90: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x24bf90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x24bf94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24bf94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24bf98: 0x0  nop
    ctx->pc = 0x24bf98u;
    // NOP
    // 0x24bf9c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x24bf9cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24bfa0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x24BFA0u;
    {
        const bool branch_taken_0x24bfa0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24bfa0) {
            ctx->pc = 0x24BFB8u;
            goto label_24bfb8;
        }
    }
    ctx->pc = 0x24BFA8u;
    // 0x24bfa8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x24bfa8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x24bfac: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x24bfacu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x24bfb0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x24BFB0u;
    {
        const bool branch_taken_0x24bfb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24bfb0) {
            ctx->pc = 0x24BFCCu;
            goto label_24bfcc;
        }
    }
    ctx->pc = 0x24BFB8u;
label_24bfb8:
    // 0x24bfb8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x24bfb8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x24bfbc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x24bfbcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x24bfc0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x24bfc0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x24bfc4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x24bfc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x24bfc8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x24bfc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_24bfcc:
    // 0x24bfcc: 0x83b823  subu        $s7, $a0, $v1
    ctx->pc = 0x24bfccu;
    SET_GPR_S32(ctx, 23, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x24bfd0: 0x8fa20250  lw          $v0, 0x250($sp)
    ctx->pc = 0x24bfd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x24bfd4: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x24bfd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x24bfd8: 0xc0477e0  jal         func_11DF80
    ctx->pc = 0x24BFD8u;
    SET_GPR_U32(ctx, 31, 0x24BFE0u);
    ctx->pc = 0x11DF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DF80u, 0x24BFD8u, 0x24BFE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BFE0u;
label_24bfe0:
    // 0x24bfe0: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x24bfe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24bfe4: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x24bfe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24bfe8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x24bfe8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x24bfec: 0x3c0342a0  lui         $v1, 0x42A0
    ctx->pc = 0x24bfecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17056 << 16));
    // 0x24bff0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x24bff0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24bff4: 0x0  nop
    ctx->pc = 0x24bff4u;
    // NOP
    // 0x24bff8: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x24bff8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x24bffc: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x24bffcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x24c000: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x24c000u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24c004: 0x0  nop
    ctx->pc = 0x24c004u;
    // NOP
    // 0x24c008: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x24c008u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24c00c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x24C00Cu;
    {
        const bool branch_taken_0x24c00c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24c00c) {
            ctx->pc = 0x24C024u;
            goto label_24c024;
        }
    }
    ctx->pc = 0x24C014u;
    // 0x24c014: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x24c014u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x24c018: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x24c018u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x24c01c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x24C01Cu;
    {
        const bool branch_taken_0x24c01c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24c01c) {
            ctx->pc = 0x24C038u;
            goto label_24c038;
        }
    }
    ctx->pc = 0x24C024u;
label_24c024:
    // 0x24c024: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x24c024u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x24c028: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x24c028u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x24c02c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x24c02cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x24c030: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x24c030u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x24c034: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x24c034u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_24c038:
    // 0x24c038: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x24c038u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x24c03c: 0xafa2023c  sw          $v0, 0x23C($sp)
    ctx->pc = 0x24c03cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 572), GPR_U32(ctx, 2));
    // 0x24c040: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x24c040u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c044: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x24C044u;
    {
        const bool branch_taken_0x24c044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24c044) {
            ctx->pc = 0x24C1C4u;
            goto label_24c1c4;
        }
    }
    ctx->pc = 0x24C04Cu;
label_24c04c:
    // 0x24c04c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x24c04cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c050: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x24C050u;
    {
        const bool branch_taken_0x24c050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24c050) {
            ctx->pc = 0x24C1A4u;
            goto label_24c1a4;
        }
    }
    ctx->pc = 0x24C058u;
label_24c058:
    // 0x24c058: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x24C058u;
    {
        const bool branch_taken_0x24c058 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x24c058) {
            ctx->pc = 0x24C068u;
            goto label_24c068;
        }
    }
    ctx->pc = 0x24C060u;
    // 0x24c060: 0x16570024  bne         $s2, $s7, . + 4 + (0x24 << 2)
    ctx->pc = 0x24C060u;
    {
        const bool branch_taken_0x24c060 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 23));
        if (branch_taken_0x24c060) {
            ctx->pc = 0x24C0F4u;
            goto label_24c0f4;
        }
    }
    ctx->pc = 0x24C068u;
label_24c068:
    // 0x24c068: 0x27e082b  sltu        $at, $s3, $fp
    ctx->pc = 0x24c068u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
    // 0x24c06c: 0x10200021  beqz        $at, . + 4 + (0x21 << 2)
    ctx->pc = 0x24C06Cu;
    {
        const bool branch_taken_0x24c06c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x24c06c) {
            ctx->pc = 0x24C0F4u;
            goto label_24c0f4;
        }
    }
    ctx->pc = 0x24C074u;
    // 0x24c074: 0xafb50238  sw          $s5, 0x238($sp)
    ctx->pc = 0x24c074u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 568), GPR_U32(ctx, 21));
    // 0x24c078: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x24c078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x24c07c: 0x8fa50238  lw          $a1, 0x238($sp)
    ctx->pc = 0x24c07cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 568)));
    // 0x24c080: 0xc094d74  jal         func_2535D0
    ctx->pc = 0x24C080u;
    SET_GPR_U32(ctx, 31, 0x24C088u);
    ctx->pc = 0x2535D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2535D0u, 0x24C080u, 0x24C088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C088u;
label_24c088:
    // 0x24c088: 0x8fa20250  lw          $v0, 0x250($sp)
    ctx->pc = 0x24c088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x24c08c: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x24c08cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x24c090: 0x2445004c  addiu       $a1, $v0, 0x4C
    ctx->pc = 0x24c090u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 76));
    // 0x24c094: 0x27a60180  addiu       $a2, $sp, 0x180
    ctx->pc = 0x24c094u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x24c098: 0xc09237c  jal         func_248DF0
    ctx->pc = 0x24C098u;
    SET_GPR_U32(ctx, 31, 0x24C0A0u);
    ctx->pc = 0x248DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248DF0u, 0x24C098u, 0x24C0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C0A0u;
label_24c0a0:
    // 0x24c0a0: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x24c0a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x24c0a4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x24c0a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x24c0a8: 0xc094d94  jal         func_253650
    ctx->pc = 0x24C0A8u;
    SET_GPR_U32(ctx, 31, 0x24C0B0u);
    ctx->pc = 0x253650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253650u, 0x24C0A8u, 0x24C0B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C0B0u;
label_24c0b0:
    // 0x24c0b0: 0x93a201c4  lbu         $v0, 0x1C4($sp)
    ctx->pc = 0x24c0b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 452)));
    // 0x24c0b4: 0xa3a2024f  sb          $v0, 0x24F($sp)
    ctx->pc = 0x24c0b4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 591), (uint8_t)GPR_U32(ctx, 2));
    // 0x24c0b8: 0x93a2024f  lbu         $v0, 0x24F($sp)
    ctx->pc = 0x24c0b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 591)));
    // 0x24c0bc: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x24c0bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x24c0c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24c0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24c0c4: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x24C0C4u;
    {
        const bool branch_taken_0x24c0c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x24c0c4) {
            ctx->pc = 0x24C0F4u;
            goto label_24c0f4;
        }
    }
    ctx->pc = 0x24C0CCu;
    // 0x24c0cc: 0x8fa20290  lw          $v0, 0x290($sp)
    ctx->pc = 0x24c0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x24c0d0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x24c0d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x24c0d4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x24C0D4u;
    {
        const bool branch_taken_0x24c0d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24c0d4) {
            ctx->pc = 0x24C0F4u;
            goto label_24c0f4;
        }
    }
    ctx->pc = 0x24C0DCu;
    // 0x24c0dc: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x24c0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x24c0e0: 0xc053b9c  jal         func_14EE70
    ctx->pc = 0x24C0E0u;
    SET_GPR_U32(ctx, 31, 0x24C0E8u);
    ctx->pc = 0x14EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EE70u, 0x24C0E0u, 0x24C0E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C0E8u;
label_24c0e8:
    // 0x24c0e8: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x24c0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x24c0ec: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x24c0ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x24c0f0: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x24c0f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
label_24c0f4:
    // 0x24c0f4: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x24C0F4u;
    {
        const bool branch_taken_0x24c0f4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x24c0f4) {
            ctx->pc = 0x24C104u;
            goto label_24c104;
        }
    }
    ctx->pc = 0x24C0FCu;
    // 0x24c0fc: 0x167e0026  bne         $s3, $fp, . + 4 + (0x26 << 2)
    ctx->pc = 0x24C0FCu;
    {
        const bool branch_taken_0x24c0fc = (GPR_U64(ctx, 19) != GPR_U64(ctx, 30));
        if (branch_taken_0x24c0fc) {
            ctx->pc = 0x24C198u;
            goto label_24c198;
        }
    }
    ctx->pc = 0x24C104u;
label_24c104:
    // 0x24c104: 0x257082b  sltu        $at, $s2, $s7
    ctx->pc = 0x24c104u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
    // 0x24c108: 0x10200023  beqz        $at, . + 4 + (0x23 << 2)
    ctx->pc = 0x24C108u;
    {
        const bool branch_taken_0x24c108 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x24c108) {
            ctx->pc = 0x24C198u;
            goto label_24c198;
        }
    }
    ctx->pc = 0x24C110u;
    // 0x24c110: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x24c110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x24c114: 0x2a21025  or          $v0, $s5, $v0
    ctx->pc = 0x24c114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) | GPR_U64(ctx, 2));
    // 0x24c118: 0xafa20234  sw          $v0, 0x234($sp)
    ctx->pc = 0x24c118u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 564), GPR_U32(ctx, 2));
    // 0x24c11c: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x24c11cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x24c120: 0x8fa50234  lw          $a1, 0x234($sp)
    ctx->pc = 0x24c120u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 564)));
    // 0x24c124: 0xc094d74  jal         func_2535D0
    ctx->pc = 0x24C124u;
    SET_GPR_U32(ctx, 31, 0x24C12Cu);
    ctx->pc = 0x2535D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2535D0u, 0x24C124u, 0x24C12Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C12Cu;
label_24c12c:
    // 0x24c12c: 0x8fa20250  lw          $v0, 0x250($sp)
    ctx->pc = 0x24c12cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x24c130: 0x27a401b8  addiu       $a0, $sp, 0x1B8
    ctx->pc = 0x24c130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 440));
    // 0x24c134: 0x2445004c  addiu       $a1, $v0, 0x4C
    ctx->pc = 0x24c134u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 76));
    // 0x24c138: 0x27a60150  addiu       $a2, $sp, 0x150
    ctx->pc = 0x24c138u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x24c13c: 0xc09237c  jal         func_248DF0
    ctx->pc = 0x24C13Cu;
    SET_GPR_U32(ctx, 31, 0x24C144u);
    ctx->pc = 0x248DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248DF0u, 0x24C13Cu, 0x24C144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C144u;
label_24c144:
    // 0x24c144: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x24c144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x24c148: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x24c148u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x24c14c: 0xc094d94  jal         func_253650
    ctx->pc = 0x24C14Cu;
    SET_GPR_U32(ctx, 31, 0x24C154u);
    ctx->pc = 0x253650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253650u, 0x24C14Cu, 0x24C154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C154u;
label_24c154:
    // 0x24c154: 0x93a201bc  lbu         $v0, 0x1BC($sp)
    ctx->pc = 0x24c154u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 444)));
    // 0x24c158: 0xa3a2024e  sb          $v0, 0x24E($sp)
    ctx->pc = 0x24c158u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 590), (uint8_t)GPR_U32(ctx, 2));
    // 0x24c15c: 0x93a2024e  lbu         $v0, 0x24E($sp)
    ctx->pc = 0x24c15cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 590)));
    // 0x24c160: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x24c160u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x24c164: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24c164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24c168: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x24C168u;
    {
        const bool branch_taken_0x24c168 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x24c168) {
            ctx->pc = 0x24C198u;
            goto label_24c198;
        }
    }
    ctx->pc = 0x24C170u;
    // 0x24c170: 0x8fa20290  lw          $v0, 0x290($sp)
    ctx->pc = 0x24c170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x24c174: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x24c174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x24c178: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x24C178u;
    {
        const bool branch_taken_0x24c178 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24c178) {
            ctx->pc = 0x24C198u;
            goto label_24c198;
        }
    }
    ctx->pc = 0x24C180u;
    // 0x24c180: 0x27a401b8  addiu       $a0, $sp, 0x1B8
    ctx->pc = 0x24c180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 440));
    // 0x24c184: 0xc053b9c  jal         func_14EE70
    ctx->pc = 0x24C184u;
    SET_GPR_U32(ctx, 31, 0x24C18Cu);
    ctx->pc = 0x14EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EE70u, 0x24C184u, 0x24C18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C18Cu;
label_24c18c:
    // 0x24c18c: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x24c18cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x24c190: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x24c190u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x24c194: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x24c194u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
label_24c198:
    // 0x24c198: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x24c198u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x24c19c: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x24c19cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x24c1a0: 0xafb501f0  sw          $s5, 0x1F0($sp)
    ctx->pc = 0x24c1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 21));
label_24c1a4:
    // 0x24c1a4: 0x3d3082b  sltu        $at, $fp, $s3
    ctx->pc = 0x24c1a4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x24c1a8: 0x1020ffab  beqz        $at, . + 4 + (-0x55 << 2)
    ctx->pc = 0x24C1A8u;
    {
        const bool branch_taken_0x24c1a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x24c1a8) {
            ctx->pc = 0x24C058u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24c058;
        }
    }
    ctx->pc = 0x24C1B0u;
    // 0x24c1b0: 0x8fb4023c  lw          $s4, 0x23C($sp)
    ctx->pc = 0x24c1b0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 572)));
    // 0x24c1b4: 0x2b42021  addu        $a0, $s5, $s4
    ctx->pc = 0x24c1b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
    // 0x24c1b8: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x24c1b8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c1bc: 0x26450001  addiu       $a1, $s2, 0x1
    ctx->pc = 0x24c1bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x24c1c0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x24c1c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_24c1c4:
    // 0x24c1c4: 0x2f2082b  sltu        $at, $s7, $s2
    ctx->pc = 0x24c1c4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x24c1c8: 0x1020ffa0  beqz        $at, . + 4 + (-0x60 << 2)
    ctx->pc = 0x24C1C8u;
    {
        const bool branch_taken_0x24c1c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x24c1c8) {
            ctx->pc = 0x24C04Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24c04c;
        }
    }
    ctx->pc = 0x24C1D0u;
    // 0x24c1d0: 0x8fa20250  lw          $v0, 0x250($sp)
    ctx->pc = 0x24c1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x24c1d4: 0x2444004c  addiu       $a0, $v0, 0x4C
    ctx->pc = 0x24c1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 76));
    // 0x24c1d8: 0xc0923c0  jal         func_248F00
    ctx->pc = 0x24C1D8u;
    SET_GPR_U32(ctx, 31, 0x24C1E0u);
    ctx->pc = 0x248F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248F00u, 0x24C1D8u, 0x24C1E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C1E0u;
label_24c1e0:
    // 0x24c1e0: 0xafa20230  sw          $v0, 0x230($sp)
    ctx->pc = 0x24c1e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 560), GPR_U32(ctx, 2));
    // 0x24c1e4: 0x8fa20250  lw          $v0, 0x250($sp)
    ctx->pc = 0x24c1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x24c1e8: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x24c1e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x24c1ec: 0xc0477e0  jal         func_11DF80
    ctx->pc = 0x24C1ECu;
    SET_GPR_U32(ctx, 31, 0x24C1F4u);
    ctx->pc = 0x11DF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DF80u, 0x24C1ECu, 0x24C1F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C1F4u;
label_24c1f4:
    // 0x24c1f4: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x24c1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x24c1f8: 0x3c1442a0  lui         $s4, 0x42A0
    ctx->pc = 0x24c1f8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)17056 << 16));
    // 0x24c1fc: 0x44940800  mtc1        $s4, $f1
    ctx->pc = 0x24c1fcu;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24c200: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x24c200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24c204: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x24c204u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x24c208: 0x3c044f00  lui         $a0, 0x4F00
    ctx->pc = 0x24c208u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20224 << 16));
    // 0x24c20c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x24c20cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24c210: 0x0  nop
    ctx->pc = 0x24c210u;
    // NOP
    // 0x24c214: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x24c214u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24c218: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x24C218u;
    {
        const bool branch_taken_0x24c218 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24c218) {
            ctx->pc = 0x24C230u;
            goto label_24c230;
        }
    }
    ctx->pc = 0x24C220u;
    // 0x24c220: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x24c220u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x24c224: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x24c224u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x24c228: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x24C228u;
    {
        const bool branch_taken_0x24c228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24c228) {
            ctx->pc = 0x24C244u;
            goto label_24c244;
        }
    }
    ctx->pc = 0x24C230u;
label_24c230:
    // 0x24c230: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x24c230u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x24c234: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x24c234u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x24c238: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x24c238u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x24c23c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x24c23cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x24c240: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x24c240u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_24c244:
    // 0x24c244: 0xa32018  mult        $a0, $a1, $v1
    ctx->pc = 0x24c244u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x24c248: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x24c248u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x24c24c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x24c24cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24c250: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x24c250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24c254: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x24c254u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x24c258: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x24c258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x24c25c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24c25cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24c260: 0x0  nop
    ctx->pc = 0x24c260u;
    // NOP
    // 0x24c264: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x24c264u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24c268: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x24C268u;
    {
        const bool branch_taken_0x24c268 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24c268) {
            ctx->pc = 0x24C280u;
            goto label_24c280;
        }
    }
    ctx->pc = 0x24C270u;
    // 0x24c270: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x24c270u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x24c274: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x24c274u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x24c278: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x24C278u;
    {
        const bool branch_taken_0x24c278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24c278) {
            ctx->pc = 0x24C294u;
            goto label_24c294;
        }
    }
    ctx->pc = 0x24C280u;
label_24c280:
    // 0x24c280: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x24c280u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x24c284: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x24c284u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x24c288: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x24c288u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x24c28c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x24c28cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x24c290: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x24c290u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_24c294:
    // 0x24c294: 0x64a821  addu        $s5, $v1, $a0
    ctx->pc = 0x24c294u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x24c298: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x24c298u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c29c: 0x1000008e  b           . + 4 + (0x8E << 2)
    ctx->pc = 0x24C29Cu;
    {
        const bool branch_taken_0x24c29c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24c29c) {
            ctx->pc = 0x24C4D8u;
            goto label_24c4d8;
        }
    }
    ctx->pc = 0x24C2A4u;
label_24c2a4:
    // 0x24c2a4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x24c2a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c2a8: 0x10000087  b           . + 4 + (0x87 << 2)
    ctx->pc = 0x24C2A8u;
    {
        const bool branch_taken_0x24c2a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24c2a8) {
            ctx->pc = 0x24C4C8u;
            goto label_24c4c8;
        }
    }
    ctx->pc = 0x24C2B0u;
label_24c2b0:
    // 0x24c2b0: 0x12600041  beqz        $s3, . + 4 + (0x41 << 2)
    ctx->pc = 0x24C2B0u;
    {
        const bool branch_taken_0x24c2b0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x24c2b0) {
            ctx->pc = 0x24C3B8u;
            goto label_24c3b8;
        }
    }
    ctx->pc = 0x24C2B8u;
    // 0x24c2b8: 0x8fb40250  lw          $s4, 0x250($sp)
    ctx->pc = 0x24c2b8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x24c2bc: 0x8e840048  lw          $a0, 0x48($s4)
    ctx->pc = 0x24c2bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 72)));
    // 0x24c2c0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x24c2c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c2c4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x24c2c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c2c8: 0xc092158  jal         func_248560
    ctx->pc = 0x24C2C8u;
    SET_GPR_U32(ctx, 31, 0x24C2D0u);
    ctx->pc = 0x248560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248560u, 0x24C2C8u, 0x24C2D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C2D0u;
label_24c2d0:
    // 0x24c2d0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x24c2d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c2d4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x24c2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x24c2d8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x24C2D8u;
    {
        const bool branch_taken_0x24c2d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24c2d8) {
            ctx->pc = 0x24C304u;
            goto label_24c304;
        }
    }
    ctx->pc = 0x24C2E0u;
    // 0x24c2e0: 0x8fa20250  lw          $v0, 0x250($sp)
    ctx->pc = 0x24c2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x24c2e4: 0x2665ffff  addiu       $a1, $s3, -0x1
    ctx->pc = 0x24c2e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x24c2e8: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x24c2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x24c2ec: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x24c2ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c2f0: 0xc092158  jal         func_248560
    ctx->pc = 0x24C2F0u;
    SET_GPR_U32(ctx, 31, 0x24C2F8u);
    ctx->pc = 0x248560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248560u, 0x24C2F0u, 0x24C2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C2F8u;
label_24c2f8:
    // 0x24c2f8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x24c2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24c2fc: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x24C2FCu;
    {
        const bool branch_taken_0x24c2fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24c2fc) {
            ctx->pc = 0x24C354u;
            goto label_24c354;
        }
    }
    ctx->pc = 0x24C304u;
label_24c304:
    // 0x24c304: 0x8fa20250  lw          $v0, 0x250($sp)
    ctx->pc = 0x24c304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x24c308: 0x8c540048  lw          $s4, 0x48($v0)
    ctx->pc = 0x24c308u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x24c30c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x24c30cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c310: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x24c310u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c314: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x24c314u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c318: 0xc092158  jal         func_248560
    ctx->pc = 0x24C318u;
    SET_GPR_U32(ctx, 31, 0x24C320u);
    ctx->pc = 0x248560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248560u, 0x24C318u, 0x24C320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C320u;
label_24c320:
    // 0x24c320: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x24c320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c324: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x24c324u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x24c328: 0x14a00023  bnez        $a1, . + 4 + (0x23 << 2)
    ctx->pc = 0x24C328u;
    {
        const bool branch_taken_0x24c328 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x24c328) {
            ctx->pc = 0x24C3B8u;
            goto label_24c3b8;
        }
    }
    ctx->pc = 0x24C330u;
    // 0x24c330: 0x8fa20250  lw          $v0, 0x250($sp)
    ctx->pc = 0x24c330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x24c334: 0x2665ffff  addiu       $a1, $s3, -0x1
    ctx->pc = 0x24c334u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x24c338: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x24c338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x24c33c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x24c33cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c340: 0xc092158  jal         func_248560
    ctx->pc = 0x24C340u;
    SET_GPR_U32(ctx, 31, 0x24C348u);
    ctx->pc = 0x248560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248560u, 0x24C340u, 0x24C348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C348u;
label_24c348:
    // 0x24c348: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x24c348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24c34c: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x24C34Cu;
    {
        const bool branch_taken_0x24c34c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24c34c) {
            ctx->pc = 0x24C3B8u;
            goto label_24c3b8;
        }
    }
    ctx->pc = 0x24C354u;
label_24c354:
    // 0x24c354: 0x8fa20250  lw          $v0, 0x250($sp)
    ctx->pc = 0x24c354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x24c358: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x24c358u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x24c35c: 0xc0477e0  jal         func_11DF80
    ctx->pc = 0x24C35Cu;
    SET_GPR_U32(ctx, 31, 0x24C364u);
    ctx->pc = 0x11DF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DF80u, 0x24C35Cu, 0x24C364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C364u;
label_24c364:
    // 0x24c364: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x24c364u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c368: 0x26820001  addiu       $v0, $s4, 0x1
    ctx->pc = 0x24c368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x24c36c: 0x2421018  mult        $v0, $s2, $v0
    ctx->pc = 0x24c36cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x24c370: 0x2621821  addu        $v1, $s3, $v0
    ctx->pc = 0x24c370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x24c374: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x24c374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x24c378: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x24c378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x24c37c: 0xafa2022c  sw          $v0, 0x22C($sp)
    ctx->pc = 0x24c37cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 556), GPR_U32(ctx, 2));
    // 0x24c380: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x24c380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x24c384: 0x8fa5022c  lw          $a1, 0x22C($sp)
    ctx->pc = 0x24c384u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 556)));
    // 0x24c388: 0xc094d74  jal         func_2535D0
    ctx->pc = 0x24C388u;
    SET_GPR_U32(ctx, 31, 0x24C390u);
    ctx->pc = 0x2535D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2535D0u, 0x24C388u, 0x24C390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C390u;
label_24c390:
    // 0x24c390: 0x8fa20250  lw          $v0, 0x250($sp)
    ctx->pc = 0x24c390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x24c394: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x24c394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x24c398: 0x2445004c  addiu       $a1, $v0, 0x4C
    ctx->pc = 0x24c398u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 76));
    // 0x24c39c: 0x27a60120  addiu       $a2, $sp, 0x120
    ctx->pc = 0x24c39cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x24c3a0: 0xc09237c  jal         func_248DF0
    ctx->pc = 0x24C3A0u;
    SET_GPR_U32(ctx, 31, 0x24C3A8u);
    ctx->pc = 0x248DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248DF0u, 0x24C3A0u, 0x24C3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C3A8u;
label_24c3a8:
    // 0x24c3a8: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x24c3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x24c3ac: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x24c3acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x24c3b0: 0xc094d94  jal         func_253650
    ctx->pc = 0x24C3B0u;
    SET_GPR_U32(ctx, 31, 0x24C3B8u);
    ctx->pc = 0x253650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253650u, 0x24C3B0u, 0x24C3B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C3B8u;
label_24c3b8:
    // 0x24c3b8: 0x12400040  beqz        $s2, . + 4 + (0x40 << 2)
    ctx->pc = 0x24C3B8u;
    {
        const bool branch_taken_0x24c3b8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x24c3b8) {
            ctx->pc = 0x24C4BCu;
            goto label_24c4bc;
        }
    }
    ctx->pc = 0x24C3C0u;
    // 0x24c3c0: 0x8fa20250  lw          $v0, 0x250($sp)
    ctx->pc = 0x24c3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x24c3c4: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x24c3c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x24c3c8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x24c3c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c3cc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x24c3ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c3d0: 0xc092158  jal         func_248560
    ctx->pc = 0x24C3D0u;
    SET_GPR_U32(ctx, 31, 0x24C3D8u);
    ctx->pc = 0x248560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248560u, 0x24C3D0u, 0x24C3D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C3D8u;
label_24c3d8:
    // 0x24c3d8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x24c3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24c3dc: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x24C3DCu;
    {
        const bool branch_taken_0x24c3dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x24c3dc) {
            ctx->pc = 0x24C408u;
            goto label_24c408;
        }
    }
    ctx->pc = 0x24C3E4u;
    // 0x24c3e4: 0x8fa20250  lw          $v0, 0x250($sp)
    ctx->pc = 0x24c3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x24c3e8: 0x2646ffff  addiu       $a2, $s2, -0x1
    ctx->pc = 0x24c3e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x24c3ec: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x24c3ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x24c3f0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x24c3f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c3f4: 0xc092158  jal         func_248560
    ctx->pc = 0x24C3F4u;
    SET_GPR_U32(ctx, 31, 0x24C3FCu);
    ctx->pc = 0x248560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248560u, 0x24C3F4u, 0x24C3FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C3FCu;
label_24c3fc:
    // 0x24c3fc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x24c3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24c400: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x24C400u;
    {
        const bool branch_taken_0x24c400 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24c400) {
            ctx->pc = 0x24C45Cu;
            goto label_24c45c;
        }
    }
    ctx->pc = 0x24C408u;
label_24c408:
    // 0x24c408: 0x8fa20250  lw          $v0, 0x250($sp)
    ctx->pc = 0x24c408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x24c40c: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x24c40cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
    // 0x24c410: 0x7ba200e0  lq          $v0, 0xE0($sp)
    ctx->pc = 0x24c410u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x24c414: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x24c414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x24c418: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x24c418u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c41c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x24c41cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c420: 0xc092158  jal         func_248560
    ctx->pc = 0x24C420u;
    SET_GPR_U32(ctx, 31, 0x24C428u);
    ctx->pc = 0x248560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248560u, 0x24C420u, 0x24C428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C428u;
label_24c428:
    // 0x24c428: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x24c428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c42c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x24c42cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x24c430: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x24C430u;
    {
        const bool branch_taken_0x24c430 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24c430) {
            ctx->pc = 0x24C4BCu;
            goto label_24c4bc;
        }
    }
    ctx->pc = 0x24C438u;
    // 0x24c438: 0x8fa30250  lw          $v1, 0x250($sp)
    ctx->pc = 0x24c438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x24c43c: 0x2646ffff  addiu       $a2, $s2, -0x1
    ctx->pc = 0x24c43cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x24c440: 0x8c640048  lw          $a0, 0x48($v1)
    ctx->pc = 0x24c440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x24c444: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x24c444u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c448: 0xc092158  jal         func_248560
    ctx->pc = 0x24C448u;
    SET_GPR_U32(ctx, 31, 0x24C450u);
    ctx->pc = 0x248560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248560u, 0x24C448u, 0x24C450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C450u;
label_24c450:
    // 0x24c450: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x24c450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24c454: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x24C454u;
    {
        const bool branch_taken_0x24c454 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x24c454) {
            ctx->pc = 0x24C4BCu;
            goto label_24c4bc;
        }
    }
    ctx->pc = 0x24C45Cu;
label_24c45c:
    // 0x24c45c: 0x8fa20250  lw          $v0, 0x250($sp)
    ctx->pc = 0x24c45cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x24c460: 0x8c420048  lw          $v0, 0x48($v0)
    ctx->pc = 0x24c460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x24c464: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x24c464u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
    // 0x24c468: 0x7ba400d0  lq          $a0, 0xD0($sp)
    ctx->pc = 0x24c468u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x24c46c: 0xc0477e0  jal         func_11DF80
    ctx->pc = 0x24C46Cu;
    SET_GPR_U32(ctx, 31, 0x24C474u);
    ctx->pc = 0x11DF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DF80u, 0x24C46Cu, 0x24C474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C474u;
label_24c474:
    // 0x24c474: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x24c474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x24c478: 0x2441018  mult        $v0, $s2, $a0
    ctx->pc = 0x24c478u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x24c47c: 0x2621821  addu        $v1, $s3, $v0
    ctx->pc = 0x24c47cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x24c480: 0xafa30228  sw          $v1, 0x228($sp)
    ctx->pc = 0x24c480u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 552), GPR_U32(ctx, 3));
    // 0x24c484: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x24c484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x24c488: 0x8fa50228  lw          $a1, 0x228($sp)
    ctx->pc = 0x24c488u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 552)));
    // 0x24c48c: 0xc094d74  jal         func_2535D0
    ctx->pc = 0x24C48Cu;
    SET_GPR_U32(ctx, 31, 0x24C494u);
    ctx->pc = 0x2535D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2535D0u, 0x24C48Cu, 0x24C494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C494u;
label_24c494:
    // 0x24c494: 0x8fa30250  lw          $v1, 0x250($sp)
    ctx->pc = 0x24c494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x24c498: 0x27a401a8  addiu       $a0, $sp, 0x1A8
    ctx->pc = 0x24c498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 424));
    // 0x24c49c: 0x2465004c  addiu       $a1, $v1, 0x4C
    ctx->pc = 0x24c49cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 76));
    // 0x24c4a0: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x24c4a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x24c4a4: 0xc09237c  jal         func_248DF0
    ctx->pc = 0x24C4A4u;
    SET_GPR_U32(ctx, 31, 0x24C4ACu);
    ctx->pc = 0x248DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248DF0u, 0x24C4A4u, 0x24C4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C4ACu;
label_24c4ac:
    // 0x24c4ac: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x24c4acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x24c4b0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x24c4b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x24c4b4: 0xc094d94  jal         func_253650
    ctx->pc = 0x24C4B4u;
    SET_GPR_U32(ctx, 31, 0x24C4BCu);
    ctx->pc = 0x253650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253650u, 0x24C4B4u, 0x24C4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C4BCu;
label_24c4bc:
    // 0x24c4bc: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x24c4bcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x24c4c0: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x24c4c0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x24c4c4: 0xafb501ec  sw          $s5, 0x1EC($sp)
    ctx->pc = 0x24c4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 21));
label_24c4c8:
    // 0x24c4c8: 0x27e102b  sltu        $v0, $s3, $fp
    ctx->pc = 0x24c4c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
    // 0x24c4cc: 0x1440ff78  bnez        $v0, . + 4 + (-0x88 << 2)
    ctx->pc = 0x24C4CCu;
    {
        const bool branch_taken_0x24c4cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24c4cc) {
            ctx->pc = 0x24C2B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24c2b0;
        }
    }
    ctx->pc = 0x24C4D4u;
    // 0x24c4d4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x24c4d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_24c4d8:
    // 0x24c4d8: 0x257102b  sltu        $v0, $s2, $s7
    ctx->pc = 0x24c4d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
    // 0x24c4dc: 0x1440ff71  bnez        $v0, . + 4 + (-0x8F << 2)
    ctx->pc = 0x24C4DCu;
    {
        const bool branch_taken_0x24c4dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24c4dc) {
            ctx->pc = 0x24C2A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24c2a4;
        }
    }
    ctx->pc = 0x24C4E4u;
    // 0x24c4e4: 0x8fa20250  lw          $v0, 0x250($sp)
    ctx->pc = 0x24c4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x24c4e8: 0x2444004c  addiu       $a0, $v0, 0x4C
    ctx->pc = 0x24c4e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 76));
    // 0x24c4ec: 0xc0923c0  jal         func_248F00
    ctx->pc = 0x24C4ECu;
    SET_GPR_U32(ctx, 31, 0x24C4F4u);
    ctx->pc = 0x248F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248F00u, 0x24C4ECu, 0x24C4F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C4F4u;
label_24c4f4:
    // 0x24c4f4: 0xafa20230  sw          $v0, 0x230($sp)
    ctx->pc = 0x24c4f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 560), GPR_U32(ctx, 2));
    // 0x24c4f8: 0x8fa40290  lw          $a0, 0x290($sp)
    ctx->pc = 0x24c4f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x24c4fc: 0x30850002  andi        $a1, $a0, 0x2
    ctx->pc = 0x24c4fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x24c500: 0x14a0000d  bnez        $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x24C500u;
    {
        const bool branch_taken_0x24c500 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x24c500) {
            ctx->pc = 0x24C538u;
            goto label_24c538;
        }
    }
    ctx->pc = 0x24C508u;
    // 0x24c508: 0x8fa20250  lw          $v0, 0x250($sp)
    ctx->pc = 0x24c508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x24c50c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x24c50cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c510: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x24c510u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c514: 0xc093174  jal         func_24C5D0
    ctx->pc = 0x24C514u;
    SET_GPR_U32(ctx, 31, 0x24C51Cu);
    ctx->pc = 0x24C5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C5D0u, 0x24C514u, 0x24C51Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C51Cu;
label_24c51c:
    // 0x24c51c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x24c51cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c520: 0x8fa20250  lw          $v0, 0x250($sp)
    ctx->pc = 0x24c520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x24c524: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x24c524u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x24c528: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x24c528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24c52c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x24c52cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c530: 0xc0913a0  jal         func_244E80
    ctx->pc = 0x24C530u;
    SET_GPR_U32(ctx, 31, 0x24C538u);
    ctx->pc = 0x244E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244E80u, 0x24C530u, 0x24C538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C538u;
label_24c538:
    // 0x24c538: 0x8fa30290  lw          $v1, 0x290($sp)
    ctx->pc = 0x24c538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x24c53c: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x24c53cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x24c540: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24C540u;
    {
        const bool branch_taken_0x24c540 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24c540) {
            ctx->pc = 0x24C558u;
            goto label_24c558;
        }
    }
    ctx->pc = 0x24C548u;
    // 0x24c548: 0x8fa40250  lw          $a0, 0x250($sp)
    ctx->pc = 0x24c548u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x24c54c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x24c54cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c550: 0xc093a50  jal         func_24E940
    ctx->pc = 0x24C550u;
    SET_GPR_U32(ctx, 31, 0x24C558u);
    ctx->pc = 0x24E940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24E940u, 0x24C550u, 0x24C558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C558u;
label_24c558:
    // 0x24c558: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x24c558u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c55c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x24C55Cu;
    {
        const bool branch_taken_0x24c55c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24c55c) {
            ctx->pc = 0x24C568u;
            goto label_24c568;
        }
    }
    ctx->pc = 0x24C564u;
label_24c564:
    // 0x24c564: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x24c564u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24c568:
    // 0x24c568: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x24c568u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x24c56c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x24c56cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x24c570: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x24c570u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x24c574: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x24c574u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x24c578: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x24c578u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x24c57c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x24c57cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24c580: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x24c580u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24c584: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x24c584u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24c588: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x24c588u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24c58c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x24c58cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24c590: 0x27bd02a0  addiu       $sp, $sp, 0x2A0
    ctx->pc = 0x24c590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
    // 0x24c594: 0x3e00008  jr          $ra
    ctx->pc = 0x24C594u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24C594u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24C59Cu;
    // 0x24c59c: 0x0  nop
    ctx->pc = 0x24c59cu;
    // NOP
    ctx->pc = 0x24c5a0u;
}
