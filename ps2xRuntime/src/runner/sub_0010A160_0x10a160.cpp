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

// Function: sub_0010A160
// Address: 0x10a160 - 0x10a3b0
void sub_0010A160_0x10a160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010A160_0x10a160");
#endif

    switch (ctx->pc) {
        case 0x10a188u: goto label_10a188;
        case 0x10a244u: goto label_10a244;
        case 0x10a27cu: goto label_10a27c;
        case 0x10a320u: goto label_10a320;
        case 0x10a358u: goto label_10a358;
        default: break;
    }

    ctx->pc = 0x10a160u;

    // 0x10a160: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x10a160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x10a164: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x10a164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x10a168: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x10a168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x10a16c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x10a16cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x10a170: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x10a170u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x10a174: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x10a174u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x10a178: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x10a178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10a17c: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x10a17cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x10a180: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x10A180u;
    {
        const bool branch_taken_0x10a180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10a180) {
            ctx->pc = 0x10A358u;
            goto label_10a358;
        }
    }
    ctx->pc = 0x10A188u;
label_10a188:
    // 0x10a188: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x10a188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10a18c: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x10a18cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x10a190: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x10a190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10a194: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x10a194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x10a198: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x10a198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x10a19c: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x10a19cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x10a1a0: 0x14830038  bne         $a0, $v1, . + 4 + (0x38 << 2)
    ctx->pc = 0x10A1A0u;
    {
        const bool branch_taken_0x10a1a0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x10a1a0) {
            ctx->pc = 0x10A284u;
            goto label_10a284;
        }
    }
    ctx->pc = 0x10A1A8u;
    // 0x10a1a8: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x10a1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10a1ac: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x10a1acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x10a1b0: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x10a1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x10a1b4: 0x8c71000c  lw          $s1, 0xC($v1)
    ctx->pc = 0x10a1b4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x10a1b8: 0x12200015  beqz        $s1, . + 4 + (0x15 << 2)
    ctx->pc = 0x10A1B8u;
    {
        const bool branch_taken_0x10a1b8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x10a1b8) {
            ctx->pc = 0x10A210u;
            goto label_10a210;
        }
    }
    ctx->pc = 0x10A1C0u;
    // 0x10a1c0: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x10a1c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x10a1c4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x10a1c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x10a1c8: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x10A1C8u;
    {
        const bool branch_taken_0x10a1c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x10a1c8) {
            ctx->pc = 0x10A210u;
            goto label_10a210;
        }
    }
    ctx->pc = 0x10A1D0u;
    // 0x10a1d0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x10a1d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10a1d4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x10a1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10a1d8: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x10a1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x10a1dc: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x10a1dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x10a1e0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x10a1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10a1e4: 0xa2230000  sb          $v1, 0x0($s1)
    ctx->pc = 0x10a1e4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x10a1e8: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x10a1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10a1ec: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x10a1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x10a1f0: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x10a1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x10a1f4: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x10a1f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x10a1f8: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x10a1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10a1fc: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x10a1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x10a200: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x10a200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x10a204: 0xafa30030  sw          $v1, 0x30($sp)
    ctx->pc = 0x10a204u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
    // 0x10a208: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x10A208u;
    {
        const bool branch_taken_0x10a208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10a208) {
            ctx->pc = 0x10A358u;
            goto label_10a358;
        }
    }
    ctx->pc = 0x10A210u;
label_10a210:
    // 0x10a210: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x10a210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10a214: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x10a214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10a218: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x10a218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x10a21c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x10a21cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x10a220: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x10A220u;
    {
        const bool branch_taken_0x10a220 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x10a220) {
            ctx->pc = 0x10A244u;
            goto label_10a244;
        }
    }
    ctx->pc = 0x10A228u;
    // 0x10a228: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x10a228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10a22c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x10a22cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x10a230: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x10a230u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x10a234: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x10a234u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10a238: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x10a238u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10a23c: 0xc0428ec  jal         func_10A3B0
    ctx->pc = 0x10A23Cu;
    SET_GPR_U32(ctx, 31, 0x10A244u);
    ctx->pc = 0x10A3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A3B0u, 0x10A23Cu, 0x10A244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A244u;
label_10a244:
    // 0x10a244: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x10a244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10a248: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x10a248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10a24c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x10a24cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x10a250: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x10a250u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x10a254: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x10a254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10a258: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x10a258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x10a25c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x10a25cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x10a260: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x10a260u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x10a264: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x10a264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10a268: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x10a268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x10a26c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x10a26cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x10a270: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x10a270u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10a274: 0xc042920  jal         func_10A480
    ctx->pc = 0x10A274u;
    SET_GPR_U32(ctx, 31, 0x10A27Cu);
    ctx->pc = 0x10A480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A480u, 0x10A274u, 0x10A27Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A27Cu;
label_10a27c:
    // 0x10a27c: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x10A27Cu;
    {
        const bool branch_taken_0x10a27c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10a27c) {
            ctx->pc = 0x10A358u;
            goto label_10a358;
        }
    }
    ctx->pc = 0x10A284u;
label_10a284:
    // 0x10a284: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x10a284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10a288: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x10a288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x10a28c: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x10a28cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x10a290: 0x8c700008  lw          $s0, 0x8($v1)
    ctx->pc = 0x10a290u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x10a294: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x10A294u;
    {
        const bool branch_taken_0x10a294 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x10a294) {
            ctx->pc = 0x10A2ECu;
            goto label_10a2ec;
        }
    }
    ctx->pc = 0x10A29Cu;
    // 0x10a29c: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x10a29cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10a2a0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x10a2a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x10a2a4: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x10A2A4u;
    {
        const bool branch_taken_0x10a2a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x10a2a4) {
            ctx->pc = 0x10A2ECu;
            goto label_10a2ec;
        }
    }
    ctx->pc = 0x10A2ACu;
    // 0x10a2ac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x10a2acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10a2b0: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x10a2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10a2b4: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x10a2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x10a2b8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x10a2b8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x10a2bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x10a2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10a2c0: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x10a2c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x10a2c4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x10a2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10a2c8: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x10a2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x10a2cc: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x10a2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x10a2d0: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x10a2d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x10a2d4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x10a2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10a2d8: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x10a2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x10a2dc: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x10a2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x10a2e0: 0xafa30030  sw          $v1, 0x30($sp)
    ctx->pc = 0x10a2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
    // 0x10a2e4: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x10A2E4u;
    {
        const bool branch_taken_0x10a2e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10a2e4) {
            ctx->pc = 0x10A358u;
            goto label_10a358;
        }
    }
    ctx->pc = 0x10A2ECu;
label_10a2ec:
    // 0x10a2ec: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x10a2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10a2f0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x10a2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10a2f4: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x10a2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x10a2f8: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x10a2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x10a2fc: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x10A2FCu;
    {
        const bool branch_taken_0x10a2fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x10a2fc) {
            ctx->pc = 0x10A320u;
            goto label_10a320;
        }
    }
    ctx->pc = 0x10A304u;
    // 0x10a304: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x10a304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10a308: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x10a308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x10a30c: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x10a30cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x10a310: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x10a310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10a314: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x10a314u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10a318: 0xc042920  jal         func_10A480
    ctx->pc = 0x10A318u;
    SET_GPR_U32(ctx, 31, 0x10A320u);
    ctx->pc = 0x10A480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A480u, 0x10A318u, 0x10A320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A320u;
label_10a320:
    // 0x10a320: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x10a320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10a324: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x10a324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10a328: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x10a328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x10a32c: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x10a32cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x10a330: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x10a330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10a334: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x10a334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x10a338: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x10a338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x10a33c: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x10a33cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x10a340: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x10a340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10a344: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x10a344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x10a348: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x10a348u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x10a34c: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x10a34cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10a350: 0xc0428ec  jal         func_10A3B0
    ctx->pc = 0x10A350u;
    SET_GPR_U32(ctx, 31, 0x10A358u);
    ctx->pc = 0x10A3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A3B0u, 0x10A350u, 0x10A358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A358u;
label_10a358:
    // 0x10a358: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x10a358u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10a35c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x10a35cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10a360: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x10a360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10a364: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x10A364u;
    {
        const bool branch_taken_0x10a364 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x10a364) {
            ctx->pc = 0x10A384u;
            goto label_10a384;
        }
    }
    ctx->pc = 0x10A36Cu;
    // 0x10a36c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x10a36cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10a370: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x10a370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x10a374: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x10a374u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10a378: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x10a378u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x10a37c: 0x1060ff82  beqz        $v1, . + 4 + (-0x7E << 2)
    ctx->pc = 0x10A37Cu;
    {
        const bool branch_taken_0x10a37c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x10a37c) {
            ctx->pc = 0x10A188u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10a188;
        }
    }
    ctx->pc = 0x10A384u;
label_10a384:
    // 0x10a384: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x10a384u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10a388: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x10a388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10a38c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x10a38cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10a390: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x10a390u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x10a394: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x10a394u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10a398: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x10a398u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10a39c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x10a39cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10a3a0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x10a3a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x10a3a4: 0x3e00008  jr          $ra
    ctx->pc = 0x10A3A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10A3A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10A3ACu;
    // 0x10a3ac: 0x0  nop
    ctx->pc = 0x10a3acu;
    // NOP
    ctx->pc = 0x10a3b0u;
}
