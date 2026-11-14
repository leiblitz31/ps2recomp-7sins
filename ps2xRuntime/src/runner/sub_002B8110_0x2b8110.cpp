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

// Function: sub_002B8110
// Address: 0x2b8110 - 0x2b8410
void sub_002B8110_0x2b8110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B8110_0x2b8110");
#endif

    switch (ctx->pc) {
        case 0x2b8154u: goto label_2b8154;
        case 0x2b8168u: goto label_2b8168;
        case 0x2b8184u: goto label_2b8184;
        case 0x2b8198u: goto label_2b8198;
        case 0x2b81a4u: goto label_2b81a4;
        case 0x2b81b4u: goto label_2b81b4;
        case 0x2b81c0u: goto label_2b81c0;
        case 0x2b81d8u: goto label_2b81d8;
        case 0x2b81f4u: goto label_2b81f4;
        case 0x2b821cu: goto label_2b821c;
        case 0x2b8250u: goto label_2b8250;
        case 0x2b8264u: goto label_2b8264;
        case 0x2b8290u: goto label_2b8290;
        case 0x2b82a0u: goto label_2b82a0;
        case 0x2b82b4u: goto label_2b82b4;
        case 0x2b82dcu: goto label_2b82dc;
        case 0x2b82e8u: goto label_2b82e8;
        case 0x2b8308u: goto label_2b8308;
        case 0x2b8318u: goto label_2b8318;
        case 0x2b8330u: goto label_2b8330;
        case 0x2b8340u: goto label_2b8340;
        case 0x2b8354u: goto label_2b8354;
        case 0x2b8374u: goto label_2b8374;
        case 0x2b8380u: goto label_2b8380;
        case 0x2b8394u: goto label_2b8394;
        case 0x2b83a0u: goto label_2b83a0;
        case 0x2b83b4u: goto label_2b83b4;
        case 0x2b83d8u: goto label_2b83d8;
        default: break;
    }

    ctx->pc = 0x2b8110u;

    // 0x2b8110: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2b8110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2b8114: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2b8114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2b8118: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2b8118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x2b811c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2b811cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2b8120: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2b8120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2b8124: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2b8124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2b8128: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2b8128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2b812c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2b812cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2b8130: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b8130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2b8134: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b8134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2b8138: 0xafa40090  sw          $a0, 0x90($sp)
    ctx->pc = 0x2b8138u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 4));
    // 0x2b813c: 0xafa500a0  sw          $a1, 0xA0($sp)
    ctx->pc = 0x2b813cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 5));
    // 0x2b8140: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2b8140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2b8144: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x2b8144u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x2b8148: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2b8148u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2b814c: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2B814Cu;
    SET_GPR_U32(ctx, 31, 0x2B8154u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2B814Cu, 0x2B8154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8154u;
label_2b8154:
    // 0x2b8154: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x2b8154u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8158: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2b8158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b815c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b815cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8160: 0xc096994  jal         func_25A650
    ctx->pc = 0x2B8160u;
    SET_GPR_U32(ctx, 31, 0x2B8168u);
    ctx->pc = 0x25A650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A650u, 0x2B8160u, 0x2B8168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8168u;
label_2b8168:
    // 0x2b8168: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x2b8168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2b816c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b816cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b8170: 0x1462002c  bne         $v1, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x2B8170u;
    {
        const bool branch_taken_0x2b8170 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b8170) {
            ctx->pc = 0x2B8224u;
            goto label_2b8224;
        }
    }
    ctx->pc = 0x2B8178u;
    // 0x2b8178: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x2b8178u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2b817c: 0xc063dd0  jal         func_18F740
    ctx->pc = 0x2B817Cu;
    SET_GPR_U32(ctx, 31, 0x2B8184u);
    ctx->pc = 0x18F740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F740u, 0x2B817Cu, 0x2B8184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8184u;
label_2b8184:
    // 0x2b8184: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x2B8184u;
    {
        const bool branch_taken_0x2b8184 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b8184) {
            ctx->pc = 0x2B8224u;
            goto label_2b8224;
        }
    }
    ctx->pc = 0x2B818Cu;
    // 0x2b818c: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x2b818cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2b8190: 0xc063dd0  jal         func_18F740
    ctx->pc = 0x2B8190u;
    SET_GPR_U32(ctx, 31, 0x2B8198u);
    ctx->pc = 0x18F740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F740u, 0x2B8190u, 0x2B8198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8198u;
label_2b8198:
    // 0x2b8198: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b8198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b819c: 0xc0ae4b4  jal         func_2B92D0
    ctx->pc = 0x2B819Cu;
    SET_GPR_U32(ctx, 31, 0x2B81A4u);
    ctx->pc = 0x2B92D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B92D0u, 0x2B819Cu, 0x2B81A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B81A4u;
label_2b81a4:
    // 0x2b81a4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2b81a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b81a8: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x2b81a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2b81ac: 0xc063dd0  jal         func_18F740
    ctx->pc = 0x2B81ACu;
    SET_GPR_U32(ctx, 31, 0x2B81B4u);
    ctx->pc = 0x18F740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F740u, 0x2B81ACu, 0x2B81B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B81B4u;
label_2b81b4:
    // 0x2b81b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b81b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b81b8: 0xc0513f0  jal         func_144FC0
    ctx->pc = 0x2B81B8u;
    SET_GPR_U32(ctx, 31, 0x2B81C0u);
    ctx->pc = 0x144FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144FC0u, 0x2B81B8u, 0x2B81C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B81C0u;
label_2b81c0:
    // 0x2b81c0: 0x305400ff  andi        $s4, $v0, 0xFF
    ctx->pc = 0x2b81c0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2b81c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b81c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b81c8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2b81c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b81cc: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2b81ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b81d0: 0xc099fdc  jal         func_267F70
    ctx->pc = 0x2B81D0u;
    SET_GPR_U32(ctx, 31, 0x2B81D8u);
    ctx->pc = 0x267F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267F70u, 0x2B81D0u, 0x2B81D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B81D8u;
label_2b81d8:
    // 0x2b81d8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B81D8u;
    {
        const bool branch_taken_0x2b81d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b81d8) {
            ctx->pc = 0x2B81FCu;
            goto label_2b81fc;
        }
    }
    ctx->pc = 0x2B81E0u;
    // 0x2b81e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b81e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b81e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b81e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b81e8: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2b81e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b81ec: 0xc099fdc  jal         func_267F70
    ctx->pc = 0x2B81ECu;
    SET_GPR_U32(ctx, 31, 0x2B81F4u);
    ctx->pc = 0x267F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267F70u, 0x2B81ECu, 0x2B81F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B81F4u;
label_2b81f4:
    // 0x2b81f4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B81F4u;
    {
        const bool branch_taken_0x2b81f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b81f4) {
            ctx->pc = 0x2B8204u;
            goto label_2b8204;
        }
    }
    ctx->pc = 0x2B81FCu;
label_2b81fc:
    // 0x2b81fc: 0x10000076  b           . + 4 + (0x76 << 2)
    ctx->pc = 0x2B81FCu;
    {
        const bool branch_taken_0x2b81fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b81fc) {
            ctx->pc = 0x2B83D8u;
            goto label_2b83d8;
        }
    }
    ctx->pc = 0x2B8204u;
label_2b8204:
    // 0x2b8204: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b8204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8208: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x2b8208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2b820c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2b820cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b8210: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2b8210u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b8214: 0xc09a060  jal         func_268180
    ctx->pc = 0x2B8214u;
    SET_GPR_U32(ctx, 31, 0x2B821Cu);
    ctx->pc = 0x268180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268180u, 0x2B8214u, 0x2B821Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B821Cu;
label_2b821c:
    // 0x2b821c: 0x1440006e  bnez        $v0, . + 4 + (0x6E << 2)
    ctx->pc = 0x2B821Cu;
    {
        const bool branch_taken_0x2b821c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b821c) {
            ctx->pc = 0x2B83D8u;
            goto label_2b83d8;
        }
    }
    ctx->pc = 0x2B8224u;
label_2b8224:
    // 0x2b8224: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b8224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b8228: 0x305300ff  andi        $s3, $v0, 0xFF
    ctx->pc = 0x2b8228u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2b822c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2b822cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2b8230: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x2b8230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x2b8234: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2B8234u;
    {
        const bool branch_taken_0x2b8234 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b8234) {
            ctx->pc = 0x2B82B4u;
            goto label_2b82b4;
        }
    }
    ctx->pc = 0x2B823Cu;
    // 0x2b823c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2b823cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2b8240: 0x8c44004c  lw          $a0, 0x4C($v0)
    ctx->pc = 0x2b8240u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x2b8244: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x2b8244u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2b8248: 0xc09c2c8  jal         func_270B20
    ctx->pc = 0x2B8248u;
    SET_GPR_U32(ctx, 31, 0x2B8250u);
    ctx->pc = 0x270B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270B20u, 0x2B8248u, 0x2B8250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8250u;
label_2b8250:
    // 0x2b8250: 0x305300ff  andi        $s3, $v0, 0xFF
    ctx->pc = 0x2b8250u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2b8254: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2b8254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2b8258: 0x8c44004c  lw          $a0, 0x4C($v0)
    ctx->pc = 0x2b8258u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x2b825c: 0xc09c5d8  jal         func_271760
    ctx->pc = 0x2B825Cu;
    SET_GPR_U32(ctx, 31, 0x2B8264u);
    ctx->pc = 0x271760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271760u, 0x2B825Cu, 0x2B8264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8264u;
label_2b8264:
    // 0x2b8264: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2b8264u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8268: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x2b8268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2b826c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b826cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b8270: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2B8270u;
    {
        const bool branch_taken_0x2b8270 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b8270) {
            ctx->pc = 0x2B82B4u;
            goto label_2b82b4;
        }
    }
    ctx->pc = 0x2B8278u;
    // 0x2b8278: 0x1240000e  beqz        $s2, . + 4 + (0xE << 2)
    ctx->pc = 0x2B8278u;
    {
        const bool branch_taken_0x2b8278 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b8278) {
            ctx->pc = 0x2B82B4u;
            goto label_2b82b4;
        }
    }
    ctx->pc = 0x2B8280u;
    // 0x2b8280: 0x8e44002c  lw          $a0, 0x2C($s2)
    ctx->pc = 0x2b8280u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x2b8284: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x2b8284u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x2b8288: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2B8288u;
    SET_GPR_U32(ctx, 31, 0x2B8290u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2B8288u, 0x2B8290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8290u;
label_2b8290:
    // 0x2b8290: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2b8290u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8294: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2b8294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8298: 0xc0ae148  jal         func_2B8520
    ctx->pc = 0x2B8298u;
    SET_GPR_U32(ctx, 31, 0x2B82A0u);
    ctx->pc = 0x2B8520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8520u, 0x2B8298u, 0x2B82A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B82A0u;
label_2b82a0:
    // 0x2b82a0: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2b82a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2b82a4: 0x8c44004c  lw          $a0, 0x4C($v0)
    ctx->pc = 0x2b82a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x2b82a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b82a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b82ac: 0xc09c3f0  jal         func_270FC0
    ctx->pc = 0x2B82ACu;
    SET_GPR_U32(ctx, 31, 0x2B82B4u);
    ctx->pc = 0x270FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270FC0u, 0x2B82ACu, 0x2B82B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B82B4u;
label_2b82b4:
    // 0x2b82b4: 0x1260001a  beqz        $s3, . + 4 + (0x1A << 2)
    ctx->pc = 0x2B82B4u;
    {
        const bool branch_taken_0x2b82b4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b82b4) {
            ctx->pc = 0x2B8320u;
            goto label_2b8320;
        }
    }
    ctx->pc = 0x2B82BCu;
    // 0x2b82bc: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2b82bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2b82c0: 0x8c42005c  lw          $v0, 0x5C($v0)
    ctx->pc = 0x2b82c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x2b82c4: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2B82C4u;
    {
        const bool branch_taken_0x2b82c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b82c4) {
            ctx->pc = 0x2B8320u;
            goto label_2b8320;
        }
    }
    ctx->pc = 0x2B82CCu;
    // 0x2b82cc: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2b82ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2b82d0: 0x8c44005c  lw          $a0, 0x5C($v0)
    ctx->pc = 0x2b82d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x2b82d4: 0xc0aeea0  jal         func_2BBA80
    ctx->pc = 0x2B82D4u;
    SET_GPR_U32(ctx, 31, 0x2B82DCu);
    ctx->pc = 0x2BBA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BBA80u, 0x2B82D4u, 0x2B82DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B82DCu;
label_2b82dc:
    // 0x2b82dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b82dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b82e0: 0xc09c020  jal         func_270080
    ctx->pc = 0x2B82E0u;
    SET_GPR_U32(ctx, 31, 0x2B82E8u);
    ctx->pc = 0x270080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270080u, 0x2B82E0u, 0x2B82E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B82E8u;
label_2b82e8:
    // 0x2b82e8: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2b82e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2b82ec: 0x8c42005c  lw          $v0, 0x5C($v0)
    ctx->pc = 0x2b82ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x2b82f0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2B82F0u;
    {
        const bool branch_taken_0x2b82f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b82f0) {
            ctx->pc = 0x2B8320u;
            goto label_2b8320;
        }
    }
    ctx->pc = 0x2B82F8u;
    // 0x2b82f8: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2b82f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2b82fc: 0x8c44005c  lw          $a0, 0x5C($v0)
    ctx->pc = 0x2b82fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x2b8300: 0xc0add78  jal         func_2B75E0
    ctx->pc = 0x2B8300u;
    SET_GPR_U32(ctx, 31, 0x2B8308u);
    ctx->pc = 0x2B75E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B75E0u, 0x2B8300u, 0x2B8308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8308u;
label_2b8308:
    // 0x2b8308: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2b8308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2b830c: 0x8c44005c  lw          $a0, 0x5C($v0)
    ctx->pc = 0x2b830cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x2b8310: 0xc119c5c  jal         func_467170
    ctx->pc = 0x2B8310u;
    SET_GPR_U32(ctx, 31, 0x2B8318u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x2B8310u, 0x2B8318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8318u;
label_2b8318:
    // 0x2b8318: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2b8318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2b831c: 0xac40005c  sw          $zero, 0x5C($v0)
    ctx->pc = 0x2b831cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 92), GPR_U32(ctx, 0));
label_2b8320:
    // 0x2b8320: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2b8320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2b8324: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x2b8324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x2b8328: 0xc0ae010  jal         func_2B8040
    ctx->pc = 0x2B8328u;
    SET_GPR_U32(ctx, 31, 0x2B8330u);
    ctx->pc = 0x2B8040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8040u, 0x2B8328u, 0x2B8330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8330u;
label_2b8330:
    // 0x2b8330: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2b8330u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8334: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2b8334u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8338: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x2B8338u;
    {
        const bool branch_taken_0x2b8338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b8338) {
            ctx->pc = 0x2B83BCu;
            goto label_2b83bc;
        }
    }
    ctx->pc = 0x2B8340u;
label_2b8340:
    // 0x2b8340: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2b8340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2b8344: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x2b8344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x2b8348: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b8348u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b834c: 0xc0ae138  jal         func_2B84E0
    ctx->pc = 0x2B834Cu;
    SET_GPR_U32(ctx, 31, 0x2B8354u);
    ctx->pc = 0x2B84E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B84E0u, 0x2B834Cu, 0x2B8354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8354u;
label_2b8354:
    // 0x2b8354: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2b8354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b8358: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2B8358u;
    {
        const bool branch_taken_0x2b8358 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b8358) {
            ctx->pc = 0x2B83B8u;
            goto label_2b83b8;
        }
    }
    ctx->pc = 0x2B8360u;
    // 0x2b8360: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2b8360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2b8364: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x2b8364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x2b8368: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b8368u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b836c: 0xc0ae138  jal         func_2B84E0
    ctx->pc = 0x2B836Cu;
    SET_GPR_U32(ctx, 31, 0x2B8374u);
    ctx->pc = 0x2B84E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B84E0u, 0x2B836Cu, 0x2B8374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8374u;
label_2b8374:
    // 0x2b8374: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2b8374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b8378: 0xc0add78  jal         func_2B75E0
    ctx->pc = 0x2B8378u;
    SET_GPR_U32(ctx, 31, 0x2B8380u);
    ctx->pc = 0x2B75E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B75E0u, 0x2B8378u, 0x2B8380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8380u;
label_2b8380:
    // 0x2b8380: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2b8380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2b8384: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x2b8384u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x2b8388: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b8388u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b838c: 0xc0ae138  jal         func_2B84E0
    ctx->pc = 0x2B838Cu;
    SET_GPR_U32(ctx, 31, 0x2B8394u);
    ctx->pc = 0x2B84E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B84E0u, 0x2B838Cu, 0x2B8394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8394u;
label_2b8394:
    // 0x2b8394: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2b8394u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b8398: 0xc119c5c  jal         func_467170
    ctx->pc = 0x2B8398u;
    SET_GPR_U32(ctx, 31, 0x2B83A0u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x2B8398u, 0x2B83A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B83A0u;
label_2b83a0:
    // 0x2b83a0: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2b83a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2b83a4: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x2b83a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x2b83a8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b83a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b83ac: 0xc0ae138  jal         func_2B84E0
    ctx->pc = 0x2B83ACu;
    SET_GPR_U32(ctx, 31, 0x2B83B4u);
    ctx->pc = 0x2B84E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B84E0u, 0x2B83ACu, 0x2B83B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B83B4u;
label_2b83b4:
    // 0x2b83b4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2b83b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_2b83b8:
    // 0x2b83b8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2b83b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2b83bc:
    // 0x2b83bc: 0x215102b  sltu        $v0, $s0, $s5
    ctx->pc = 0x2b83bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x2b83c0: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x2B83C0u;
    {
        const bool branch_taken_0x2b83c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b83c0) {
            ctx->pc = 0x2B8340u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b8340;
        }
    }
    ctx->pc = 0x2B83C8u;
    // 0x2b83c8: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2b83c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2b83cc: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x2b83ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x2b83d0: 0xc0ae104  jal         func_2B8410
    ctx->pc = 0x2B83D0u;
    SET_GPR_U32(ctx, 31, 0x2B83D8u);
    ctx->pc = 0x2B8410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8410u, 0x2B83D0u, 0x2B83D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B83D8u;
label_2b83d8:
    // 0x2b83d8: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2b83d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2b83dc: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2b83dcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2b83e0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2b83e0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2b83e4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2b83e4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b83e8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2b83e8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b83ec: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2b83ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b83f0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2b83f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b83f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2b83f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b83f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b83f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b83fc: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x2b83fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2b8400: 0x3e00008  jr          $ra
    ctx->pc = 0x2B8400u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B8400u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B8408u;
    // 0x2b8408: 0x0  nop
    ctx->pc = 0x2b8408u;
    // NOP
    // 0x2b840c: 0x0  nop
    ctx->pc = 0x2b840cu;
    // NOP
    ctx->pc = 0x2b8410u;
}
