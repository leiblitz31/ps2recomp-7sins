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

// Function: sub_002AA050
// Address: 0x2aa050 - 0x2aa460
void sub_002AA050_0x2aa050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AA050_0x2aa050");
#endif

    switch (ctx->pc) {
        case 0x2aa088u: goto label_2aa088;
        case 0x2aa0d0u: goto label_2aa0d0;
        case 0x2aa120u: goto label_2aa120;
        case 0x2aa138u: goto label_2aa138;
        case 0x2aa15cu: goto label_2aa15c;
        case 0x2aa17cu: goto label_2aa17c;
        case 0x2aa1acu: goto label_2aa1ac;
        case 0x2aa1c0u: goto label_2aa1c0;
        case 0x2aa1d4u: goto label_2aa1d4;
        case 0x2aa228u: goto label_2aa228;
        case 0x2aa244u: goto label_2aa244;
        case 0x2aa250u: goto label_2aa250;
        case 0x2aa268u: goto label_2aa268;
        case 0x2aa28cu: goto label_2aa28c;
        case 0x2aa2bcu: goto label_2aa2bc;
        case 0x2aa2d4u: goto label_2aa2d4;
        case 0x2aa30cu: goto label_2aa30c;
        case 0x2aa32cu: goto label_2aa32c;
        case 0x2aa340u: goto label_2aa340;
        case 0x2aa368u: goto label_2aa368;
        case 0x2aa380u: goto label_2aa380;
        case 0x2aa3bcu: goto label_2aa3bc;
        case 0x2aa3d4u: goto label_2aa3d4;
        case 0x2aa408u: goto label_2aa408;
        case 0x2aa41cu: goto label_2aa41c;
        case 0x2aa42cu: goto label_2aa42c;
        default: break;
    }

    ctx->pc = 0x2aa050u;

    // 0x2aa050: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2aa050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2aa054: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2aa054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2aa058: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2aa058u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2aa05c: 0xa3a50020  sb          $a1, 0x20($sp)
    ctx->pc = 0x2aa05cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 5));
    // 0x2aa060: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2aa060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2aa064: 0x8c630040  lw          $v1, 0x40($v1)
    ctx->pc = 0x2aa064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x2aa068: 0x10030007  beq         $zero, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2AA068u;
    {
        const bool branch_taken_0x2aa068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        if (branch_taken_0x2aa068) {
            ctx->pc = 0x2AA088u;
            goto label_2aa088;
        }
    }
    ctx->pc = 0x2AA070u;
    // 0x2aa070: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2aa070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2aa074: 0x93a20020  lbu         $v0, 0x20($sp)
    ctx->pc = 0x2aa074u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2aa078: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x2aa078u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2aa07c: 0x8c640040  lw          $a0, 0x40($v1)
    ctx->pc = 0x2aa07cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x2aa080: 0xc12346c  jal         func_48D1B0
    ctx->pc = 0x2AA080u;
    SET_GPR_U32(ctx, 31, 0x2AA088u);
    ctx->pc = 0x48D1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48D1B0u, 0x2AA080u, 0x2AA088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA088u;
label_2aa088:
    // 0x2aa088: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2aa088u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2aa08c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2aa08cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2aa090: 0x3e00008  jr          $ra
    ctx->pc = 0x2AA090u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AA090u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AA098u;
    // 0x2aa098: 0x0  nop
    ctx->pc = 0x2aa098u;
    // NOP
    // 0x2aa09c: 0x0  nop
    ctx->pc = 0x2aa09cu;
    // NOP
    // 0x2aa0a0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2aa0a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2aa0a4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2aa0a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2aa0a8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2aa0a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2aa0ac: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2aa0acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2aa0b0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2aa0b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2aa0b4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2aa0b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2aa0b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2aa0b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2aa0bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2aa0bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2aa0c0: 0xafa40090  sw          $a0, 0x90($sp)
    ctx->pc = 0x2aa0c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 4));
    // 0x2aa0c4: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x2aa0c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2aa0c8: 0xc09d248  jal         func_274920
    ctx->pc = 0x2AA0C8u;
    SET_GPR_U32(ctx, 31, 0x2AA0D0u);
    ctx->pc = 0x274920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274920u, 0x2AA0C8u, 0x2AA0D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA0D0u;
label_2aa0d0:
    // 0x2aa0d0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2aa0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2aa0d4: 0x104300ce  beq         $v0, $v1, . + 4 + (0xCE << 2)
    ctx->pc = 0x2AA0D4u;
    {
        const bool branch_taken_0x2aa0d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2aa0d4) {
            ctx->pc = 0x2AA410u;
            goto label_2aa410;
        }
    }
    ctx->pc = 0x2AA0DCu;
    // 0x2aa0dc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2aa0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2aa0e0: 0x1043007e  beq         $v0, $v1, . + 4 + (0x7E << 2)
    ctx->pc = 0x2AA0E0u;
    {
        const bool branch_taken_0x2aa0e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2aa0e0) {
            ctx->pc = 0x2AA2DCu;
            goto label_2aa2dc;
        }
    }
    ctx->pc = 0x2AA0E8u;
    // 0x2aa0e8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2aa0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2aa0ec: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AA0ECu;
    {
        const bool branch_taken_0x2aa0ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2aa0ec) {
            ctx->pc = 0x2AA0FCu;
            goto label_2aa0fc;
        }
    }
    ctx->pc = 0x2AA0F4u;
    // 0x2aa0f4: 0x100000cd  b           . + 4 + (0xCD << 2)
    ctx->pc = 0x2AA0F4u;
    {
        const bool branch_taken_0x2aa0f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aa0f4) {
            ctx->pc = 0x2AA42Cu;
            goto label_2aa42c;
        }
    }
    ctx->pc = 0x2AA0FCu;
label_2aa0fc:
    // 0x2aa0fc: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2aa0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2aa100: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x2aa100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x2aa104: 0x10400058  beqz        $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x2AA104u;
    {
        const bool branch_taken_0x2aa104 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aa104) {
            ctx->pc = 0x2AA268u;
            goto label_2aa268;
        }
    }
    ctx->pc = 0x2AA10Cu;
    // 0x2aa10c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2aa10cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2aa110: 0x8c440044  lw          $a0, 0x44($v0)
    ctx->pc = 0x2aa110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x2aa114: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x2aa114u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x2aa118: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2AA118u;
    SET_GPR_U32(ctx, 31, 0x2AA120u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2AA118u, 0x2AA120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA120u;
label_2aa120:
    // 0x2aa120: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2aa120u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa124: 0x12000050  beqz        $s0, . + 4 + (0x50 << 2)
    ctx->pc = 0x2AA124u;
    {
        const bool branch_taken_0x2aa124 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aa124) {
            ctx->pc = 0x2AA268u;
            goto label_2aa268;
        }
    }
    ctx->pc = 0x2AA12Cu;
    // 0x2aa12c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2aa12cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa130: 0xc09f9f0  jal         func_27E7C0
    ctx->pc = 0x2AA130u;
    SET_GPR_U32(ctx, 31, 0x2AA138u);
    ctx->pc = 0x27E7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E7C0u, 0x2AA130u, 0x2AA138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA138u;
label_2aa138:
    // 0x2aa138: 0x1040004b  beqz        $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x2AA138u;
    {
        const bool branch_taken_0x2aa138 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aa138) {
            ctx->pc = 0x2AA268u;
            goto label_2aa268;
        }
    }
    ctx->pc = 0x2AA140u;
    // 0x2aa140: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2aa140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2aa144: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x2aa144u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2aa148: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2aa148u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2aa14c: 0x24a5dda0  addiu       $a1, $a1, -0x2260
    ctx->pc = 0x2aa14cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958496));
    // 0x2aa150: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2aa150u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2aa154: 0xc047328  jal         func_11CCA0
    ctx->pc = 0x2AA154u;
    SET_GPR_U32(ctx, 31, 0x2AA15Cu);
    ctx->pc = 0x11CCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11CCA0u, 0x2AA154u, 0x2AA15Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA15Cu;
label_2aa15c:
    // 0x2aa15c: 0x1040003e  beqz        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x2AA15Cu;
    {
        const bool branch_taken_0x2aa15c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aa15c) {
            ctx->pc = 0x2AA258u;
            goto label_2aa258;
        }
    }
    ctx->pc = 0x2AA164u;
    // 0x2aa164: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2aa164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2aa168: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x2aa168u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2aa16c: 0x240504b6  addiu       $a1, $zero, 0x4B6
    ctx->pc = 0x2aa16cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1206));
    // 0x2aa170: 0x2786a468  addiu       $a2, $gp, -0x5B98
    ctx->pc = 0x2aa170u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943848));
    // 0x2aa174: 0xc041a50  jal         func_106940
    ctx->pc = 0x2AA174u;
    SET_GPR_U32(ctx, 31, 0x2AA17Cu);
    ctx->pc = 0x106940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106940u, 0x2AA174u, 0x2AA17Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA17Cu;
label_2aa17c:
    // 0x2aa17c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2aa17cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa180: 0x12400030  beqz        $s2, . + 4 + (0x30 << 2)
    ctx->pc = 0x2AA180u;
    {
        const bool branch_taken_0x2aa180 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aa180) {
            ctx->pc = 0x2AA244u;
            goto label_2aa244;
        }
    }
    ctx->pc = 0x2AA188u;
    // 0x2aa188: 0x82420000  lb          $v0, 0x0($s2)
    ctx->pc = 0x2aa188u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2aa18c: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x2AA18Cu;
    {
        const bool branch_taken_0x2aa18c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aa18c) {
            ctx->pc = 0x2AA244u;
            goto label_2aa244;
        }
    }
    ctx->pc = 0x2AA194u;
    // 0x2aa194: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2aa194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2aa198: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x2aa198u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2aa19c: 0x240504b7  addiu       $a1, $zero, 0x4B7
    ctx->pc = 0x2aa19cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1207));
    // 0x2aa1a0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2aa1a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa1a4: 0xc04146c  jal         func_1051B0
    ctx->pc = 0x2AA1A4u;
    SET_GPR_U32(ctx, 31, 0x2AA1ACu);
    ctx->pc = 0x1051B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051B0u, 0x2AA1A4u, 0x2AA1ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA1ACu;
label_2aa1ac:
    // 0x2aa1ac: 0x305300ff  andi        $s3, $v0, 0xFF
    ctx->pc = 0x2aa1acu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2aa1b0: 0x8e04002c  lw          $a0, 0x2C($s0)
    ctx->pc = 0x2aa1b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x2aa1b4: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2aa1b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2aa1b8: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2AA1B8u;
    SET_GPR_U32(ctx, 31, 0x2AA1C0u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2AA1B8u, 0x2AA1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA1C0u;
label_2aa1c0:
    // 0x2aa1c0: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2aa1c0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa1c4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2aa1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2aa1c8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2aa1c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa1cc: 0xc090f80  jal         func_243E00
    ctx->pc = 0x2AA1CCu;
    SET_GPR_U32(ctx, 31, 0x2AA1D4u);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x2AA1CCu, 0x2AA1D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA1D4u;
label_2aa1d4:
    // 0x2aa1d4: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x2aa1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2aa1d8: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x2aa1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2aa1dc: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2aa1dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2aa1e0: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2aa1e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2aa1e4: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2aa1e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aa1e8: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x2aa1e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2aa1ec: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2aa1ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2aa1f0: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2aa1f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2aa1f4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2aa1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2aa1f8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2aa1f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2aa1fc: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x2aa1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x2aa200: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2aa200u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2aa204: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x2aa204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x2aa208: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2aa208u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2aa20c: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x2aa20cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
    // 0x2aa210: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2aa210u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa214: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x2aa214u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2aa218: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2aa218u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa21c: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2aa21cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2aa220: 0xc08f6e4  jal         func_23DB90
    ctx->pc = 0x2AA220u;
    SET_GPR_U32(ctx, 31, 0x2AA228u);
    ctx->pc = 0x23DB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DB90u, 0x2AA220u, 0x2AA228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA228u;
label_2aa228:
    // 0x2aa228: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2aa228u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa22c: 0x12600005  beqz        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x2AA22Cu;
    {
        const bool branch_taken_0x2aa22c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aa22c) {
            ctx->pc = 0x2AA244u;
            goto label_2aa244;
        }
    }
    ctx->pc = 0x2AA234u;
    // 0x2aa234: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2aa234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa238: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2aa238u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa23c: 0xc0a63e4  jal         func_298F90
    ctx->pc = 0x2AA23Cu;
    SET_GPR_U32(ctx, 31, 0x2AA244u);
    ctx->pc = 0x298F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298F90u, 0x2AA23Cu, 0x2AA244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA244u;
label_2aa244:
    // 0x2aa244: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2aa244u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa248: 0xc0a62e0  jal         func_298B80
    ctx->pc = 0x2AA248u;
    SET_GPR_U32(ctx, 31, 0x2AA250u);
    ctx->pc = 0x298B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298B80u, 0x2AA248u, 0x2AA250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA250u;
label_2aa250:
    // 0x2aa250: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2AA250u;
    {
        const bool branch_taken_0x2aa250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aa250) {
            ctx->pc = 0x2AA268u;
            goto label_2aa268;
        }
    }
    ctx->pc = 0x2AA258u;
label_2aa258:
    // 0x2aa258: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2aa258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa25c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2aa25cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa260: 0xc0a631c  jal         func_298C70
    ctx->pc = 0x2AA260u;
    SET_GPR_U32(ctx, 31, 0x2AA268u);
    ctx->pc = 0x298C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298C70u, 0x2AA260u, 0x2AA268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA268u;
label_2aa268:
    // 0x2aa268: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2aa268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2aa26c: 0xac400058  sw          $zero, 0x58($v0)
    ctx->pc = 0x2aa26cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 88), GPR_U32(ctx, 0));
    // 0x2aa270: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2aa270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2aa274: 0xac400054  sw          $zero, 0x54($v0)
    ctx->pc = 0x2aa274u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 0));
    // 0x2aa278: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2aa278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2aa27c: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x2aa27cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2aa280: 0x8c450030  lw          $a1, 0x30($v0)
    ctx->pc = 0x2aa280u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2aa284: 0xc0aa6d0  jal         func_2A9B40
    ctx->pc = 0x2AA284u;
    SET_GPR_U32(ctx, 31, 0x2AA28Cu);
    ctx->pc = 0x2A9B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9B40u, 0x2AA284u, 0x2AA28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA28Cu;
label_2aa28c:
    // 0x2aa28c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2aa28cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2aa290: 0x8c420054  lw          $v0, 0x54($v0)
    ctx->pc = 0x2aa290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x2aa294: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2AA294u;
    {
        const bool branch_taken_0x2aa294 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2aa294) {
            ctx->pc = 0x2AA2C4u;
            goto label_2aa2c4;
        }
    }
    ctx->pc = 0x2AA29Cu;
    // 0x2aa29c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2aa29cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2aa2a0: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x2aa2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x2aa2a4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2AA2A4u;
    {
        const bool branch_taken_0x2aa2a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2aa2a4) {
            ctx->pc = 0x2AA2C4u;
            goto label_2aa2c4;
        }
    }
    ctx->pc = 0x2AA2ACu;
    // 0x2aa2ac: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x2aa2acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2aa2b0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2aa2b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2aa2b4: 0xc09d250  jal         func_274940
    ctx->pc = 0x2AA2B4u;
    SET_GPR_U32(ctx, 31, 0x2AA2BCu);
    ctx->pc = 0x274940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274940u, 0x2AA2B4u, 0x2AA2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA2BCu;
label_2aa2bc:
    // 0x2aa2bc: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x2AA2BCu;
    {
        const bool branch_taken_0x2aa2bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aa2bc) {
            ctx->pc = 0x2AA42Cu;
            goto label_2aa42c;
        }
    }
    ctx->pc = 0x2AA2C4u;
label_2aa2c4:
    // 0x2aa2c4: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x2aa2c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2aa2c8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2aa2c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2aa2cc: 0xc09d250  jal         func_274940
    ctx->pc = 0x2AA2CCu;
    SET_GPR_U32(ctx, 31, 0x2AA2D4u);
    ctx->pc = 0x274940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274940u, 0x2AA2CCu, 0x2AA2D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA2D4u;
label_2aa2d4:
    // 0x2aa2d4: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x2AA2D4u;
    {
        const bool branch_taken_0x2aa2d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aa2d4) {
            ctx->pc = 0x2AA42Cu;
            goto label_2aa42c;
        }
    }
    ctx->pc = 0x2AA2DCu;
label_2aa2dc:
    // 0x2aa2dc: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x2aa2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2aa2e0: 0x8c630054  lw          $v1, 0x54($v1)
    ctx->pc = 0x2aa2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x2aa2e4: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2AA2E4u;
    {
        const bool branch_taken_0x2aa2e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2aa2e4) {
            ctx->pc = 0x2AA30Cu;
            goto label_2aa30c;
        }
    }
    ctx->pc = 0x2AA2ECu;
    // 0x2aa2ec: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x2aa2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2aa2f0: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x2aa2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x2aa2f4: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2AA2F4u;
    {
        const bool branch_taken_0x2aa2f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2aa2f4) {
            ctx->pc = 0x2AA30Cu;
            goto label_2aa30c;
        }
    }
    ctx->pc = 0x2AA2FCu;
    // 0x2aa2fc: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x2aa2fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2aa300: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2aa300u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2aa304: 0xc09d250  jal         func_274940
    ctx->pc = 0x2AA304u;
    SET_GPR_U32(ctx, 31, 0x2AA30Cu);
    ctx->pc = 0x274940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274940u, 0x2AA304u, 0x2AA30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA30Cu;
label_2aa30c:
    // 0x2aa30c: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x2aa30cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2aa310: 0x8c630054  lw          $v1, 0x54($v1)
    ctx->pc = 0x2aa310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x2aa314: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2AA314u;
    {
        const bool branch_taken_0x2aa314 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aa314) {
            ctx->pc = 0x2AA340u;
            goto label_2aa340;
        }
    }
    ctx->pc = 0x2AA31Cu;
    // 0x2aa31c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2aa31cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2aa320: 0x8c440054  lw          $a0, 0x54($v0)
    ctx->pc = 0x2aa320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x2aa324: 0xc09f9f0  jal         func_27E7C0
    ctx->pc = 0x2AA324u;
    SET_GPR_U32(ctx, 31, 0x2AA32Cu);
    ctx->pc = 0x27E7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E7C0u, 0x2AA324u, 0x2AA32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA32Cu;
label_2aa32c:
    // 0x2aa32c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AA32Cu;
    {
        const bool branch_taken_0x2aa32c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aa32c) {
            ctx->pc = 0x2AA340u;
            goto label_2aa340;
        }
    }
    ctx->pc = 0x2AA334u;
    // 0x2aa334: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x2aa334u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2aa338: 0xc0aa95c  jal         func_2AA570
    ctx->pc = 0x2AA338u;
    SET_GPR_U32(ctx, 31, 0x2AA340u);
    ctx->pc = 0x2AA570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA570u, 0x2AA338u, 0x2AA340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA340u;
label_2aa340:
    // 0x2aa340: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2aa340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2aa344: 0x307100ff  andi        $s1, $v1, 0xFF
    ctx->pc = 0x2aa344u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2aa348: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x2aa348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2aa34c: 0x8c630054  lw          $v1, 0x54($v1)
    ctx->pc = 0x2aa34cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x2aa350: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2AA350u;
    {
        const bool branch_taken_0x2aa350 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aa350) {
            ctx->pc = 0x2AA39Cu;
            goto label_2aa39c;
        }
    }
    ctx->pc = 0x2AA358u;
    // 0x2aa358: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2aa358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2aa35c: 0x8c440054  lw          $a0, 0x54($v0)
    ctx->pc = 0x2aa35cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x2aa360: 0xc09f9f0  jal         func_27E7C0
    ctx->pc = 0x2AA360u;
    SET_GPR_U32(ctx, 31, 0x2AA368u);
    ctx->pc = 0x27E7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E7C0u, 0x2AA360u, 0x2AA368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA368u;
label_2aa368:
    // 0x2aa368: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2AA368u;
    {
        const bool branch_taken_0x2aa368 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aa368) {
            ctx->pc = 0x2AA39Cu;
            goto label_2aa39c;
        }
    }
    ctx->pc = 0x2AA370u;
    // 0x2aa370: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2aa370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2aa374: 0x8c440054  lw          $a0, 0x54($v0)
    ctx->pc = 0x2aa374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x2aa378: 0xc0aa918  jal         func_2AA460
    ctx->pc = 0x2AA378u;
    SET_GPR_U32(ctx, 31, 0x2AA380u);
    ctx->pc = 0x2AA460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA460u, 0x2AA378u, 0x2AA380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA380u;
label_2aa380:
    // 0x2aa380: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x2aa380u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2aa384: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x2aa384u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x2aa388: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2aa388u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2aa38c: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x2aa38cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2aa390: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x2aa390u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x2aa394: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x2aa394u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x2aa398: 0x307100ff  andi        $s1, $v1, 0xFF
    ctx->pc = 0x2aa398u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2aa39c:
    // 0x2aa39c: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x2aa39cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2aa3a0: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x2aa3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x2aa3a4: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2AA3A4u;
    {
        const bool branch_taken_0x2aa3a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aa3a4) {
            ctx->pc = 0x2AA3F0u;
            goto label_2aa3f0;
        }
    }
    ctx->pc = 0x2AA3ACu;
    // 0x2aa3ac: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2aa3acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2aa3b0: 0x8c440058  lw          $a0, 0x58($v0)
    ctx->pc = 0x2aa3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x2aa3b4: 0xc09f9f0  jal         func_27E7C0
    ctx->pc = 0x2AA3B4u;
    SET_GPR_U32(ctx, 31, 0x2AA3BCu);
    ctx->pc = 0x27E7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E7C0u, 0x2AA3B4u, 0x2AA3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA3BCu;
label_2aa3bc:
    // 0x2aa3bc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2AA3BCu;
    {
        const bool branch_taken_0x2aa3bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aa3bc) {
            ctx->pc = 0x2AA3F0u;
            goto label_2aa3f0;
        }
    }
    ctx->pc = 0x2AA3C4u;
    // 0x2aa3c4: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2aa3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2aa3c8: 0x8c440058  lw          $a0, 0x58($v0)
    ctx->pc = 0x2aa3c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x2aa3cc: 0xc0aa918  jal         func_2AA460
    ctx->pc = 0x2AA3CCu;
    SET_GPR_U32(ctx, 31, 0x2AA3D4u);
    ctx->pc = 0x2AA460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA460u, 0x2AA3CCu, 0x2AA3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA3D4u;
label_2aa3d4:
    // 0x2aa3d4: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x2aa3d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2aa3d8: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x2aa3d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x2aa3dc: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2aa3dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2aa3e0: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x2aa3e0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2aa3e4: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x2aa3e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x2aa3e8: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x2aa3e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x2aa3ec: 0x307100ff  andi        $s1, $v1, 0xFF
    ctx->pc = 0x2aa3ecu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2aa3f0:
    // 0x2aa3f0: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x2AA3F0u;
    {
        const bool branch_taken_0x2aa3f0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aa3f0) {
            ctx->pc = 0x2AA42Cu;
            goto label_2aa42c;
        }
    }
    ctx->pc = 0x2AA3F8u;
    // 0x2aa3f8: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x2aa3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2aa3fc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2aa3fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2aa400: 0xc09d250  jal         func_274940
    ctx->pc = 0x2AA400u;
    SET_GPR_U32(ctx, 31, 0x2AA408u);
    ctx->pc = 0x274940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274940u, 0x2AA400u, 0x2AA408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA408u;
label_2aa408:
    // 0x2aa408: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2AA408u;
    {
        const bool branch_taken_0x2aa408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aa408) {
            ctx->pc = 0x2AA42Cu;
            goto label_2aa42c;
        }
    }
    ctx->pc = 0x2AA410u;
label_2aa410:
    // 0x2aa410: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x2aa410u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2aa414: 0xc0aa7e4  jal         func_2A9F90
    ctx->pc = 0x2AA414u;
    SET_GPR_U32(ctx, 31, 0x2AA41Cu);
    ctx->pc = 0x2A9F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9F90u, 0x2AA414u, 0x2AA41Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA41Cu;
label_2aa41c:
    // 0x2aa41c: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x2aa41cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2aa420: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2aa420u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2aa424: 0xc09d250  jal         func_274940
    ctx->pc = 0x2AA424u;
    SET_GPR_U32(ctx, 31, 0x2AA42Cu);
    ctx->pc = 0x274940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274940u, 0x2AA424u, 0x2AA42Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA42Cu;
label_2aa42c:
    // 0x2aa42c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2aa42cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2aa430: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2aa430u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2aa434: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2aa434u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2aa438: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2aa438u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2aa43c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2aa43cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2aa440: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2aa440u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2aa444: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2aa444u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2aa448: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x2aa448u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2aa44c: 0x3e00008  jr          $ra
    ctx->pc = 0x2AA44Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AA44Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AA454u;
    // 0x2aa454: 0x0  nop
    ctx->pc = 0x2aa454u;
    // NOP
    // 0x2aa458: 0x0  nop
    ctx->pc = 0x2aa458u;
    // NOP
    // 0x2aa45c: 0x0  nop
    ctx->pc = 0x2aa45cu;
    // NOP
    ctx->pc = 0x2aa460u;
}
