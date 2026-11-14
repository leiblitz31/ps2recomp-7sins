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

// Function: sub_00157EC0
// Address: 0x157ec0 - 0x158250
void sub_00157EC0_0x157ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00157EC0_0x157ec0");
#endif

    switch (ctx->pc) {
        case 0x157f04u: goto label_157f04;
        case 0x157f08u: goto label_157f08;
        case 0x157f20u: goto label_157f20;
        case 0x157f30u: goto label_157f30;
        case 0x157f50u: goto label_157f50;
        case 0x157f68u: goto label_157f68;
        case 0x157f74u: goto label_157f74;
        case 0x157f94u: goto label_157f94;
        case 0x157fa0u: goto label_157fa0;
        case 0x157fb8u: goto label_157fb8;
        case 0x157fc8u: goto label_157fc8;
        case 0x157fd8u: goto label_157fd8;
        case 0x157fe4u: goto label_157fe4;
        case 0x157ffcu: goto label_157ffc;
        case 0x15800cu: goto label_15800c;
        case 0x15801cu: goto label_15801c;
        case 0x158038u: goto label_158038;
        case 0x158054u: goto label_158054;
        case 0x15806cu: goto label_15806c;
        case 0x158100u: goto label_158100;
        case 0x15811cu: goto label_15811c;
        case 0x158134u: goto label_158134;
        case 0x158160u: goto label_158160;
        case 0x158188u: goto label_158188;
        case 0x1581acu: goto label_1581ac;
        case 0x1581bcu: goto label_1581bc;
        case 0x1581dcu: goto label_1581dc;
        case 0x1581fcu: goto label_1581fc;
        case 0x15820cu: goto label_15820c;
        case 0x15821cu: goto label_15821c;
        default: break;
    }

    ctx->pc = 0x157ec0u;

    // 0x157ec0: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x157ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x157ec4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x157ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x157ec8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x157ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x157ecc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x157eccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x157ed0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x157ed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x157ed4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x157ed4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x157ed8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x157ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x157edc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x157edcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x157ee0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x157ee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x157ee4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x157ee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x157ee8: 0xafa400f0  sw          $a0, 0xF0($sp)
    ctx->pc = 0x157ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 4));
    // 0x157eec: 0xafa50100  sw          $a1, 0x100($sp)
    ctx->pc = 0x157eecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 5));
    // 0x157ef0: 0xafa60110  sw          $a2, 0x110($sp)
    ctx->pc = 0x157ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 6));
    // 0x157ef4: 0xafa70120  sw          $a3, 0x120($sp)
    ctx->pc = 0x157ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 7));
    // 0x157ef8: 0x27a400d8  addiu       $a0, $sp, 0xD8
    ctx->pc = 0x157ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x157efc: 0xc056254  jal         func_158950
    ctx->pc = 0x157EFCu;
    SET_GPR_U32(ctx, 31, 0x157F04u);
    ctx->pc = 0x158950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158950u, 0x157EFCu, 0x157F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157F04u;
label_157f04:
    // 0x157f04: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x157f04u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_157f08:
    // 0x157f08: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x157f08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x157f0c: 0x27858dc0  addiu       $a1, $gp, -0x7240
    ctx->pc = 0x157f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938048));
    // 0x157f10: 0x8fa60100  lw          $a2, 0x100($sp)
    ctx->pc = 0x157f10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x157f14: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x157f14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157f18: 0xc0bc3e2  jal         func_2F0F88
    ctx->pc = 0x157F18u;
    SET_GPR_U32(ctx, 31, 0x157F20u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x157F18u, 0x157F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157F20u;
label_157f20:
    // 0x157f20: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x157f20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x157f24: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x157f24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x157f28: 0xc05621c  jal         func_158870
    ctx->pc = 0x157F28u;
    SET_GPR_U32(ctx, 31, 0x157F30u);
    ctx->pc = 0x158870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158870u, 0x157F28u, 0x157F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157F30u;
label_157f30:
    // 0x157f30: 0xafa200ec  sw          $v0, 0xEC($sp)
    ctx->pc = 0x157f30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 2));
    // 0x157f34: 0x8fa200ec  lw          $v0, 0xEC($sp)
    ctx->pc = 0x157f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x157f38: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x157F38u;
    {
        const bool branch_taken_0x157f38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x157f38) {
            ctx->pc = 0x157F5Cu;
            goto label_157f5c;
        }
    }
    ctx->pc = 0x157F40u;
    // 0x157f40: 0x27a400d8  addiu       $a0, $sp, 0xD8
    ctx->pc = 0x157f40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x157f44: 0x27a500ec  addiu       $a1, $sp, 0xEC
    ctx->pc = 0x157f44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 236));
    // 0x157f48: 0xc05614c  jal         func_158530
    ctx->pc = 0x157F48u;
    SET_GPR_U32(ctx, 31, 0x157F50u);
    ctx->pc = 0x158530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158530u, 0x157F48u, 0x157F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157F50u;
label_157f50:
    // 0x157f50: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x157f50u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x157f54: 0x1000ffec  b           . + 4 + (-0x14 << 2)
    ctx->pc = 0x157F54u;
    {
        const bool branch_taken_0x157f54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x157f54) {
            ctx->pc = 0x157F08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_157f08;
        }
    }
    ctx->pc = 0x157F5Cu;
label_157f5c:
    // 0x157f5c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x157f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x157f60: 0xc0495d4  jal         func_125750
    ctx->pc = 0x157F60u;
    SET_GPR_U32(ctx, 31, 0x157F68u);
    ctx->pc = 0x125750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125750u, 0x157F60u, 0x157F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157F68u;
label_157f68:
    // 0x157f68: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x157f68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x157f6c: 0xc0495d4  jal         func_125750
    ctx->pc = 0x157F6Cu;
    SET_GPR_U32(ctx, 31, 0x157F74u);
    ctx->pc = 0x125750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125750u, 0x157F6Cu, 0x157F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157F74u;
label_157f74:
    // 0x157f74: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x157f74u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157f78: 0xafa000e8  sw          $zero, 0xE8($sp)
    ctx->pc = 0x157f78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 0));
    // 0x157f7c: 0xafa000e4  sw          $zero, 0xE4($sp)
    ctx->pc = 0x157f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 0));
    // 0x157f80: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x157f80u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157f84: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x157f84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157f88: 0x27a400d8  addiu       $a0, $sp, 0xD8
    ctx->pc = 0x157f88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x157f8c: 0xc056144  jal         func_158510
    ctx->pc = 0x157F8Cu;
    SET_GPR_U32(ctx, 31, 0x157F94u);
    ctx->pc = 0x158510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158510u, 0x157F8Cu, 0x157F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157F94u;
label_157f94:
    // 0x157f94: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x157f94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157f98: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x157F98u;
    {
        const bool branch_taken_0x157f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x157f98) {
            ctx->pc = 0x157FBCu;
            goto label_157fbc;
        }
    }
    ctx->pc = 0x157FA0u;
label_157fa0:
    // 0x157fa0: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x157fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x157fa4: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x157fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x157fa8: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x157fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x157fac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x157facu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157fb0: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x157FB0u;
    SET_GPR_U32(ctx, 31, 0x157FB8u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x157FB0u, 0x157FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157FB8u;
label_157fb8:
    // 0x157fb8: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x157fb8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_157fbc:
    // 0x157fbc: 0x27a400d8  addiu       $a0, $sp, 0xD8
    ctx->pc = 0x157fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x157fc0: 0xc05613c  jal         func_1584F0
    ctx->pc = 0x157FC0u;
    SET_GPR_U32(ctx, 31, 0x157FC8u);
    ctx->pc = 0x1584F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584F0u, 0x157FC0u, 0x157FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157FC8u;
label_157fc8:
    // 0x157fc8: 0x1642fff5  bne         $s2, $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x157FC8u;
    {
        const bool branch_taken_0x157fc8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x157fc8) {
            ctx->pc = 0x157FA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_157fa0;
        }
    }
    ctx->pc = 0x157FD0u;
    // 0x157fd0: 0x10000077  b           . + 4 + (0x77 << 2)
    ctx->pc = 0x157FD0u;
    {
        const bool branch_taken_0x157fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x157fd0) {
            ctx->pc = 0x1581B0u;
            goto label_1581b0;
        }
    }
    ctx->pc = 0x157FD8u;
label_157fd8:
    // 0x157fd8: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x157fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x157fdc: 0xc04ddfc  jal         func_1377F0
    ctx->pc = 0x157FDCu;
    SET_GPR_U32(ctx, 31, 0x157FE4u);
    ctx->pc = 0x1377F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1377F0u, 0x157FDCu, 0x157FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157FE4u;
label_157fe4:
    // 0x157fe4: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x157fe4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157fe8: 0xafa000e8  sw          $zero, 0xE8($sp)
    ctx->pc = 0x157fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 0));
    // 0x157fec: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x157fecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157ff0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x157ff0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157ff4: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x157FF4u;
    {
        const bool branch_taken_0x157ff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x157ff4) {
            ctx->pc = 0x158154u;
            goto label_158154;
        }
    }
    ctx->pc = 0x157FFCu;
label_157ffc:
    // 0x157ffc: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x157ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x158000: 0x27a500e8  addiu       $a1, $sp, 0xE8
    ctx->pc = 0x158000u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    // 0x158004: 0xc056368  jal         func_158DA0
    ctx->pc = 0x158004u;
    SET_GPR_U32(ctx, 31, 0x15800Cu);
    ctx->pc = 0x158DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158DA0u, 0x158004u, 0x15800Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15800Cu;
label_15800c:
    // 0x15800c: 0x27a400d8  addiu       $a0, $sp, 0xD8
    ctx->pc = 0x15800cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x158010: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x158010u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158014: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x158014u;
    SET_GPR_U32(ctx, 31, 0x15801Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x158014u, 0x15801Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15801Cu;
label_15801c:
    // 0x15801c: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x15801cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x158020: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x158020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x158024: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x158024u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x158028: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x158028u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15802c: 0x8fa700e8  lw          $a3, 0xE8($sp)
    ctx->pc = 0x15802cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x158030: 0xc056334  jal         func_158CD0
    ctx->pc = 0x158030u;
    SET_GPR_U32(ctx, 31, 0x158038u);
    ctx->pc = 0x158CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158CD0u, 0x158030u, 0x158038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158038u;
label_158038:
    // 0x158038: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x158038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x15803c: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x15803cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x158040: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x158040u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158044: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x158044u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x158048: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x158048u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15804c: 0xc08c378  jal         func_230DE0
    ctx->pc = 0x15804Cu;
    SET_GPR_U32(ctx, 31, 0x158054u);
    ctx->pc = 0x230DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230DE0u, 0x15804Cu, 0x158054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158054u;
label_158054:
    // 0x158054: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x158054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x158058: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x158058u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x15805c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x15805cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158060: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x158060u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x158064: 0xc08c6c8  jal         func_231B20
    ctx->pc = 0x158064u;
    SET_GPR_U32(ctx, 31, 0x15806Cu);
    ctx->pc = 0x231B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231B20u, 0x158064u, 0x15806Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15806Cu;
label_15806c:
    // 0x15806c: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x15806cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x158070: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x158070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x158074: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x158074u;
    {
        const bool branch_taken_0x158074 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x158074) {
            ctx->pc = 0x158090u;
            goto label_158090;
        }
    }
    ctx->pc = 0x15807Cu;
    // 0x15807c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15807cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x158080: 0x0  nop
    ctx->pc = 0x158080u;
    // NOP
    // 0x158084: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x158084u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x158088: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x158088u;
    {
        const bool branch_taken_0x158088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x158088) {
            ctx->pc = 0x1580ACu;
            goto label_1580ac;
        }
    }
    ctx->pc = 0x158090u;
label_158090:
    // 0x158090: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x158090u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x158094: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x158094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x158098: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x158098u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x15809c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15809cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1580a0: 0x0  nop
    ctx->pc = 0x1580a0u;
    // NOP
    // 0x1580a4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1580a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1580a8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1580a8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1580ac:
    // 0x1580ac: 0x3c024420  lui         $v0, 0x4420
    ctx->pc = 0x1580acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17440 << 16));
    // 0x1580b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1580b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1580b4: 0x0  nop
    ctx->pc = 0x1580b4u;
    // NOP
    // 0x1580b8: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1580b8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1580bc: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x1580bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1580c0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1580c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1580c4: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x1580c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x1580c8: 0xc7a100d0  lwc1        $f1, 0xD0($sp)
    ctx->pc = 0x1580c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1580cc: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x1580ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1580d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1580d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1580d4: 0x0  nop
    ctx->pc = 0x1580d4u;
    // NOP
    // 0x1580d8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1580d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1580dc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1580dcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1580e0: 0x45010019  bc1t        . + 4 + (0x19 << 2)
    ctx->pc = 0x1580E0u;
    {
        const bool branch_taken_0x1580e0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1580e0) {
            ctx->pc = 0x158148u;
            goto label_158148;
        }
    }
    ctx->pc = 0x1580E8u;
    // 0x1580e8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1580e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1580ec: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x1580ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1580f0: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1580f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1580f4: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1580f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1580f8: 0xc056334  jal         func_158CD0
    ctx->pc = 0x1580F8u;
    SET_GPR_U32(ctx, 31, 0x158100u);
    ctx->pc = 0x158CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158CD0u, 0x1580F8u, 0x158100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158100u;
label_158100:
    // 0x158100: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x158100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x158104: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x158104u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x158108: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x158108u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15810c: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x15810cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x158110: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x158110u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x158114: 0xc08c378  jal         func_230DE0
    ctx->pc = 0x158114u;
    SET_GPR_U32(ctx, 31, 0x15811Cu);
    ctx->pc = 0x230DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230DE0u, 0x158114u, 0x15811Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15811Cu;
label_15811c:
    // 0x15811c: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x15811cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x158120: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x158120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x158124: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x158124u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158128: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x158128u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15812c: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x15812Cu;
    SET_GPR_U32(ctx, 31, 0x158134u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x15812Cu, 0x158134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158134u;
label_158134:
    // 0x158134: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x158134u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x158138: 0x26740001  addiu       $s4, $s3, 0x1
    ctx->pc = 0x158138u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x15813c: 0xafb400e8  sw          $s4, 0xE8($sp)
    ctx->pc = 0x15813cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 20));
    // 0x158140: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x158140u;
    {
        const bool branch_taken_0x158140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x158140) {
            ctx->pc = 0x158154u;
            goto label_158154;
        }
    }
    ctx->pc = 0x158148u;
label_158148:
    // 0x158148: 0x8fb300e8  lw          $s3, 0xE8($sp)
    ctx->pc = 0x158148u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x15814c: 0x26620001  addiu       $v0, $s3, 0x1
    ctx->pc = 0x15814cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x158150: 0xafa200e8  sw          $v0, 0xE8($sp)
    ctx->pc = 0x158150u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 2));
label_158154:
    // 0x158154: 0x27a400d8  addiu       $a0, $sp, 0xD8
    ctx->pc = 0x158154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x158158: 0xc05611c  jal         func_158470
    ctx->pc = 0x158158u;
    SET_GPR_U32(ctx, 31, 0x158160u);
    ctx->pc = 0x158470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158470u, 0x158158u, 0x158160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158160u;
label_158160:
    // 0x158160: 0x202082b  sltu        $at, $s0, $v0
    ctx->pc = 0x158160u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x158164: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x158164u;
    {
        const bool branch_taken_0x158164 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x158164) {
            ctx->pc = 0x15817Cu;
            goto label_15817c;
        }
    }
    ctx->pc = 0x15816Cu;
    // 0x15816c: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x15816cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x158170: 0x57102b  sltu        $v0, $v0, $s7
    ctx->pc = 0x158170u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
    // 0x158174: 0x1440ffa1  bnez        $v0, . + 4 + (-0x5F << 2)
    ctx->pc = 0x158174u;
    {
        const bool branch_taken_0x158174 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x158174) {
            ctx->pc = 0x157FFCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_157ffc;
        }
    }
    ctx->pc = 0x15817Cu;
label_15817c:
    // 0x15817c: 0x27a400d8  addiu       $a0, $sp, 0xD8
    ctx->pc = 0x15817cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x158180: 0xc05611c  jal         func_158470
    ctx->pc = 0x158180u;
    SET_GPR_U32(ctx, 31, 0x158188u);
    ctx->pc = 0x158470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158470u, 0x158180u, 0x158188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158188u;
label_158188:
    // 0x158188: 0x202082b  sltu        $at, $s0, $v0
    ctx->pc = 0x158188u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x15818c: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x15818Cu;
    {
        const bool branch_taken_0x15818c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15818c) {
            ctx->pc = 0x1581ACu;
            goto label_1581ac;
        }
    }
    ctx->pc = 0x158194u;
    // 0x158194: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x158194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x158198: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x158198u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x15819c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x15819cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1581a0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1581a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1581a4: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1581A4u;
    SET_GPR_U32(ctx, 31, 0x1581ACu);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1581A4u, 0x1581ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1581ACu;
label_1581ac:
    // 0x1581ac: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1581acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1581b0:
    // 0x1581b0: 0x27a400d8  addiu       $a0, $sp, 0xD8
    ctx->pc = 0x1581b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x1581b4: 0xc05611c  jal         func_158470
    ctx->pc = 0x1581B4u;
    SET_GPR_U32(ctx, 31, 0x1581BCu);
    ctx->pc = 0x158470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158470u, 0x1581B4u, 0x1581BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1581BCu;
label_1581bc:
    // 0x1581bc: 0x202082b  sltu        $at, $s0, $v0
    ctx->pc = 0x1581bcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1581c0: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x1581C0u;
    {
        const bool branch_taken_0x1581c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1581c0) {
            ctx->pc = 0x1581E8u;
            goto label_1581e8;
        }
    }
    ctx->pc = 0x1581C8u;
    // 0x1581c8: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1581c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1581cc: 0x8fa50110  lw          $a1, 0x110($sp)
    ctx->pc = 0x1581ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1581d0: 0x27a600e4  addiu       $a2, $sp, 0xE4
    ctx->pc = 0x1581d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
    // 0x1581d4: 0xc056358  jal         func_158D60
    ctx->pc = 0x1581D4u;
    SET_GPR_U32(ctx, 31, 0x1581DCu);
    ctx->pc = 0x158D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158D60u, 0x1581D4u, 0x1581DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1581DCu;
label_1581dc:
    // 0x1581dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1581dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1581e0: 0x1043ff7d  beq         $v0, $v1, . + 4 + (-0x83 << 2)
    ctx->pc = 0x1581E0u;
    {
        const bool branch_taken_0x1581e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1581e0) {
            ctx->pc = 0x157FD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_157fd8;
        }
    }
    ctx->pc = 0x1581E8u;
label_1581e8:
    // 0x1581e8: 0x200b02d  daddu       $s6, $s0, $zero
    ctx->pc = 0x1581e8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1581ec: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1581ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1581f0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1581f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1581f4: 0xc0406a0  jal         func_101A80
    ctx->pc = 0x1581F4u;
    SET_GPR_U32(ctx, 31, 0x1581FCu);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x1581F4u, 0x1581FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1581FCu;
label_1581fc:
    // 0x1581fc: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1581fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x158200: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x158200u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x158204: 0xc0406a0  jal         func_101A80
    ctx->pc = 0x158204u;
    SET_GPR_U32(ctx, 31, 0x15820Cu);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x158204u, 0x15820Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15820Cu;
label_15820c:
    // 0x15820c: 0x27a400d8  addiu       $a0, $sp, 0xD8
    ctx->pc = 0x15820cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x158210: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x158210u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x158214: 0xc056094  jal         func_158250
    ctx->pc = 0x158214u;
    SET_GPR_U32(ctx, 31, 0x15821Cu);
    ctx->pc = 0x158250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158250u, 0x158214u, 0x15821Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15821Cu;
label_15821c:
    // 0x15821c: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x15821cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158220: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x158220u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x158224: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x158224u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x158228: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x158228u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x15822c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x15822cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x158230: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x158230u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x158234: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x158234u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x158238: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x158238u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15823c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15823cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x158240: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x158240u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x158244: 0x27bd0130  addiu       $sp, $sp, 0x130
    ctx->pc = 0x158244u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x158248: 0x3e00008  jr          $ra
    ctx->pc = 0x158248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158248u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x158250u;
}
