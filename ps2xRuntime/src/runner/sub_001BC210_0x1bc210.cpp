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

// Function: sub_001BC210
// Address: 0x1bc210 - 0x1bca90
void sub_001BC210_0x1bc210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BC210_0x1bc210");
#endif

    switch (ctx->pc) {
        case 0x1bc24cu: goto label_1bc24c;
        case 0x1bc26cu: goto label_1bc26c;
        case 0x1bc27cu: goto label_1bc27c;
        case 0x1bc290u: goto label_1bc290;
        case 0x1bc2c0u: goto label_1bc2c0;
        case 0x1bc2d4u: goto label_1bc2d4;
        case 0x1bc2e0u: goto label_1bc2e0;
        case 0x1bc2ecu: goto label_1bc2ec;
        case 0x1bc31cu: goto label_1bc31c;
        case 0x1bc330u: goto label_1bc330;
        case 0x1bc33cu: goto label_1bc33c;
        case 0x1bc348u: goto label_1bc348;
        case 0x1bc3dcu: goto label_1bc3dc;
        case 0x1bc3f0u: goto label_1bc3f0;
        case 0x1bc3fcu: goto label_1bc3fc;
        case 0x1bc408u: goto label_1bc408;
        case 0x1bc49cu: goto label_1bc49c;
        case 0x1bc4b0u: goto label_1bc4b0;
        case 0x1bc4bcu: goto label_1bc4bc;
        case 0x1bc4ecu: goto label_1bc4ec;
        case 0x1bc500u: goto label_1bc500;
        case 0x1bc50cu: goto label_1bc50c;
        case 0x1bc53cu: goto label_1bc53c;
        case 0x1bc564u: goto label_1bc564;
        case 0x1bc58cu: goto label_1bc58c;
        case 0x1bc5b4u: goto label_1bc5b4;
        case 0x1bc5dcu: goto label_1bc5dc;
        case 0x1bc604u: goto label_1bc604;
        case 0x1bc62cu: goto label_1bc62c;
        case 0x1bc654u: goto label_1bc654;
        case 0x1bc67cu: goto label_1bc67c;
        case 0x1bc6a4u: goto label_1bc6a4;
        case 0x1bc6ccu: goto label_1bc6cc;
        case 0x1bc708u: goto label_1bc708;
        case 0x1bc714u: goto label_1bc714;
        case 0x1bc750u: goto label_1bc750;
        case 0x1bc764u: goto label_1bc764;
        case 0x1bc770u: goto label_1bc770;
        case 0x1bc7a0u: goto label_1bc7a0;
        case 0x1bc7b4u: goto label_1bc7b4;
        case 0x1bc7c0u: goto label_1bc7c0;
        case 0x1bc7f4u: goto label_1bc7f4;
        case 0x1bc808u: goto label_1bc808;
        case 0x1bc814u: goto label_1bc814;
        case 0x1bc848u: goto label_1bc848;
        case 0x1bc85cu: goto label_1bc85c;
        case 0x1bc868u: goto label_1bc868;
        case 0x1bc89cu: goto label_1bc89c;
        case 0x1bc8b0u: goto label_1bc8b0;
        case 0x1bc8bcu: goto label_1bc8bc;
        case 0x1bc8ecu: goto label_1bc8ec;
        case 0x1bc900u: goto label_1bc900;
        case 0x1bc90cu: goto label_1bc90c;
        case 0x1bc918u: goto label_1bc918;
        case 0x1bc9acu: goto label_1bc9ac;
        case 0x1bc9c0u: goto label_1bc9c0;
        case 0x1bc9ccu: goto label_1bc9cc;
        case 0x1bc9d8u: goto label_1bc9d8;
        default: break;
    }

    ctx->pc = 0x1bc210u;

    // 0x1bc210: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1bc210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1bc214: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1bc214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1bc218: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1bc218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1bc21c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1bc21cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1bc220: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1bc220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1bc224: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1bc224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1bc228: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1bc228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1bc22c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1bc22cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1bc230: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1bc230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1bc234: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1bc234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1bc238: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x1bc238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x1bc23c: 0x24520054  addiu       $s2, $v0, 0x54
    ctx->pc = 0x1bc23cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 84));
    // 0x1bc240: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1bc240u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc244: 0x10000200  b           . + 4 + (0x200 << 2)
    ctx->pc = 0x1BC244u;
    {
        const bool branch_taken_0x1bc244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc244) {
            ctx->pc = 0x1BCA48u;
            goto label_1bca48;
        }
    }
    ctx->pc = 0x1BC24Cu;
label_1bc24c:
    // 0x1bc24c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1bc24cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1bc250: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x1bc250u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x1bc254: 0x244273e0  addiu       $v0, $v0, 0x73E0
    ctx->pc = 0x1bc254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29664));
    // 0x1bc258: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bc258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bc25c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1bc25cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1bc260: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1bc260u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bc264: 0xc040304  jal         func_100C10
    ctx->pc = 0x1BC264u;
    SET_GPR_U32(ctx, 31, 0x1BC26Cu);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x1BC264u, 0x1BC26Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC26Cu;
label_1bc26c:
    // 0x1bc26c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bc26cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc270: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x1bc270u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1bc274: 0xc05c618  jal         func_171860
    ctx->pc = 0x1BC274u;
    SET_GPR_U32(ctx, 31, 0x1BC27Cu);
    ctx->pc = 0x171860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171860u, 0x1BC274u, 0x1BC27Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC27Cu;
label_1bc27c:
    // 0x1bc27c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1bc27cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc280: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1bc280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1bc284: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1bc284u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1bc288: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x1BC288u;
    SET_GPR_U32(ctx, 31, 0x1BC290u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x1BC288u, 0x1BC290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC290u;
label_1bc290:
    // 0x1bc290: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1bc290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1bc294: 0x122201eb  beq         $s1, $v0, . + 4 + (0x1EB << 2)
    ctx->pc = 0x1BC294u;
    {
        const bool branch_taken_0x1bc294 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x1bc294) {
            ctx->pc = 0x1BCA44u;
            goto label_1bca44;
        }
    }
    ctx->pc = 0x1BC29Cu;
    // 0x1bc29c: 0x26310003  addiu       $s1, $s1, 0x3
    ctx->pc = 0x1bc29cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 3));
    // 0x1bc2a0: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1bc2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1bc2a4: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x1bc2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x1bc2a8: 0x244273e0  addiu       $v0, $v0, 0x73E0
    ctx->pc = 0x1bc2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29664));
    // 0x1bc2ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bc2acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bc2b0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1bc2b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bc2b4: 0x27859558  addiu       $a1, $gp, -0x6AA8
    ctx->pc = 0x1bc2b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939992));
    // 0x1bc2b8: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x1BC2B8u;
    SET_GPR_U32(ctx, 31, 0x1BC2C0u);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x1BC2B8u, 0x1BC2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC2C0u;
label_1bc2c0:
    // 0x1bc2c0: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1BC2C0u;
    {
        const bool branch_taken_0x1bc2c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bc2c0) {
            ctx->pc = 0x1BC2FCu;
            goto label_1bc2fc;
        }
    }
    ctx->pc = 0x1BC2C8u;
    // 0x1bc2c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bc2c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc2cc: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1BC2CCu;
    SET_GPR_U32(ctx, 31, 0x1BC2D4u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1BC2CCu, 0x1BC2D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC2D4u;
label_1bc2d4:
    // 0x1bc2d4: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x1bc2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1bc2d8: 0xc0ba898  jal         func_2EA260
    ctx->pc = 0x1BC2D8u;
    SET_GPR_U32(ctx, 31, 0x1BC2E0u);
    ctx->pc = 0x2EA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA260u, 0x1BC2D8u, 0x1BC2E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC2E0u;
label_1bc2e0:
    // 0x1bc2e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1bc2e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc2e4: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x1BC2E4u;
    SET_GPR_U32(ctx, 31, 0x1BC2ECu);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x1BC2E4u, 0x1BC2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC2ECu;
label_1bc2ec:
    // 0x1bc2ec: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1bc2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x1bc2f0: 0xe440be50  swc1        $f0, -0x41B0($v0)
    ctx->pc = 0x1bc2f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x60BE50u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60BE50u, _value); } while (0); }
    // 0x1bc2f4: 0x100001d3  b           . + 4 + (0x1D3 << 2)
    ctx->pc = 0x1BC2F4u;
    {
        const bool branch_taken_0x1bc2f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc2f4) {
            ctx->pc = 0x1BCA44u;
            goto label_1bca44;
        }
    }
    ctx->pc = 0x1BC2FCu;
label_1bc2fc:
    // 0x1bc2fc: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1bc2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1bc300: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x1bc300u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x1bc304: 0x244273e0  addiu       $v0, $v0, 0x73E0
    ctx->pc = 0x1bc304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29664));
    // 0x1bc308: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bc308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bc30c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1bc30cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bc310: 0x27859560  addiu       $a1, $gp, -0x6AA0
    ctx->pc = 0x1bc310u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940000));
    // 0x1bc314: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x1BC314u;
    SET_GPR_U32(ctx, 31, 0x1BC31Cu);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x1BC314u, 0x1BC31Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC31Cu;
label_1bc31c:
    // 0x1bc31c: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x1BC31Cu;
    {
        const bool branch_taken_0x1bc31c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bc31c) {
            ctx->pc = 0x1BC3BCu;
            goto label_1bc3bc;
        }
    }
    ctx->pc = 0x1BC324u;
    // 0x1bc324: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bc324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc328: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1BC328u;
    SET_GPR_U32(ctx, 31, 0x1BC330u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1BC328u, 0x1BC330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC330u;
label_1bc330:
    // 0x1bc330: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x1bc330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1bc334: 0xc0ba898  jal         func_2EA260
    ctx->pc = 0x1BC334u;
    SET_GPR_U32(ctx, 31, 0x1BC33Cu);
    ctx->pc = 0x2EA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA260u, 0x1BC334u, 0x1BC33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC33Cu;
label_1bc33c:
    // 0x1bc33c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1bc33cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc340: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x1BC340u;
    SET_GPR_U32(ctx, 31, 0x1BC348u);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x1BC340u, 0x1BC348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC348u;
label_1bc348:
    // 0x1bc348: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1bc348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x1bc34c: 0xe440be68  swc1        $f0, -0x4198($v0)
    ctx->pc = 0x1bc34cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x60BE68u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60BE68u, _value); } while (0); }
    // 0x1bc350: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x1bc350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x1bc354: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1bc354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1bc358: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BC358u;
    {
        const bool branch_taken_0x1bc358 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1bc358) {
            ctx->pc = 0x1BC374u;
            goto label_1bc374;
        }
    }
    ctx->pc = 0x1BC360u;
    // 0x1bc360: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bc360u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bc364: 0x0  nop
    ctx->pc = 0x1bc364u;
    // NOP
    // 0x1bc368: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1bc368u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1bc36c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1BC36Cu;
    {
        const bool branch_taken_0x1bc36c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc36c) {
            ctx->pc = 0x1BC390u;
            goto label_1bc390;
        }
    }
    ctx->pc = 0x1BC374u;
label_1bc374:
    // 0x1bc374: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1bc374u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1bc378: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1bc378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1bc37c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1bc37cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1bc380: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1bc380u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bc384: 0x0  nop
    ctx->pc = 0x1bc384u;
    // NOP
    // 0x1bc388: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1bc388u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1bc38c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1bc38cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1bc390:
    // 0x1bc390: 0x3c024420  lui         $v0, 0x4420
    ctx->pc = 0x1bc390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17440 << 16));
    // 0x1bc394: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bc394u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bc398: 0x0  nop
    ctx->pc = 0x1bc398u;
    // NOP
    // 0x1bc39c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1bc39cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1bc3a0: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1bc3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x1bc3a4: 0xc440be68  lwc1        $f0, -0x4198($v0)
    ctx->pc = 0x1bc3a4u;
    { uint32_t bits = FAST_READ32(0x60BE68u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bc3a8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1bc3a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1bc3ac: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1bc3acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x1bc3b0: 0xe440be68  swc1        $f0, -0x4198($v0)
    ctx->pc = 0x1bc3b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x60BE68u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60BE68u, _value); } while (0); }
    // 0x1bc3b4: 0x100001a3  b           . + 4 + (0x1A3 << 2)
    ctx->pc = 0x1BC3B4u;
    {
        const bool branch_taken_0x1bc3b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc3b4) {
            ctx->pc = 0x1BCA44u;
            goto label_1bca44;
        }
    }
    ctx->pc = 0x1BC3BCu;
label_1bc3bc:
    // 0x1bc3bc: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1bc3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1bc3c0: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x1bc3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x1bc3c4: 0x244273e0  addiu       $v0, $v0, 0x73E0
    ctx->pc = 0x1bc3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29664));
    // 0x1bc3c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bc3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bc3cc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1bc3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bc3d0: 0x2785955c  addiu       $a1, $gp, -0x6AA4
    ctx->pc = 0x1bc3d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939996));
    // 0x1bc3d4: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x1BC3D4u;
    SET_GPR_U32(ctx, 31, 0x1BC3DCu);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x1BC3D4u, 0x1BC3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC3DCu;
label_1bc3dc:
    // 0x1bc3dc: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x1BC3DCu;
    {
        const bool branch_taken_0x1bc3dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bc3dc) {
            ctx->pc = 0x1BC47Cu;
            goto label_1bc47c;
        }
    }
    ctx->pc = 0x1BC3E4u;
    // 0x1bc3e4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bc3e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc3e8: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1BC3E8u;
    SET_GPR_U32(ctx, 31, 0x1BC3F0u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1BC3E8u, 0x1BC3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC3F0u;
label_1bc3f0:
    // 0x1bc3f0: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x1bc3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1bc3f4: 0xc0ba898  jal         func_2EA260
    ctx->pc = 0x1BC3F4u;
    SET_GPR_U32(ctx, 31, 0x1BC3FCu);
    ctx->pc = 0x2EA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA260u, 0x1BC3F4u, 0x1BC3FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC3FCu;
label_1bc3fc:
    // 0x1bc3fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1bc3fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc400: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x1BC400u;
    SET_GPR_U32(ctx, 31, 0x1BC408u);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x1BC400u, 0x1BC408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC408u;
label_1bc408:
    // 0x1bc408: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1bc408u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x1bc40c: 0xe440be6c  swc1        $f0, -0x4194($v0)
    ctx->pc = 0x1bc40cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x60BE6Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60BE6Cu, _value); } while (0); }
    // 0x1bc410: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x1bc410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x1bc414: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x1bc414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1bc418: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BC418u;
    {
        const bool branch_taken_0x1bc418 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1bc418) {
            ctx->pc = 0x1BC434u;
            goto label_1bc434;
        }
    }
    ctx->pc = 0x1BC420u;
    // 0x1bc420: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bc420u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bc424: 0x0  nop
    ctx->pc = 0x1bc424u;
    // NOP
    // 0x1bc428: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1bc428u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1bc42c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1BC42Cu;
    {
        const bool branch_taken_0x1bc42c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc42c) {
            ctx->pc = 0x1BC450u;
            goto label_1bc450;
        }
    }
    ctx->pc = 0x1BC434u;
label_1bc434:
    // 0x1bc434: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1bc434u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1bc438: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1bc438u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1bc43c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1bc43cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1bc440: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1bc440u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bc444: 0x0  nop
    ctx->pc = 0x1bc444u;
    // NOP
    // 0x1bc448: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1bc448u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1bc44c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1bc44cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1bc450:
    // 0x1bc450: 0x3c0243e0  lui         $v0, 0x43E0
    ctx->pc = 0x1bc450u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17376 << 16));
    // 0x1bc454: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bc454u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bc458: 0x0  nop
    ctx->pc = 0x1bc458u;
    // NOP
    // 0x1bc45c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1bc45cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1bc460: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1bc460u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x1bc464: 0xc440be6c  lwc1        $f0, -0x4194($v0)
    ctx->pc = 0x1bc464u;
    { uint32_t bits = FAST_READ32(0x60BE6Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bc468: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1bc468u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1bc46c: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1bc46cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x1bc470: 0xe440be6c  swc1        $f0, -0x4194($v0)
    ctx->pc = 0x1bc470u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x60BE6Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60BE6Cu, _value); } while (0); }
    // 0x1bc474: 0x10000173  b           . + 4 + (0x173 << 2)
    ctx->pc = 0x1BC474u;
    {
        const bool branch_taken_0x1bc474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc474) {
            ctx->pc = 0x1BCA44u;
            goto label_1bca44;
        }
    }
    ctx->pc = 0x1BC47Cu;
label_1bc47c:
    // 0x1bc47c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1bc47cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1bc480: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x1bc480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x1bc484: 0x244273e0  addiu       $v0, $v0, 0x73E0
    ctx->pc = 0x1bc484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29664));
    // 0x1bc488: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bc488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bc48c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1bc48cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bc490: 0x27859564  addiu       $a1, $gp, -0x6A9C
    ctx->pc = 0x1bc490u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940004));
    // 0x1bc494: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x1BC494u;
    SET_GPR_U32(ctx, 31, 0x1BC49Cu);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x1BC494u, 0x1BC49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC49Cu;
label_1bc49c:
    // 0x1bc49c: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1BC49Cu;
    {
        const bool branch_taken_0x1bc49c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bc49c) {
            ctx->pc = 0x1BC4CCu;
            goto label_1bc4cc;
        }
    }
    ctx->pc = 0x1BC4A4u;
    // 0x1bc4a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bc4a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc4a8: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1BC4A8u;
    SET_GPR_U32(ctx, 31, 0x1BC4B0u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1BC4A8u, 0x1BC4B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC4B0u;
label_1bc4b0:
    // 0x1bc4b0: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x1bc4b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1bc4b4: 0xc0ba89e  jal         func_2EA278
    ctx->pc = 0x1BC4B4u;
    SET_GPR_U32(ctx, 31, 0x1BC4BCu);
    ctx->pc = 0x2EA278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA278u, 0x1BC4B4u, 0x1BC4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC4BCu;
label_1bc4bc:
    // 0x1bc4bc: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x1bc4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x1bc4c0: 0xac62be58  sw          $v0, -0x41A8($v1)
    ctx->pc = 0x1bc4c0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x60BE58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60BE58u, _value); } while (0);
    // 0x1bc4c4: 0x1000015f  b           . + 4 + (0x15F << 2)
    ctx->pc = 0x1BC4C4u;
    {
        const bool branch_taken_0x1bc4c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc4c4) {
            ctx->pc = 0x1BCA44u;
            goto label_1bca44;
        }
    }
    ctx->pc = 0x1BC4CCu;
label_1bc4cc:
    // 0x1bc4cc: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1bc4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1bc4d0: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x1bc4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x1bc4d4: 0x244273e0  addiu       $v0, $v0, 0x73E0
    ctx->pc = 0x1bc4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29664));
    // 0x1bc4d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bc4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bc4dc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1bc4dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bc4e0: 0x27859568  addiu       $a1, $gp, -0x6A98
    ctx->pc = 0x1bc4e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940008));
    // 0x1bc4e4: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x1BC4E4u;
    SET_GPR_U32(ctx, 31, 0x1BC4ECu);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x1BC4E4u, 0x1BC4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC4ECu;
label_1bc4ec:
    // 0x1bc4ec: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1BC4ECu;
    {
        const bool branch_taken_0x1bc4ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bc4ec) {
            ctx->pc = 0x1BC51Cu;
            goto label_1bc51c;
        }
    }
    ctx->pc = 0x1BC4F4u;
    // 0x1bc4f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bc4f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc4f8: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1BC4F8u;
    SET_GPR_U32(ctx, 31, 0x1BC500u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1BC4F8u, 0x1BC500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC500u;
label_1bc500:
    // 0x1bc500: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x1bc500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1bc504: 0xc0ba89e  jal         func_2EA278
    ctx->pc = 0x1BC504u;
    SET_GPR_U32(ctx, 31, 0x1BC50Cu);
    ctx->pc = 0x2EA278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA278u, 0x1BC504u, 0x1BC50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC50Cu;
label_1bc50c:
    // 0x1bc50c: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x1bc50cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x1bc510: 0xac62be5c  sw          $v0, -0x41A4($v1)
    ctx->pc = 0x1bc510u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x60BE5Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60BE5Cu, _value); } while (0);
    // 0x1bc514: 0x1000014b  b           . + 4 + (0x14B << 2)
    ctx->pc = 0x1BC514u;
    {
        const bool branch_taken_0x1bc514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc514) {
            ctx->pc = 0x1BCA44u;
            goto label_1bca44;
        }
    }
    ctx->pc = 0x1BC51Cu;
label_1bc51c:
    // 0x1bc51c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1bc51cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1bc520: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x1bc520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x1bc524: 0x244273e0  addiu       $v0, $v0, 0x73E0
    ctx->pc = 0x1bc524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29664));
    // 0x1bc528: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bc528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bc52c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1bc52cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bc530: 0x27859588  addiu       $a1, $gp, -0x6A78
    ctx->pc = 0x1bc530u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940040));
    // 0x1bc534: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x1BC534u;
    SET_GPR_U32(ctx, 31, 0x1BC53Cu);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x1BC534u, 0x1BC53Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC53Cu;
label_1bc53c:
    // 0x1bc53c: 0x10400065  beqz        $v0, . + 4 + (0x65 << 2)
    ctx->pc = 0x1BC53Cu;
    {
        const bool branch_taken_0x1bc53c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc53c) {
            ctx->pc = 0x1BC6D4u;
            goto label_1bc6d4;
        }
    }
    ctx->pc = 0x1BC544u;
    // 0x1bc544: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1bc544u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1bc548: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x1bc548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x1bc54c: 0x244273e0  addiu       $v0, $v0, 0x73E0
    ctx->pc = 0x1bc54cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29664));
    // 0x1bc550: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bc550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bc554: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1bc554u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bc558: 0x2785958c  addiu       $a1, $gp, -0x6A74
    ctx->pc = 0x1bc558u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940044));
    // 0x1bc55c: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x1BC55Cu;
    SET_GPR_U32(ctx, 31, 0x1BC564u);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x1BC55Cu, 0x1BC564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC564u;
label_1bc564:
    // 0x1bc564: 0x1040005b  beqz        $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x1BC564u;
    {
        const bool branch_taken_0x1bc564 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc564) {
            ctx->pc = 0x1BC6D4u;
            goto label_1bc6d4;
        }
    }
    ctx->pc = 0x1BC56Cu;
    // 0x1bc56c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1bc56cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1bc570: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x1bc570u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x1bc574: 0x244273e0  addiu       $v0, $v0, 0x73E0
    ctx->pc = 0x1bc574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29664));
    // 0x1bc578: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bc578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bc57c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1bc57cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bc580: 0x27859590  addiu       $a1, $gp, -0x6A70
    ctx->pc = 0x1bc580u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940048));
    // 0x1bc584: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x1BC584u;
    SET_GPR_U32(ctx, 31, 0x1BC58Cu);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x1BC584u, 0x1BC58Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC58Cu;
label_1bc58c:
    // 0x1bc58c: 0x10400051  beqz        $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x1BC58Cu;
    {
        const bool branch_taken_0x1bc58c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc58c) {
            ctx->pc = 0x1BC6D4u;
            goto label_1bc6d4;
        }
    }
    ctx->pc = 0x1BC594u;
    // 0x1bc594: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1bc594u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1bc598: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x1bc598u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x1bc59c: 0x244273e0  addiu       $v0, $v0, 0x73E0
    ctx->pc = 0x1bc59cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29664));
    // 0x1bc5a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bc5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bc5a4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1bc5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bc5a8: 0x27859594  addiu       $a1, $gp, -0x6A6C
    ctx->pc = 0x1bc5a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940052));
    // 0x1bc5ac: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x1BC5ACu;
    SET_GPR_U32(ctx, 31, 0x1BC5B4u);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x1BC5ACu, 0x1BC5B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC5B4u;
label_1bc5b4:
    // 0x1bc5b4: 0x10400047  beqz        $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x1BC5B4u;
    {
        const bool branch_taken_0x1bc5b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc5b4) {
            ctx->pc = 0x1BC6D4u;
            goto label_1bc6d4;
        }
    }
    ctx->pc = 0x1BC5BCu;
    // 0x1bc5bc: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1bc5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1bc5c0: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x1bc5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x1bc5c4: 0x244273e0  addiu       $v0, $v0, 0x73E0
    ctx->pc = 0x1bc5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29664));
    // 0x1bc5c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bc5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bc5cc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1bc5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bc5d0: 0x27859598  addiu       $a1, $gp, -0x6A68
    ctx->pc = 0x1bc5d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940056));
    // 0x1bc5d4: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x1BC5D4u;
    SET_GPR_U32(ctx, 31, 0x1BC5DCu);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x1BC5D4u, 0x1BC5DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC5DCu;
label_1bc5dc:
    // 0x1bc5dc: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x1BC5DCu;
    {
        const bool branch_taken_0x1bc5dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc5dc) {
            ctx->pc = 0x1BC6D4u;
            goto label_1bc6d4;
        }
    }
    ctx->pc = 0x1BC5E4u;
    // 0x1bc5e4: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1bc5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1bc5e8: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x1bc5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x1bc5ec: 0x244273e0  addiu       $v0, $v0, 0x73E0
    ctx->pc = 0x1bc5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29664));
    // 0x1bc5f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bc5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bc5f4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1bc5f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bc5f8: 0x2785959c  addiu       $a1, $gp, -0x6A64
    ctx->pc = 0x1bc5f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940060));
    // 0x1bc5fc: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x1BC5FCu;
    SET_GPR_U32(ctx, 31, 0x1BC604u);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x1BC5FCu, 0x1BC604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC604u;
label_1bc604:
    // 0x1bc604: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x1BC604u;
    {
        const bool branch_taken_0x1bc604 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc604) {
            ctx->pc = 0x1BC6D4u;
            goto label_1bc6d4;
        }
    }
    ctx->pc = 0x1BC60Cu;
    // 0x1bc60c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1bc60cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1bc610: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x1bc610u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x1bc614: 0x244273e0  addiu       $v0, $v0, 0x73E0
    ctx->pc = 0x1bc614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29664));
    // 0x1bc618: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bc618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bc61c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1bc61cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bc620: 0x278595a0  addiu       $a1, $gp, -0x6A60
    ctx->pc = 0x1bc620u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940064));
    // 0x1bc624: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x1BC624u;
    SET_GPR_U32(ctx, 31, 0x1BC62Cu);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x1BC624u, 0x1BC62Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC62Cu;
label_1bc62c:
    // 0x1bc62c: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x1BC62Cu;
    {
        const bool branch_taken_0x1bc62c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc62c) {
            ctx->pc = 0x1BC6D4u;
            goto label_1bc6d4;
        }
    }
    ctx->pc = 0x1BC634u;
    // 0x1bc634: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1bc634u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1bc638: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x1bc638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x1bc63c: 0x244273e0  addiu       $v0, $v0, 0x73E0
    ctx->pc = 0x1bc63cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29664));
    // 0x1bc640: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bc640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bc644: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1bc644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bc648: 0x278595a4  addiu       $a1, $gp, -0x6A5C
    ctx->pc = 0x1bc648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940068));
    // 0x1bc64c: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x1BC64Cu;
    SET_GPR_U32(ctx, 31, 0x1BC654u);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x1BC64Cu, 0x1BC654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC654u;
label_1bc654:
    // 0x1bc654: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1BC654u;
    {
        const bool branch_taken_0x1bc654 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc654) {
            ctx->pc = 0x1BC6D4u;
            goto label_1bc6d4;
        }
    }
    ctx->pc = 0x1BC65Cu;
    // 0x1bc65c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1bc65cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1bc660: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x1bc660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x1bc664: 0x244273e0  addiu       $v0, $v0, 0x73E0
    ctx->pc = 0x1bc664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29664));
    // 0x1bc668: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bc668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bc66c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1bc66cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bc670: 0x278595a8  addiu       $a1, $gp, -0x6A58
    ctx->pc = 0x1bc670u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940072));
    // 0x1bc674: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x1BC674u;
    SET_GPR_U32(ctx, 31, 0x1BC67Cu);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x1BC674u, 0x1BC67Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC67Cu;
label_1bc67c:
    // 0x1bc67c: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1BC67Cu;
    {
        const bool branch_taken_0x1bc67c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc67c) {
            ctx->pc = 0x1BC6D4u;
            goto label_1bc6d4;
        }
    }
    ctx->pc = 0x1BC684u;
    // 0x1bc684: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1bc684u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1bc688: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x1bc688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x1bc68c: 0x244273e0  addiu       $v0, $v0, 0x73E0
    ctx->pc = 0x1bc68cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29664));
    // 0x1bc690: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bc690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bc694: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1bc694u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bc698: 0x278595ac  addiu       $a1, $gp, -0x6A54
    ctx->pc = 0x1bc698u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940076));
    // 0x1bc69c: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x1BC69Cu;
    SET_GPR_U32(ctx, 31, 0x1BC6A4u);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x1BC69Cu, 0x1BC6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC6A4u;
label_1bc6a4:
    // 0x1bc6a4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1BC6A4u;
    {
        const bool branch_taken_0x1bc6a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc6a4) {
            ctx->pc = 0x1BC6D4u;
            goto label_1bc6d4;
        }
    }
    ctx->pc = 0x1BC6ACu;
    // 0x1bc6ac: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1bc6acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1bc6b0: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x1bc6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x1bc6b4: 0x244273e0  addiu       $v0, $v0, 0x73E0
    ctx->pc = 0x1bc6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29664));
    // 0x1bc6b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bc6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bc6bc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1bc6bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bc6c0: 0x278595c0  addiu       $a1, $gp, -0x6A40
    ctx->pc = 0x1bc6c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940096));
    // 0x1bc6c4: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x1BC6C4u;
    SET_GPR_U32(ctx, 31, 0x1BC6CCu);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x1BC6C4u, 0x1BC6CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC6CCu;
label_1bc6cc:
    // 0x1bc6cc: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1BC6CCu;
    {
        const bool branch_taken_0x1bc6cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bc6cc) {
            ctx->pc = 0x1BC730u;
            goto label_1bc730;
        }
    }
    ctx->pc = 0x1BC6D4u;
label_1bc6d4:
    // 0x1bc6d4: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1bc6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1bc6d8: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x1bc6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x1bc6dc: 0x244273e0  addiu       $v0, $v0, 0x73E0
    ctx->pc = 0x1bc6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29664));
    // 0x1bc6e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bc6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bc6e4: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x1bc6e4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bc6e8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1bc6e8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1bc6ec: 0x82620000  lb          $v0, 0x0($s3)
    ctx->pc = 0x1bc6ecu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1bc6f0: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x1bc6f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1bc6f4: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x1bc6f4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x1bc6f8: 0x2457ffd0  addiu       $s7, $v0, -0x30
    ctx->pc = 0x1bc6f8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
    // 0x1bc6fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bc6fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc700: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1BC700u;
    SET_GPR_U32(ctx, 31, 0x1BC708u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1BC700u, 0x1BC708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC708u;
label_1bc708:
    // 0x1bc708: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x1bc708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1bc70c: 0xc0ba89e  jal         func_2EA278
    ctx->pc = 0x1BC70Cu;
    SET_GPR_U32(ctx, 31, 0x1BC714u);
    ctx->pc = 0x2EA278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA278u, 0x1BC70Cu, 0x1BC714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC714u;
label_1bc714:
    // 0x1bc714: 0x172080  sll         $a0, $s7, 2
    ctx->pc = 0x1bc714u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
    // 0x1bc718: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x1bc718u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x1bc71c: 0x2463be50  addiu       $v1, $v1, -0x41B0
    ctx->pc = 0x1bc71cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950480));
    // 0x1bc720: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1bc720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1bc724: 0xac620034  sw          $v0, 0x34($v1)
    ctx->pc = 0x1bc724u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 2));
    // 0x1bc728: 0x100000c6  b           . + 4 + (0xC6 << 2)
    ctx->pc = 0x1BC728u;
    {
        const bool branch_taken_0x1bc728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc728) {
            ctx->pc = 0x1BCA44u;
            goto label_1bca44;
        }
    }
    ctx->pc = 0x1BC730u;
label_1bc730:
    // 0x1bc730: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1bc730u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1bc734: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x1bc734u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x1bc738: 0x244273e0  addiu       $v0, $v0, 0x73E0
    ctx->pc = 0x1bc738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29664));
    // 0x1bc73c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bc73cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bc740: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1bc740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bc744: 0x2785956c  addiu       $a1, $gp, -0x6A94
    ctx->pc = 0x1bc744u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940012));
    // 0x1bc748: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x1BC748u;
    SET_GPR_U32(ctx, 31, 0x1BC750u);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x1BC748u, 0x1BC750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC750u;
label_1bc750:
    // 0x1bc750: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1BC750u;
    {
        const bool branch_taken_0x1bc750 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bc750) {
            ctx->pc = 0x1BC780u;
            goto label_1bc780;
        }
    }
    ctx->pc = 0x1BC758u;
    // 0x1bc758: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bc758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc75c: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1BC75Cu;
    SET_GPR_U32(ctx, 31, 0x1BC764u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1BC75Cu, 0x1BC764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC764u;
label_1bc764:
    // 0x1bc764: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x1bc764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1bc768: 0xc0ba89e  jal         func_2EA278
    ctx->pc = 0x1BC768u;
    SET_GPR_U32(ctx, 31, 0x1BC770u);
    ctx->pc = 0x2EA278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA278u, 0x1BC768u, 0x1BC770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC770u;
label_1bc770:
    // 0x1bc770: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x1bc770u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x1bc774: 0xac62be54  sw          $v0, -0x41AC($v1)
    ctx->pc = 0x1bc774u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x60BE54u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60BE54u, _value); } while (0);
    // 0x1bc778: 0x100000b2  b           . + 4 + (0xB2 << 2)
    ctx->pc = 0x1BC778u;
    {
        const bool branch_taken_0x1bc778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc778) {
            ctx->pc = 0x1BCA44u;
            goto label_1bca44;
        }
    }
    ctx->pc = 0x1BC780u;
label_1bc780:
    // 0x1bc780: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1bc780u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1bc784: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x1bc784u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x1bc788: 0x244273e0  addiu       $v0, $v0, 0x73E0
    ctx->pc = 0x1bc788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29664));
    // 0x1bc78c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bc78cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bc790: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1bc790u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bc794: 0x27859584  addiu       $a1, $gp, -0x6A7C
    ctx->pc = 0x1bc794u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940036));
    // 0x1bc798: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x1BC798u;
    SET_GPR_U32(ctx, 31, 0x1BC7A0u);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x1BC798u, 0x1BC7A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC7A0u;
label_1bc7a0:
    // 0x1bc7a0: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1BC7A0u;
    {
        const bool branch_taken_0x1bc7a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bc7a0) {
            ctx->pc = 0x1BC7D4u;
            goto label_1bc7d4;
        }
    }
    ctx->pc = 0x1BC7A8u;
    // 0x1bc7a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bc7a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc7ac: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1BC7ACu;
    SET_GPR_U32(ctx, 31, 0x1BC7B4u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1BC7ACu, 0x1BC7B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC7B4u;
label_1bc7b4:
    // 0x1bc7b4: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x1bc7b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1bc7b8: 0xc0ba89e  jal         func_2EA278
    ctx->pc = 0x1BC7B8u;
    SET_GPR_U32(ctx, 31, 0x1BC7C0u);
    ctx->pc = 0x2EA278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA278u, 0x1BC7B8u, 0x1BC7C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC7C0u;
label_1bc7c0:
    // 0x1bc7c0: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1bc7c0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc7c4: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1bc7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x1bc7c8: 0xac56bef0  sw          $s6, -0x4110($v0)
    ctx->pc = 0x1bc7c8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 22)); ps2TraceGuestWrite(rdram, 0x60BEF0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60BEF0u, _value); } while (0);
    // 0x1bc7cc: 0x1000009d  b           . + 4 + (0x9D << 2)
    ctx->pc = 0x1BC7CCu;
    {
        const bool branch_taken_0x1bc7cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc7cc) {
            ctx->pc = 0x1BCA44u;
            goto label_1bca44;
        }
    }
    ctx->pc = 0x1BC7D4u;
label_1bc7d4:
    // 0x1bc7d4: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1bc7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1bc7d8: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x1bc7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x1bc7dc: 0x244273e0  addiu       $v0, $v0, 0x73E0
    ctx->pc = 0x1bc7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29664));
    // 0x1bc7e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bc7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bc7e4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1bc7e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bc7e8: 0x27859570  addiu       $a1, $gp, -0x6A90
    ctx->pc = 0x1bc7e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940016));
    // 0x1bc7ec: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x1BC7ECu;
    SET_GPR_U32(ctx, 31, 0x1BC7F4u);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x1BC7ECu, 0x1BC7F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC7F4u;
label_1bc7f4:
    // 0x1bc7f4: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1BC7F4u;
    {
        const bool branch_taken_0x1bc7f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bc7f4) {
            ctx->pc = 0x1BC828u;
            goto label_1bc828;
        }
    }
    ctx->pc = 0x1BC7FCu;
    // 0x1bc7fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bc7fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc800: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1BC800u;
    SET_GPR_U32(ctx, 31, 0x1BC808u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1BC800u, 0x1BC808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC808u;
label_1bc808:
    // 0x1bc808: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x1bc808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1bc80c: 0xc0ba89e  jal         func_2EA278
    ctx->pc = 0x1BC80Cu;
    SET_GPR_U32(ctx, 31, 0x1BC814u);
    ctx->pc = 0x2EA278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA278u, 0x1BC80Cu, 0x1BC814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC814u;
label_1bc814:
    // 0x1bc814: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1bc814u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc818: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1bc818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x1bc81c: 0xac55bef4  sw          $s5, -0x410C($v0)
    ctx->pc = 0x1bc81cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 21)); ps2TraceGuestWrite(rdram, 0x60BEF4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60BEF4u, _value); } while (0);
    // 0x1bc820: 0x10000088  b           . + 4 + (0x88 << 2)
    ctx->pc = 0x1BC820u;
    {
        const bool branch_taken_0x1bc820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc820) {
            ctx->pc = 0x1BCA44u;
            goto label_1bca44;
        }
    }
    ctx->pc = 0x1BC828u;
label_1bc828:
    // 0x1bc828: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1bc828u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1bc82c: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x1bc82cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x1bc830: 0x244273e0  addiu       $v0, $v0, 0x73E0
    ctx->pc = 0x1bc830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29664));
    // 0x1bc834: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bc834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bc838: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1bc838u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bc83c: 0x27859574  addiu       $a1, $gp, -0x6A8C
    ctx->pc = 0x1bc83cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940020));
    // 0x1bc840: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x1BC840u;
    SET_GPR_U32(ctx, 31, 0x1BC848u);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x1BC840u, 0x1BC848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC848u;
label_1bc848:
    // 0x1bc848: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1BC848u;
    {
        const bool branch_taken_0x1bc848 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bc848) {
            ctx->pc = 0x1BC87Cu;
            goto label_1bc87c;
        }
    }
    ctx->pc = 0x1BC850u;
    // 0x1bc850: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bc850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc854: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1BC854u;
    SET_GPR_U32(ctx, 31, 0x1BC85Cu);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1BC854u, 0x1BC85Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC85Cu;
label_1bc85c:
    // 0x1bc85c: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x1bc85cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1bc860: 0xc0ba89e  jal         func_2EA278
    ctx->pc = 0x1BC860u;
    SET_GPR_U32(ctx, 31, 0x1BC868u);
    ctx->pc = 0x2EA278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA278u, 0x1BC860u, 0x1BC868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC868u;
label_1bc868:
    // 0x1bc868: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1bc868u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc86c: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1bc86cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x1bc870: 0xac54bef8  sw          $s4, -0x4108($v0)
    ctx->pc = 0x1bc870u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 20)); ps2TraceGuestWrite(rdram, 0x60BEF8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60BEF8u, _value); } while (0);
    // 0x1bc874: 0x10000073  b           . + 4 + (0x73 << 2)
    ctx->pc = 0x1BC874u;
    {
        const bool branch_taken_0x1bc874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc874) {
            ctx->pc = 0x1BCA44u;
            goto label_1bca44;
        }
    }
    ctx->pc = 0x1BC87Cu;
label_1bc87c:
    // 0x1bc87c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1bc87cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1bc880: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x1bc880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x1bc884: 0x244273e0  addiu       $v0, $v0, 0x73E0
    ctx->pc = 0x1bc884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29664));
    // 0x1bc888: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bc888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bc88c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1bc88cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bc890: 0x27859578  addiu       $a1, $gp, -0x6A88
    ctx->pc = 0x1bc890u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940024));
    // 0x1bc894: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x1BC894u;
    SET_GPR_U32(ctx, 31, 0x1BC89Cu);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x1BC894u, 0x1BC89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC89Cu;
label_1bc89c:
    // 0x1bc89c: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1BC89Cu;
    {
        const bool branch_taken_0x1bc89c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bc89c) {
            ctx->pc = 0x1BC8CCu;
            goto label_1bc8cc;
        }
    }
    ctx->pc = 0x1BC8A4u;
    // 0x1bc8a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bc8a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc8a8: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1BC8A8u;
    SET_GPR_U32(ctx, 31, 0x1BC8B0u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1BC8A8u, 0x1BC8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC8B0u;
label_1bc8b0:
    // 0x1bc8b0: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x1bc8b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1bc8b4: 0xc0ba89e  jal         func_2EA278
    ctx->pc = 0x1BC8B4u;
    SET_GPR_U32(ctx, 31, 0x1BC8BCu);
    ctx->pc = 0x2EA278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA278u, 0x1BC8B4u, 0x1BC8BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC8BCu;
label_1bc8bc:
    // 0x1bc8bc: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x1bc8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x1bc8c0: 0xac62befc  sw          $v0, -0x4104($v1)
    ctx->pc = 0x1bc8c0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x60BEFCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60BEFCu, _value); } while (0);
    // 0x1bc8c4: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x1BC8C4u;
    {
        const bool branch_taken_0x1bc8c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc8c4) {
            ctx->pc = 0x1BCA44u;
            goto label_1bca44;
        }
    }
    ctx->pc = 0x1BC8CCu;
label_1bc8cc:
    // 0x1bc8cc: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1bc8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1bc8d0: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x1bc8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x1bc8d4: 0x244273e0  addiu       $v0, $v0, 0x73E0
    ctx->pc = 0x1bc8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29664));
    // 0x1bc8d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bc8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bc8dc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1bc8dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bc8e0: 0x2785957c  addiu       $a1, $gp, -0x6A84
    ctx->pc = 0x1bc8e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940028));
    // 0x1bc8e4: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x1BC8E4u;
    SET_GPR_U32(ctx, 31, 0x1BC8ECu);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x1BC8E4u, 0x1BC8ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC8ECu;
label_1bc8ec:
    // 0x1bc8ec: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x1BC8ECu;
    {
        const bool branch_taken_0x1bc8ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bc8ec) {
            ctx->pc = 0x1BC98Cu;
            goto label_1bc98c;
        }
    }
    ctx->pc = 0x1BC8F4u;
    // 0x1bc8f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bc8f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc8f8: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1BC8F8u;
    SET_GPR_U32(ctx, 31, 0x1BC900u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1BC8F8u, 0x1BC900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC900u;
label_1bc900:
    // 0x1bc900: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x1bc900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1bc904: 0xc0ba898  jal         func_2EA260
    ctx->pc = 0x1BC904u;
    SET_GPR_U32(ctx, 31, 0x1BC90Cu);
    ctx->pc = 0x2EA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA260u, 0x1BC904u, 0x1BC90Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC90Cu;
label_1bc90c:
    // 0x1bc90c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1bc90cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc910: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x1BC910u;
    SET_GPR_U32(ctx, 31, 0x1BC918u);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x1BC910u, 0x1BC918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC918u;
label_1bc918:
    // 0x1bc918: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1bc918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x1bc91c: 0xe440be60  swc1        $f0, -0x41A0($v0)
    ctx->pc = 0x1bc91cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x60BE60u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60BE60u, _value); } while (0); }
    // 0x1bc920: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x1bc920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x1bc924: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1bc924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1bc928: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BC928u;
    {
        const bool branch_taken_0x1bc928 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1bc928) {
            ctx->pc = 0x1BC944u;
            goto label_1bc944;
        }
    }
    ctx->pc = 0x1BC930u;
    // 0x1bc930: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bc930u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bc934: 0x0  nop
    ctx->pc = 0x1bc934u;
    // NOP
    // 0x1bc938: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1bc938u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1bc93c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1BC93Cu;
    {
        const bool branch_taken_0x1bc93c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc93c) {
            ctx->pc = 0x1BC960u;
            goto label_1bc960;
        }
    }
    ctx->pc = 0x1BC944u;
label_1bc944:
    // 0x1bc944: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1bc944u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1bc948: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1bc948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1bc94c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1bc94cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1bc950: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1bc950u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bc954: 0x0  nop
    ctx->pc = 0x1bc954u;
    // NOP
    // 0x1bc958: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1bc958u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1bc95c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1bc95cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1bc960:
    // 0x1bc960: 0x3c024420  lui         $v0, 0x4420
    ctx->pc = 0x1bc960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17440 << 16));
    // 0x1bc964: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bc964u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bc968: 0x0  nop
    ctx->pc = 0x1bc968u;
    // NOP
    // 0x1bc96c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1bc96cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1bc970: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1bc970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x1bc974: 0xc440be60  lwc1        $f0, -0x41A0($v0)
    ctx->pc = 0x1bc974u;
    { uint32_t bits = FAST_READ32(0x60BE60u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bc978: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1bc978u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1bc97c: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1bc97cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x1bc980: 0xe440be60  swc1        $f0, -0x41A0($v0)
    ctx->pc = 0x1bc980u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x60BE60u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60BE60u, _value); } while (0); }
    // 0x1bc984: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x1BC984u;
    {
        const bool branch_taken_0x1bc984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc984) {
            ctx->pc = 0x1BCA44u;
            goto label_1bca44;
        }
    }
    ctx->pc = 0x1BC98Cu;
label_1bc98c:
    // 0x1bc98c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1bc98cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1bc990: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x1bc990u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x1bc994: 0x244273e0  addiu       $v0, $v0, 0x73E0
    ctx->pc = 0x1bc994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29664));
    // 0x1bc998: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bc998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bc99c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1bc99cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bc9a0: 0x27859580  addiu       $a1, $gp, -0x6A80
    ctx->pc = 0x1bc9a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940032));
    // 0x1bc9a4: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x1BC9A4u;
    SET_GPR_U32(ctx, 31, 0x1BC9ACu);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x1BC9A4u, 0x1BC9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC9ACu;
label_1bc9ac:
    // 0x1bc9ac: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x1BC9ACu;
    {
        const bool branch_taken_0x1bc9ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bc9ac) {
            ctx->pc = 0x1BCA44u;
            goto label_1bca44;
        }
    }
    ctx->pc = 0x1BC9B4u;
    // 0x1bc9b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bc9b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc9b8: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1BC9B8u;
    SET_GPR_U32(ctx, 31, 0x1BC9C0u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1BC9B8u, 0x1BC9C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC9C0u;
label_1bc9c0:
    // 0x1bc9c0: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x1bc9c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1bc9c4: 0xc0ba898  jal         func_2EA260
    ctx->pc = 0x1BC9C4u;
    SET_GPR_U32(ctx, 31, 0x1BC9CCu);
    ctx->pc = 0x2EA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA260u, 0x1BC9C4u, 0x1BC9CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC9CCu;
label_1bc9cc:
    // 0x1bc9cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1bc9ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc9d0: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x1BC9D0u;
    SET_GPR_U32(ctx, 31, 0x1BC9D8u);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x1BC9D0u, 0x1BC9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC9D8u;
label_1bc9d8:
    // 0x1bc9d8: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1bc9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x1bc9dc: 0xe440be64  swc1        $f0, -0x419C($v0)
    ctx->pc = 0x1bc9dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x60BE64u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60BE64u, _value); } while (0); }
    // 0x1bc9e0: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x1bc9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x1bc9e4: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x1bc9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1bc9e8: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BC9E8u;
    {
        const bool branch_taken_0x1bc9e8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1bc9e8) {
            ctx->pc = 0x1BCA04u;
            goto label_1bca04;
        }
    }
    ctx->pc = 0x1BC9F0u;
    // 0x1bc9f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bc9f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bc9f4: 0x0  nop
    ctx->pc = 0x1bc9f4u;
    // NOP
    // 0x1bc9f8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1bc9f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1bc9fc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1BC9FCu;
    {
        const bool branch_taken_0x1bc9fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc9fc) {
            ctx->pc = 0x1BCA20u;
            goto label_1bca20;
        }
    }
    ctx->pc = 0x1BCA04u;
label_1bca04:
    // 0x1bca04: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1bca04u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1bca08: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1bca08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1bca0c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1bca0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1bca10: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1bca10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bca14: 0x0  nop
    ctx->pc = 0x1bca14u;
    // NOP
    // 0x1bca18: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1bca18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1bca1c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1bca1cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1bca20:
    // 0x1bca20: 0x3c0243e0  lui         $v0, 0x43E0
    ctx->pc = 0x1bca20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17376 << 16));
    // 0x1bca24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bca24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bca28: 0x0  nop
    ctx->pc = 0x1bca28u;
    // NOP
    // 0x1bca2c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1bca2cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1bca30: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1bca30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x1bca34: 0xc440be64  lwc1        $f0, -0x419C($v0)
    ctx->pc = 0x1bca34u;
    { uint32_t bits = FAST_READ32(0x60BE64u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bca38: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1bca38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1bca3c: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1bca3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x1bca40: 0xe440be64  swc1        $f0, -0x419C($v0)
    ctx->pc = 0x1bca40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x60BE64u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60BE64u, _value); } while (0); }
label_1bca44:
    // 0x1bca44: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1bca44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1bca48:
    // 0x1bca48: 0x2e020016  sltiu       $v0, $s0, 0x16
    ctx->pc = 0x1bca48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)22) ? 1 : 0);
    // 0x1bca4c: 0x1440fdff  bnez        $v0, . + 4 + (-0x201 << 2)
    ctx->pc = 0x1BCA4Cu;
    {
        const bool branch_taken_0x1bca4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bca4c) {
            ctx->pc = 0x1BC24Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bc24c;
        }
    }
    ctx->pc = 0x1BCA54u;
    // 0x1bca54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bca54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bca58: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1bca58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1bca5c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1bca5cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1bca60: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1bca60u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1bca64: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1bca64u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1bca68: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1bca68u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1bca6c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1bca6cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bca70: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1bca70u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bca74: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1bca74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bca78: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bca78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bca7c: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x1bca7cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1bca80: 0x3e00008  jr          $ra
    ctx->pc = 0x1BCA80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BCA80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BCA88u;
    // 0x1bca88: 0x0  nop
    ctx->pc = 0x1bca88u;
    // NOP
    // 0x1bca8c: 0x0  nop
    ctx->pc = 0x1bca8cu;
    // NOP
    ctx->pc = 0x1bca90u;
}
