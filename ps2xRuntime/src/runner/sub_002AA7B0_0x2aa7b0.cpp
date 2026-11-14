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

// Function: sub_002AA7B0
// Address: 0x2aa7b0 - 0x2ab1d0
void sub_002AA7B0_0x2aa7b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AA7B0_0x2aa7b0");
#endif

    switch (ctx->pc) {
        case 0x2aa7c8u: goto label_2aa7c8;
        case 0x2aa83cu: goto label_2aa83c;
        case 0x2aa85cu: goto label_2aa85c;
        case 0x2aa8b0u: goto label_2aa8b0;
        case 0x2aa8f8u: goto label_2aa8f8;
        case 0x2aa920u: goto label_2aa920;
        case 0x2aa934u: goto label_2aa934;
        case 0x2aa948u: goto label_2aa948;
        case 0x2aa960u: goto label_2aa960;
        case 0x2aa974u: goto label_2aa974;
        case 0x2aa988u: goto label_2aa988;
        case 0x2aa9a0u: goto label_2aa9a0;
        case 0x2aa9b4u: goto label_2aa9b4;
        case 0x2aa9c8u: goto label_2aa9c8;
        case 0x2aa9e0u: goto label_2aa9e0;
        case 0x2aa9f4u: goto label_2aa9f4;
        case 0x2aaa08u: goto label_2aaa08;
        case 0x2aaa20u: goto label_2aaa20;
        case 0x2aaa34u: goto label_2aaa34;
        case 0x2aaa48u: goto label_2aaa48;
        case 0x2aaa60u: goto label_2aaa60;
        case 0x2aaa74u: goto label_2aaa74;
        case 0x2aaa8cu: goto label_2aaa8c;
        case 0x2aaaa0u: goto label_2aaaa0;
        case 0x2aaaacu: goto label_2aaaac;
        case 0x2aaad4u: goto label_2aaad4;
        case 0x2aaaecu: goto label_2aaaec;
        case 0x2aaafcu: goto label_2aaafc;
        case 0x2aab78u: goto label_2aab78;
        case 0x2aab88u: goto label_2aab88;
        case 0x2aab94u: goto label_2aab94;
        case 0x2aabb0u: goto label_2aabb0;
        case 0x2aabecu: goto label_2aabec;
        case 0x2aabf4u: goto label_2aabf4;
        case 0x2aac00u: goto label_2aac00;
        case 0x2aac10u: goto label_2aac10;
        case 0x2aac20u: goto label_2aac20;
        case 0x2aac2cu: goto label_2aac2c;
        case 0x2aac4cu: goto label_2aac4c;
        case 0x2aac58u: goto label_2aac58;
        case 0x2aac6cu: goto label_2aac6c;
        case 0x2aac7cu: goto label_2aac7c;
        case 0x2aac8cu: goto label_2aac8c;
        case 0x2aac9cu: goto label_2aac9c;
        case 0x2aaca8u: goto label_2aaca8;
        case 0x2aacbcu: goto label_2aacbc;
        case 0x2aacd4u: goto label_2aacd4;
        case 0x2aacecu: goto label_2aacec;
        case 0x2aacfcu: goto label_2aacfc;
        case 0x2aad08u: goto label_2aad08;
        case 0x2aad18u: goto label_2aad18;
        case 0x2aad2cu: goto label_2aad2c;
        case 0x2aad6cu: goto label_2aad6c;
        case 0x2aad78u: goto label_2aad78;
        case 0x2aad8cu: goto label_2aad8c;
        case 0x2aad9cu: goto label_2aad9c;
        case 0x2aada8u: goto label_2aada8;
        case 0x2aadd0u: goto label_2aadd0;
        case 0x2aadfcu: goto label_2aadfc;
        case 0x2aae10u: goto label_2aae10;
        case 0x2aae84u: goto label_2aae84;
        case 0x2aaeacu: goto label_2aaeac;
        case 0x2aaebcu: goto label_2aaebc;
        case 0x2aaee4u: goto label_2aaee4;
        case 0x2aaf00u: goto label_2aaf00;
        case 0x2aaf0cu: goto label_2aaf0c;
        case 0x2aaf20u: goto label_2aaf20;
        case 0x2aaf30u: goto label_2aaf30;
        case 0x2aaf40u: goto label_2aaf40;
        case 0x2aaf54u: goto label_2aaf54;
        case 0x2aaf64u: goto label_2aaf64;
        case 0x2aaf74u: goto label_2aaf74;
        case 0x2aaf90u: goto label_2aaf90;
        case 0x2aafb0u: goto label_2aafb0;
        case 0x2aafd0u: goto label_2aafd0;
        case 0x2ab040u: goto label_2ab040;
        case 0x2ab06cu: goto label_2ab06c;
        case 0x2ab094u: goto label_2ab094;
        case 0x2ab0b4u: goto label_2ab0b4;
        case 0x2ab0c0u: goto label_2ab0c0;
        case 0x2ab108u: goto label_2ab108;
        case 0x2ab170u: goto label_2ab170;
        case 0x2ab17cu: goto label_2ab17c;
        case 0x2ab190u: goto label_2ab190;
        case 0x2ab1a0u: goto label_2ab1a0;
        case 0x2ab1b0u: goto label_2ab1b0;
        default: break;
    }

    ctx->pc = 0x2aa7b0u;

    // 0x2aa7b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2aa7b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2aa7b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2aa7b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2aa7b8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2aa7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2aa7bc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2aa7bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2aa7c0: 0xc09d130  jal         func_2744C0
    ctx->pc = 0x2AA7C0u;
    SET_GPR_U32(ctx, 31, 0x2AA7C8u);
    ctx->pc = 0x2744C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2744C0u, 0x2AA7C0u, 0x2AA7C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA7C8u;
label_2aa7c8:
    // 0x2aa7c8: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2aa7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2aa7cc: 0x24636480  addiu       $v1, $v1, 0x6480
    ctx->pc = 0x2aa7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25728));
    // 0x2aa7d0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2aa7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2aa7d4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2aa7d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2aa7d8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2aa7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2aa7dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2aa7dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aa7e0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2aa7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2aa7e4: 0xe4400054  swc1        $f0, 0x54($v0)
    ctx->pc = 0x2aa7e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 84), bits); }
    // 0x2aa7e8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2aa7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2aa7ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2aa7ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2aa7f0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2aa7f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2aa7f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2AA7F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AA7F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AA7FCu;
    // 0x2aa7fc: 0x0  nop
    ctx->pc = 0x2aa7fcu;
    // NOP
    // 0x2aa800: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2aa800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2aa804: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2aa804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2aa808: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2aa808u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2aa80c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x2aa80cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x2aa810: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2aa810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2aa814: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2AA814u;
    {
        const bool branch_taken_0x2aa814 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aa814) {
            ctx->pc = 0x2AA85Cu;
            goto label_2aa85c;
        }
    }
    ctx->pc = 0x2AA81Cu;
    // 0x2aa81c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2aa81cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2aa820: 0x24636480  addiu       $v1, $v1, 0x6480
    ctx->pc = 0x2aa820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25728));
    // 0x2aa824: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2aa824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2aa828: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2aa828u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2aa82c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2aa82cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2aa830: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2aa830u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa834: 0xc09d150  jal         func_274540
    ctx->pc = 0x2AA834u;
    SET_GPR_U32(ctx, 31, 0x2AA83Cu);
    ctx->pc = 0x274540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274540u, 0x2AA834u, 0x2AA83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA83Cu;
label_2aa83c:
    // 0x2aa83c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x2aa83cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2aa840: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2aa840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2aa844: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2aa844u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2aa848: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AA848u;
    {
        const bool branch_taken_0x2aa848 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2aa848) {
            ctx->pc = 0x2AA85Cu;
            goto label_2aa85c;
        }
    }
    ctx->pc = 0x2AA850u;
    // 0x2aa850: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2aa850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2aa854: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x2AA854u;
    SET_GPR_U32(ctx, 31, 0x2AA85Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x2AA854u, 0x2AA85Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA85Cu;
label_2aa85c:
    // 0x2aa85c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2aa85cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2aa860: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2aa860u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2aa864: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2aa864u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2aa868: 0x3e00008  jr          $ra
    ctx->pc = 0x2AA868u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AA868u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AA870u;
    // 0x2aa870: 0x27bdfe40  addiu       $sp, $sp, -0x1C0
    ctx->pc = 0x2aa870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966848));
    // 0x2aa874: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x2aa874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x2aa878: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x2aa878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x2aa87c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x2aa87cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x2aa880: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x2aa880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x2aa884: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2aa884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x2aa888: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2aa888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x2aa88c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2aa88cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2aa890: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2aa890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2aa894: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2aa894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2aa898: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2aa898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2aa89c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2aa89cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2aa8a0: 0xafa401b0  sw          $a0, 0x1B0($sp)
    ctx->pc = 0x2aa8a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 4));
    // 0x2aa8a4: 0x8fa401b0  lw          $a0, 0x1B0($sp)
    ctx->pc = 0x2aa8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x2aa8a8: 0xc09d248  jal         func_274920
    ctx->pc = 0x2AA8A8u;
    SET_GPR_U32(ctx, 31, 0x2AA8B0u);
    ctx->pc = 0x274920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274920u, 0x2AA8A8u, 0x2AA8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA8B0u;
label_2aa8b0:
    // 0x2aa8b0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2aa8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2aa8b4: 0x104301c2  beq         $v0, $v1, . + 4 + (0x1C2 << 2)
    ctx->pc = 0x2AA8B4u;
    {
        const bool branch_taken_0x2aa8b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2aa8b4) {
            ctx->pc = 0x2AAFC0u;
            goto label_2aafc0;
        }
    }
    ctx->pc = 0x2AA8BCu;
    // 0x2aa8bc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2aa8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2aa8c0: 0x10430090  beq         $v0, $v1, . + 4 + (0x90 << 2)
    ctx->pc = 0x2AA8C0u;
    {
        const bool branch_taken_0x2aa8c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2aa8c0) {
            ctx->pc = 0x2AAB04u;
            goto label_2aab04;
        }
    }
    ctx->pc = 0x2AA8C8u;
    // 0x2aa8c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2aa8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2aa8cc: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AA8CCu;
    {
        const bool branch_taken_0x2aa8cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2aa8cc) {
            ctx->pc = 0x2AA8DCu;
            goto label_2aa8dc;
        }
    }
    ctx->pc = 0x2AA8D4u;
    // 0x2aa8d4: 0x100001be  b           . + 4 + (0x1BE << 2)
    ctx->pc = 0x2AA8D4u;
    {
        const bool branch_taken_0x2aa8d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aa8d4) {
            ctx->pc = 0x2AAFD0u;
            goto label_2aafd0;
        }
    }
    ctx->pc = 0x2AA8DCu;
label_2aa8dc:
    // 0x2aa8dc: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x2aa8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x2aa8e0: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x2aa8e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2aa8e4: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2aa8e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2aa8e8: 0x24a5ddc0  addiu       $a1, $a1, -0x2240
    ctx->pc = 0x2aa8e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958528));
    // 0x2aa8ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2aa8ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa8f0: 0xc047970  jal         func_11E5C0
    ctx->pc = 0x2AA8F0u;
    SET_GPR_U32(ctx, 31, 0x2AA8F8u);
    ctx->pc = 0x11E5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E5C0u, 0x2AA8F0u, 0x2AA8F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA8F8u;
label_2aa8f8:
    // 0x2aa8f8: 0xafa201ac  sw          $v0, 0x1AC($sp)
    ctx->pc = 0x2aa8f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 428), GPR_U32(ctx, 2));
    // 0x2aa8fc: 0x8fa301ac  lw          $v1, 0x1AC($sp)
    ctx->pc = 0x2aa8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 428)));
    // 0x2aa900: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x2aa900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x2aa904: 0xac430050  sw          $v1, 0x50($v0)
    ctx->pc = 0x2aa904u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 3));
    // 0x2aa908: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x2aa908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x2aa90c: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x2aa90cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2aa910: 0x240504fb  addiu       $a1, $zero, 0x4FB
    ctx->pc = 0x2aa910u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1275));
    // 0x2aa914: 0x2786a46c  addiu       $a2, $gp, -0x5B94
    ctx->pc = 0x2aa914u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943852));
    // 0x2aa918: 0xc041a50  jal         func_106940
    ctx->pc = 0x2AA918u;
    SET_GPR_U32(ctx, 31, 0x2AA920u);
    ctx->pc = 0x106940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106940u, 0x2AA918u, 0x2AA920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA920u;
label_2aa920:
    // 0x2aa920: 0x8f83bb70  lw          $v1, -0x4490($gp)
    ctx->pc = 0x2aa920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x2aa924: 0x24640054  addiu       $a0, $v1, 0x54
    ctx->pc = 0x2aa924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 84));
    // 0x2aa928: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2aa928u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa92c: 0xc041ba4  jal         func_106E90
    ctx->pc = 0x2AA92Cu;
    SET_GPR_U32(ctx, 31, 0x2AA934u);
    ctx->pc = 0x106E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E90u, 0x2AA92Cu, 0x2AA934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA934u;
label_2aa934:
    // 0x2aa934: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x2aa934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x2aa938: 0x24440054  addiu       $a0, $v0, 0x54
    ctx->pc = 0x2aa938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 84));
    // 0x2aa93c: 0x2785a470  addiu       $a1, $gp, -0x5B90
    ctx->pc = 0x2aa93cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943856));
    // 0x2aa940: 0xc0424e8  jal         func_1093A0
    ctx->pc = 0x2AA940u;
    SET_GPR_U32(ctx, 31, 0x2AA948u);
    ctx->pc = 0x1093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1093A0u, 0x2AA940u, 0x2AA948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA948u;
label_2aa948:
    // 0x2aa948: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x2aa948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x2aa94c: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x2aa94cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2aa950: 0x240504fc  addiu       $a1, $zero, 0x4FC
    ctx->pc = 0x2aa950u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1276));
    // 0x2aa954: 0x2786a46c  addiu       $a2, $gp, -0x5B94
    ctx->pc = 0x2aa954u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943852));
    // 0x2aa958: 0xc041a50  jal         func_106940
    ctx->pc = 0x2AA958u;
    SET_GPR_U32(ctx, 31, 0x2AA960u);
    ctx->pc = 0x106940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106940u, 0x2AA958u, 0x2AA960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA960u;
label_2aa960:
    // 0x2aa960: 0x8f83bb70  lw          $v1, -0x4490($gp)
    ctx->pc = 0x2aa960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x2aa964: 0x24640054  addiu       $a0, $v1, 0x54
    ctx->pc = 0x2aa964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 84));
    // 0x2aa968: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2aa968u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa96c: 0xc0424e8  jal         func_1093A0
    ctx->pc = 0x2AA96Cu;
    SET_GPR_U32(ctx, 31, 0x2AA974u);
    ctx->pc = 0x1093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1093A0u, 0x2AA96Cu, 0x2AA974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA974u;
label_2aa974:
    // 0x2aa974: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x2aa974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x2aa978: 0x24440054  addiu       $a0, $v0, 0x54
    ctx->pc = 0x2aa978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 84));
    // 0x2aa97c: 0x2785a470  addiu       $a1, $gp, -0x5B90
    ctx->pc = 0x2aa97cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943856));
    // 0x2aa980: 0xc0424e8  jal         func_1093A0
    ctx->pc = 0x2AA980u;
    SET_GPR_U32(ctx, 31, 0x2AA988u);
    ctx->pc = 0x1093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1093A0u, 0x2AA980u, 0x2AA988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA988u;
label_2aa988:
    // 0x2aa988: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x2aa988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x2aa98c: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x2aa98cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2aa990: 0x240504fd  addiu       $a1, $zero, 0x4FD
    ctx->pc = 0x2aa990u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1277));
    // 0x2aa994: 0x2786a46c  addiu       $a2, $gp, -0x5B94
    ctx->pc = 0x2aa994u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943852));
    // 0x2aa998: 0xc041a50  jal         func_106940
    ctx->pc = 0x2AA998u;
    SET_GPR_U32(ctx, 31, 0x2AA9A0u);
    ctx->pc = 0x106940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106940u, 0x2AA998u, 0x2AA9A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA9A0u;
label_2aa9a0:
    // 0x2aa9a0: 0x8f83bb70  lw          $v1, -0x4490($gp)
    ctx->pc = 0x2aa9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x2aa9a4: 0x24640054  addiu       $a0, $v1, 0x54
    ctx->pc = 0x2aa9a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 84));
    // 0x2aa9a8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2aa9a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa9ac: 0xc0424e8  jal         func_1093A0
    ctx->pc = 0x2AA9ACu;
    SET_GPR_U32(ctx, 31, 0x2AA9B4u);
    ctx->pc = 0x1093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1093A0u, 0x2AA9ACu, 0x2AA9B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA9B4u;
label_2aa9b4:
    // 0x2aa9b4: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x2aa9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x2aa9b8: 0x24440054  addiu       $a0, $v0, 0x54
    ctx->pc = 0x2aa9b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 84));
    // 0x2aa9bc: 0x2785a470  addiu       $a1, $gp, -0x5B90
    ctx->pc = 0x2aa9bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943856));
    // 0x2aa9c0: 0xc0424e8  jal         func_1093A0
    ctx->pc = 0x2AA9C0u;
    SET_GPR_U32(ctx, 31, 0x2AA9C8u);
    ctx->pc = 0x1093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1093A0u, 0x2AA9C0u, 0x2AA9C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA9C8u;
label_2aa9c8:
    // 0x2aa9c8: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x2aa9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x2aa9cc: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x2aa9ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2aa9d0: 0x240504fe  addiu       $a1, $zero, 0x4FE
    ctx->pc = 0x2aa9d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1278));
    // 0x2aa9d4: 0x2786a46c  addiu       $a2, $gp, -0x5B94
    ctx->pc = 0x2aa9d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943852));
    // 0x2aa9d8: 0xc041a50  jal         func_106940
    ctx->pc = 0x2AA9D8u;
    SET_GPR_U32(ctx, 31, 0x2AA9E0u);
    ctx->pc = 0x106940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106940u, 0x2AA9D8u, 0x2AA9E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA9E0u;
label_2aa9e0:
    // 0x2aa9e0: 0x8f83bb70  lw          $v1, -0x4490($gp)
    ctx->pc = 0x2aa9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x2aa9e4: 0x24640054  addiu       $a0, $v1, 0x54
    ctx->pc = 0x2aa9e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 84));
    // 0x2aa9e8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2aa9e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa9ec: 0xc0424e8  jal         func_1093A0
    ctx->pc = 0x2AA9ECu;
    SET_GPR_U32(ctx, 31, 0x2AA9F4u);
    ctx->pc = 0x1093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1093A0u, 0x2AA9ECu, 0x2AA9F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA9F4u;
label_2aa9f4:
    // 0x2aa9f4: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x2aa9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x2aa9f8: 0x24440054  addiu       $a0, $v0, 0x54
    ctx->pc = 0x2aa9f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 84));
    // 0x2aa9fc: 0x2785a470  addiu       $a1, $gp, -0x5B90
    ctx->pc = 0x2aa9fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943856));
    // 0x2aaa00: 0xc0424e8  jal         func_1093A0
    ctx->pc = 0x2AAA00u;
    SET_GPR_U32(ctx, 31, 0x2AAA08u);
    ctx->pc = 0x1093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1093A0u, 0x2AAA00u, 0x2AAA08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AAA08u;
label_2aaa08:
    // 0x2aaa08: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x2aaa08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x2aaa0c: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x2aaa0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2aaa10: 0x240504ff  addiu       $a1, $zero, 0x4FF
    ctx->pc = 0x2aaa10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1279));
    // 0x2aaa14: 0x2786a46c  addiu       $a2, $gp, -0x5B94
    ctx->pc = 0x2aaa14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943852));
    // 0x2aaa18: 0xc041a50  jal         func_106940
    ctx->pc = 0x2AAA18u;
    SET_GPR_U32(ctx, 31, 0x2AAA20u);
    ctx->pc = 0x106940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106940u, 0x2AAA18u, 0x2AAA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AAA20u;
label_2aaa20:
    // 0x2aaa20: 0x8f83bb70  lw          $v1, -0x4490($gp)
    ctx->pc = 0x2aaa20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x2aaa24: 0x24640054  addiu       $a0, $v1, 0x54
    ctx->pc = 0x2aaa24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 84));
    // 0x2aaa28: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2aaa28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aaa2c: 0xc0424e8  jal         func_1093A0
    ctx->pc = 0x2AAA2Cu;
    SET_GPR_U32(ctx, 31, 0x2AAA34u);
    ctx->pc = 0x1093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1093A0u, 0x2AAA2Cu, 0x2AAA34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AAA34u;
label_2aaa34:
    // 0x2aaa34: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x2aaa34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x2aaa38: 0x24440054  addiu       $a0, $v0, 0x54
    ctx->pc = 0x2aaa38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 84));
    // 0x2aaa3c: 0x2785a470  addiu       $a1, $gp, -0x5B90
    ctx->pc = 0x2aaa3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943856));
    // 0x2aaa40: 0xc0424e8  jal         func_1093A0
    ctx->pc = 0x2AAA40u;
    SET_GPR_U32(ctx, 31, 0x2AAA48u);
    ctx->pc = 0x1093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1093A0u, 0x2AAA40u, 0x2AAA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AAA48u;
label_2aaa48:
    // 0x2aaa48: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x2aaa48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x2aaa4c: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x2aaa4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2aaa50: 0x24050500  addiu       $a1, $zero, 0x500
    ctx->pc = 0x2aaa50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
    // 0x2aaa54: 0x2786a46c  addiu       $a2, $gp, -0x5B94
    ctx->pc = 0x2aaa54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943852));
    // 0x2aaa58: 0xc041a50  jal         func_106940
    ctx->pc = 0x2AAA58u;
    SET_GPR_U32(ctx, 31, 0x2AAA60u);
    ctx->pc = 0x106940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106940u, 0x2AAA58u, 0x2AAA60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AAA60u;
label_2aaa60:
    // 0x2aaa60: 0x8f83bb70  lw          $v1, -0x4490($gp)
    ctx->pc = 0x2aaa60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x2aaa64: 0x24640054  addiu       $a0, $v1, 0x54
    ctx->pc = 0x2aaa64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 84));
    // 0x2aaa68: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2aaa68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aaa6c: 0xc0424e8  jal         func_1093A0
    ctx->pc = 0x2AAA6Cu;
    SET_GPR_U32(ctx, 31, 0x2AAA74u);
    ctx->pc = 0x1093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1093A0u, 0x2AAA6Cu, 0x2AAA74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AAA74u;
label_2aaa74:
    // 0x2aaa74: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x2aaa74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x2aaa78: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x2aaa78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2aaa7c: 0x24050501  addiu       $a1, $zero, 0x501
    ctx->pc = 0x2aaa7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1281));
    // 0x2aaa80: 0x2786a46c  addiu       $a2, $gp, -0x5B94
    ctx->pc = 0x2aaa80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943852));
    // 0x2aaa84: 0xc041a50  jal         func_106940
    ctx->pc = 0x2AAA84u;
    SET_GPR_U32(ctx, 31, 0x2AAA8Cu);
    ctx->pc = 0x106940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106940u, 0x2AAA84u, 0x2AAA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AAA8Cu;
label_2aaa8c:
    // 0x2aaa8c: 0x8f83bb70  lw          $v1, -0x4490($gp)
    ctx->pc = 0x2aaa8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x2aaa90: 0x24640070  addiu       $a0, $v1, 0x70
    ctx->pc = 0x2aaa90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x2aaa94: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2aaa94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aaa98: 0xc041ba4  jal         func_106E90
    ctx->pc = 0x2AAA98u;
    SET_GPR_U32(ctx, 31, 0x2AAAA0u);
    ctx->pc = 0x106E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E90u, 0x2AAA98u, 0x2AAAA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AAAA0u;
label_2aaaa0:
    // 0x2aaaa0: 0x8fa401b0  lw          $a0, 0x1B0($sp)
    ctx->pc = 0x2aaaa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x2aaaa4: 0xc09d234  jal         func_2748D0
    ctx->pc = 0x2AAAA4u;
    SET_GPR_U32(ctx, 31, 0x2AAAACu);
    ctx->pc = 0x2748D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2748D0u, 0x2AAAA4u, 0x2AAAACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AAAACu;
label_2aaaac:
    // 0x2aaaac: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2aaaacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2aaab0: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x2aaab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x2aaab4: 0xac43007c  sw          $v1, 0x7C($v0)
    ctx->pc = 0x2aaab4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 124), GPR_U32(ctx, 3));
    // 0x2aaab8: 0x8fa301b0  lw          $v1, 0x1B0($sp)
    ctx->pc = 0x2aaab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x2aaabc: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2aaabcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2aaac0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2aaac0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2aaac4: 0x8c640030  lw          $a0, 0x30($v1)
    ctx->pc = 0x2aaac4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x2aaac8: 0x2405056f  addiu       $a1, $zero, 0x56F
    ctx->pc = 0x2aaac8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1391));
    // 0x2aaacc: 0xc042090  jal         func_108240
    ctx->pc = 0x2AAACCu;
    SET_GPR_U32(ctx, 31, 0x2AAAD4u);
    ctx->pc = 0x108240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108240u, 0x2AAACCu, 0x2AAAD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AAAD4u;
label_2aaad4:
    // 0x2aaad4: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x2aaad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x2aaad8: 0xe440008c  swc1        $f0, 0x8C($v0)
    ctx->pc = 0x2aaad8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 140), bits); }
    // 0x2aaadc: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x2aaadcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2aaae0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2aaae0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aaae4: 0xc08ef28  jal         func_23BCA0
    ctx->pc = 0x2AAAE4u;
    SET_GPR_U32(ctx, 31, 0x2AAAECu);
    ctx->pc = 0x23BCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BCA0u, 0x2AAAE4u, 0x2AAAECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AAAECu;
label_2aaaec:
    // 0x2aaaec: 0x8fa401b0  lw          $a0, 0x1B0($sp)
    ctx->pc = 0x2aaaecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x2aaaf0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2aaaf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2aaaf4: 0xc09d250  jal         func_274940
    ctx->pc = 0x2AAAF4u;
    SET_GPR_U32(ctx, 31, 0x2AAAFCu);
    ctx->pc = 0x274940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274940u, 0x2AAAF4u, 0x2AAAFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AAAFCu;
label_2aaafc:
    // 0x2aaafc: 0x10000134  b           . + 4 + (0x134 << 2)
    ctx->pc = 0x2AAAFCu;
    {
        const bool branch_taken_0x2aaafc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aaafc) {
            ctx->pc = 0x2AAFD0u;
            goto label_2aafd0;
        }
    }
    ctx->pc = 0x2AAB04u;
label_2aab04:
    // 0x2aab04: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x2aab04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x2aab08: 0xc4400054  lwc1        $f0, 0x54($v0)
    ctx->pc = 0x2aab08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aab0c: 0xe7a001a8  swc1        $f0, 0x1A8($sp)
    ctx->pc = 0x2aab0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 424), bits); }
    // 0x2aab10: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x2aab10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x2aab14: 0xc443000c  lwc1        $f3, 0xC($v0)
    ctx->pc = 0x2aab14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2aab18: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2aab18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2aab1c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2aab1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2aab20: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x2aab20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x2aab24: 0xc4410054  lwc1        $f1, 0x54($v0)
    ctx->pc = 0x2aab24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2aab28: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2aab28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aab2c: 0x0  nop
    ctx->pc = 0x2aab2cu;
    // NOP
    // 0x2aab30: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x2aab30u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x2aab34: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x2aab34u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x2aab38: 0xe4400054  swc1        $f0, 0x54($v0)
    ctx->pc = 0x2aab38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 84), bits); }
    // 0x2aab3c: 0x8fa301b0  lw          $v1, 0x1B0($sp)
    ctx->pc = 0x2aab3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x2aab40: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x2aab40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x2aab44: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2aab44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2aab48: 0xc4600054  lwc1        $f0, 0x54($v1)
    ctx->pc = 0x2aab48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aab4c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2aab4cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2aab50: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2aab50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2aab54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2aab54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aab58: 0x0  nop
    ctx->pc = 0x2aab58u;
    // NOP
    // 0x2aab5c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2aab5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2aab60: 0xe7a001a4  swc1        $f0, 0x1A4($sp)
    ctx->pc = 0x2aab60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 420), bits); }
    // 0x2aab64: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x2aab64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x2aab68: 0x8c440044  lw          $a0, 0x44($v0)
    ctx->pc = 0x2aab68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x2aab6c: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2aab6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2aab70: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2AAB70u;
    SET_GPR_U32(ctx, 31, 0x2AAB78u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2AAB70u, 0x2AAB78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AAB78u;
label_2aab78:
    // 0x2aab78: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2aab78u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aab7c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2aab7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aab80: 0xc091018  jal         func_244060
    ctx->pc = 0x2AAB80u;
    SET_GPR_U32(ctx, 31, 0x2AAB88u);
    ctx->pc = 0x244060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244060u, 0x2AAB80u, 0x2AAB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AAB88u;
label_2aab88:
    // 0x2aab88: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2aab88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aab8c: 0xc106784  jal         func_419E10
    ctx->pc = 0x2AAB8Cu;
    SET_GPR_U32(ctx, 31, 0x2AAB94u);
    ctx->pc = 0x419E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E10u, 0x2AAB8Cu, 0x2AAB94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AAB94u;
label_2aab94:
    // 0x2aab94: 0xafa20120  sw          $v0, 0x120($sp)
    ctx->pc = 0x2aab94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
    // 0x2aab98: 0xc7ac01a4  lwc1        $f12, 0x1A4($sp)
    ctx->pc = 0x2aab98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2aab9c: 0x2784b6cc  addiu       $a0, $gp, -0x4934
    ctx->pc = 0x2aab9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948556));
    // 0x2aaba0: 0x8fa50120  lw          $a1, 0x120($sp)
    ctx->pc = 0x2aaba0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2aaba4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2aaba4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aaba8: 0xc11f300  jal         func_47CC00
    ctx->pc = 0x2AABA8u;
    SET_GPR_U32(ctx, 31, 0x2AABB0u);
    ctx->pc = 0x47CC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47CC00u, 0x2AABA8u, 0x2AABB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AABB0u;
label_2aabb0:
    // 0x2aabb0: 0x8f82bc4c  lw          $v0, -0x43B4($gp)
    ctx->pc = 0x2aabb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949964)));
    // 0x2aabb4: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x2aabb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2aabb8: 0xafa20110  sw          $v0, 0x110($sp)
    ctx->pc = 0x2aabb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 2));
    // 0x2aabbc: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x2aabbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x2aabc0: 0xc4410054  lwc1        $f1, 0x54($v0)
    ctx->pc = 0x2aabc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2aabc4: 0xc7a001a8  lwc1        $f0, 0x1A8($sp)
    ctx->pc = 0x2aabc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aabc8: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2aabc8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2aabcc: 0xe7a00188  swc1        $f0, 0x188($sp)
    ctx->pc = 0x2aabccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
    // 0x2aabd0: 0xe7a00184  swc1        $f0, 0x184($sp)
    ctx->pc = 0x2aabd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 388), bits); }
    // 0x2aabd4: 0xe7a00180  swc1        $f0, 0x180($sp)
    ctx->pc = 0x2aabd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
    // 0x2aabd8: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x2aabd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2aabdc: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x2aabdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x2aabe0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2aabe0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2aabe4: 0xc1065d8  jal         func_419760
    ctx->pc = 0x2AABE4u;
    SET_GPR_U32(ctx, 31, 0x2AABECu);
    ctx->pc = 0x419760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419760u, 0x2AABE4u, 0x2AABECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AABECu;
label_2aabec:
    // 0x2aabec: 0xc090864  jal         func_242190
    ctx->pc = 0x2AABECu;
    SET_GPR_U32(ctx, 31, 0x2AABF4u);
    ctx->pc = 0x242190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242190u, 0x2AABECu, 0x2AABF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AABF4u;
label_2aabf4:
    // 0x2aabf4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2aabf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aabf8: 0xc090868  jal         func_2421A0
    ctx->pc = 0x2AABF8u;
    SET_GPR_U32(ctx, 31, 0x2AAC00u);
    ctx->pc = 0x2421A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2421A0u, 0x2AABF8u, 0x2AAC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AAC00u;
label_2aac00:
    // 0x2aac00: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2aac00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aac04: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2aac04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aac08: 0xc090914  jal         func_242450
    ctx->pc = 0x2AAC08u;
    SET_GPR_U32(ctx, 31, 0x2AAC10u);
    ctx->pc = 0x242450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242450u, 0x2AAC08u, 0x2AAC10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AAC10u;
label_2aac10:
    // 0x2aac10: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x2aac10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    // 0x2aac14: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2aac14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aac18: 0xc09090c  jal         func_242430
    ctx->pc = 0x2AAC18u;
    SET_GPR_U32(ctx, 31, 0x2AAC20u);
    ctx->pc = 0x242430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242430u, 0x2AAC18u, 0x2AAC20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AAC20u;
label_2aac20:
    // 0x2aac20: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2aac20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aac24: 0xc044598  jal         func_111660
    ctx->pc = 0x2AAC24u;
    SET_GPR_U32(ctx, 31, 0x2AAC2Cu);
    ctx->pc = 0x111660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111660u, 0x2AAC24u, 0x2AAC2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AAC2Cu;
label_2aac2c:
    // 0x2aac2c: 0x7ba300c0  lq          $v1, 0xC0($sp)
    ctx->pc = 0x2aac2cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2aac30: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x2aac30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2aac34: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2AAC34u;
    {
        const bool branch_taken_0x2aac34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2aac34) {
            ctx->pc = 0x2AAC94u;
            goto label_2aac94;
        }
    }
    ctx->pc = 0x2AAC3Cu;
    // 0x2aac3c: 0x8f82bc4c  lw          $v0, -0x43B4($gp)
    ctx->pc = 0x2aac3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949964)));
    // 0x2aac40: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2aac40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2aac44: 0xc1066de  jal         func_419B78
    ctx->pc = 0x2AAC44u;
    SET_GPR_U32(ctx, 31, 0x2AAC4Cu);
    ctx->pc = 0x419B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419B78u, 0x2AAC44u, 0x2AAC4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AAC4Cu;
label_2aac4c:
    // 0x2aac4c: 0x8f84bc4c  lw          $a0, -0x43B4($gp)
    ctx->pc = 0x2aac4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949964)));
    // 0x2aac50: 0xc0e6f1a  jal         func_39BC68
    ctx->pc = 0x2AAC50u;
    SET_GPR_U32(ctx, 31, 0x2AAC58u);
    ctx->pc = 0x39BC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BC68u, 0x2AAC50u, 0x2AAC58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AAC58u;
label_2aac58:
    // 0x2aac58: 0xafa201a0  sw          $v0, 0x1A0($sp)
    ctx->pc = 0x2aac58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 2));
    // 0x2aac5c: 0x8fa401a0  lw          $a0, 0x1A0($sp)
    ctx->pc = 0x2aac5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x2aac60: 0x8f85bc4c  lw          $a1, -0x43B4($gp)
    ctx->pc = 0x2aac60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949964)));
    // 0x2aac64: 0xc0e6ee0  jal         func_39BB80
    ctx->pc = 0x2AAC64u;
    SET_GPR_U32(ctx, 31, 0x2AAC6Cu);
    ctx->pc = 0x39BB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BB80u, 0x2AAC64u, 0x2AAC6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AAC6Cu;
label_2aac6c:
    // 0x2aac6c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2aac6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aac70: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2aac70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aac74: 0xc08ef28  jal         func_23BCA0
    ctx->pc = 0x2AAC74u;
    SET_GPR_U32(ctx, 31, 0x2AAC7Cu);
    ctx->pc = 0x23BCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BCA0u, 0x2AAC74u, 0x2AAC7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AAC7Cu;
label_2aac7c:
    // 0x2aac7c: 0x8fa401b0  lw          $a0, 0x1B0($sp)
    ctx->pc = 0x2aac7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x2aac80: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2aac80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2aac84: 0xc09d250  jal         func_274940
    ctx->pc = 0x2AAC84u;
    SET_GPR_U32(ctx, 31, 0x2AAC8Cu);
    ctx->pc = 0x274940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274940u, 0x2AAC84u, 0x2AAC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AAC8Cu;
label_2aac8c:
    // 0x2aac8c: 0x100000d0  b           . + 4 + (0xD0 << 2)
    ctx->pc = 0x2AAC8Cu;
    {
        const bool branch_taken_0x2aac8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aac8c) {
            ctx->pc = 0x2AAFD0u;
            goto label_2aafd0;
        }
    }
    ctx->pc = 0x2AAC94u;
label_2aac94:
    // 0x2aac94: 0xc0b06cc  jal         func_2C1B30
    ctx->pc = 0x2AAC94u;
    SET_GPR_U32(ctx, 31, 0x2AAC9Cu);
    ctx->pc = 0x2C1B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B30u, 0x2AAC94u, 0x2AAC9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AAC9Cu;
label_2aac9c:
    // 0x2aac9c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2aac9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aaca0: 0xc0b06c4  jal         func_2C1B10
    ctx->pc = 0x2AACA0u;
    SET_GPR_U32(ctx, 31, 0x2AACA8u);
    ctx->pc = 0x2C1B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B10u, 0x2AACA0u, 0x2AACA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AACA8u;
label_2aaca8:
    // 0x2aaca8: 0x8fa301b0  lw          $v1, 0x1B0($sp)
    ctx->pc = 0x2aaca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x2aacac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2aacacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aacb0: 0x8c65003c  lw          $a1, 0x3C($v1)
    ctx->pc = 0x2aacb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x2aacb4: 0xc0b4d8c  jal         func_2D3630
    ctx->pc = 0x2AACB4u;
    SET_GPR_U32(ctx, 31, 0x2AACBCu);
    ctx->pc = 0x2D3630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D3630u, 0x2AACB4u, 0x2AACBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AACBCu;
label_2aacbc:
    // 0x2aacbc: 0xafa2019c  sw          $v0, 0x19C($sp)
    ctx->pc = 0x2aacbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 412), GPR_U32(ctx, 2));
    // 0x2aacc0: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x2aacc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x2aacc4: 0x8c44003c  lw          $a0, 0x3C($v0)
    ctx->pc = 0x2aacc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x2aacc8: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2aacc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2aaccc: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2AACCCu;
    SET_GPR_U32(ctx, 31, 0x2AACD4u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2AACCCu, 0x2AACD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AACD4u;
label_2aacd4:
    // 0x2aacd4: 0xafa20198  sw          $v0, 0x198($sp)
    ctx->pc = 0x2aacd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 408), GPR_U32(ctx, 2));
    // 0x2aacd8: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x2aacd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x2aacdc: 0x8c44003c  lw          $a0, 0x3C($v0)
    ctx->pc = 0x2aacdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x2aace0: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2aace0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2aace4: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2AACE4u;
    SET_GPR_U32(ctx, 31, 0x2AACECu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2AACE4u, 0x2AACECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AACECu;
label_2aacec:
    // 0x2aacec: 0xafa20194  sw          $v0, 0x194($sp)
    ctx->pc = 0x2aacecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 404), GPR_U32(ctx, 2));
    // 0x2aacf0: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x2aacf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2aacf4: 0xc0516f8  jal         func_145BE0
    ctx->pc = 0x2AACF4u;
    SET_GPR_U32(ctx, 31, 0x2AACFCu);
    ctx->pc = 0x145BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145BE0u, 0x2AACF4u, 0x2AACFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AACFCu;
label_2aacfc:
    // 0x2aacfc: 0x8fa40194  lw          $a0, 0x194($sp)
    ctx->pc = 0x2aacfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 404)));
    // 0x2aad00: 0xc0a80a0  jal         func_2A0280
    ctx->pc = 0x2AAD00u;
    SET_GPR_U32(ctx, 31, 0x2AAD08u);
    ctx->pc = 0x2A0280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0280u, 0x2AAD00u, 0x2AAD08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AAD08u;
label_2aad08:
    // 0x2aad08: 0xafa200f8  sw          $v0, 0xF8($sp)
    ctx->pc = 0x2aad08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 2));
    // 0x2aad0c: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x2aad0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2aad10: 0xc0e6f1a  jal         func_39BC68
    ctx->pc = 0x2AAD10u;
    SET_GPR_U32(ctx, 31, 0x2AAD18u);
    ctx->pc = 0x39BC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BC68u, 0x2AAD10u, 0x2AAD18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AAD18u;
label_2aad18:
    // 0x2aad18: 0xafa20190  sw          $v0, 0x190($sp)
    ctx->pc = 0x2aad18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 2));
    // 0x2aad1c: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x2aad1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x2aad20: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2aad20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aad24: 0xc090f80  jal         func_243E00
    ctx->pc = 0x2AAD24u;
    SET_GPR_U32(ctx, 31, 0x2AAD2Cu);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x2AAD24u, 0x2AAD2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AAD2Cu;
label_2aad2c:
    // 0x2aad2c: 0x27a30140  addiu       $v1, $sp, 0x140
    ctx->pc = 0x2aad2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x2aad30: 0x27a20170  addiu       $v0, $sp, 0x170
    ctx->pc = 0x2aad30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x2aad34: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2aad34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2aad38: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2aad38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2aad3c: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2aad3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aad40: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x2aad40u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2aad44: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2aad44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2aad48: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2aad48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2aad4c: 0xc7a10174  lwc1        $f1, 0x174($sp)
    ctx->pc = 0x2aad4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2aad50: 0x3c024320  lui         $v0, 0x4320
    ctx->pc = 0x2aad50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17184 << 16));
    // 0x2aad54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2aad54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aad58: 0x0  nop
    ctx->pc = 0x2aad58u;
    // NOP
    // 0x2aad5c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2aad5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2aad60: 0xe7a00174  swc1        $f0, 0x174($sp)
    ctx->pc = 0x2aad60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 372), bits); }
    // 0x2aad64: 0xc090864  jal         func_242190
    ctx->pc = 0x2AAD64u;
    SET_GPR_U32(ctx, 31, 0x2AAD6Cu);
    ctx->pc = 0x242190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242190u, 0x2AAD64u, 0x2AAD6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AAD6Cu;
label_2aad6c:
    // 0x2aad6c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2aad6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aad70: 0xc090590  jal         func_241640
    ctx->pc = 0x2AAD70u;
    SET_GPR_U32(ctx, 31, 0x2AAD78u);
    ctx->pc = 0x241640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241640u, 0x2AAD70u, 0x2AAD78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AAD78u;
label_2aad78:
    // 0x2aad78: 0xafa2018c  sw          $v0, 0x18C($sp)
    ctx->pc = 0x2aad78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 2));
    // 0x2aad7c: 0x8fa4018c  lw          $a0, 0x18C($sp)
    ctx->pc = 0x2aad7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
    // 0x2aad80: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2aad80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2aad84: 0xc09157c  jal         func_2455F0
    ctx->pc = 0x2AAD84u;
    SET_GPR_U32(ctx, 31, 0x2AAD8Cu);
    ctx->pc = 0x2455F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2455F0u, 0x2AAD84u, 0x2AAD8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AAD8Cu;
label_2aad8c:
    // 0x2aad8c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2aad8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aad90: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2aad90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aad94: 0xc040e7c  jal         func_1039F0
    ctx->pc = 0x2AAD94u;
    SET_GPR_U32(ctx, 31, 0x2AAD9Cu);
    ctx->pc = 0x1039F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1039F0u, 0x2AAD94u, 0x2AAD9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AAD9Cu;
label_2aad9c:
    // 0x2aad9c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2aad9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aada0: 0x10000080  b           . + 4 + (0x80 << 2)
    ctx->pc = 0x2AADA0u;
    {
        const bool branch_taken_0x2aada0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aada0) {
            ctx->pc = 0x2AAFA4u;
            goto label_2aafa4;
        }
    }
    ctx->pc = 0x2AADA8u;
label_2aada8:
    // 0x2aada8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2aada8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2aadac: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x2aadacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x2aadb0: 0x8c42003c  lw          $v0, 0x3C($v0)
    ctx->pc = 0x2aadb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x2aadb4: 0x1062007a  beq         $v1, $v0, . + 4 + (0x7A << 2)
    ctx->pc = 0x2AADB4u;
    {
        const bool branch_taken_0x2aadb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2aadb4) {
            ctx->pc = 0x2AAFA0u;
            goto label_2aafa0;
        }
    }
    ctx->pc = 0x2AADBCu;
    // 0x2aadbc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2aadbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2aadc0: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x2aadc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x2aadc4: 0x8fa40198  lw          $a0, 0x198($sp)
    ctx->pc = 0x2aadc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x2aadc8: 0xc096880  jal         func_25A200
    ctx->pc = 0x2AADC8u;
    SET_GPR_U32(ctx, 31, 0x2AADD0u);
    ctx->pc = 0x25A200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A200u, 0x2AADC8u, 0x2AADD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AADD0u;
label_2aadd0:
    // 0x2aadd0: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x2aadd0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2aadd4: 0x10620072  beq         $v1, $v0, . + 4 + (0x72 << 2)
    ctx->pc = 0x2AADD4u;
    {
        const bool branch_taken_0x2aadd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2aadd4) {
            ctx->pc = 0x2AAFA0u;
            goto label_2aafa0;
        }
    }
    ctx->pc = 0x2AADDCu;
    // 0x2aaddc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2aaddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2aade0: 0x8fa2019c  lw          $v0, 0x19C($sp)
    ctx->pc = 0x2aade0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 412)));
    // 0x2aade4: 0x1062006e  beq         $v1, $v0, . + 4 + (0x6E << 2)
    ctx->pc = 0x2AADE4u;
    {
        const bool branch_taken_0x2aade4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2aade4) {
            ctx->pc = 0x2AAFA0u;
            goto label_2aafa0;
        }
    }
    ctx->pc = 0x2AADECu;
    // 0x2aadec: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2aadecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2aadf0: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2aadf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2aadf4: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2AADF4u;
    SET_GPR_U32(ctx, 31, 0x2AADFCu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2AADF4u, 0x2AADFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AADFCu;
label_2aadfc:
    // 0x2aadfc: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x2aadfcu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aae00: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x2aae00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x2aae04: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x2aae04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aae08: 0xc090f80  jal         func_243E00
    ctx->pc = 0x2AAE08u;
    SET_GPR_U32(ctx, 31, 0x2AAE10u);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x2AAE08u, 0x2AAE10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AAE10u;
label_2aae10:
    // 0x2aae10: 0x27a30130  addiu       $v1, $sp, 0x130
    ctx->pc = 0x2aae10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x2aae14: 0x27a20160  addiu       $v0, $sp, 0x160
    ctx->pc = 0x2aae14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x2aae18: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2aae18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2aae1c: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2aae1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2aae20: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2aae20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aae24: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x2aae24u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2aae28: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2aae28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2aae2c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2aae2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2aae30: 0xc7a10164  lwc1        $f1, 0x164($sp)
    ctx->pc = 0x2aae30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2aae34: 0x3c024320  lui         $v0, 0x4320
    ctx->pc = 0x2aae34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17184 << 16));
    // 0x2aae38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2aae38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aae3c: 0x0  nop
    ctx->pc = 0x2aae3cu;
    // NOP
    // 0x2aae40: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2aae40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2aae44: 0xe7a00164  swc1        $f0, 0x164($sp)
    ctx->pc = 0x2aae44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 356), bits); }
    // 0x2aae48: 0xc7a10160  lwc1        $f1, 0x160($sp)
    ctx->pc = 0x2aae48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2aae4c: 0xc7a00170  lwc1        $f0, 0x170($sp)
    ctx->pc = 0x2aae4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aae50: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2aae50u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2aae54: 0xe7a00150  swc1        $f0, 0x150($sp)
    ctx->pc = 0x2aae54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x2aae58: 0xc7a10164  lwc1        $f1, 0x164($sp)
    ctx->pc = 0x2aae58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2aae5c: 0xc7a00174  lwc1        $f0, 0x174($sp)
    ctx->pc = 0x2aae5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aae60: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2aae60u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2aae64: 0xe7a00154  swc1        $f0, 0x154($sp)
    ctx->pc = 0x2aae64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 340), bits); }
    // 0x2aae68: 0xc7a10168  lwc1        $f1, 0x168($sp)
    ctx->pc = 0x2aae68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2aae6c: 0xc7a00178  lwc1        $f0, 0x178($sp)
    ctx->pc = 0x2aae6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aae70: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2aae70u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2aae74: 0xe7a00158  swc1        $f0, 0x158($sp)
    ctx->pc = 0x2aae74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
    // 0x2aae78: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x2aae78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x2aae7c: 0xc104d24  jal         func_413490
    ctx->pc = 0x2AAE7Cu;
    SET_GPR_U32(ctx, 31, 0x2AAE84u);
    ctx->pc = 0x413490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413490u, 0x2AAE7Cu, 0x2AAE84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AAE84u;
label_2aae84:
    // 0x2aae84: 0xc7a101a4  lwc1        $f1, 0x1A4($sp)
    ctx->pc = 0x2aae84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2aae88: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2aae88u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2aae8c: 0x45010044  bc1t        . + 4 + (0x44 << 2)
    ctx->pc = 0x2AAE8Cu;
    {
        const bool branch_taken_0x2aae8c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2aae8c) {
            ctx->pc = 0x2AAFA0u;
            goto label_2aafa0;
        }
    }
    ctx->pc = 0x2AAE94u;
    // 0x2aae94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2aae94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2aae98: 0xafa200e8  sw          $v0, 0xE8($sp)
    ctx->pc = 0x2aae98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 2));
    // 0x2aae9c: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x2aae9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2aaea0: 0x27a50160  addiu       $a1, $sp, 0x160
    ctx->pc = 0x2aaea0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x2aaea4: 0xc041d58  jal         func_107560
    ctx->pc = 0x2AAEA4u;
    SET_GPR_U32(ctx, 31, 0x2AAEACu);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x2AAEA4u, 0x2AAEACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AAEACu;
label_2aaeac:
    // 0x2aaeac: 0x27a400dc  addiu       $a0, $sp, 0xDC
    ctx->pc = 0x2aaeacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 220));
    // 0x2aaeb0: 0x27a50170  addiu       $a1, $sp, 0x170
    ctx->pc = 0x2aaeb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x2aaeb4: 0xc041d58  jal         func_107560
    ctx->pc = 0x2AAEB4u;
    SET_GPR_U32(ctx, 31, 0x2AAEBCu);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x2AAEB4u, 0x2AAEBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AAEBCu;
label_2aaebc:
    // 0x2aaebc: 0xafa000f0  sw          $zero, 0xF0($sp)
    ctx->pc = 0x2aaebcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 0));
    // 0x2aaec0: 0xc78081c0  lwc1        $f0, -0x7E40($gp)
    ctx->pc = 0x2aaec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934976)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aaec4: 0xe7a000fc  swc1        $f0, 0xFC($sp)
    ctx->pc = 0x2aaec4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
    // 0x2aaec8: 0x8fa40190  lw          $a0, 0x190($sp)
    ctx->pc = 0x2aaec8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x2aaecc: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x2aaeccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2aaed0: 0x3c06002c  lui         $a2, 0x2C
    ctx->pc = 0x2aaed0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)44 << 16));
    // 0x2aaed4: 0x24c6c000  addiu       $a2, $a2, -0x4000
    ctx->pc = 0x2aaed4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950912));
    // 0x2aaed8: 0x27a700f0  addiu       $a3, $sp, 0xF0
    ctx->pc = 0x2aaed8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2aaedc: 0xc0c6d0c  jal         func_31B430
    ctx->pc = 0x2AAEDCu;
    SET_GPR_U32(ctx, 31, 0x2AAEE4u);
    ctx->pc = 0x31B430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31B430u, 0x2AAEDCu, 0x2AAEE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AAEE4u;
label_2aaee4:
    // 0x2aaee4: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x2aaee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2aaee8: 0x1440002d  bnez        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x2AAEE8u;
    {
        const bool branch_taken_0x2aaee8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2aaee8) {
            ctx->pc = 0x2AAFA0u;
            goto label_2aafa0;
        }
    }
    ctx->pc = 0x2AAEF0u;
    // 0x2aaef0: 0x8f82bc4c  lw          $v0, -0x43B4($gp)
    ctx->pc = 0x2aaef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949964)));
    // 0x2aaef4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2aaef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2aaef8: 0xc1066de  jal         func_419B78
    ctx->pc = 0x2AAEF8u;
    SET_GPR_U32(ctx, 31, 0x2AAF00u);
    ctx->pc = 0x419B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419B78u, 0x2AAEF8u, 0x2AAF00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AAF00u;
label_2aaf00:
    // 0x2aaf00: 0x8f84bc4c  lw          $a0, -0x43B4($gp)
    ctx->pc = 0x2aaf00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949964)));
    // 0x2aaf04: 0xc0e6f1a  jal         func_39BC68
    ctx->pc = 0x2AAF04u;
    SET_GPR_U32(ctx, 31, 0x2AAF0Cu);
    ctx->pc = 0x39BC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BC68u, 0x2AAF04u, 0x2AAF0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AAF0Cu;
label_2aaf0c:
    // 0x2aaf0c: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x2aaf0cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aaf10: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2aaf10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aaf14: 0x8f85bc4c  lw          $a1, -0x43B4($gp)
    ctx->pc = 0x2aaf14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949964)));
    // 0x2aaf18: 0xc0e6ee0  jal         func_39BB80
    ctx->pc = 0x2AAF18u;
    SET_GPR_U32(ctx, 31, 0x2AAF20u);
    ctx->pc = 0x39BB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BB80u, 0x2AAF18u, 0x2AAF20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AAF20u;
label_2aaf20:
    // 0x2aaf20: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2aaf20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aaf24: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2aaf24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aaf28: 0xc08ef28  jal         func_23BCA0
    ctx->pc = 0x2AAF28u;
    SET_GPR_U32(ctx, 31, 0x2AAF30u);
    ctx->pc = 0x23BCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BCA0u, 0x2AAF28u, 0x2AAF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AAF30u;
label_2aaf30:
    // 0x2aaf30: 0x8fa401b0  lw          $a0, 0x1B0($sp)
    ctx->pc = 0x2aaf30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x2aaf34: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2aaf34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2aaf38: 0xc09d250  jal         func_274940
    ctx->pc = 0x2AAF38u;
    SET_GPR_U32(ctx, 31, 0x2AAF40u);
    ctx->pc = 0x274940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274940u, 0x2AAF38u, 0x2AAF40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AAF40u;
label_2aaf40:
    // 0x2aaf40: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x2aaf40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x2aaf44: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2aaf44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2aaf48: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2aaf48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2aaf4c: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2AAF4Cu;
    SET_GPR_U32(ctx, 31, 0x2AAF54u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2AAF4Cu, 0x2AAF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AAF54u;
label_2aaf54:
    // 0x2aaf54: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2aaf54u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aaf58: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2aaf58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aaf5c: 0xc05ce40  jal         func_173900
    ctx->pc = 0x2AAF5Cu;
    SET_GPR_U32(ctx, 31, 0x2AAF64u);
    ctx->pc = 0x173900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173900u, 0x2AAF5Cu, 0x2AAF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AAF64u;
label_2aaf64:
    // 0x2aaf64: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2aaf64u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aaf68: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2aaf68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aaf6c: 0xc040aa8  jal         func_102AA0
    ctx->pc = 0x2AAF6Cu;
    SET_GPR_U32(ctx, 31, 0x2AAF74u);
    ctx->pc = 0x102AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AA0u, 0x2AAF6Cu, 0x2AAF74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AAF74u;
label_2aaf74:
    // 0x2aaf74: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2aaf74u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aaf78: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2aaf78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x2aaf7c: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x2aaf7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2aaf80: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2aaf80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aaf84: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2aaf84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aaf88: 0xc040a90  jal         func_102A40
    ctx->pc = 0x2AAF88u;
    SET_GPR_U32(ctx, 31, 0x2AAF90u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x2AAF88u, 0x2AAF90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AAF90u;
label_2aaf90:
    // 0x2aaf90: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2aaf90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2aaf94: 0xe4740008  swc1        $f20, 0x8($v1)
    ctx->pc = 0x2aaf94u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2aaf98: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2AAF98u;
    {
        const bool branch_taken_0x2aaf98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aaf98) {
            ctx->pc = 0x2AAFD0u;
            goto label_2aafd0;
        }
    }
    ctx->pc = 0x2AAFA0u;
label_2aafa0:
    // 0x2aafa0: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2aafa0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_2aafa4:
    // 0x2aafa4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2aafa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aafa8: 0xc04147c  jal         func_1051F0
    ctx->pc = 0x2AAFA8u;
    SET_GPR_U32(ctx, 31, 0x2AAFB0u);
    ctx->pc = 0x1051F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051F0u, 0x2AAFA8u, 0x2AAFB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AAFB0u;
label_2aafb0:
    // 0x2aafb0: 0x1602ff7d  bne         $s0, $v0, . + 4 + (-0x83 << 2)
    ctx->pc = 0x2AAFB0u;
    {
        const bool branch_taken_0x2aafb0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2aafb0) {
            ctx->pc = 0x2AADA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2aada8;
        }
    }
    ctx->pc = 0x2AAFB8u;
    // 0x2aafb8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2AAFB8u;
    {
        const bool branch_taken_0x2aafb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aafb8) {
            ctx->pc = 0x2AAFD0u;
            goto label_2aafd0;
        }
    }
    ctx->pc = 0x2AAFC0u;
label_2aafc0:
    // 0x2aafc0: 0x8fa401b0  lw          $a0, 0x1B0($sp)
    ctx->pc = 0x2aafc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x2aafc4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2aafc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2aafc8: 0xc09d250  jal         func_274940
    ctx->pc = 0x2AAFC8u;
    SET_GPR_U32(ctx, 31, 0x2AAFD0u);
    ctx->pc = 0x274940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274940u, 0x2AAFC8u, 0x2AAFD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AAFD0u;
label_2aafd0:
    // 0x2aafd0: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x2aafd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2aafd4: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x2aafd4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2aafd8: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x2aafd8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2aafdc: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x2aafdcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2aafe0: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2aafe0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2aafe4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2aafe4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2aafe8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2aafe8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2aafec: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2aafecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2aaff0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2aaff0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2aaff4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2aaff4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2aaff8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2aaff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2aaffc: 0x27bd01c0  addiu       $sp, $sp, 0x1C0
    ctx->pc = 0x2aaffcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x2ab000: 0x3e00008  jr          $ra
    ctx->pc = 0x2AB000u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AB000u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AB008u;
    // 0x2ab008: 0x0  nop
    ctx->pc = 0x2ab008u;
    // NOP
    // 0x2ab00c: 0x0  nop
    ctx->pc = 0x2ab00cu;
    // NOP
    // 0x2ab010: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2ab010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2ab014: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2ab014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2ab018: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ab018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2ab01c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ab01cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ab020: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x2ab020u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x2ab024: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x2ab024u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x2ab028: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x2ab028u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x2ab02c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2ab02cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ab030: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x2ab030u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ab034: 0x8fa60050  lw          $a2, 0x50($sp)
    ctx->pc = 0x2ab034u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ab038: 0xc09d18c  jal         func_274630
    ctx->pc = 0x2AB038u;
    SET_GPR_U32(ctx, 31, 0x2AB040u);
    ctx->pc = 0x274630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274630u, 0x2AB038u, 0x2AB040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB040u;
label_2ab040:
    // 0x2ab040: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x2ab040u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2ab044: 0x8f82bc4c  lw          $v0, -0x43B4($gp)
    ctx->pc = 0x2ab044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949964)));
    // 0x2ab048: 0x1440002f  bnez        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x2AB048u;
    {
        const bool branch_taken_0x2ab048 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ab048) {
            ctx->pc = 0x2AB108u;
            goto label_2ab108;
        }
    }
    ctx->pc = 0x2AB050u;
    // 0x2ab050: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2ab050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ab054: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x2ab054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2ab058: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2ab058u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2ab05c: 0x24a5ddc0  addiu       $a1, $a1, -0x2240
    ctx->pc = 0x2ab05cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958528));
    // 0x2ab060: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ab060u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab064: 0xc047970  jal         func_11E5C0
    ctx->pc = 0x2AB064u;
    SET_GPR_U32(ctx, 31, 0x2AB06Cu);
    ctx->pc = 0x11E5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E5C0u, 0x2AB064u, 0x2AB06Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB06Cu;
label_2ab06c:
    // 0x2ab06c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ab06cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab070: 0x16000025  bnez        $s0, . + 4 + (0x25 << 2)
    ctx->pc = 0x2AB070u;
    {
        const bool branch_taken_0x2ab070 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ab070) {
            ctx->pc = 0x2AB108u;
            goto label_2ab108;
        }
    }
    ctx->pc = 0x2AB078u;
    // 0x2ab078: 0x8f84bb84  lw          $a0, -0x447C($gp)
    ctx->pc = 0x2ab078u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949764)));
    // 0x2ab07c: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2ab07cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2ab080: 0x24a5ddd0  addiu       $a1, $a1, -0x2230
    ctx->pc = 0x2ab080u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958544));
    // 0x2ab084: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2ab084u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2ab088: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2ab088u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ab08c: 0xc08a320  jal         func_228C80
    ctx->pc = 0x2AB08Cu;
    SET_GPR_U32(ctx, 31, 0x2AB094u);
    ctx->pc = 0x228C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228C80u, 0x2AB08Cu, 0x2AB094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB094u;
label_2ab094:
    // 0x2ab094: 0xaf82bc4c  sw          $v0, -0x43B4($gp)
    ctx->pc = 0x2ab094u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949964), GPR_U32(ctx, 2));
    // 0x2ab098: 0x8382bc50  lb          $v0, -0x43B0($gp)
    ctx->pc = 0x2ab098u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294949968)));
    // 0x2ab09c: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2AB09Cu;
    {
        const bool branch_taken_0x2ab09c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ab09c) {
            ctx->pc = 0x2AB0ECu;
            goto label_2ab0ec;
        }
    }
    ctx->pc = 0x2AB0A4u;
    // 0x2ab0a4: 0x8f82bc4c  lw          $v0, -0x43B4($gp)
    ctx->pc = 0x2ab0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949964)));
    // 0x2ab0a8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2ab0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2ab0ac: 0xc106784  jal         func_419E10
    ctx->pc = 0x2AB0ACu;
    SET_GPR_U32(ctx, 31, 0x2AB0B4u);
    ctx->pc = 0x419E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E10u, 0x2AB0ACu, 0x2AB0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB0B4u;
label_2ab0b4:
    // 0x2ab0b4: 0x3c060061  lui         $a2, 0x61
    ctx->pc = 0x2ab0b4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)97 << 16));
    // 0x2ab0b8: 0x24c6c190  addiu       $a2, $a2, -0x3E70
    ctx->pc = 0x2ab0b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294951312));
    // 0x2ab0bc: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2ab0bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2ab0c0:
    // 0x2ab0c0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2ab0c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ab0c4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2ab0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2ab0c8: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x2ab0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2ab0cc: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x2ab0ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x2ab0d0: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x2ab0d0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x2ab0d4: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x2ab0d4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x2ab0d8: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x2ab0d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x2ab0dc: 0x1ca0fff8  bgtz        $a1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2AB0DCu;
    {
        const bool branch_taken_0x2ab0dc = (GPR_S32(ctx, 5) > 0);
        if (branch_taken_0x2ab0dc) {
            ctx->pc = 0x2AB0C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ab0c0;
        }
    }
    ctx->pc = 0x2AB0E4u;
    // 0x2ab0e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ab0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ab0e8: 0xa382bc50  sb          $v0, -0x43B0($gp)
    ctx->pc = 0x2ab0e8u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294949968), (uint8_t)GPR_U32(ctx, 2));
label_2ab0ec:
    // 0x2ab0ec: 0x8f82bc4c  lw          $v0, -0x43B4($gp)
    ctx->pc = 0x2ab0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949964)));
    // 0x2ab0f0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2ab0f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2ab0f4: 0x3c050061  lui         $a1, 0x61
    ctx->pc = 0x2ab0f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)97 << 16));
    // 0x2ab0f8: 0x24a5c190  addiu       $a1, $a1, -0x3E70
    ctx->pc = 0x2ab0f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951312));
    // 0x2ab0fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ab0fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab100: 0xc1065f8  jal         func_4197E0
    ctx->pc = 0x2AB100u;
    SET_GPR_U32(ctx, 31, 0x2AB108u);
    ctx->pc = 0x4197E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4197E0u, 0x2AB100u, 0x2AB108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB108u;
label_2ab108:
    // 0x2ab108: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2ab108u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab10c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2ab10cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ab110: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ab110u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ab114: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ab114u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ab118: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x2ab118u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2ab11c: 0x3e00008  jr          $ra
    ctx->pc = 0x2AB11Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AB11Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AB124u;
    // 0x2ab124: 0x0  nop
    ctx->pc = 0x2ab124u;
    // NOP
    // 0x2ab128: 0x0  nop
    ctx->pc = 0x2ab128u;
    // NOP
    // 0x2ab12c: 0x0  nop
    ctx->pc = 0x2ab12cu;
    // NOP
    // 0x2ab130: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ab130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ab134: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ab134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ab138: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ab138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ab13c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2ab13cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2ab140: 0x8f82bc4c  lw          $v0, -0x43B4($gp)
    ctx->pc = 0x2ab140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949964)));
    // 0x2ab144: 0x10020017  beq         $zero, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2AB144u;
    {
        const bool branch_taken_0x2ab144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ab144) {
            ctx->pc = 0x2AB1A4u;
            goto label_2ab1a4;
        }
    }
    ctx->pc = 0x2AB14Cu;
    // 0x2ab14c: 0x8f82bc4c  lw          $v0, -0x43B4($gp)
    ctx->pc = 0x2ab14cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949964)));
    // 0x2ab150: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x2ab150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2ab154: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x2ab154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2ab158: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2AB158u;
    {
        const bool branch_taken_0x2ab158 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ab158) {
            ctx->pc = 0x2AB190u;
            goto label_2ab190;
        }
    }
    ctx->pc = 0x2AB160u;
    // 0x2ab160: 0x8f82bc4c  lw          $v0, -0x43B4($gp)
    ctx->pc = 0x2ab160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949964)));
    // 0x2ab164: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2ab164u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2ab168: 0xc1066de  jal         func_419B78
    ctx->pc = 0x2AB168u;
    SET_GPR_U32(ctx, 31, 0x2AB170u);
    ctx->pc = 0x419B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419B78u, 0x2AB168u, 0x2AB170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB170u;
label_2ab170:
    // 0x2ab170: 0x8f84bc4c  lw          $a0, -0x43B4($gp)
    ctx->pc = 0x2ab170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949964)));
    // 0x2ab174: 0xc0e6f1a  jal         func_39BC68
    ctx->pc = 0x2AB174u;
    SET_GPR_U32(ctx, 31, 0x2AB17Cu);
    ctx->pc = 0x39BC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BC68u, 0x2AB174u, 0x2AB17Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB17Cu;
label_2ab17c:
    // 0x2ab17c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ab17cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab180: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ab180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab184: 0x8f85bc4c  lw          $a1, -0x43B4($gp)
    ctx->pc = 0x2ab184u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949964)));
    // 0x2ab188: 0xc0e6ee0  jal         func_39BB80
    ctx->pc = 0x2AB188u;
    SET_GPR_U32(ctx, 31, 0x2AB190u);
    ctx->pc = 0x39BB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BB80u, 0x2AB188u, 0x2AB190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB190u;
label_2ab190:
    // 0x2ab190: 0x8f84bb84  lw          $a0, -0x447C($gp)
    ctx->pc = 0x2ab190u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949764)));
    // 0x2ab194: 0x8f85bc4c  lw          $a1, -0x43B4($gp)
    ctx->pc = 0x2ab194u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949964)));
    // 0x2ab198: 0xc08a614  jal         func_229850
    ctx->pc = 0x2AB198u;
    SET_GPR_U32(ctx, 31, 0x2AB1A0u);
    ctx->pc = 0x229850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229850u, 0x2AB198u, 0x2AB1A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB1A0u;
label_2ab1a0:
    // 0x2ab1a0: 0xaf80bc4c  sw          $zero, -0x43B4($gp)
    ctx->pc = 0x2ab1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949964), GPR_U32(ctx, 0));
label_2ab1a4:
    // 0x2ab1a4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2ab1a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ab1a8: 0xc09d1d8  jal         func_274760
    ctx->pc = 0x2AB1A8u;
    SET_GPR_U32(ctx, 31, 0x2AB1B0u);
    ctx->pc = 0x274760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274760u, 0x2AB1A8u, 0x2AB1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB1B0u;
label_2ab1b0:
    // 0x2ab1b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ab1b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ab1b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ab1b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ab1b8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2ab1b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2ab1bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2AB1BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AB1BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AB1C4u;
    // 0x2ab1c4: 0x0  nop
    ctx->pc = 0x2ab1c4u;
    // NOP
    // 0x2ab1c8: 0x0  nop
    ctx->pc = 0x2ab1c8u;
    // NOP
    // 0x2ab1cc: 0x0  nop
    ctx->pc = 0x2ab1ccu;
    // NOP
    ctx->pc = 0x2ab1d0u;
}
