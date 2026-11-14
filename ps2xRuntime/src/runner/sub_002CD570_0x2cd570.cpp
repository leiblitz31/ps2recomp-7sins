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

// Function: sub_002CD570
// Address: 0x2cd570 - 0x2ce020
void sub_002CD570_0x2cd570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CD570_0x2cd570");
#endif

    switch (ctx->pc) {
        case 0x2cd5b8u: goto label_2cd5b8;
        case 0x2cd5c8u: goto label_2cd5c8;
        case 0x2cd5f4u: goto label_2cd5f4;
        case 0x2cd608u: goto label_2cd608;
        case 0x2cd618u: goto label_2cd618;
        case 0x2cd638u: goto label_2cd638;
        case 0x2cd654u: goto label_2cd654;
        case 0x2cd660u: goto label_2cd660;
        case 0x2cd67cu: goto label_2cd67c;
        case 0x2cd69cu: goto label_2cd69c;
        case 0x2cd6b0u: goto label_2cd6b0;
        case 0x2cd6ecu: goto label_2cd6ec;
        case 0x2cd700u: goto label_2cd700;
        case 0x2cd718u: goto label_2cd718;
        case 0x2cd724u: goto label_2cd724;
        case 0x2cd734u: goto label_2cd734;
        case 0x2cd758u: goto label_2cd758;
        case 0x2cd778u: goto label_2cd778;
        case 0x2cd7a4u: goto label_2cd7a4;
        case 0x2cd7e0u: goto label_2cd7e0;
        case 0x2cd7f4u: goto label_2cd7f4;
        case 0x2cd80cu: goto label_2cd80c;
        case 0x2cd82cu: goto label_2cd82c;
        case 0x2cd854u: goto label_2cd854;
        case 0x2cd864u: goto label_2cd864;
        case 0x2cd898u: goto label_2cd898;
        case 0x2cd8acu: goto label_2cd8ac;
        case 0x2cd8bcu: goto label_2cd8bc;
        case 0x2cd8f0u: goto label_2cd8f0;
        case 0x2cd8fcu: goto label_2cd8fc;
        case 0x2cd90cu: goto label_2cd90c;
        case 0x2cd944u: goto label_2cd944;
        case 0x2cd958u: goto label_2cd958;
        case 0x2cd968u: goto label_2cd968;
        case 0x2cd978u: goto label_2cd978;
        case 0x2cd994u: goto label_2cd994;
        case 0x2cd9acu: goto label_2cd9ac;
        case 0x2cd9bcu: goto label_2cd9bc;
        case 0x2cd9d0u: goto label_2cd9d0;
        case 0x2cd9e0u: goto label_2cd9e0;
        case 0x2cda00u: goto label_2cda00;
        case 0x2cda34u: goto label_2cda34;
        case 0x2cda44u: goto label_2cda44;
        case 0x2cda6cu: goto label_2cda6c;
        case 0x2cda84u: goto label_2cda84;
        case 0x2cda90u: goto label_2cda90;
        case 0x2cdaa0u: goto label_2cdaa0;
        case 0x2cdad8u: goto label_2cdad8;
        case 0x2cdaecu: goto label_2cdaec;
        case 0x2cdb00u: goto label_2cdb00;
        case 0x2cdb14u: goto label_2cdb14;
        case 0x2cdb28u: goto label_2cdb28;
        case 0x2cdb40u: goto label_2cdb40;
        case 0x2cdb68u: goto label_2cdb68;
        case 0x2cdb88u: goto label_2cdb88;
        case 0x2cdbb0u: goto label_2cdbb0;
        case 0x2cdbc0u: goto label_2cdbc0;
        case 0x2cdbf4u: goto label_2cdbf4;
        case 0x2cdc00u: goto label_2cdc00;
        case 0x2cdc10u: goto label_2cdc10;
        case 0x2cdc48u: goto label_2cdc48;
        case 0x2cdc54u: goto label_2cdc54;
        case 0x2cdc64u: goto label_2cdc64;
        case 0x2cdc90u: goto label_2cdc90;
        case 0x2cdca0u: goto label_2cdca0;
        case 0x2cdca8u: goto label_2cdca8;
        case 0x2cdcb4u: goto label_2cdcb4;
        case 0x2cdcc4u: goto label_2cdcc4;
        case 0x2cdcd0u: goto label_2cdcd0;
        case 0x2cdce0u: goto label_2cdce0;
        case 0x2cdcfcu: goto label_2cdcfc;
        case 0x2cdd14u: goto label_2cdd14;
        case 0x2cdd2cu: goto label_2cdd2c;
        case 0x2cdd4cu: goto label_2cdd4c;
        case 0x2cdd74u: goto label_2cdd74;
        case 0x2cdd84u: goto label_2cdd84;
        case 0x2cddacu: goto label_2cddac;
        case 0x2cddb8u: goto label_2cddb8;
        case 0x2cddc8u: goto label_2cddc8;
        case 0x2cddf0u: goto label_2cddf0;
        case 0x2cde08u: goto label_2cde08;
        case 0x2cde34u: goto label_2cde34;
        case 0x2cde60u: goto label_2cde60;
        case 0x2cde74u: goto label_2cde74;
        case 0x2cdea0u: goto label_2cdea0;
        case 0x2cdebcu: goto label_2cdebc;
        case 0x2cded8u: goto label_2cded8;
        case 0x2cdefcu: goto label_2cdefc;
        case 0x2cdf24u: goto label_2cdf24;
        case 0x2cdf34u: goto label_2cdf34;
        case 0x2cdf68u: goto label_2cdf68;
        case 0x2cdf7cu: goto label_2cdf7c;
        case 0x2cdf94u: goto label_2cdf94;
        case 0x2cdfc4u: goto label_2cdfc4;
        case 0x2cdfd0u: goto label_2cdfd0;
        case 0x2cdfe0u: goto label_2cdfe0;
        default: break;
    }

    ctx->pc = 0x2cd570u;

    // 0x2cd570: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x2cd570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x2cd574: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2cd574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2cd578: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2cd578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x2cd57c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2cd57cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x2cd580: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2cd580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2cd584: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2cd584u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2cd588: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2cd588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2cd58c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2cd58cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2cd590: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2cd590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2cd594: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2cd594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2cd598: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2cd598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2cd59c: 0xafa40100  sw          $a0, 0x100($sp)
    ctx->pc = 0x2cd59cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 4));
    // 0x2cd5a0: 0xafa50110  sw          $a1, 0x110($sp)
    ctx->pc = 0x2cd5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 5));
    // 0x2cd5a4: 0xafa60120  sw          $a2, 0x120($sp)
    ctx->pc = 0x2cd5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 6));
    // 0x2cd5a8: 0xafa70130  sw          $a3, 0x130($sp)
    ctx->pc = 0x2cd5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 7));
    // 0x2cd5ac: 0x8fa40120  lw          $a0, 0x120($sp)
    ctx->pc = 0x2cd5acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2cd5b0: 0xc096e08  jal         func_25B820
    ctx->pc = 0x2CD5B0u;
    SET_GPR_U32(ctx, 31, 0x2CD5B8u);
    ctx->pc = 0x25B820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B820u, 0x2CD5B0u, 0x2CD5B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD5B8u;
label_2cd5b8:
    // 0x2cd5b8: 0xa3a200ff  sb          $v0, 0xFF($sp)
    ctx->pc = 0x2cd5b8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 255), (uint8_t)GPR_U32(ctx, 2));
    // 0x2cd5bc: 0x8fa40130  lw          $a0, 0x130($sp)
    ctx->pc = 0x2cd5bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2cd5c0: 0xc0913c8  jal         func_244F20
    ctx->pc = 0x2CD5C0u;
    SET_GPR_U32(ctx, 31, 0x2CD5C8u);
    ctx->pc = 0x244F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244F20u, 0x2CD5C0u, 0x2CD5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD5C8u;
label_2cd5c8:
    // 0x2cd5c8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2cd5c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2cd5cc: 0x10440004  beq         $v0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CD5CCu;
    {
        const bool branch_taken_0x2cd5cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x2cd5cc) {
            ctx->pc = 0x2CD5E0u;
            goto label_2cd5e0;
        }
    }
    ctx->pc = 0x2CD5D4u;
    // 0x2cd5d4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2cd5d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd5d8: 0x10000283  b           . + 4 + (0x283 << 2)
    ctx->pc = 0x2CD5D8u;
    {
        const bool branch_taken_0x2cd5d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd5d8) {
            ctx->pc = 0x2CDFE8u;
            goto label_2cdfe8;
        }
    }
    ctx->pc = 0x2CD5E0u;
label_2cd5e0:
    // 0x2cd5e0: 0x8fa50100  lw          $a1, 0x100($sp)
    ctx->pc = 0x2cd5e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2cd5e4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2cd5e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd5e8: 0x8fa50120  lw          $a1, 0x120($sp)
    ctx->pc = 0x2cd5e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2cd5ec: 0xc0b3bc0  jal         func_2CEF00
    ctx->pc = 0x2CD5ECu;
    SET_GPR_U32(ctx, 31, 0x2CD5F4u);
    ctx->pc = 0x2CEF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CEF00u, 0x2CD5ECu, 0x2CD5F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD5F4u;
label_2cd5f4:
    // 0x2cd5f4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2cd5f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd5f8: 0x8fa50110  lw          $a1, 0x110($sp)
    ctx->pc = 0x2cd5f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2cd5fc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2cd5fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd600: 0xc0968a8  jal         func_25A2A0
    ctx->pc = 0x2CD600u;
    SET_GPR_U32(ctx, 31, 0x2CD608u);
    ctx->pc = 0x25A2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A2A0u, 0x2CD600u, 0x2CD608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD608u;
label_2cd608:
    // 0x2cd608: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2cd608u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd60c: 0x8fa40130  lw          $a0, 0x130($sp)
    ctx->pc = 0x2cd60cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2cd610: 0xc085530  jal         func_2154C0
    ctx->pc = 0x2CD610u;
    SET_GPR_U32(ctx, 31, 0x2CD618u);
    ctx->pc = 0x2154C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154C0u, 0x2CD610u, 0x2CD618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD618u;
label_2cd618:
    // 0x2cd618: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x2cd618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2cd61c: 0x144401b3  bne         $v0, $a0, . + 4 + (0x1B3 << 2)
    ctx->pc = 0x2CD61Cu;
    {
        const bool branch_taken_0x2cd61c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x2cd61c) {
            ctx->pc = 0x2CDCECu;
            goto label_2cdcec;
        }
    }
    ctx->pc = 0x2CD624u;
    // 0x2cd624: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x2cd624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2cd628: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2cd628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd62c: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2cd62cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2cd630: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2CD630u;
    SET_GPR_U32(ctx, 31, 0x2CD638u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2CD630u, 0x2CD638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD638u;
label_2cd638:
    // 0x2cd638: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2cd638u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd63c: 0x93a200ff  lbu         $v0, 0xFF($sp)
    ctx->pc = 0x2cd63cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 255)));
    // 0x2cd640: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2CD640u;
    {
        const bool branch_taken_0x2cd640 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cd640) {
            ctx->pc = 0x2CD690u;
            goto label_2cd690;
        }
    }
    ctx->pc = 0x2CD648u;
    // 0x2cd648: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cd648u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd64c: 0xc096a18  jal         func_25A860
    ctx->pc = 0x2CD64Cu;
    SET_GPR_U32(ctx, 31, 0x2CD654u);
    ctx->pc = 0x25A860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A860u, 0x2CD64Cu, 0x2CD654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD654u;
label_2cd654:
    // 0x2cd654: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2cd654u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd658: 0xc0970c0  jal         func_25C300
    ctx->pc = 0x2CD658u;
    SET_GPR_U32(ctx, 31, 0x2CD660u);
    ctx->pc = 0x25C300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C300u, 0x2CD658u, 0x2CD660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD660u;
label_2cd660:
    // 0x2cd660: 0xafa200f8  sw          $v0, 0xF8($sp)
    ctx->pc = 0x2cd660u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 2));
    // 0x2cd664: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x2cd664u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2cd668: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2CD668u;
    {
        const bool branch_taken_0x2cd668 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd668) {
            ctx->pc = 0x2CD690u;
            goto label_2cd690;
        }
    }
    ctx->pc = 0x2CD670u;
    // 0x2cd670: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x2cd670u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2cd674: 0xc096e08  jal         func_25B820
    ctx->pc = 0x2CD674u;
    SET_GPR_U32(ctx, 31, 0x2CD67Cu);
    ctx->pc = 0x25B820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B820u, 0x2CD674u, 0x2CD67Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD67Cu;
label_2cd67c:
    // 0x2cd67c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CD67Cu;
    {
        const bool branch_taken_0x2cd67c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd67c) {
            ctx->pc = 0x2CD690u;
            goto label_2cd690;
        }
    }
    ctx->pc = 0x2CD684u;
    // 0x2cd684: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2cd684u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd688: 0x10000257  b           . + 4 + (0x257 << 2)
    ctx->pc = 0x2CD688u;
    {
        const bool branch_taken_0x2cd688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd688) {
            ctx->pc = 0x2CDFE8u;
            goto label_2cdfe8;
        }
    }
    ctx->pc = 0x2CD690u;
label_2cd690:
    // 0x2cd690: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cd690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd694: 0xc096fbc  jal         func_25BEF0
    ctx->pc = 0x2CD694u;
    SET_GPR_U32(ctx, 31, 0x2CD69Cu);
    ctx->pc = 0x25BEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BEF0u, 0x2CD694u, 0x2CD69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD69Cu;
label_2cd69c:
    // 0x2cd69c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2CD69Cu;
    {
        const bool branch_taken_0x2cd69c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd69c) {
            ctx->pc = 0x2CD6D4u;
            goto label_2cd6d4;
        }
    }
    ctx->pc = 0x2CD6A4u;
    // 0x2cd6a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cd6a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd6a8: 0xc096fbc  jal         func_25BEF0
    ctx->pc = 0x2CD6A8u;
    SET_GPR_U32(ctx, 31, 0x2CD6B0u);
    ctx->pc = 0x25BEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BEF0u, 0x2CD6A8u, 0x2CD6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD6B0u;
label_2cd6b0:
    // 0x2cd6b0: 0x8fa50110  lw          $a1, 0x110($sp)
    ctx->pc = 0x2cd6b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2cd6b4: 0x10450007  beq         $v0, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2CD6B4u;
    {
        const bool branch_taken_0x2cd6b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x2cd6b4) {
            ctx->pc = 0x2CD6D4u;
            goto label_2cd6d4;
        }
    }
    ctx->pc = 0x2CD6BCu;
    // 0x2cd6bc: 0x93a200ff  lbu         $v0, 0xFF($sp)
    ctx->pc = 0x2cd6bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 255)));
    // 0x2cd6c0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CD6C0u;
    {
        const bool branch_taken_0x2cd6c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cd6c0) {
            ctx->pc = 0x2CD6D4u;
            goto label_2cd6d4;
        }
    }
    ctx->pc = 0x2CD6C8u;
    // 0x2cd6c8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2cd6c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd6cc: 0x10000246  b           . + 4 + (0x246 << 2)
    ctx->pc = 0x2CD6CCu;
    {
        const bool branch_taken_0x2cd6cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd6cc) {
            ctx->pc = 0x2CDFE8u;
            goto label_2cdfe8;
        }
    }
    ctx->pc = 0x2CD6D4u;
label_2cd6d4:
    // 0x2cd6d4: 0x93a400ff  lbu         $a0, 0xFF($sp)
    ctx->pc = 0x2cd6d4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 255)));
    // 0x2cd6d8: 0x1480001b  bnez        $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2CD6D8u;
    {
        const bool branch_taken_0x2cd6d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cd6d8) {
            ctx->pc = 0x2CD748u;
            goto label_2cd748;
        }
    }
    ctx->pc = 0x2CD6E0u;
    // 0x2cd6e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cd6e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd6e4: 0xc096880  jal         func_25A200
    ctx->pc = 0x2CD6E4u;
    SET_GPR_U32(ctx, 31, 0x2CD6ECu);
    ctx->pc = 0x25A200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A200u, 0x2CD6E4u, 0x2CD6ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD6ECu;
label_2cd6ec:
    // 0x2cd6ec: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2CD6ECu;
    {
        const bool branch_taken_0x2cd6ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd6ec) {
            ctx->pc = 0x2CD710u;
            goto label_2cd710;
        }
    }
    ctx->pc = 0x2CD6F4u;
    // 0x2cd6f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cd6f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd6f8: 0xc096880  jal         func_25A200
    ctx->pc = 0x2CD6F8u;
    SET_GPR_U32(ctx, 31, 0x2CD700u);
    ctx->pc = 0x25A200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A200u, 0x2CD6F8u, 0x2CD700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD700u;
label_2cd700:
    // 0x2cd700: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x2cd700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2cd704: 0x8c64002c  lw          $a0, 0x2C($v1)
    ctx->pc = 0x2cd704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x2cd708: 0x1444000c  bne         $v0, $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x2CD708u;
    {
        const bool branch_taken_0x2cd708 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x2cd708) {
            ctx->pc = 0x2CD73Cu;
            goto label_2cd73c;
        }
    }
    ctx->pc = 0x2CD710u;
label_2cd710:
    // 0x2cd710: 0xc0b06cc  jal         func_2C1B30
    ctx->pc = 0x2CD710u;
    SET_GPR_U32(ctx, 31, 0x2CD718u);
    ctx->pc = 0x2C1B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B30u, 0x2CD710u, 0x2CD718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD718u;
label_2cd718:
    // 0x2cd718: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2cd718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd71c: 0xc0b06c4  jal         func_2C1B10
    ctx->pc = 0x2CD71Cu;
    SET_GPR_U32(ctx, 31, 0x2CD724u);
    ctx->pc = 0x2C1B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B10u, 0x2CD71Cu, 0x2CD724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD724u;
label_2cd724:
    // 0x2cd724: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2cd724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd728: 0x8fa50130  lw          $a1, 0x130($sp)
    ctx->pc = 0x2cd728u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2cd72c: 0xc0b4aac  jal         func_2D2AB0
    ctx->pc = 0x2CD72Cu;
    SET_GPR_U32(ctx, 31, 0x2CD734u);
    ctx->pc = 0x2D2AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2AB0u, 0x2CD72Cu, 0x2CD734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD734u;
label_2cd734:
    // 0x2cd734: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CD734u;
    {
        const bool branch_taken_0x2cd734 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd734) {
            ctx->pc = 0x2CD748u;
            goto label_2cd748;
        }
    }
    ctx->pc = 0x2CD73Cu;
label_2cd73c:
    // 0x2cd73c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2cd73cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd740: 0x10000229  b           . + 4 + (0x229 << 2)
    ctx->pc = 0x2CD740u;
    {
        const bool branch_taken_0x2cd740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd740) {
            ctx->pc = 0x2CDFE8u;
            goto label_2cdfe8;
        }
    }
    ctx->pc = 0x2CD748u;
label_2cd748:
    // 0x2cd748: 0x8fa40130  lw          $a0, 0x130($sp)
    ctx->pc = 0x2cd748u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2cd74c: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x2cd74cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2cd750: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2CD750u;
    SET_GPR_U32(ctx, 31, 0x2CD758u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2CD750u, 0x2CD758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD758u;
label_2cd758:
    // 0x2cd758: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x2cd758u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
    // 0x2cd75c: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x2cd75cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2cd760: 0x8fa50120  lw          $a1, 0x120($sp)
    ctx->pc = 0x2cd760u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2cd764: 0x8fa60110  lw          $a2, 0x110($sp)
    ctx->pc = 0x2cd764u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2cd768: 0x27a700f4  addiu       $a3, $sp, 0xF4
    ctx->pc = 0x2cd768u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 244));
    // 0x2cd76c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2cd76cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cd770: 0xc09b3f4  jal         func_26CFD0
    ctx->pc = 0x2CD770u;
    SET_GPR_U32(ctx, 31, 0x2CD778u);
    ctx->pc = 0x26CFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26CFD0u, 0x2CD770u, 0x2CD778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD778u;
label_2cd778:
    // 0x2cd778: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CD778u;
    {
        const bool branch_taken_0x2cd778 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cd778) {
            ctx->pc = 0x2CD78Cu;
            goto label_2cd78c;
        }
    }
    ctx->pc = 0x2CD780u;
    // 0x2cd780: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2cd780u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd784: 0x10000218  b           . + 4 + (0x218 << 2)
    ctx->pc = 0x2CD784u;
    {
        const bool branch_taken_0x2cd784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd784) {
            ctx->pc = 0x2CDFE8u;
            goto label_2cdfe8;
        }
    }
    ctx->pc = 0x2CD78Cu;
label_2cd78c:
    // 0x2cd78c: 0xa3a000fd  sb          $zero, 0xFD($sp)
    ctx->pc = 0x2cd78cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 253), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cd790: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2CD790u;
    {
        const bool branch_taken_0x2cd790 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd790) {
            ctx->pc = 0x2CD7B4u;
            goto label_2cd7b4;
        }
    }
    ctx->pc = 0x2CD798u;
    // 0x2cd798: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cd798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd79c: 0xc0968a8  jal         func_25A2A0
    ctx->pc = 0x2CD79Cu;
    SET_GPR_U32(ctx, 31, 0x2CD7A4u);
    ctx->pc = 0x25A2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A2A0u, 0x2CD79Cu, 0x2CD7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD7A4u;
label_2cd7a4:
    // 0x2cd7a4: 0x14510003  bne         $v0, $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CD7A4u;
    {
        const bool branch_taken_0x2cd7a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x2cd7a4) {
            ctx->pc = 0x2CD7B4u;
            goto label_2cd7b4;
        }
    }
    ctx->pc = 0x2CD7ACu;
    // 0x2cd7ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cd7acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cd7b0: 0xa3a200fd  sb          $v0, 0xFD($sp)
    ctx->pc = 0x2cd7b0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 253), (uint8_t)GPR_U32(ctx, 2));
label_2cd7b4:
    // 0x2cd7b4: 0x93a400fd  lbu         $a0, 0xFD($sp)
    ctx->pc = 0x2cd7b4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 253)));
    // 0x2cd7b8: 0x4102b  sltu        $v0, $zero, $a0
    ctx->pc = 0x2cd7b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2cd7bc: 0x38440001  xori        $a0, $v0, 0x1
    ctx->pc = 0x2cd7bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2cd7c0: 0xa3a400fe  sb          $a0, 0xFE($sp)
    ctx->pc = 0x2cd7c0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 254), (uint8_t)GPR_U32(ctx, 4));
    // 0x2cd7c4: 0x93a200fe  lbu         $v0, 0xFE($sp)
    ctx->pc = 0x2cd7c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 254)));
    // 0x2cd7c8: 0x104000c5  beqz        $v0, . + 4 + (0xC5 << 2)
    ctx->pc = 0x2CD7C8u;
    {
        const bool branch_taken_0x2cd7c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd7c8) {
            ctx->pc = 0x2CDAE0u;
            goto label_2cdae0;
        }
    }
    ctx->pc = 0x2CD7D0u;
    // 0x2cd7d0: 0x8fa50110  lw          $a1, 0x110($sp)
    ctx->pc = 0x2cd7d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2cd7d4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2cd7d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd7d8: 0xc0480fc  jal         func_1203F0
    ctx->pc = 0x2CD7D8u;
    SET_GPR_U32(ctx, 31, 0x2CD7E0u);
    ctx->pc = 0x1203F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1203F0u, 0x2CD7D8u, 0x2CD7E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD7E0u;
label_2cd7e0:
    // 0x2cd7e0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2CD7E0u;
    {
        const bool branch_taken_0x2cd7e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cd7e0) {
            ctx->pc = 0x2CD7FCu;
            goto label_2cd7fc;
        }
    }
    ctx->pc = 0x2CD7E8u;
    // 0x2cd7e8: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x2cd7e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2cd7ec: 0xc09b35c  jal         func_26CD70
    ctx->pc = 0x2CD7ECu;
    SET_GPR_U32(ctx, 31, 0x2CD7F4u);
    ctx->pc = 0x26CD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26CD70u, 0x2CD7ECu, 0x2CD7F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD7F4u;
label_2cd7f4:
    // 0x2cd7f4: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x2CD7F4u;
    {
        const bool branch_taken_0x2cd7f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd7f4) {
            ctx->pc = 0x2CD898u;
            goto label_2cd898;
        }
    }
    ctx->pc = 0x2CD7FCu;
label_2cd7fc:
    // 0x2cd7fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2cd7fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd800: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x2cd800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2cd804: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2CD804u;
    SET_GPR_U32(ctx, 31, 0x2CD80Cu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2CD804u, 0x2CD80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD80Cu;
label_2cd80c:
    // 0x2cd80c: 0xafa200ec  sw          $v0, 0xEC($sp)
    ctx->pc = 0x2cd80cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 2));
    // 0x2cd810: 0x8fa400ec  lw          $a0, 0xEC($sp)
    ctx->pc = 0x2cd810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x2cd814: 0x8fa50110  lw          $a1, 0x110($sp)
    ctx->pc = 0x2cd814u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2cd818: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2cd818u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd81c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2cd81cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd820: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2cd820u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd824: 0xc09bca0  jal         func_26F280
    ctx->pc = 0x2CD824u;
    SET_GPR_U32(ctx, 31, 0x2CD82Cu);
    ctx->pc = 0x26F280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F280u, 0x2CD824u, 0x2CD82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD82Cu;
label_2cd82c:
    // 0x2cd82c: 0xafa200e8  sw          $v0, 0xE8($sp)
    ctx->pc = 0x2cd82cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 2));
    // 0x2cd830: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2cd830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2cd834: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CD834u;
    {
        const bool branch_taken_0x2cd834 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cd834) {
            ctx->pc = 0x2CD848u;
            goto label_2cd848;
        }
    }
    ctx->pc = 0x2CD83Cu;
    // 0x2cd83c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2cd83cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd840: 0x100001e9  b           . + 4 + (0x1E9 << 2)
    ctx->pc = 0x2CD840u;
    {
        const bool branch_taken_0x2cd840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd840) {
            ctx->pc = 0x2CDFE8u;
            goto label_2cdfe8;
        }
    }
    ctx->pc = 0x2CD848u;
label_2cd848:
    // 0x2cd848: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x2cd848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2cd84c: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x2CD84Cu;
    SET_GPR_U32(ctx, 31, 0x2CD854u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x2CD84Cu, 0x2CD854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD854u;
label_2cd854:
    // 0x2cd854: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x2cd854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2cd858: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2cd858u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd85c: 0xc0400e0  jal         func_100380
    ctx->pc = 0x2CD85Cu;
    SET_GPR_U32(ctx, 31, 0x2CD864u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x2CD85Cu, 0x2CD864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD864u;
label_2cd864:
    // 0x2cd864: 0xafa200e4  sw          $v0, 0xE4($sp)
    ctx->pc = 0x2cd864u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 2));
    // 0x2cd868: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2cd868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2cd86c: 0x8fa200e4  lw          $v0, 0xE4($sp)
    ctx->pc = 0x2cd86cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x2cd870: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2cd870u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2cd874: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2cd874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cd878: 0x8fa200e4  lw          $v0, 0xE4($sp)
    ctx->pc = 0x2cd878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x2cd87c: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x2cd87cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x2cd880: 0x8fa200e4  lw          $v0, 0xE4($sp)
    ctx->pc = 0x2cd880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x2cd884: 0xac510008  sw          $s1, 0x8($v0)
    ctx->pc = 0x2cd884u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 17));
    // 0x2cd888: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x2cd888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2cd88c: 0x8fa500e4  lw          $a1, 0xE4($sp)
    ctx->pc = 0x2cd88cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x2cd890: 0xc096c40  jal         func_25B100
    ctx->pc = 0x2CD890u;
    SET_GPR_U32(ctx, 31, 0x2CD898u);
    ctx->pc = 0x25B100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B100u, 0x2CD890u, 0x2CD898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD898u;
label_2cd898:
    // 0x2cd898: 0x1640002c  bnez        $s2, . + 4 + (0x2C << 2)
    ctx->pc = 0x2CD898u;
    {
        const bool branch_taken_0x2cd898 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cd898) {
            ctx->pc = 0x2CD94Cu;
            goto label_2cd94c;
        }
    }
    ctx->pc = 0x2CD8A0u;
    // 0x2cd8a0: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x2cd8a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2cd8a4: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x2CD8A4u;
    SET_GPR_U32(ctx, 31, 0x2CD8ACu);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x2CD8A4u, 0x2CD8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD8ACu;
label_2cd8ac:
    // 0x2cd8ac: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x2cd8acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2cd8b0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2cd8b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd8b4: 0xc0400e0  jal         func_100380
    ctx->pc = 0x2CD8B4u;
    SET_GPR_U32(ctx, 31, 0x2CD8BCu);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x2CD8B4u, 0x2CD8BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD8BCu;
label_2cd8bc:
    // 0x2cd8bc: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x2cd8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
    // 0x2cd8c0: 0x8fa30130  lw          $v1, 0x130($sp)
    ctx->pc = 0x2cd8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2cd8c4: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x2cd8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2cd8c8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2cd8c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2cd8cc: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x2cd8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2cd8d0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2cd8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2cd8d4: 0x8fa30130  lw          $v1, 0x130($sp)
    ctx->pc = 0x2cd8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2cd8d8: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x2cd8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2cd8dc: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x2cd8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x2cd8e0: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x2cd8e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2cd8e4: 0x8fa500e0  lw          $a1, 0xE0($sp)
    ctx->pc = 0x2cd8e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2cd8e8: 0xc096c40  jal         func_25B100
    ctx->pc = 0x2CD8E8u;
    SET_GPR_U32(ctx, 31, 0x2CD8F0u);
    ctx->pc = 0x25B100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B100u, 0x2CD8E8u, 0x2CD8F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD8F0u;
label_2cd8f0:
    // 0x2cd8f0: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x2cd8f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2cd8f4: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x2CD8F4u;
    SET_GPR_U32(ctx, 31, 0x2CD8FCu);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x2CD8F4u, 0x2CD8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD8FCu;
label_2cd8fc:
    // 0x2cd8fc: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x2cd8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2cd900: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2cd900u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd904: 0xc0400e0  jal         func_100380
    ctx->pc = 0x2CD904u;
    SET_GPR_U32(ctx, 31, 0x2CD90Cu);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x2CD904u, 0x2CD90Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD90Cu;
label_2cd90c:
    // 0x2cd90c: 0xafa200dc  sw          $v0, 0xDC($sp)
    ctx->pc = 0x2cd90cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 2));
    // 0x2cd910: 0x8fa30130  lw          $v1, 0x130($sp)
    ctx->pc = 0x2cd910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2cd914: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x2cd914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x2cd918: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2cd918u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2cd91c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2cd91cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2cd920: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x2cd920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x2cd924: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x2cd924u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x2cd928: 0x8fa30130  lw          $v1, 0x130($sp)
    ctx->pc = 0x2cd928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2cd92c: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x2cd92cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x2cd930: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x2cd930u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x2cd934: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x2cd934u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2cd938: 0x8fa500dc  lw          $a1, 0xDC($sp)
    ctx->pc = 0x2cd938u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x2cd93c: 0xc096c40  jal         func_25B100
    ctx->pc = 0x2CD93Cu;
    SET_GPR_U32(ctx, 31, 0x2CD944u);
    ctx->pc = 0x25B100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B100u, 0x2CD93Cu, 0x2CD944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD944u;
label_2cd944:
    // 0x2cd944: 0x100000c0  b           . + 4 + (0xC0 << 2)
    ctx->pc = 0x2CD944u;
    {
        const bool branch_taken_0x2cd944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd944) {
            ctx->pc = 0x2CDC48u;
            goto label_2cdc48;
        }
    }
    ctx->pc = 0x2CD94Cu;
label_2cd94c:
    // 0x2cd94c: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x2cd94cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2cd950: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x2CD950u;
    SET_GPR_U32(ctx, 31, 0x2CD958u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x2CD950u, 0x2CD958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD958u;
label_2cd958:
    // 0x2cd958: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x2cd958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2cd95c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2cd95cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd960: 0xc0400e0  jal         func_100380
    ctx->pc = 0x2CD960u;
    SET_GPR_U32(ctx, 31, 0x2CD968u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x2CD960u, 0x2CD968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD968u;
label_2cd968:
    // 0x2cd968: 0xafa200d8  sw          $v0, 0xD8($sp)
    ctx->pc = 0x2cd968u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
    // 0x2cd96c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cd96cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd970: 0xc0968a8  jal         func_25A2A0
    ctx->pc = 0x2CD970u;
    SET_GPR_U32(ctx, 31, 0x2CD978u);
    ctx->pc = 0x25A2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A2A0u, 0x2CD970u, 0x2CD978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD978u;
label_2cd978:
    // 0x2cd978: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x2cd978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x2cd97c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2cd97cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2cd980: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x2cd980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x2cd984: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2cd984u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2cd988: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cd988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd98c: 0xc0968a8  jal         func_25A2A0
    ctx->pc = 0x2CD98Cu;
    SET_GPR_U32(ctx, 31, 0x2CD994u);
    ctx->pc = 0x25A2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A2A0u, 0x2CD98Cu, 0x2CD994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD994u;
label_2cd994:
    // 0x2cd994: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x2cd994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x2cd998: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x2cd998u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x2cd99c: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x2cd99cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2cd9a0: 0x8fa500d8  lw          $a1, 0xD8($sp)
    ctx->pc = 0x2cd9a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x2cd9a4: 0xc096c40  jal         func_25B100
    ctx->pc = 0x2CD9A4u;
    SET_GPR_U32(ctx, 31, 0x2CD9ACu);
    ctx->pc = 0x25B100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B100u, 0x2CD9A4u, 0x2CD9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD9ACu;
label_2cd9ac:
    // 0x2cd9ac: 0xafa000d4  sw          $zero, 0xD4($sp)
    ctx->pc = 0x2cd9acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 0));
    // 0x2cd9b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cd9b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd9b4: 0xc0968a8  jal         func_25A2A0
    ctx->pc = 0x2CD9B4u;
    SET_GPR_U32(ctx, 31, 0x2CD9BCu);
    ctx->pc = 0x25A2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A2A0u, 0x2CD9B4u, 0x2CD9BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD9BCu;
label_2cd9bc:
    // 0x2cd9bc: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2CD9BCu;
    {
        const bool branch_taken_0x2cd9bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd9bc) {
            ctx->pc = 0x2CDA1Cu;
            goto label_2cda1c;
        }
    }
    ctx->pc = 0x2CD9C4u;
    // 0x2cd9c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cd9c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd9c8: 0xc0968a8  jal         func_25A2A0
    ctx->pc = 0x2CD9C8u;
    SET_GPR_U32(ctx, 31, 0x2CD9D0u);
    ctx->pc = 0x25A2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A2A0u, 0x2CD9C8u, 0x2CD9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD9D0u;
label_2cd9d0:
    // 0x2cd9d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2cd9d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd9d4: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x2cd9d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2cd9d8: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2CD9D8u;
    SET_GPR_U32(ctx, 31, 0x2CD9E0u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2CD9D8u, 0x2CD9E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD9E0u;
label_2cd9e0:
    // 0x2cd9e0: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x2cd9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
    // 0x2cd9e4: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x2cd9e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2cd9e8: 0x8fa50110  lw          $a1, 0x110($sp)
    ctx->pc = 0x2cd9e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2cd9ec: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2cd9ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd9f0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2cd9f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd9f4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2cd9f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cd9f8: 0xc09bca0  jal         func_26F280
    ctx->pc = 0x2CD9F8u;
    SET_GPR_U32(ctx, 31, 0x2CDA00u);
    ctx->pc = 0x26F280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F280u, 0x2CD9F8u, 0x2CDA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDA00u;
label_2cda00:
    // 0x2cda00: 0xafa200d4  sw          $v0, 0xD4($sp)
    ctx->pc = 0x2cda00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 2));
    // 0x2cda04: 0x8fa200d4  lw          $v0, 0xD4($sp)
    ctx->pc = 0x2cda04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x2cda08: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2CDA08u;
    {
        const bool branch_taken_0x2cda08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cda08) {
            ctx->pc = 0x2CDA28u;
            goto label_2cda28;
        }
    }
    ctx->pc = 0x2CDA10u;
    // 0x2cda10: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2cda10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cda14: 0x10000174  b           . + 4 + (0x174 << 2)
    ctx->pc = 0x2CDA14u;
    {
        const bool branch_taken_0x2cda14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cda14) {
            ctx->pc = 0x2CDFE8u;
            goto label_2cdfe8;
        }
    }
    ctx->pc = 0x2CDA1Cu;
label_2cda1c:
    // 0x2cda1c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2cda1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cda20: 0x10000171  b           . + 4 + (0x171 << 2)
    ctx->pc = 0x2CDA20u;
    {
        const bool branch_taken_0x2cda20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cda20) {
            ctx->pc = 0x2CDFE8u;
            goto label_2cdfe8;
        }
    }
    ctx->pc = 0x2CDA28u;
label_2cda28:
    // 0x2cda28: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x2cda28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2cda2c: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x2CDA2Cu;
    SET_GPR_U32(ctx, 31, 0x2CDA34u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x2CDA2Cu, 0x2CDA34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDA34u;
label_2cda34:
    // 0x2cda34: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x2cda34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2cda38: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2cda38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cda3c: 0xc0400e0  jal         func_100380
    ctx->pc = 0x2CDA3Cu;
    SET_GPR_U32(ctx, 31, 0x2CDA44u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x2CDA3Cu, 0x2CDA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDA44u;
label_2cda44:
    // 0x2cda44: 0xafa200cc  sw          $v0, 0xCC($sp)
    ctx->pc = 0x2cda44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 2));
    // 0x2cda48: 0x8fa300d4  lw          $v1, 0xD4($sp)
    ctx->pc = 0x2cda48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x2cda4c: 0x8fa200cc  lw          $v0, 0xCC($sp)
    ctx->pc = 0x2cda4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x2cda50: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2cda50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2cda54: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2cda54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cda58: 0x8fa200cc  lw          $v0, 0xCC($sp)
    ctx->pc = 0x2cda58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x2cda5c: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x2cda5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x2cda60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cda60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cda64: 0xc0968a8  jal         func_25A2A0
    ctx->pc = 0x2CDA64u;
    SET_GPR_U32(ctx, 31, 0x2CDA6Cu);
    ctx->pc = 0x25A2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A2A0u, 0x2CDA64u, 0x2CDA6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDA6Cu;
label_2cda6c:
    // 0x2cda6c: 0x8fa300cc  lw          $v1, 0xCC($sp)
    ctx->pc = 0x2cda6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x2cda70: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x2cda70u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x2cda74: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x2cda74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2cda78: 0x8fa500cc  lw          $a1, 0xCC($sp)
    ctx->pc = 0x2cda78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x2cda7c: 0xc096c40  jal         func_25B100
    ctx->pc = 0x2CDA7Cu;
    SET_GPR_U32(ctx, 31, 0x2CDA84u);
    ctx->pc = 0x25B100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B100u, 0x2CDA7Cu, 0x2CDA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDA84u;
label_2cda84:
    // 0x2cda84: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x2cda84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2cda88: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x2CDA88u;
    SET_GPR_U32(ctx, 31, 0x2CDA90u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x2CDA88u, 0x2CDA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDA90u;
label_2cda90:
    // 0x2cda90: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x2cda90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2cda94: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2cda94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cda98: 0xc0400e0  jal         func_100380
    ctx->pc = 0x2CDA98u;
    SET_GPR_U32(ctx, 31, 0x2CDAA0u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x2CDA98u, 0x2CDAA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDAA0u;
label_2cdaa0:
    // 0x2cdaa0: 0xafa200c8  sw          $v0, 0xC8($sp)
    ctx->pc = 0x2cdaa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 2));
    // 0x2cdaa4: 0x8fa30130  lw          $v1, 0x130($sp)
    ctx->pc = 0x2cdaa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2cdaa8: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x2cdaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2cdaac: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2cdaacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2cdab0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2cdab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2cdab4: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x2cdab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2cdab8: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x2cdab8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x2cdabc: 0x8fa30130  lw          $v1, 0x130($sp)
    ctx->pc = 0x2cdabcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2cdac0: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x2cdac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2cdac4: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x2cdac4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x2cdac8: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x2cdac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2cdacc: 0x8fa500c8  lw          $a1, 0xC8($sp)
    ctx->pc = 0x2cdaccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2cdad0: 0xc096c40  jal         func_25B100
    ctx->pc = 0x2CDAD0u;
    SET_GPR_U32(ctx, 31, 0x2CDAD8u);
    ctx->pc = 0x25B100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B100u, 0x2CDAD0u, 0x2CDAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDAD8u;
label_2cdad8:
    // 0x2cdad8: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x2CDAD8u;
    {
        const bool branch_taken_0x2cdad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cdad8) {
            ctx->pc = 0x2CDC48u;
            goto label_2cdc48;
        }
    }
    ctx->pc = 0x2CDAE0u;
label_2cdae0:
    // 0x2cdae0: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x2cdae0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2cdae4: 0xc0480fc  jal         func_1203F0
    ctx->pc = 0x2CDAE4u;
    SET_GPR_U32(ctx, 31, 0x2CDAECu);
    ctx->pc = 0x1203F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1203F0u, 0x2CDAE4u, 0x2CDAECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDAECu;
label_2cdaec:
    // 0x2cdaec: 0x12420041  beq         $s2, $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x2CDAECu;
    {
        const bool branch_taken_0x2cdaec = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x2cdaec) {
            ctx->pc = 0x2CDBF4u;
            goto label_2cdbf4;
        }
    }
    ctx->pc = 0x2CDAF4u;
    // 0x2cdaf4: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x2cdaf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2cdaf8: 0xc09b35c  jal         func_26CD70
    ctx->pc = 0x2CDAF8u;
    SET_GPR_U32(ctx, 31, 0x2CDB00u);
    ctx->pc = 0x26CD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26CD70u, 0x2CDAF8u, 0x2CDB00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDB00u;
label_2cdb00:
    // 0x2cdb00: 0x1242003c  beq         $s2, $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x2CDB00u;
    {
        const bool branch_taken_0x2cdb00 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x2cdb00) {
            ctx->pc = 0x2CDBF4u;
            goto label_2cdbf4;
        }
    }
    ctx->pc = 0x2CDB08u;
    // 0x2cdb08: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x2cdb08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2cdb0c: 0xc0480fc  jal         func_1203F0
    ctx->pc = 0x2CDB0Cu;
    SET_GPR_U32(ctx, 31, 0x2CDB14u);
    ctx->pc = 0x1203F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1203F0u, 0x2CDB0Cu, 0x2CDB14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDB14u;
label_2cdb14:
    // 0x2cdb14: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2CDB14u;
    {
        const bool branch_taken_0x2cdb14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cdb14) {
            ctx->pc = 0x2CDB34u;
            goto label_2cdb34;
        }
    }
    ctx->pc = 0x2CDB1Cu;
    // 0x2cdb1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cdb1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdb20: 0xc0968a8  jal         func_25A2A0
    ctx->pc = 0x2CDB20u;
    SET_GPR_U32(ctx, 31, 0x2CDB28u);
    ctx->pc = 0x25A2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A2A0u, 0x2CDB20u, 0x2CDB28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDB28u;
label_2cdb28:
    // 0x2cdb28: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2cdb28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdb2c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2CDB2Cu;
    {
        const bool branch_taken_0x2cdb2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cdb2c) {
            ctx->pc = 0x2CDB44u;
            goto label_2cdb44;
        }
    }
    ctx->pc = 0x2CDB34u;
label_2cdb34:
    // 0x2cdb34: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x2cdb34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2cdb38: 0xc0968a8  jal         func_25A2A0
    ctx->pc = 0x2CDB38u;
    SET_GPR_U32(ctx, 31, 0x2CDB40u);
    ctx->pc = 0x25A2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A2A0u, 0x2CDB38u, 0x2CDB40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDB40u;
label_2cdb40:
    // 0x2cdb40: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2cdb40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cdb44:
    // 0x2cdb44: 0x16200004  bnez        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CDB44u;
    {
        const bool branch_taken_0x2cdb44 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cdb44) {
            ctx->pc = 0x2CDB58u;
            goto label_2cdb58;
        }
    }
    ctx->pc = 0x2CDB4Cu;
    // 0x2cdb4c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2cdb4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdb50: 0x10000125  b           . + 4 + (0x125 << 2)
    ctx->pc = 0x2CDB50u;
    {
        const bool branch_taken_0x2cdb50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cdb50) {
            ctx->pc = 0x2CDFE8u;
            goto label_2cdfe8;
        }
    }
    ctx->pc = 0x2CDB58u;
label_2cdb58:
    // 0x2cdb58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2cdb58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdb5c: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x2cdb5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2cdb60: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2CDB60u;
    SET_GPR_U32(ctx, 31, 0x2CDB68u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2CDB60u, 0x2CDB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDB68u;
label_2cdb68:
    // 0x2cdb68: 0xafa200c4  sw          $v0, 0xC4($sp)
    ctx->pc = 0x2cdb68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 2));
    // 0x2cdb6c: 0x8fa400c4  lw          $a0, 0xC4($sp)
    ctx->pc = 0x2cdb6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x2cdb70: 0x8fa50110  lw          $a1, 0x110($sp)
    ctx->pc = 0x2cdb70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2cdb74: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2cdb74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdb78: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2cdb78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdb7c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2cdb7cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdb80: 0xc09bca0  jal         func_26F280
    ctx->pc = 0x2CDB80u;
    SET_GPR_U32(ctx, 31, 0x2CDB88u);
    ctx->pc = 0x26F280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F280u, 0x2CDB80u, 0x2CDB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDB88u;
label_2cdb88:
    // 0x2cdb88: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x2cdb88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x2cdb8c: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2cdb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2cdb90: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CDB90u;
    {
        const bool branch_taken_0x2cdb90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cdb90) {
            ctx->pc = 0x2CDBA4u;
            goto label_2cdba4;
        }
    }
    ctx->pc = 0x2CDB98u;
    // 0x2cdb98: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2cdb98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdb9c: 0x10000112  b           . + 4 + (0x112 << 2)
    ctx->pc = 0x2CDB9Cu;
    {
        const bool branch_taken_0x2cdb9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cdb9c) {
            ctx->pc = 0x2CDFE8u;
            goto label_2cdfe8;
        }
    }
    ctx->pc = 0x2CDBA4u;
label_2cdba4:
    // 0x2cdba4: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x2cdba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2cdba8: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x2CDBA8u;
    SET_GPR_U32(ctx, 31, 0x2CDBB0u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x2CDBA8u, 0x2CDBB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDBB0u;
label_2cdbb0:
    // 0x2cdbb0: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x2cdbb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2cdbb4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2cdbb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdbb8: 0xc0400e0  jal         func_100380
    ctx->pc = 0x2CDBB8u;
    SET_GPR_U32(ctx, 31, 0x2CDBC0u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x2CDBB8u, 0x2CDBC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDBC0u;
label_2cdbc0:
    // 0x2cdbc0: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x2cdbc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
    // 0x2cdbc4: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x2cdbc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2cdbc8: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x2cdbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x2cdbcc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2cdbccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2cdbd0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2cdbd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cdbd4: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x2cdbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x2cdbd8: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x2cdbd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x2cdbdc: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x2cdbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x2cdbe0: 0xac510008  sw          $s1, 0x8($v0)
    ctx->pc = 0x2cdbe0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 17));
    // 0x2cdbe4: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x2cdbe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2cdbe8: 0x8fa500bc  lw          $a1, 0xBC($sp)
    ctx->pc = 0x2cdbe8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x2cdbec: 0xc096c40  jal         func_25B100
    ctx->pc = 0x2CDBECu;
    SET_GPR_U32(ctx, 31, 0x2CDBF4u);
    ctx->pc = 0x25B100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B100u, 0x2CDBECu, 0x2CDBF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDBF4u;
label_2cdbf4:
    // 0x2cdbf4: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x2cdbf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2cdbf8: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x2CDBF8u;
    SET_GPR_U32(ctx, 31, 0x2CDC00u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x2CDBF8u, 0x2CDC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDC00u;
label_2cdc00:
    // 0x2cdc00: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x2cdc00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2cdc04: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2cdc04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdc08: 0xc0400e0  jal         func_100380
    ctx->pc = 0x2CDC08u;
    SET_GPR_U32(ctx, 31, 0x2CDC10u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x2CDC08u, 0x2CDC10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDC10u;
label_2cdc10:
    // 0x2cdc10: 0xafa200b8  sw          $v0, 0xB8($sp)
    ctx->pc = 0x2cdc10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
    // 0x2cdc14: 0x8fa30130  lw          $v1, 0x130($sp)
    ctx->pc = 0x2cdc14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2cdc18: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2cdc18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2cdc1c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2cdc1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2cdc20: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2cdc20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2cdc24: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2cdc24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2cdc28: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x2cdc28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x2cdc2c: 0x8fa30130  lw          $v1, 0x130($sp)
    ctx->pc = 0x2cdc2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2cdc30: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2cdc30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2cdc34: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x2cdc34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x2cdc38: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x2cdc38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2cdc3c: 0x8fa500b8  lw          $a1, 0xB8($sp)
    ctx->pc = 0x2cdc3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2cdc40: 0xc096c40  jal         func_25B100
    ctx->pc = 0x2CDC40u;
    SET_GPR_U32(ctx, 31, 0x2CDC48u);
    ctx->pc = 0x25B100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B100u, 0x2CDC40u, 0x2CDC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDC48u;
label_2cdc48:
    // 0x2cdc48: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x2cdc48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2cdc4c: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x2CDC4Cu;
    SET_GPR_U32(ctx, 31, 0x2CDC54u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x2CDC4Cu, 0x2CDC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDC54u;
label_2cdc54:
    // 0x2cdc54: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x2cdc54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2cdc58: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2cdc58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdc5c: 0xc0400e0  jal         func_100380
    ctx->pc = 0x2CDC5Cu;
    SET_GPR_U32(ctx, 31, 0x2CDC64u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x2CDC5Cu, 0x2CDC64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDC64u;
label_2cdc64:
    // 0x2cdc64: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x2cdc64u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdc68: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x2cdc68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2cdc6c: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x2cdc6cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x2cdc70: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2cdc70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2cdc74: 0xafc20004  sw          $v0, 0x4($fp)
    ctx->pc = 0x2cdc74u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
    // 0x2cdc78: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x2cdc78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2cdc7c: 0xafc20008  sw          $v0, 0x8($fp)
    ctx->pc = 0x2cdc7cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
    // 0x2cdc80: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x2cdc80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2cdc84: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x2cdc84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdc88: 0xc096c40  jal         func_25B100
    ctx->pc = 0x2CDC88u;
    SET_GPR_U32(ctx, 31, 0x2CDC90u);
    ctx->pc = 0x25B100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B100u, 0x2CDC88u, 0x2CDC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDC90u;
label_2cdc90:
    // 0x2cdc90: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x2cdc90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2cdc94: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2cdc94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdc98: 0xc096f9c  jal         func_25BE70
    ctx->pc = 0x2CDC98u;
    SET_GPR_U32(ctx, 31, 0x2CDCA0u);
    ctx->pc = 0x25BE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BE70u, 0x2CDC98u, 0x2CDCA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDCA0u;
label_2cdca0:
    // 0x2cdca0: 0xc0b06cc  jal         func_2C1B30
    ctx->pc = 0x2CDCA0u;
    SET_GPR_U32(ctx, 31, 0x2CDCA8u);
    ctx->pc = 0x2C1B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B30u, 0x2CDCA0u, 0x2CDCA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDCA8u;
label_2cdca8:
    // 0x2cdca8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2cdca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdcac: 0xc0b06c4  jal         func_2C1B10
    ctx->pc = 0x2CDCACu;
    SET_GPR_U32(ctx, 31, 0x2CDCB4u);
    ctx->pc = 0x2C1B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B10u, 0x2CDCACu, 0x2CDCB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDCB4u;
label_2cdcb4:
    // 0x2cdcb4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2cdcb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdcb8: 0x8fa50130  lw          $a1, 0x130($sp)
    ctx->pc = 0x2cdcb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2cdcbc: 0xc0b5ad0  jal         func_2D6B40
    ctx->pc = 0x2CDCBCu;
    SET_GPR_U32(ctx, 31, 0x2CDCC4u);
    ctx->pc = 0x2D6B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6B40u, 0x2CDCBCu, 0x2CDCC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDCC4u;
label_2cdcc4:
    // 0x2cdcc4: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x2cdcc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2cdcc8: 0xc096a18  jal         func_25A860
    ctx->pc = 0x2CDCC8u;
    SET_GPR_U32(ctx, 31, 0x2CDCD0u);
    ctx->pc = 0x25A860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A860u, 0x2CDCC8u, 0x2CDCD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDCD0u;
label_2cdcd0:
    // 0x2cdcd0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2cdcd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdcd4: 0x8fa50130  lw          $a1, 0x130($sp)
    ctx->pc = 0x2cdcd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2cdcd8: 0xc097064  jal         func_25C190
    ctx->pc = 0x2CDCD8u;
    SET_GPR_U32(ctx, 31, 0x2CDCE0u);
    ctx->pc = 0x25C190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C190u, 0x2CDCD8u, 0x2CDCE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDCE0u;
label_2cdce0:
    // 0x2cdce0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cdce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cdce4: 0x100000c0  b           . + 4 + (0xC0 << 2)
    ctx->pc = 0x2CDCE4u;
    {
        const bool branch_taken_0x2cdce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cdce4) {
            ctx->pc = 0x2CDFE8u;
            goto label_2cdfe8;
        }
    }
    ctx->pc = 0x2CDCECu;
label_2cdcec:
    // 0x2cdcec: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x2cdcecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2cdcf0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2cdcf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdcf4: 0xc096f9c  jal         func_25BE70
    ctx->pc = 0x2CDCF4u;
    SET_GPR_U32(ctx, 31, 0x2CDCFCu);
    ctx->pc = 0x25BE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BE70u, 0x2CDCF4u, 0x2CDCFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDCFCu;
label_2cdcfc:
    // 0x2cdcfc: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x2cdcfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2cdd00: 0x1051006a  beq         $v0, $s1, . + 4 + (0x6A << 2)
    ctx->pc = 0x2CDD00u;
    {
        const bool branch_taken_0x2cdd00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x2cdd00) {
            ctx->pc = 0x2CDEACu;
            goto label_2cdeac;
        }
    }
    ctx->pc = 0x2CDD08u;
    // 0x2cdd08: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x2cdd08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2cdd0c: 0xc0480fc  jal         func_1203F0
    ctx->pc = 0x2CDD0Cu;
    SET_GPR_U32(ctx, 31, 0x2CDD14u);
    ctx->pc = 0x1203F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1203F0u, 0x2CDD0Cu, 0x2CDD14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDD14u;
label_2cdd14:
    // 0x2cdd14: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x2CDD14u;
    {
        const bool branch_taken_0x2cdd14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cdd14) {
            ctx->pc = 0x2CDDACu;
            goto label_2cddac;
        }
    }
    ctx->pc = 0x2CDD1Cu;
    // 0x2cdd1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2cdd1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdd20: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x2cdd20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2cdd24: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2CDD24u;
    SET_GPR_U32(ctx, 31, 0x2CDD2Cu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2CDD24u, 0x2CDD2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDD2Cu;
label_2cdd2c:
    // 0x2cdd2c: 0xafa200b4  sw          $v0, 0xB4($sp)
    ctx->pc = 0x2cdd2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 2));
    // 0x2cdd30: 0x8fa400b4  lw          $a0, 0xB4($sp)
    ctx->pc = 0x2cdd30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x2cdd34: 0x8fa50110  lw          $a1, 0x110($sp)
    ctx->pc = 0x2cdd34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2cdd38: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2cdd38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdd3c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2cdd3cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdd40: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2cdd40u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdd44: 0xc09bca0  jal         func_26F280
    ctx->pc = 0x2CDD44u;
    SET_GPR_U32(ctx, 31, 0x2CDD4Cu);
    ctx->pc = 0x26F280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F280u, 0x2CDD44u, 0x2CDD4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDD4Cu;
label_2cdd4c:
    // 0x2cdd4c: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x2cdd4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x2cdd50: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2cdd50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2cdd54: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CDD54u;
    {
        const bool branch_taken_0x2cdd54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cdd54) {
            ctx->pc = 0x2CDD68u;
            goto label_2cdd68;
        }
    }
    ctx->pc = 0x2CDD5Cu;
    // 0x2cdd5c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2cdd5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdd60: 0x100000a1  b           . + 4 + (0xA1 << 2)
    ctx->pc = 0x2CDD60u;
    {
        const bool branch_taken_0x2cdd60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cdd60) {
            ctx->pc = 0x2CDFE8u;
            goto label_2cdfe8;
        }
    }
    ctx->pc = 0x2CDD68u;
label_2cdd68:
    // 0x2cdd68: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x2cdd68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2cdd6c: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x2CDD6Cu;
    SET_GPR_U32(ctx, 31, 0x2CDD74u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x2CDD6Cu, 0x2CDD74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDD74u;
label_2cdd74:
    // 0x2cdd74: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x2cdd74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2cdd78: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2cdd78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdd7c: 0xc0400e0  jal         func_100380
    ctx->pc = 0x2CDD7Cu;
    SET_GPR_U32(ctx, 31, 0x2CDD84u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x2CDD7Cu, 0x2CDD84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDD84u;
label_2cdd84:
    // 0x2cdd84: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x2cdd84u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdd88: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2cdd88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2cdd8c: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x2cdd8cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
    // 0x2cdd90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cdd90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cdd94: 0xaee20004  sw          $v0, 0x4($s7)
    ctx->pc = 0x2cdd94u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4), GPR_U32(ctx, 2));
    // 0x2cdd98: 0xaef10008  sw          $s1, 0x8($s7)
    ctx->pc = 0x2cdd98u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 8), GPR_U32(ctx, 17));
    // 0x2cdd9c: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x2cdd9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2cdda0: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2cdda0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdda4: 0xc096c40  jal         func_25B100
    ctx->pc = 0x2CDDA4u;
    SET_GPR_U32(ctx, 31, 0x2CDDACu);
    ctx->pc = 0x25B100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B100u, 0x2CDDA4u, 0x2CDDACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDDACu;
label_2cddac:
    // 0x2cddac: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x2cddacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2cddb0: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x2CDDB0u;
    SET_GPR_U32(ctx, 31, 0x2CDDB8u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x2CDDB0u, 0x2CDDB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDDB8u;
label_2cddb8:
    // 0x2cddb8: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x2cddb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2cddbc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2cddbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cddc0: 0xc0400e0  jal         func_100380
    ctx->pc = 0x2CDDC0u;
    SET_GPR_U32(ctx, 31, 0x2CDDC8u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x2CDDC0u, 0x2CDDC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDDC8u;
label_2cddc8:
    // 0x2cddc8: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2cddc8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cddcc: 0x8fa40130  lw          $a0, 0x130($sp)
    ctx->pc = 0x2cddccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2cddd0: 0xaec40000  sw          $a0, 0x0($s6)
    ctx->pc = 0x2cddd0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 4));
    // 0x2cddd4: 0xaec00004  sw          $zero, 0x4($s6)
    ctx->pc = 0x2cddd4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 0));
    // 0x2cddd8: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x2cddd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2cdddc: 0xaec20008  sw          $v0, 0x8($s6)
    ctx->pc = 0x2cdddcu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 2));
    // 0x2cdde0: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x2cdde0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2cdde4: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2cdde4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdde8: 0xc096c40  jal         func_25B100
    ctx->pc = 0x2CDDE8u;
    SET_GPR_U32(ctx, 31, 0x2CDDF0u);
    ctx->pc = 0x25B100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B100u, 0x2CDDE8u, 0x2CDDF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDDF0u;
label_2cddf0:
    // 0x2cddf0: 0x1240005e  beqz        $s2, . + 4 + (0x5E << 2)
    ctx->pc = 0x2CDDF0u;
    {
        const bool branch_taken_0x2cddf0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cddf0) {
            ctx->pc = 0x2CDF6Cu;
            goto label_2cdf6c;
        }
    }
    ctx->pc = 0x2CDDF8u;
    // 0x2cddf8: 0x8fa40130  lw          $a0, 0x130($sp)
    ctx->pc = 0x2cddf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2cddfc: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x2cddfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2cde00: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2CDE00u;
    SET_GPR_U32(ctx, 31, 0x2CDE08u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2CDE00u, 0x2CDE08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDE08u;
label_2cde08:
    // 0x2cde08: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2cde08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cde0c: 0xafa500ac  sw          $a1, 0xAC($sp)
    ctx->pc = 0x2cde0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 5));
    // 0x2cde10: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x2cde10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x2cde14: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2cde14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cde18: 0x8fa50110  lw          $a1, 0x110($sp)
    ctx->pc = 0x2cde18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2cde1c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2cde1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cde20: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2cde20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cde24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cde24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cde28: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2cde28u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cde2c: 0xc09bca0  jal         func_26F280
    ctx->pc = 0x2CDE2Cu;
    SET_GPR_U32(ctx, 31, 0x2CDE34u);
    ctx->pc = 0x26F280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F280u, 0x2CDE2Cu, 0x2CDE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDE34u;
label_2cde34:
    // 0x2cde34: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2cde34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cde38: 0xafa400a8  sw          $a0, 0xA8($sp)
    ctx->pc = 0x2cde38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 4));
    // 0x2cde3c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2cde3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2cde40: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CDE40u;
    {
        const bool branch_taken_0x2cde40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cde40) {
            ctx->pc = 0x2CDE54u;
            goto label_2cde54;
        }
    }
    ctx->pc = 0x2CDE48u;
    // 0x2cde48: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2cde48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cde4c: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x2CDE4Cu;
    {
        const bool branch_taken_0x2cde4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cde4c) {
            ctx->pc = 0x2CDFE8u;
            goto label_2cdfe8;
        }
    }
    ctx->pc = 0x2CDE54u;
label_2cde54:
    // 0x2cde54: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x2cde54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2cde58: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x2CDE58u;
    SET_GPR_U32(ctx, 31, 0x2CDE60u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x2CDE58u, 0x2CDE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDE60u;
label_2cde60:
    // 0x2cde60: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x2cde60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2cde64: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2cde64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cde68: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2cde68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cde6c: 0xc0400e0  jal         func_100380
    ctx->pc = 0x2CDE6Cu;
    SET_GPR_U32(ctx, 31, 0x2CDE74u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x2CDE6Cu, 0x2CDE74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDE74u;
label_2cde74:
    // 0x2cde74: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2cde74u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cde78: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2cde78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2cde7c: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x2cde7cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x2cde80: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cde80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cde84: 0xaea20004  sw          $v0, 0x4($s5)
    ctx->pc = 0x2cde84u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 2));
    // 0x2cde88: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x2cde88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2cde8c: 0xaea20008  sw          $v0, 0x8($s5)
    ctx->pc = 0x2cde8cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 2));
    // 0x2cde90: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x2cde90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2cde94: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2cde94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cde98: 0xc096c40  jal         func_25B100
    ctx->pc = 0x2CDE98u;
    SET_GPR_U32(ctx, 31, 0x2CDEA0u);
    ctx->pc = 0x25B100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B100u, 0x2CDE98u, 0x2CDEA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDEA0u;
label_2cdea0:
    // 0x2cdea0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2cdea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdea4: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x2CDEA4u;
    {
        const bool branch_taken_0x2cdea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cdea4) {
            ctx->pc = 0x2CDF6Cu;
            goto label_2cdf6c;
        }
    }
    ctx->pc = 0x2CDEACu;
label_2cdeac:
    // 0x2cdeac: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x2cdeacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2cdeb0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2cdeb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdeb4: 0xc0480fc  jal         func_1203F0
    ctx->pc = 0x2CDEB4u;
    SET_GPR_U32(ctx, 31, 0x2CDEBCu);
    ctx->pc = 0x1203F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1203F0u, 0x2CDEB4u, 0x2CDEBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDEBCu;
label_2cdebc:
    // 0x2cdebc: 0x1242002b  beq         $s2, $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x2CDEBCu;
    {
        const bool branch_taken_0x2cdebc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x2cdebc) {
            ctx->pc = 0x2CDF6Cu;
            goto label_2cdf6c;
        }
    }
    ctx->pc = 0x2CDEC4u;
    // 0x2cdec4: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x2cdec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2cdec8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2cdec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdecc: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x2cdeccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2cded0: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2CDED0u;
    SET_GPR_U32(ctx, 31, 0x2CDED8u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2CDED0u, 0x2CDED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDED8u;
label_2cded8:
    // 0x2cded8: 0xafa200a4  sw          $v0, 0xA4($sp)
    ctx->pc = 0x2cded8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 2));
    // 0x2cdedc: 0x8fa400a4  lw          $a0, 0xA4($sp)
    ctx->pc = 0x2cdedcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x2cdee0: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x2cdee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2cdee4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2cdee4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdee8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2cdee8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdeec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2cdeecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdef0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2cdef0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdef4: 0xc09bca0  jal         func_26F280
    ctx->pc = 0x2CDEF4u;
    SET_GPR_U32(ctx, 31, 0x2CDEFCu);
    ctx->pc = 0x26F280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F280u, 0x2CDEF4u, 0x2CDEFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDEFCu;
label_2cdefc:
    // 0x2cdefc: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x2cdefcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x2cdf00: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x2cdf00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2cdf04: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CDF04u;
    {
        const bool branch_taken_0x2cdf04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cdf04) {
            ctx->pc = 0x2CDF18u;
            goto label_2cdf18;
        }
    }
    ctx->pc = 0x2CDF0Cu;
    // 0x2cdf0c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2cdf0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdf10: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x2CDF10u;
    {
        const bool branch_taken_0x2cdf10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cdf10) {
            ctx->pc = 0x2CDFE8u;
            goto label_2cdfe8;
        }
    }
    ctx->pc = 0x2CDF18u;
label_2cdf18:
    // 0x2cdf18: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x2cdf18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2cdf1c: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x2CDF1Cu;
    SET_GPR_U32(ctx, 31, 0x2CDF24u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x2CDF1Cu, 0x2CDF24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDF24u;
label_2cdf24:
    // 0x2cdf24: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x2cdf24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2cdf28: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2cdf28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdf2c: 0xc0400e0  jal         func_100380
    ctx->pc = 0x2CDF2Cu;
    SET_GPR_U32(ctx, 31, 0x2CDF34u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x2CDF2Cu, 0x2CDF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDF34u;
label_2cdf34:
    // 0x2cdf34: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2cdf34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdf38: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2cdf38u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdf3c: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x2cdf3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2cdf40: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x2cdf40u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x2cdf44: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2cdf44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cdf48: 0xae840004  sw          $a0, 0x4($s4)
    ctx->pc = 0x2cdf48u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 4));
    // 0x2cdf4c: 0x8fa50130  lw          $a1, 0x130($sp)
    ctx->pc = 0x2cdf4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2cdf50: 0xae850008  sw          $a1, 0x8($s4)
    ctx->pc = 0x2cdf50u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 5));
    // 0x2cdf54: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x2cdf54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2cdf58: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2cdf58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdf5c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2cdf5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdf60: 0xc096c40  jal         func_25B100
    ctx->pc = 0x2CDF60u;
    SET_GPR_U32(ctx, 31, 0x2CDF68u);
    ctx->pc = 0x25B100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B100u, 0x2CDF60u, 0x2CDF68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDF68u;
label_2cdf68:
    // 0x2cdf68: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2cdf68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cdf6c:
    // 0x2cdf6c: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x2cdf6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2cdf70: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2cdf70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdf74: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x2CDF74u;
    SET_GPR_U32(ctx, 31, 0x2CDF7Cu);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x2CDF74u, 0x2CDF7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDF7Cu;
label_2cdf7c:
    // 0x2cdf7c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2cdf7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdf80: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x2cdf80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2cdf84: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x2cdf84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdf88: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2cdf88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdf8c: 0xc0400e0  jal         func_100380
    ctx->pc = 0x2CDF8Cu;
    SET_GPR_U32(ctx, 31, 0x2CDF94u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x2CDF8Cu, 0x2CDF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDF94u;
label_2cdf94:
    // 0x2cdf94: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2cdf94u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdf98: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x2cdf98u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdf9c: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x2cdf9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2cdfa0: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2cdfa0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x2cdfa4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2cdfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2cdfa8: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x2cdfa8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    // 0x2cdfac: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x2cdfacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2cdfb0: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x2cdfb0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
    // 0x2cdfb4: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x2cdfb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2cdfb8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2cdfb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdfbc: 0xc096c40  jal         func_25B100
    ctx->pc = 0x2CDFBCu;
    SET_GPR_U32(ctx, 31, 0x2CDFC4u);
    ctx->pc = 0x25B100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B100u, 0x2CDFBCu, 0x2CDFC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDFC4u;
label_2cdfc4:
    // 0x2cdfc4: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x2cdfc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2cdfc8: 0xc096a18  jal         func_25A860
    ctx->pc = 0x2CDFC8u;
    SET_GPR_U32(ctx, 31, 0x2CDFD0u);
    ctx->pc = 0x25A860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A860u, 0x2CDFC8u, 0x2CDFD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDFD0u;
label_2cdfd0:
    // 0x2cdfd0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2cdfd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdfd4: 0x8fa50130  lw          $a1, 0x130($sp)
    ctx->pc = 0x2cdfd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2cdfd8: 0xc097064  jal         func_25C190
    ctx->pc = 0x2CDFD8u;
    SET_GPR_U32(ctx, 31, 0x2CDFE0u);
    ctx->pc = 0x25C190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C190u, 0x2CDFD8u, 0x2CDFE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDFE0u;
label_2cdfe0:
    // 0x2cdfe0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2cdfe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cdfe4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2cdfe4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2cdfe8:
    // 0x2cdfe8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2cdfe8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2cdfec: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2cdfecu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2cdff0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2cdff0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2cdff4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2cdff4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2cdff8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2cdff8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2cdffc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2cdffcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ce000: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2ce000u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ce004: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2ce004u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ce008: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ce008u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ce00c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ce00cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ce010: 0x27bd0140  addiu       $sp, $sp, 0x140
    ctx->pc = 0x2ce010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x2ce014: 0x3e00008  jr          $ra
    ctx->pc = 0x2CE014u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CE014u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CE01Cu;
    // 0x2ce01c: 0x0  nop
    ctx->pc = 0x2ce01cu;
    // NOP
    ctx->pc = 0x2ce020u;
}
