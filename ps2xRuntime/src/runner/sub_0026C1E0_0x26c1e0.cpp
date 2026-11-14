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

// Function: sub_0026C1E0
// Address: 0x26c1e0 - 0x26c530
void sub_0026C1E0_0x26c1e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026C1E0_0x26c1e0");
#endif

    switch (ctx->pc) {
        case 0x26c228u: goto label_26c228;
        case 0x26c238u: goto label_26c238;
        case 0x26c248u: goto label_26c248;
        case 0x26c264u: goto label_26c264;
        case 0x26c278u: goto label_26c278;
        case 0x26c288u: goto label_26c288;
        case 0x26c294u: goto label_26c294;
        case 0x26c2a4u: goto label_26c2a4;
        case 0x26c2c4u: goto label_26c2c4;
        case 0x26c2e4u: goto label_26c2e4;
        case 0x26c2f4u: goto label_26c2f4;
        case 0x26c31cu: goto label_26c31c;
        case 0x26c328u: goto label_26c328;
        case 0x26c348u: goto label_26c348;
        case 0x26c358u: goto label_26c358;
        case 0x26c368u: goto label_26c368;
        case 0x26c380u: goto label_26c380;
        case 0x26c398u: goto label_26c398;
        case 0x26c3a4u: goto label_26c3a4;
        case 0x26c3b8u: goto label_26c3b8;
        case 0x26c3c4u: goto label_26c3c4;
        case 0x26c3d8u: goto label_26c3d8;
        case 0x26c3e4u: goto label_26c3e4;
        case 0x26c3f8u: goto label_26c3f8;
        case 0x26c404u: goto label_26c404;
        case 0x26c414u: goto label_26c414;
        case 0x26c42cu: goto label_26c42c;
        case 0x26c448u: goto label_26c448;
        case 0x26c45cu: goto label_26c45c;
        case 0x26c470u: goto label_26c470;
        case 0x26c484u: goto label_26c484;
        case 0x26c498u: goto label_26c498;
        case 0x26c4acu: goto label_26c4ac;
        case 0x26c4bcu: goto label_26c4bc;
        case 0x26c4c8u: goto label_26c4c8;
        case 0x26c4d8u: goto label_26c4d8;
        case 0x26c4e4u: goto label_26c4e4;
        case 0x26c4f8u: goto label_26c4f8;
        default: break;
    }

    ctx->pc = 0x26c1e0u;

    // 0x26c1e0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x26c1e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x26c1e4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x26c1e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x26c1e8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x26c1e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x26c1ec: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x26c1ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x26c1f0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x26c1f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x26c1f4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x26c1f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x26c1f8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x26c1f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x26c1fc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x26c1fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x26c200: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x26c200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x26c204: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26c204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26c208: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26c208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26c20c: 0xafa400c0  sw          $a0, 0xC0($sp)
    ctx->pc = 0x26c20cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 4));
    // 0x26c210: 0xe7ac00d0  swc1        $f12, 0xD0($sp)
    ctx->pc = 0x26c210u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x26c214: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x26c214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x26c218: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x26c218u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x26c21c: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x26c21cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x26c220: 0xc085538  jal         func_2154E0
    ctx->pc = 0x26C220u;
    SET_GPR_U32(ctx, 31, 0x26C228u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x26C220u, 0x26C228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C228u;
label_26c228:
    // 0x26c228: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x26c228u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c22c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26c22cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c230: 0xc096ea4  jal         func_25BA90
    ctx->pc = 0x26C230u;
    SET_GPR_U32(ctx, 31, 0x26C238u);
    ctx->pc = 0x25BA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BA90u, 0x26C230u, 0x26C238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C238u;
label_26c238:
    // 0x26c238: 0xafa200b8  sw          $v0, 0xB8($sp)
    ctx->pc = 0x26c238u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
    // 0x26c23c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26c23cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c240: 0xc0968a8  jal         func_25A2A0
    ctx->pc = 0x26C240u;
    SET_GPR_U32(ctx, 31, 0x26C248u);
    ctx->pc = 0x25A2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A2A0u, 0x26C240u, 0x26C248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C248u;
label_26c248:
    // 0x26c248: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x26c248u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c24c: 0x10140020  beq         $zero, $s4, . + 4 + (0x20 << 2)
    ctx->pc = 0x26C24Cu;
    {
        const bool branch_taken_0x26c24c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 20));
        if (branch_taken_0x26c24c) {
            ctx->pc = 0x26C2D0u;
            goto label_26c2d0;
        }
    }
    ctx->pc = 0x26C254u;
    // 0x26c254: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x26c254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c258: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x26c258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x26c25c: 0xc085538  jal         func_2154E0
    ctx->pc = 0x26C25Cu;
    SET_GPR_U32(ctx, 31, 0x26C264u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x26C25Cu, 0x26C264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C264u;
label_26c264:
    // 0x26c264: 0xafa200b4  sw          $v0, 0xB4($sp)
    ctx->pc = 0x26c264u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 2));
    // 0x26c268: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x26c268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c26c: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x26c26cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x26c270: 0xc085538  jal         func_2154E0
    ctx->pc = 0x26C270u;
    SET_GPR_U32(ctx, 31, 0x26C278u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x26C270u, 0x26C278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C278u;
label_26c278:
    // 0x26c278: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x26c278u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x26c27c: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x26c27cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x26c280: 0xc09b03c  jal         func_26C0F0
    ctx->pc = 0x26C280u;
    SET_GPR_U32(ctx, 31, 0x26C288u);
    ctx->pc = 0x26C0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C0F0u, 0x26C280u, 0x26C288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C288u;
label_26c288:
    // 0x26c288: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x26c288u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
    // 0x26c28c: 0xc090864  jal         func_242190
    ctx->pc = 0x26C28Cu;
    SET_GPR_U32(ctx, 31, 0x26C294u);
    ctx->pc = 0x242190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242190u, 0x26C28Cu, 0x26C294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C294u;
label_26c294:
    // 0x26c294: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26c294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c298: 0x8fa500ac  lw          $a1, 0xAC($sp)
    ctx->pc = 0x26c298u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x26c29c: 0xc090844  jal         func_242110
    ctx->pc = 0x26C29Cu;
    SET_GPR_U32(ctx, 31, 0x26C2A4u);
    ctx->pc = 0x242110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242110u, 0x26C29Cu, 0x26C2A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C2A4u;
label_26c2a4:
    // 0x26c2a4: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x26c2a4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c2a8: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x26c2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x26c2ac: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x26c2acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x26c2b0: 0x3c21021  addu        $v0, $fp, $v0
    ctx->pc = 0x26c2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x26c2b4: 0x8c5700b4  lw          $s7, 0xB4($v0)
    ctx->pc = 0x26c2b4u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
    // 0x26c2b8: 0x8fa400b4  lw          $a0, 0xB4($sp)
    ctx->pc = 0x26c2b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x26c2bc: 0xc0976f0  jal         func_25DBC0
    ctx->pc = 0x26C2BCu;
    SET_GPR_U32(ctx, 31, 0x26C2C4u);
    ctx->pc = 0x25DBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25DBC0u, 0x26C2BCu, 0x26C2C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C2C4u;
label_26c2c4:
    // 0x26c2c4: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x26c2c4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c2c8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x26C2C8u;
    {
        const bool branch_taken_0x26c2c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c2c8) {
            ctx->pc = 0x26C2D8u;
            goto label_26c2d8;
        }
    }
    ctx->pc = 0x26C2D0u;
label_26c2d0:
    // 0x26c2d0: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x26c2d0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c2d4: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x26c2d4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26c2d8:
    // 0x26c2d8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26c2d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c2dc: 0xc096950  jal         func_25A540
    ctx->pc = 0x26C2DCu;
    SET_GPR_U32(ctx, 31, 0x26C2E4u);
    ctx->pc = 0x25A540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A540u, 0x26C2DCu, 0x26C2E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C2E4u;
label_26c2e4:
    // 0x26c2e4: 0xafa200a8  sw          $v0, 0xA8($sp)
    ctx->pc = 0x26c2e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
    // 0x26c2e8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26c2e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c2ec: 0xc096880  jal         func_25A200
    ctx->pc = 0x26C2ECu;
    SET_GPR_U32(ctx, 31, 0x26C2F4u);
    ctx->pc = 0x25A200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A200u, 0x26C2ECu, 0x26C2F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C2F4u;
label_26c2f4:
    // 0x26c2f4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x26C2F4u;
    {
        const bool branch_taken_0x26c2f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c2f4) {
            ctx->pc = 0x26C30Cu;
            goto label_26c30c;
        }
    }
    ctx->pc = 0x26C2FCu;
    // 0x26c2fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26c2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26c300: 0x305500ff  andi        $s5, $v0, 0xFF
    ctx->pc = 0x26c300u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x26c304: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x26C304u;
    {
        const bool branch_taken_0x26c304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c304) {
            ctx->pc = 0x26C310u;
            goto label_26c310;
        }
    }
    ctx->pc = 0x26C30Cu;
label_26c30c:
    // 0x26c30c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x26c30cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26c310:
    // 0x26c310: 0xa3b500bf  sb          $s5, 0xBF($sp)
    ctx->pc = 0x26c310u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 191), (uint8_t)GPR_U32(ctx, 21));
    // 0x26c314: 0xc090864  jal         func_242190
    ctx->pc = 0x26C314u;
    SET_GPR_U32(ctx, 31, 0x26C31Cu);
    ctx->pc = 0x242190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242190u, 0x26C314u, 0x26C31Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C31Cu;
label_26c31c:
    // 0x26c31c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26c31cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c320: 0xc0905a8  jal         func_2416A0
    ctx->pc = 0x26C320u;
    SET_GPR_U32(ctx, 31, 0x26C328u);
    ctx->pc = 0x2416A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2416A0u, 0x26C320u, 0x26C328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C328u;
label_26c328:
    // 0x26c328: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26c328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c32c: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x26c32cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x26c330: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x26c330u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c334: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x26c334u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c338: 0x93a800bf  lbu         $t0, 0xBF($sp)
    ctx->pc = 0x26c338u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 191)));
    // 0x26c33c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x26c33cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c340: 0xc09941c  jal         func_265070
    ctx->pc = 0x26C340u;
    SET_GPR_U32(ctx, 31, 0x26C348u);
    ctx->pc = 0x265070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x265070u, 0x26C340u, 0x26C348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C348u;
label_26c348:
    // 0x26c348: 0xafa200a4  sw          $v0, 0xA4($sp)
    ctx->pc = 0x26c348u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 2));
    // 0x26c34c: 0x24040078  addiu       $a0, $zero, 0x78
    ctx->pc = 0x26c34cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x26c350: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x26C350u;
    SET_GPR_U32(ctx, 31, 0x26C358u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x26C350u, 0x26C358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C358u;
label_26c358:
    // 0x26c358: 0x24040078  addiu       $a0, $zero, 0x78
    ctx->pc = 0x26c358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x26c35c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x26c35cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c360: 0xc0400e0  jal         func_100380
    ctx->pc = 0x26C360u;
    SET_GPR_U32(ctx, 31, 0x26C368u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x26C360u, 0x26C368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C368u;
label_26c368:
    // 0x26c368: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x26c368u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c36c: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x26C36Cu;
    {
        const bool branch_taken_0x26c36c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c36c) {
            ctx->pc = 0x26C384u;
            goto label_26c384;
        }
    }
    ctx->pc = 0x26C374u;
    // 0x26c374: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26c374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c378: 0xc0995d0  jal         func_265740
    ctx->pc = 0x26C378u;
    SET_GPR_U32(ctx, 31, 0x26C380u);
    ctx->pc = 0x265740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x265740u, 0x26C378u, 0x26C380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C380u;
label_26c380:
    // 0x26c380: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x26c380u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26c384:
    // 0x26c384: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x26c384u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c388: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x26c388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x26c38c: 0x2785a0f8  addiu       $a1, $gp, -0x5F08
    ctx->pc = 0x26c38cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942968));
    // 0x26c390: 0xc0bc3e2  jal         func_2F0F88
    ctx->pc = 0x26C390u;
    SET_GPR_U32(ctx, 31, 0x26C398u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x26C390u, 0x26C398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C398u;
label_26c398:
    // 0x26c398: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26c398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c39c: 0xc048094  jal         func_120250
    ctx->pc = 0x26C39Cu;
    SET_GPR_U32(ctx, 31, 0x26C3A4u);
    ctx->pc = 0x120250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120250u, 0x26C39Cu, 0x26C3A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C3A4u;
label_26c3a4:
    // 0x26c3a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26c3a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c3a8: 0x24050402  addiu       $a1, $zero, 0x402
    ctx->pc = 0x26c3a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1026));
    // 0x26c3ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26c3acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c3b0: 0xc040924  jal         func_102490
    ctx->pc = 0x26C3B0u;
    SET_GPR_U32(ctx, 31, 0x26C3B8u);
    ctx->pc = 0x102490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102490u, 0x26C3B0u, 0x26C3B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C3B8u;
label_26c3b8:
    // 0x26c3b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26c3b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c3bc: 0xc048094  jal         func_120250
    ctx->pc = 0x26C3BCu;
    SET_GPR_U32(ctx, 31, 0x26C3C4u);
    ctx->pc = 0x120250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120250u, 0x26C3BCu, 0x26C3C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C3C4u;
label_26c3c4:
    // 0x26c3c4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26c3c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c3c8: 0x2405047f  addiu       $a1, $zero, 0x47F
    ctx->pc = 0x26c3c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1151));
    // 0x26c3cc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x26c3ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26c3d0: 0xc040924  jal         func_102490
    ctx->pc = 0x26C3D0u;
    SET_GPR_U32(ctx, 31, 0x26C3D8u);
    ctx->pc = 0x102490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102490u, 0x26C3D0u, 0x26C3D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C3D8u;
label_26c3d8:
    // 0x26c3d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26c3d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c3dc: 0xc048094  jal         func_120250
    ctx->pc = 0x26C3DCu;
    SET_GPR_U32(ctx, 31, 0x26C3E4u);
    ctx->pc = 0x120250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120250u, 0x26C3DCu, 0x26C3E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C3E4u;
label_26c3e4:
    // 0x26c3e4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26c3e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c3e8: 0x24050480  addiu       $a1, $zero, 0x480
    ctx->pc = 0x26c3e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1152));
    // 0x26c3ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26c3ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c3f0: 0xc040924  jal         func_102490
    ctx->pc = 0x26C3F0u;
    SET_GPR_U32(ctx, 31, 0x26C3F8u);
    ctx->pc = 0x102490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102490u, 0x26C3F0u, 0x26C3F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C3F8u;
label_26c3f8:
    // 0x26c3f8: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x26c3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x26c3fc: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x26C3FCu;
    SET_GPR_U32(ctx, 31, 0x26C404u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x26C3FCu, 0x26C404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C404u;
label_26c404:
    // 0x26c404: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x26c404u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x26c408: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x26c408u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c40c: 0xc0400e0  jal         func_100380
    ctx->pc = 0x26C40Cu;
    SET_GPR_U32(ctx, 31, 0x26C414u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x26C40Cu, 0x26C414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C414u;
label_26c414:
    // 0x26c414: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x26c414u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c418: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x26C418u;
    {
        const bool branch_taken_0x26c418 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c418) {
            ctx->pc = 0x26C430u;
            goto label_26c430;
        }
    }
    ctx->pc = 0x26C420u;
    // 0x26c420: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26c420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c424: 0xc09d084  jal         func_274210
    ctx->pc = 0x26C424u;
    SET_GPR_U32(ctx, 31, 0x26C42Cu);
    ctx->pc = 0x274210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274210u, 0x26C424u, 0x26C42Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C42Cu;
label_26c42c:
    // 0x26c42c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x26c42cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26c430:
    // 0x26c430: 0xafb100a0  sw          $s1, 0xA0($sp)
    ctx->pc = 0x26c430u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 17));
    // 0x26c434: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x26c434u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x26c438: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x26c438u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x26c43c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26c43cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c440: 0xc09d0c0  jal         func_274300
    ctx->pc = 0x26C440u;
    SET_GPR_U32(ctx, 31, 0x26C448u);
    ctx->pc = 0x274300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274300u, 0x26C440u, 0x26C448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C448u;
label_26c448:
    // 0x26c448: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x26c448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x26c44c: 0x240504aa  addiu       $a1, $zero, 0x4AA
    ctx->pc = 0x26c44cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1194));
    // 0x26c450: 0x8fa600a4  lw          $a2, 0xA4($sp)
    ctx->pc = 0x26c450u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x26c454: 0xc0433dc  jal         func_10CF70
    ctx->pc = 0x26C454u;
    SET_GPR_U32(ctx, 31, 0x26C45Cu);
    ctx->pc = 0x10CF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CF70u, 0x26C454u, 0x26C45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C45Cu;
label_26c45c:
    // 0x26c45c: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x26c45cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x26c460: 0x240504ab  addiu       $a1, $zero, 0x4AB
    ctx->pc = 0x26c460u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1195));
    // 0x26c464: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x26c464u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26c468: 0xc041b54  jal         func_106D50
    ctx->pc = 0x26C468u;
    SET_GPR_U32(ctx, 31, 0x26C470u);
    ctx->pc = 0x106D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D50u, 0x26C468u, 0x26C470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C470u;
label_26c470:
    // 0x26c470: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x26c470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x26c474: 0x240504ac  addiu       $a1, $zero, 0x4AC
    ctx->pc = 0x26c474u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1196));
    // 0x26c478: 0xc7ac00d0  lwc1        $f12, 0xD0($sp)
    ctx->pc = 0x26c478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26c47c: 0xc041bc4  jal         func_106F10
    ctx->pc = 0x26C47Cu;
    SET_GPR_U32(ctx, 31, 0x26C484u);
    ctx->pc = 0x106F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106F10u, 0x26C47Cu, 0x26C484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C484u;
label_26c484:
    // 0x26c484: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x26c484u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x26c488: 0x24050537  addiu       $a1, $zero, 0x537
    ctx->pc = 0x26c488u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1335));
    // 0x26c48c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x26c48cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26c490: 0xc041b54  jal         func_106D50
    ctx->pc = 0x26C490u;
    SET_GPR_U32(ctx, 31, 0x26C498u);
    ctx->pc = 0x106D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D50u, 0x26C490u, 0x26C498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C498u;
label_26c498:
    // 0x26c498: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x26c498u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x26c49c: 0x240504ae  addiu       $a1, $zero, 0x4AE
    ctx->pc = 0x26c49cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1198));
    // 0x26c4a0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x26c4a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26c4a4: 0xc040924  jal         func_102490
    ctx->pc = 0x26C4A4u;
    SET_GPR_U32(ctx, 31, 0x26C4ACu);
    ctx->pc = 0x102490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102490u, 0x26C4A4u, 0x26C4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C4ACu;
label_26c4ac:
    // 0x26c4ac: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x26c4acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x26c4b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x26c4b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c4b4: 0xc09d0dc  jal         func_274370
    ctx->pc = 0x26C4B4u;
    SET_GPR_U32(ctx, 31, 0x26C4BCu);
    ctx->pc = 0x274370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274370u, 0x26C4B4u, 0x26C4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C4BCu;
label_26c4bc:
    // 0x26c4bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26c4bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c4c0: 0xc041a70  jal         func_1069C0
    ctx->pc = 0x26C4C0u;
    SET_GPR_U32(ctx, 31, 0x26C4C8u);
    ctx->pc = 0x1069C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1069C0u, 0x26C4C0u, 0x26C4C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C4C8u;
label_26c4c8:
    // 0x26c4c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26c4c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c4cc: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x26c4ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x26c4d0: 0xc099c4c  jal         func_267130
    ctx->pc = 0x26C4D0u;
    SET_GPR_U32(ctx, 31, 0x26C4D8u);
    ctx->pc = 0x267130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267130u, 0x26C4D0u, 0x26C4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C4D8u;
label_26c4d8:
    // 0x26c4d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26c4d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c4dc: 0xc048094  jal         func_120250
    ctx->pc = 0x26C4DCu;
    SET_GPR_U32(ctx, 31, 0x26C4E4u);
    ctx->pc = 0x120250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120250u, 0x26C4DCu, 0x26C4E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C4E4u;
label_26c4e4:
    // 0x26c4e4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26c4e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c4e8: 0x24050540  addiu       $a1, $zero, 0x540
    ctx->pc = 0x26c4e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1344));
    // 0x26c4ec: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x26c4ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26c4f0: 0xc041b54  jal         func_106D50
    ctx->pc = 0x26C4F0u;
    SET_GPR_U32(ctx, 31, 0x26C4F8u);
    ctx->pc = 0x106D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D50u, 0x26C4F0u, 0x26C4F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C4F8u;
label_26c4f8:
    // 0x26c4f8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x26c4f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c4fc: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x26c4fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x26c500: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x26c500u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x26c504: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x26c504u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x26c508: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x26c508u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x26c50c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x26c50cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26c510: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x26c510u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26c514: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x26c514u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26c518: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x26c518u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26c51c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26c51cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26c520: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26c520u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26c524: 0x27bd00e0  addiu       $sp, $sp, 0xE0
    ctx->pc = 0x26c524u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x26c528: 0x3e00008  jr          $ra
    ctx->pc = 0x26C528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26C528u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26C530u;
}
