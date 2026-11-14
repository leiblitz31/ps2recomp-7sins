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

// Function: sub_002C2030
// Address: 0x2c2030 - 0x2c21d0
void sub_002C2030_0x2c2030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C2030_0x2c2030");
#endif

    switch (ctx->pc) {
        case 0x2c2070u: goto label_2c2070;
        case 0x2c208cu: goto label_2c208c;
        case 0x2c20a4u: goto label_2c20a4;
        case 0x2c20bcu: goto label_2c20bc;
        case 0x2c20d4u: goto label_2c20d4;
        case 0x2c20fcu: goto label_2c20fc;
        case 0x2c210cu: goto label_2c210c;
        case 0x2c2118u: goto label_2c2118;
        case 0x2c214cu: goto label_2c214c;
        case 0x2c2170u: goto label_2c2170;
        case 0x2c2180u: goto label_2c2180;
        default: break;
    }

    ctx->pc = 0x2c2030u;

    // 0x2c2030: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2c2030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2c2034: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2c2034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2c2038: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2c2038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2c203c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2c203cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2c2040: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2c2040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2c2044: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2c2044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2c2048: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2c2048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2c204c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c204cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c2050: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c2050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c2054: 0xafa50090  sw          $a1, 0x90($sp)
    ctx->pc = 0x2c2054u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 5));
    // 0x2c2058: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2c2058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2c205c: 0x1002004d  beq         $zero, $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x2C205Cu;
    {
        const bool branch_taken_0x2c205c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x2c205c) {
            ctx->pc = 0x2C2194u;
            goto label_2c2194;
        }
    }
    ctx->pc = 0x2C2064u;
    // 0x2c2064: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x2c2064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2c2068: 0xc096880  jal         func_25A200
    ctx->pc = 0x2C2068u;
    SET_GPR_U32(ctx, 31, 0x2C2070u);
    ctx->pc = 0x25A200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A200u, 0x2C2068u, 0x2C2070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2070u;
label_2c2070:
    // 0x2c2070: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2c2070u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2074: 0x12c0001c  beqz        $s6, . + 4 + (0x1C << 2)
    ctx->pc = 0x2C2074u;
    {
        const bool branch_taken_0x2c2074 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c2074) {
            ctx->pc = 0x2C20E8u;
            goto label_2c20e8;
        }
    }
    ctx->pc = 0x2C207Cu;
    // 0x2c207c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2c207cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2080: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x2c2080u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x2c2084: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2C2084u;
    SET_GPR_U32(ctx, 31, 0x2C208Cu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2C2084u, 0x2C208Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C208Cu;
label_2c208c:
    // 0x2c208c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2c208cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2090: 0x12a00015  beqz        $s5, . + 4 + (0x15 << 2)
    ctx->pc = 0x2C2090u;
    {
        const bool branch_taken_0x2c2090 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c2090) {
            ctx->pc = 0x2C20E8u;
            goto label_2c20e8;
        }
    }
    ctx->pc = 0x2C2098u;
    // 0x2c2098: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2c2098u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c209c: 0xc063dd0  jal         func_18F740
    ctx->pc = 0x2C209Cu;
    SET_GPR_U32(ctx, 31, 0x2C20A4u);
    ctx->pc = 0x18F740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F740u, 0x2C209Cu, 0x2C20A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C20A4u;
label_2c20a4:
    // 0x2c20a4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2c20a4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c20a8: 0x1280000f  beqz        $s4, . + 4 + (0xF << 2)
    ctx->pc = 0x2C20A8u;
    {
        const bool branch_taken_0x2c20a8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c20a8) {
            ctx->pc = 0x2C20E8u;
            goto label_2c20e8;
        }
    }
    ctx->pc = 0x2C20B0u;
    // 0x2c20b0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2c20b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c20b4: 0xc0ae4b4  jal         func_2B92D0
    ctx->pc = 0x2C20B4u;
    SET_GPR_U32(ctx, 31, 0x2C20BCu);
    ctx->pc = 0x2B92D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B92D0u, 0x2C20B4u, 0x2C20BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C20BCu;
label_2c20bc:
    // 0x2c20bc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c20bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c20c0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2c20c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c20c4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2c20c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c20c8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2c20c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c20cc: 0xc09a060  jal         func_268180
    ctx->pc = 0x2C20CCu;
    SET_GPR_U32(ctx, 31, 0x2C20D4u);
    ctx->pc = 0x268180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268180u, 0x2C20CCu, 0x2C20D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C20D4u;
label_2c20d4:
    // 0x2c20d4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C20D4u;
    {
        const bool branch_taken_0x2c20d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c20d4) {
            ctx->pc = 0x2C20E8u;
            goto label_2c20e8;
        }
    }
    ctx->pc = 0x2C20DCu;
    // 0x2c20dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c20dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c20e0: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x2C20E0u;
    {
        const bool branch_taken_0x2c20e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c20e0) {
            ctx->pc = 0x2C2198u;
            goto label_2c2198;
        }
    }
    ctx->pc = 0x2C20E8u;
label_2c20e8:
    // 0x2c20e8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2c20e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c20ec: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x2c20ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2c20f0: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2c20f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2c20f4: 0xc09681c  jal         func_25A070
    ctx->pc = 0x2C20F4u;
    SET_GPR_U32(ctx, 31, 0x2C20FCu);
    ctx->pc = 0x25A070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A070u, 0x2C20F4u, 0x2C20FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C20FCu;
label_2c20fc:
    // 0x2c20fc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2c20fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2100: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2c2100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2104: 0xc0525e4  jal         func_149790
    ctx->pc = 0x2C2104u;
    SET_GPR_U32(ctx, 31, 0x2C210Cu);
    ctx->pc = 0x149790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149790u, 0x2C2104u, 0x2C210Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C210Cu;
label_2c210c:
    // 0x2c210c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c210cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2110: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2C2110u;
    {
        const bool branch_taken_0x2c2110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c2110) {
            ctx->pc = 0x2C2174u;
            goto label_2c2174;
        }
    }
    ctx->pc = 0x2C2118u;
label_2c2118:
    // 0x2c2118: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x2c2118u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c211c: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x2c211cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x2c2120: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2C2120u;
    {
        const bool branch_taken_0x2c2120 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c2120) {
            ctx->pc = 0x2C2154u;
            goto label_2c2154;
        }
    }
    ctx->pc = 0x2C2128u;
    // 0x2c2128: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c2128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c212c: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x2c212cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c2130: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2c2130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2c2134: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x2c2134u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x2c2138: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2c2138u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c213c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2c213cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c2140: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c2140u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2144: 0xc0af03c  jal         func_2BC0F0
    ctx->pc = 0x2C2144u;
    SET_GPR_U32(ctx, 31, 0x2C214Cu);
    ctx->pc = 0x2BC0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC0F0u, 0x2C2144u, 0x2C214Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C214Cu;
label_2c214c:
    // 0x2c214c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2C214Cu;
    {
        const bool branch_taken_0x2c214c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c214c) {
            ctx->pc = 0x2C2170u;
            goto label_2c2170;
        }
    }
    ctx->pc = 0x2C2154u;
label_2c2154:
    // 0x2c2154: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2c2154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2c2158: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x2c2158u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x2c215c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2c215cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2160: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2c2160u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c2164: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c2164u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2168: 0xc0af064  jal         func_2BC190
    ctx->pc = 0x2C2168u;
    SET_GPR_U32(ctx, 31, 0x2C2170u);
    ctx->pc = 0x2BC190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC190u, 0x2C2168u, 0x2C2170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2170u;
label_2c2170:
    // 0x2c2170: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x2c2170u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_2c2174:
    // 0x2c2174: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2c2174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2178: 0xc0525dc  jal         func_149770
    ctx->pc = 0x2C2178u;
    SET_GPR_U32(ctx, 31, 0x2C2180u);
    ctx->pc = 0x149770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149770u, 0x2C2178u, 0x2C2180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2180u;
label_2c2180:
    // 0x2c2180: 0x1602ffe5  bne         $s0, $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x2C2180u;
    {
        const bool branch_taken_0x2c2180 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c2180) {
            ctx->pc = 0x2C2118u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c2118;
        }
    }
    ctx->pc = 0x2C2188u;
    // 0x2c2188: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2c2188u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c218c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2C218Cu;
    {
        const bool branch_taken_0x2c218c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c218c) {
            ctx->pc = 0x2C2198u;
            goto label_2c2198;
        }
    }
    ctx->pc = 0x2C2194u;
label_2c2194:
    // 0x2c2194: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c2194u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c2198:
    // 0x2c2198: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2c2198u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2c219c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2c219cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2c21a0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2c21a0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c21a4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2c21a4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c21a8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2c21a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c21ac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2c21acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c21b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c21b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c21b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c21b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c21b8: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x2c21b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2c21bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2C21BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C21BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C21C4u;
    // 0x2c21c4: 0x0  nop
    ctx->pc = 0x2c21c4u;
    // NOP
    // 0x2c21c8: 0x0  nop
    ctx->pc = 0x2c21c8u;
    // NOP
    // 0x2c21cc: 0x0  nop
    ctx->pc = 0x2c21ccu;
    // NOP
    ctx->pc = 0x2c21d0u;
}
