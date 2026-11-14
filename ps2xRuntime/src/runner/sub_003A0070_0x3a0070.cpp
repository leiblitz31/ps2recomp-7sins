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

// Function: sub_003A0070
// Address: 0x3a0070 - 0x3a0340
void sub_003A0070_0x3a0070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A0070_0x3a0070");
#endif

    switch (ctx->pc) {
        case 0x3a0070u: goto label_3a0070;
        case 0x3a0074u: goto label_3a0074;
        case 0x3a0078u: goto label_3a0078;
        case 0x3a007cu: goto label_3a007c;
        case 0x3a0080u: goto label_3a0080;
        case 0x3a0084u: goto label_3a0084;
        case 0x3a0088u: goto label_3a0088;
        case 0x3a008cu: goto label_3a008c;
        case 0x3a0090u: goto label_3a0090;
        case 0x3a0094u: goto label_3a0094;
        case 0x3a0098u: goto label_3a0098;
        case 0x3a009cu: goto label_3a009c;
        case 0x3a00a0u: goto label_3a00a0;
        case 0x3a00a4u: goto label_3a00a4;
        case 0x3a00a8u: goto label_3a00a8;
        case 0x3a00acu: goto label_3a00ac;
        case 0x3a00b0u: goto label_3a00b0;
        case 0x3a00b4u: goto label_3a00b4;
        case 0x3a00b8u: goto label_3a00b8;
        case 0x3a00bcu: goto label_3a00bc;
        case 0x3a00c0u: goto label_3a00c0;
        case 0x3a00c4u: goto label_3a00c4;
        case 0x3a00c8u: goto label_3a00c8;
        case 0x3a00ccu: goto label_3a00cc;
        case 0x3a00d0u: goto label_3a00d0;
        case 0x3a00d4u: goto label_3a00d4;
        case 0x3a00d8u: goto label_3a00d8;
        case 0x3a00dcu: goto label_3a00dc;
        case 0x3a00e0u: goto label_3a00e0;
        case 0x3a00e4u: goto label_3a00e4;
        case 0x3a00e8u: goto label_3a00e8;
        case 0x3a00ecu: goto label_3a00ec;
        case 0x3a00f0u: goto label_3a00f0;
        case 0x3a00f4u: goto label_3a00f4;
        case 0x3a00f8u: goto label_3a00f8;
        case 0x3a00fcu: goto label_3a00fc;
        case 0x3a0100u: goto label_3a0100;
        case 0x3a0104u: goto label_3a0104;
        case 0x3a0108u: goto label_3a0108;
        case 0x3a010cu: goto label_3a010c;
        case 0x3a0110u: goto label_3a0110;
        case 0x3a0114u: goto label_3a0114;
        case 0x3a0118u: goto label_3a0118;
        case 0x3a011cu: goto label_3a011c;
        case 0x3a0120u: goto label_3a0120;
        case 0x3a0124u: goto label_3a0124;
        case 0x3a0128u: goto label_3a0128;
        case 0x3a012cu: goto label_3a012c;
        case 0x3a0130u: goto label_3a0130;
        case 0x3a0134u: goto label_3a0134;
        case 0x3a0138u: goto label_3a0138;
        case 0x3a013cu: goto label_3a013c;
        case 0x3a0140u: goto label_3a0140;
        case 0x3a0144u: goto label_3a0144;
        case 0x3a0148u: goto label_3a0148;
        case 0x3a014cu: goto label_3a014c;
        case 0x3a0150u: goto label_3a0150;
        case 0x3a0154u: goto label_3a0154;
        case 0x3a0158u: goto label_3a0158;
        case 0x3a015cu: goto label_3a015c;
        case 0x3a0160u: goto label_3a0160;
        case 0x3a0164u: goto label_3a0164;
        case 0x3a0168u: goto label_3a0168;
        case 0x3a016cu: goto label_3a016c;
        case 0x3a0170u: goto label_3a0170;
        case 0x3a0174u: goto label_3a0174;
        case 0x3a0178u: goto label_3a0178;
        case 0x3a017cu: goto label_3a017c;
        case 0x3a0180u: goto label_3a0180;
        case 0x3a0184u: goto label_3a0184;
        case 0x3a0188u: goto label_3a0188;
        case 0x3a018cu: goto label_3a018c;
        case 0x3a0190u: goto label_3a0190;
        case 0x3a0194u: goto label_3a0194;
        case 0x3a0198u: goto label_3a0198;
        case 0x3a019cu: goto label_3a019c;
        case 0x3a01a0u: goto label_3a01a0;
        case 0x3a01a4u: goto label_3a01a4;
        case 0x3a01a8u: goto label_3a01a8;
        case 0x3a01acu: goto label_3a01ac;
        case 0x3a01b0u: goto label_3a01b0;
        case 0x3a01b4u: goto label_3a01b4;
        case 0x3a01b8u: goto label_3a01b8;
        case 0x3a01bcu: goto label_3a01bc;
        case 0x3a01c0u: goto label_3a01c0;
        case 0x3a01c4u: goto label_3a01c4;
        case 0x3a01c8u: goto label_3a01c8;
        case 0x3a01ccu: goto label_3a01cc;
        case 0x3a01d0u: goto label_3a01d0;
        case 0x3a01d4u: goto label_3a01d4;
        case 0x3a01d8u: goto label_3a01d8;
        case 0x3a01dcu: goto label_3a01dc;
        case 0x3a01e0u: goto label_3a01e0;
        case 0x3a01e4u: goto label_3a01e4;
        case 0x3a01e8u: goto label_3a01e8;
        case 0x3a01ecu: goto label_3a01ec;
        case 0x3a01f0u: goto label_3a01f0;
        case 0x3a01f4u: goto label_3a01f4;
        case 0x3a01f8u: goto label_3a01f8;
        case 0x3a01fcu: goto label_3a01fc;
        case 0x3a0200u: goto label_3a0200;
        case 0x3a0204u: goto label_3a0204;
        case 0x3a0208u: goto label_3a0208;
        case 0x3a020cu: goto label_3a020c;
        case 0x3a0210u: goto label_3a0210;
        case 0x3a0214u: goto label_3a0214;
        case 0x3a0218u: goto label_3a0218;
        case 0x3a021cu: goto label_3a021c;
        case 0x3a0220u: goto label_3a0220;
        case 0x3a0224u: goto label_3a0224;
        case 0x3a0228u: goto label_3a0228;
        case 0x3a022cu: goto label_3a022c;
        case 0x3a0230u: goto label_3a0230;
        case 0x3a0234u: goto label_3a0234;
        case 0x3a0238u: goto label_3a0238;
        case 0x3a023cu: goto label_3a023c;
        case 0x3a0240u: goto label_3a0240;
        case 0x3a0244u: goto label_3a0244;
        case 0x3a0248u: goto label_3a0248;
        case 0x3a024cu: goto label_3a024c;
        case 0x3a0250u: goto label_3a0250;
        case 0x3a0254u: goto label_3a0254;
        case 0x3a0258u: goto label_3a0258;
        case 0x3a025cu: goto label_3a025c;
        case 0x3a0260u: goto label_3a0260;
        case 0x3a0264u: goto label_3a0264;
        case 0x3a0268u: goto label_3a0268;
        case 0x3a026cu: goto label_3a026c;
        case 0x3a0270u: goto label_3a0270;
        case 0x3a0274u: goto label_3a0274;
        case 0x3a0278u: goto label_3a0278;
        case 0x3a027cu: goto label_3a027c;
        case 0x3a0280u: goto label_3a0280;
        case 0x3a0284u: goto label_3a0284;
        case 0x3a0288u: goto label_3a0288;
        case 0x3a028cu: goto label_3a028c;
        case 0x3a0290u: goto label_3a0290;
        case 0x3a0294u: goto label_3a0294;
        case 0x3a0298u: goto label_3a0298;
        case 0x3a029cu: goto label_3a029c;
        case 0x3a02a0u: goto label_3a02a0;
        case 0x3a02a4u: goto label_3a02a4;
        case 0x3a02a8u: goto label_3a02a8;
        case 0x3a02acu: goto label_3a02ac;
        case 0x3a02b0u: goto label_3a02b0;
        case 0x3a02b4u: goto label_3a02b4;
        case 0x3a02b8u: goto label_3a02b8;
        case 0x3a02bcu: goto label_3a02bc;
        case 0x3a02c0u: goto label_3a02c0;
        case 0x3a02c4u: goto label_3a02c4;
        case 0x3a02c8u: goto label_3a02c8;
        case 0x3a02ccu: goto label_3a02cc;
        case 0x3a02d0u: goto label_3a02d0;
        case 0x3a02d4u: goto label_3a02d4;
        case 0x3a02d8u: goto label_3a02d8;
        case 0x3a02dcu: goto label_3a02dc;
        case 0x3a02e0u: goto label_3a02e0;
        case 0x3a02e4u: goto label_3a02e4;
        case 0x3a02e8u: goto label_3a02e8;
        case 0x3a02ecu: goto label_3a02ec;
        case 0x3a02f0u: goto label_3a02f0;
        case 0x3a02f4u: goto label_3a02f4;
        case 0x3a02f8u: goto label_3a02f8;
        case 0x3a02fcu: goto label_3a02fc;
        case 0x3a0300u: goto label_3a0300;
        case 0x3a0304u: goto label_3a0304;
        case 0x3a0308u: goto label_3a0308;
        case 0x3a030cu: goto label_3a030c;
        case 0x3a0310u: goto label_3a0310;
        case 0x3a0314u: goto label_3a0314;
        case 0x3a0318u: goto label_3a0318;
        case 0x3a031cu: goto label_3a031c;
        case 0x3a0320u: goto label_3a0320;
        case 0x3a0324u: goto label_3a0324;
        case 0x3a0328u: goto label_3a0328;
        case 0x3a032cu: goto label_3a032c;
        case 0x3a0330u: goto label_3a0330;
        case 0x3a0334u: goto label_3a0334;
        case 0x3a0338u: goto label_3a0338;
        case 0x3a033cu: goto label_3a033c;
        default: break;
    }

    ctx->pc = 0x3a0070u;

label_3a0070:
    // 0x3a0070: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x3a0070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_3a0074:
    // 0x3a0074: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3a0074u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a0078:
    // 0x3a0078: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x3a0078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_3a007c:
    // 0x3a007c: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x3a007cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3a0080:
    // 0x3a0080: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x3a0080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
label_3a0084:
    // 0x3a0084: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3a0084u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3a0088:
    // 0x3a0088: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x3a0088u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3a008c:
    // 0x3a008c: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x3a008cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_3a0090:
    // 0x3a0090: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x3a0090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_3a0094:
    // 0x3a0094: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x3a0094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_3a0098:
    // 0x3a0098: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x3a0098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_3a009c:
    // 0x3a009c: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x3a009cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_3a00a0:
    // 0x3a00a0: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x3a00a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
label_3a00a4:
    // 0x3a00a4: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x3a00a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
label_3a00a8:
    // 0x3a00a8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3a00a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3a00ac:
    // 0x3a00ac: 0xc103322  jal         func_40CC88
label_3a00b0:
    if (ctx->pc == 0x3A00B0u) {
        ctx->pc = 0x3A00B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A00ACu;
        // 0x3a00b0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A00B4u;
        goto label_3a00b4;
    }
    ctx->pc = 0x3A00ACu;
    SET_GPR_U32(ctx, 31, 0x3A00B4u);
    ctx->pc = 0x3A00B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A00ACu;
    // 0x3a00b0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40CC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CC88u, 0x3A00ACu, 0x3A00B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A00B4u;
label_3a00b4:
    // 0x3a00b4: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_3a00b8:
    if (ctx->pc == 0x3A00B8u) {
        ctx->pc = 0x3A00B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A00B4u;
        // 0x3a00b8: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A00BCu;
        goto label_3a00bc;
    }
    ctx->pc = 0x3A00B4u;
    {
        const bool branch_taken_0x3a00b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A00B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A00B4u;
        // 0x3a00b8: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a00b4) {
            ctx->pc = 0x3A00F8u;
            goto label_3a00f8;
        }
    }
    ctx->pc = 0x3A00BCu;
label_3a00bc:
    // 0x3a00bc: 0x3c02fffc  lui         $v0, 0xFFFC
    ctx->pc = 0x3a00bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65532 << 16));
label_3a00c0:
    // 0x3a00c0: 0x3442b000  ori         $v0, $v0, 0xB000
    ctx->pc = 0x3a00c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45056);
label_3a00c4:
    // 0x3a00c4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3a00c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3a00c8:
    // 0x3a00c8: 0x2c632003  sltiu       $v1, $v1, 0x2003
    ctx->pc = 0x3a00c8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8195) ? 1 : 0);
label_3a00cc:
    // 0x3a00cc: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
label_3a00d0:
    if (ctx->pc == 0x3A00D0u) {
        ctx->pc = 0x3A00D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A00CCu;
        // 0x3a00d0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A00D4u;
        goto label_3a00d4;
    }
    ctx->pc = 0x3A00CCu;
    {
        const bool branch_taken_0x3a00cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A00D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A00CCu;
        // 0x3a00d0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a00cc) {
            ctx->pc = 0x3A0100u;
            goto label_3a0100;
        }
    }
    ctx->pc = 0x3A00D4u;
label_3a00d4:
    // 0x3a00d4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3a00d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3a00d8:
    // 0x3a00d8: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x3a00d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_3a00dc:
    // 0x3a00dc: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x3a00dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_3a00e0:
    // 0x3a00e0: 0xc1035f6  jal         func_40D7D8
label_3a00e4:
    if (ctx->pc == 0x3A00E4u) {
        ctx->pc = 0x3A00E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A00E0u;
        // 0x3a00e4: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A00E8u;
        goto label_3a00e8;
    }
    ctx->pc = 0x3A00E0u;
    SET_GPR_U32(ctx, 31, 0x3A00E8u);
    ctx->pc = 0x3A00E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A00E0u;
    // 0x3a00e4: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x3A00E0u, 0x3A00E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A00E8u;
label_3a00e8:
    // 0x3a00e8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3a00e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3a00ec:
    // 0x3a00ec: 0xc103628  jal         func_40D8A0
label_3a00f0:
    if (ctx->pc == 0x3A00F0u) {
        ctx->pc = 0x3A00F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A00ECu;
        // 0x3a00f0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A00F4u;
        goto label_3a00f4;
    }
    ctx->pc = 0x3A00ECu;
    SET_GPR_U32(ctx, 31, 0x3A00F4u);
    ctx->pc = 0x3A00F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A00ECu;
    // 0x3a00f0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x3A00ECu, 0x3A00F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A00F4u;
label_3a00f4:
    // 0x3a00f4: 0x0  nop
    ctx->pc = 0x3a00f4u;
    // NOP
label_3a00f8:
    // 0x3a00f8: 0x10000085  b           . + 4 + (0x85 << 2)
label_3a00fc:
    if (ctx->pc == 0x3A00FCu) {
        ctx->pc = 0x3A00FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A00F8u;
        // 0x3a00fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A0100u;
        goto label_3a0100;
    }
    ctx->pc = 0x3A00F8u;
    {
        const bool branch_taken_0x3a00f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A00FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A00F8u;
        // 0x3a00fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a00f8) {
            ctx->pc = 0x3A0310u;
            goto label_3a0310;
        }
    }
    ctx->pc = 0x3A0100u;
label_3a0100:
    // 0x3a0100: 0x27a50014  addiu       $a1, $sp, 0x14
    ctx->pc = 0x3a0100u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
label_3a0104:
    // 0x3a0104: 0xc10480a  jal         func_412028
label_3a0108:
    if (ctx->pc == 0x3A0108u) {
        ctx->pc = 0x3A0108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0104u;
        // 0x3a0108: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A010Cu;
        goto label_3a010c;
    }
    ctx->pc = 0x3A0104u;
    SET_GPR_U32(ctx, 31, 0x3A010Cu);
    ctx->pc = 0x3A0108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0104u;
    // 0x3a0108: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412028u, 0x3A0104u, 0x3A010Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A010Cu;
label_3a010c:
    // 0x3a010c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3a010cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a0110:
    // 0x3a0110: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3a0110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3a0114:
    // 0x3a0114: 0x1462007e  bne         $v1, $v0, . + 4 + (0x7E << 2)
label_3a0118:
    if (ctx->pc == 0x3A0118u) {
        ctx->pc = 0x3A0118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0114u;
        // 0x3a0118: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A011Cu;
        goto label_3a011c;
    }
    ctx->pc = 0x3A0114u;
    {
        const bool branch_taken_0x3a0114 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3A0118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0114u;
        // 0x3a0118: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0114) {
            ctx->pc = 0x3A0310u;
            goto label_3a0310;
        }
    }
    ctx->pc = 0x3A011Cu;
label_3a011c:
    // 0x3a011c: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x3a011cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_3a0120:
    // 0x3a0120: 0x1443007b  bne         $v0, $v1, . + 4 + (0x7B << 2)
label_3a0124:
    if (ctx->pc == 0x3A0124u) {
        ctx->pc = 0x3A0124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0120u;
        // 0x3a0124: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A0128u;
        goto label_3a0128;
    }
    ctx->pc = 0x3A0120u;
    {
        const bool branch_taken_0x3a0120 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3A0124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0120u;
        // 0x3a0124: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0120) {
            ctx->pc = 0x3A0310u;
            goto label_3a0310;
        }
    }
    ctx->pc = 0x3A0128u;
label_3a0128:
    // 0x3a0128: 0x8f82bd78  lw          $v0, -0x4288($gp)
    ctx->pc = 0x3a0128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950264)));
label_3a012c:
    // 0x3a012c: 0x2c22021  addu        $a0, $s6, $v0
    ctx->pc = 0x3a012cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_3a0130:
    // 0x3a0130: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3a0130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3a0134:
    // 0x3a0134: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_3a0138:
    if (ctx->pc == 0x3A0138u) {
        ctx->pc = 0x3A0138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0134u;
        // 0x3a0138: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A013Cu;
        goto label_3a013c;
    }
    ctx->pc = 0x3A0134u;
    {
        const bool branch_taken_0x3a0134 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A0138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0134u;
        // 0x3a0138: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0134) {
            ctx->pc = 0x3A0154u;
            goto label_3a0154;
        }
    }
    ctx->pc = 0x3A013Cu;
label_3a013c:
    // 0x3a013c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3a013cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3a0140:
    // 0x3a0140: 0x8ec20024  lw          $v0, 0x24($s6)
    ctx->pc = 0x3a0140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 36)));
label_3a0144:
    // 0x3a0144: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
label_3a0148:
    if (ctx->pc == 0x3A0148u) {
        ctx->pc = 0x3A0148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0144u;
        // 0x3a0148: 0x8ec50024  lw          $a1, 0x24($s6) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A014Cu;
        goto label_3a014c;
    }
    ctx->pc = 0x3A0144u;
    {
        const bool branch_taken_0x3a0144 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3a0144) {
            ctx->pc = 0x3A0148u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A0144u;
            // 0x3a0148: 0x8ec50024  lw          $a1, 0x24($s6) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A0158u;
            goto label_3a0158;
        }
    }
    ctx->pc = 0x3A014Cu;
label_3a014c:
    // 0x3a014c: 0x10000004  b           . + 4 + (0x4 << 2)
label_3a0150:
    if (ctx->pc == 0x3A0150u) {
        ctx->pc = 0x3A0150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A014Cu;
        // 0x3a0150: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A0154u;
        goto label_3a0154;
    }
    ctx->pc = 0x3A014Cu;
    {
        const bool branch_taken_0x3a014c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A0150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A014Cu;
        // 0x3a0150: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a014c) {
            ctx->pc = 0x3A0160u;
            goto label_3a0160;
        }
    }
    ctx->pc = 0x3A0154u;
label_3a0154:
    // 0x3a0154: 0x8ec50024  lw          $a1, 0x24($s6)
    ctx->pc = 0x3a0154u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 36)));
label_3a0158:
    // 0x3a0158: 0xc0e7eec  jal         func_39FBB0
label_3a015c:
    if (ctx->pc == 0x3A015Cu) {
        ctx->pc = 0x3A015Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0158u;
        // 0x3a015c: 0x2c62021  addu        $a0, $s6, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A0160u;
        goto label_3a0160;
    }
    ctx->pc = 0x3A0158u;
    SET_GPR_U32(ctx, 31, 0x3A0160u);
    ctx->pc = 0x3A015Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0158u;
    // 0x3a015c: 0x2c62021  addu        $a0, $s6, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39FBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39FBB0u, 0x3A0158u, 0x3A0160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0160u;
label_3a0160:
    // 0x3a0160: 0x8c5e0000  lw          $fp, 0x0($v0)
    ctx->pc = 0x3a0160u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3a0164:
    // 0x3a0164: 0x8fd70000  lw          $s7, 0x0($fp)
    ctx->pc = 0x3a0164u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_3a0168:
    // 0x3a0168: 0x1ae00068  blez        $s7, . + 4 + (0x68 << 2)
label_3a016c:
    if (ctx->pc == 0x3A016Cu) {
        ctx->pc = 0x3A016Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0168u;
        // 0x3a016c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A0170u;
        goto label_3a0170;
    }
    ctx->pc = 0x3A0168u;
    {
        const bool branch_taken_0x3a0168 = (GPR_S32(ctx, 23) <= 0);
        ctx->pc = 0x3A016Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0168u;
        // 0x3a016c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0168) {
            ctx->pc = 0x3A030Cu;
            goto label_3a030c;
        }
    }
    ctx->pc = 0x3A0170u;
label_3a0170:
    // 0x3a0170: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3a0170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3a0174:
    // 0x3a0174: 0x0  nop
    ctx->pc = 0x3a0174u;
    // NOP
label_3a0178:
    // 0x3a0178: 0x27a50018  addiu       $a1, $sp, 0x18
    ctx->pc = 0x3a0178u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
label_3a017c:
    // 0x3a017c: 0xc10480a  jal         func_412028
label_3a0180:
    if (ctx->pc == 0x3A0180u) {
        ctx->pc = 0x3A0180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A017Cu;
        // 0x3a0180: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A0184u;
        goto label_3a0184;
    }
    ctx->pc = 0x3A017Cu;
    SET_GPR_U32(ctx, 31, 0x3A0184u);
    ctx->pc = 0x3A0180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A017Cu;
    // 0x3a0180: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412028u, 0x3A017Cu, 0x3A0184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0184u;
label_3a0184:
    // 0x3a0184: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3a0184u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a0188:
    // 0x3a0188: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3a0188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3a018c:
    // 0x3a018c: 0x1642ffda  bne         $s2, $v0, . + 4 + (-0x26 << 2)
label_3a0190:
    if (ctx->pc == 0x3A0190u) {
        ctx->pc = 0x3A0190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A018Cu;
        // 0x3a0190: 0x131080  sll         $v0, $s3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A0194u;
        goto label_3a0194;
    }
    ctx->pc = 0x3A018Cu;
    {
        const bool branch_taken_0x3a018c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x3A0190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A018Cu;
        // 0x3a0190: 0x131080  sll         $v0, $s3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a018c) {
            ctx->pc = 0x3A00F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a00f8;
        }
    }
    ctx->pc = 0x3A0194u;
label_3a0194:
    // 0x3a0194: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3a0194u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_3a0198:
    // 0x3a0198: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x3a0198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_3a019c:
    // 0x3a019c: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3a019cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_3a01a0:
    // 0x3a01a0: 0x3c2a021  addu        $s4, $fp, $v0
    ctx->pc = 0x3a01a0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
label_3a01a4:
    // 0x3a01a4: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x3a01a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_3a01a8:
    // 0x3a01a8: 0x8c62e988  lw          $v0, -0x1678($v1)
    ctx->pc = 0x3a01a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961544)));
label_3a01ac:
    // 0x3a01ac: 0x24840247  addiu       $a0, $a0, 0x247
    ctx->pc = 0x3a01acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 583));
label_3a01b0:
    // 0x3a01b0: 0x40f809  jalr        $v0
label_3a01b4:
    if (ctx->pc == 0x3A01B4u) {
        ctx->pc = 0x3A01B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A01B0u;
        // 0x3a01b4: 0x34a5050d  ori         $a1, $a1, 0x50D (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1293);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A01B8u;
        goto label_3a01b8;
    }
    ctx->pc = 0x3A01B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A01B8u);
        ctx->pc = 0x3A01B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A01B0u;
        // 0x3a01b4: 0x34a5050d  ori         $a1, $a1, 0x50D (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1293);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A01B0u, 0x3A01B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A01B8u;
label_3a01b8:
    // 0x3a01b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3a01b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a01bc:
    // 0x3a01bc: 0x1200ffce  beqz        $s0, . + 4 + (-0x32 << 2)
label_3a01c0:
    if (ctx->pc == 0x3A01C0u) {
        ctx->pc = 0x3A01C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A01BCu;
        // 0x3a01c0: 0xae900000  sw          $s0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A01C4u;
        goto label_3a01c4;
    }
    ctx->pc = 0x3A01BCu;
    {
        const bool branch_taken_0x3a01bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A01C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A01BCu;
        // 0x3a01c0: 0xae900000  sw          $s0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a01bc) {
            ctx->pc = 0x3A00F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a00f8;
        }
    }
    ctx->pc = 0x3A01C4u;
label_3a01c4:
    // 0x3a01c4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x3a01c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_3a01c8:
    // 0x3a01c8: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x3a01c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
label_3a01cc:
    // 0x3a01cc: 0x2463fb80  addiu       $v1, $v1, -0x480
    ctx->pc = 0x3a01ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966144));
label_3a01d0:
    // 0x3a01d0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x3a01d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_3a01d4:
    // 0x3a01d4: 0x2442022f  addiu       $v0, $v0, 0x22F
    ctx->pc = 0x3a01d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 559));
label_3a01d8:
    // 0x3a01d8: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x3a01d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_3a01dc:
    // 0x3a01dc: 0xae16000c  sw          $s6, 0xC($s0)
    ctx->pc = 0x3a01dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 22));
label_3a01e0:
    // 0x3a01e0: 0x26110018  addiu       $s1, $s0, 0x18
    ctx->pc = 0x3a01e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
label_3a01e4:
    // 0x3a01e4: 0xae140010  sw          $s4, 0x10($s0)
    ctx->pc = 0x3a01e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 20));
label_3a01e8:
    // 0x3a01e8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3a01e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3a01ec:
    // 0x3a01ec: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x3a01ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_3a01f0:
    // 0x3a01f0: 0x27a5001c  addiu       $a1, $sp, 0x1C
    ctx->pc = 0x3a01f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
label_3a01f4:
    // 0x3a01f4: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x3a01f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
label_3a01f8:
    // 0x3a01f8: 0xc10480a  jal         func_412028
label_3a01fc:
    if (ctx->pc == 0x3A01FCu) {
        ctx->pc = 0x3A01FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A01F8u;
        // 0x3a01fc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A0200u;
        goto label_3a0200;
    }
    ctx->pc = 0x3A01F8u;
    SET_GPR_U32(ctx, 31, 0x3A0200u);
    ctx->pc = 0x3A01FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A01F8u;
    // 0x3a01fc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412028u, 0x3A01F8u, 0x3A0200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0200u;
label_3a0200:
    // 0x3a0200: 0x1452ffbd  bne         $v0, $s2, . + 4 + (-0x43 << 2)
label_3a0204:
    if (ctx->pc == 0x3A0204u) {
        ctx->pc = 0x3A0204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0200u;
        // 0x3a0204: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A0208u;
        goto label_3a0208;
    }
    ctx->pc = 0x3A0200u;
    {
        const bool branch_taken_0x3a0200 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x3A0204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0200u;
        // 0x3a0204: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0200) {
            ctx->pc = 0x3A00F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a00f8;
        }
    }
    ctx->pc = 0x3A0208u;
label_3a0208:
    // 0x3a0208: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x3a0208u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
label_3a020c:
    // 0x3a020c: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x3a020cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_3a0210:
    // 0x3a0210: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3a0210u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a0214:
    // 0x3a0214: 0xc0bb7e6  jal         func_2EDF98
label_3a0218:
    if (ctx->pc == 0x3A0218u) {
        ctx->pc = 0x3A0218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0214u;
        // 0x3a0218: 0x240601b0  addiu       $a2, $zero, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 432));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A021Cu;
        goto label_3a021c;
    }
    ctx->pc = 0x3A0214u;
    SET_GPR_U32(ctx, 31, 0x3A021Cu);
    ctx->pc = 0x3A0218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0214u;
    // 0x3a0218: 0x240601b0  addiu       $a2, $zero, 0x1B0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x3A0214u, 0x3A021Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A021Cu;
label_3a021c:
    // 0x3a021c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x3a021cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_3a0220:
    // 0x3a0220: 0x26020207  addiu       $v0, $s0, 0x207
    ctx->pc = 0x3a0220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 519));
label_3a0224:
    // 0x3a0224: 0x3463ffc0  ori         $v1, $v1, 0xFFC0
    ctx->pc = 0x3a0224u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65472);
label_3a0228:
    // 0x3a0228: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x3a0228u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_3a022c:
    // 0x3a022c: 0x431824  and         $v1, $v0, $v1
    ctx->pc = 0x3a022cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3a0230:
    // 0x3a0230: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_3a0234:
    if (ctx->pc == 0x3A0234u) {
        ctx->pc = 0x3A0234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0230u;
        // 0x3a0234: 0xae230008  sw          $v1, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A0238u;
        goto label_3a0238;
    }
    ctx->pc = 0x3A0230u;
    {
        const bool branch_taken_0x3a0230 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A0234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0230u;
        // 0x3a0234: 0xae230008  sw          $v1, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0230) {
            ctx->pc = 0x3A024Cu;
            goto label_3a024c;
        }
    }
    ctx->pc = 0x3A0238u;
label_3a0238:
    // 0x3a0238: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3a0238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_3a023c:
    // 0x3a023c: 0x2463007f  addiu       $v1, $v1, 0x7F
    ctx->pc = 0x3a023cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 127));
label_3a0240:
    // 0x3a0240: 0x3442ff80  ori         $v0, $v0, 0xFF80
    ctx->pc = 0x3a0240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65408);
label_3a0244:
    // 0x3a0244: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3a0244u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_3a0248:
    // 0x3a0248: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x3a0248u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
label_3a024c:
    // 0x3a024c: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x3a024cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3a0250:
    // 0x3a0250: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3a0250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3a0254:
    // 0x3a0254: 0xc10480a  jal         func_412028
label_3a0258:
    if (ctx->pc == 0x3A0258u) {
        ctx->pc = 0x3A0258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0254u;
        // 0x3a0258: 0x8fa60018  lw          $a2, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A025Cu;
        goto label_3a025c;
    }
    ctx->pc = 0x3A0254u;
    SET_GPR_U32(ctx, 31, 0x3A025Cu);
    ctx->pc = 0x3A0258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0254u;
    // 0x3a0258: 0x8fa60018  lw          $a2, 0x18($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412028u, 0x3A0254u, 0x3A025Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A025Cu;
label_3a025c:
    // 0x3a025c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3a025cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_3a0260:
    // 0x3a0260: 0x1443ffa5  bne         $v0, $v1, . + 4 + (-0x5B << 2)
label_3a0264:
    if (ctx->pc == 0x3A0264u) {
        ctx->pc = 0x3A0264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0260u;
        // 0x3a0264: 0x26700001  addiu       $s0, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A0268u;
        goto label_3a0268;
    }
    ctx->pc = 0x3A0260u;
    {
        const bool branch_taken_0x3a0260 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3A0264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0260u;
        // 0x3a0264: 0x26700001  addiu       $s0, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0260) {
            ctx->pc = 0x3A00F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a00f8;
        }
    }
    ctx->pc = 0x3A0268u;
label_3a0268:
    // 0x3a0268: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x3a0268u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3a026c:
    // 0x3a026c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3a026cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a0270:
    // 0x3a0270: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x3a0270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3a0274:
    // 0x3a0274: 0x0  nop
    ctx->pc = 0x3a0274u;
    // NOP
label_3a0278:
    // 0x3a0278: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x3a0278u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_3a027c:
    // 0x3a027c: 0x21702  srl         $v0, $v0, 28
    ctx->pc = 0x3a027cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 28));
label_3a0280:
    // 0x3a0280: 0x30440007  andi        $a0, $v0, 0x7
    ctx->pc = 0x3a0280u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_3a0284:
    // 0x3a0284: 0x2c830008  sltiu       $v1, $a0, 0x8
    ctx->pc = 0x3a0284u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_3a0288:
    // 0x3a0288: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
label_3a028c:
    if (ctx->pc == 0x3A028Cu) {
        ctx->pc = 0x3A028Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0288u;
        // 0x3a028c: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A0290u;
        goto label_3a0290;
    }
    ctx->pc = 0x3A0288u;
    {
        const bool branch_taken_0x3a0288 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A028Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0288u;
        // 0x3a028c: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0288) {
            ctx->pc = 0x3A02DCu;
            goto label_3a02dc;
        }
    }
    ctx->pc = 0x3A0290u;
label_3a0290:
    // 0x3a0290: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x3a0290u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_3a0294:
    // 0x3a0294: 0x2442bba0  addiu       $v0, $v0, -0x4460
    ctx->pc = 0x3a0294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949792));
label_3a0298:
    // 0x3a0298: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3a0298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3a029c:
    // 0x3a029c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3a029cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3a02a0:
    // 0x3a02a0: 0x800008  jr          $a0
label_3a02a4:
    if (ctx->pc == 0x3A02A4u) {
        ctx->pc = 0x3A02A8u;
        goto label_3a02a8;
    }
    ctx->pc = 0x3A02A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3A02A8u: goto label_3a02a8;
            case 0x3A02B8u: goto label_3a02b8;
            case 0x3A02D8u: goto label_3a02d8;
            case 0x3A02DCu: goto label_3a02dc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A02A0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3A02A8u;
label_3a02a8:
    // 0x3a02a8: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x3a02a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_3a02ac:
    // 0x3a02ac: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3a02acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_3a02b0:
    // 0x3a02b0: 0x1000000a  b           . + 4 + (0xA << 2)
label_3a02b4:
    if (ctx->pc == 0x3A02B4u) {
        ctx->pc = 0x3A02B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A02B0u;
        // 0x3a02b4: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A02B8u;
        goto label_3a02b8;
    }
    ctx->pc = 0x3A02B0u;
    {
        const bool branch_taken_0x3a02b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A02B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A02B0u;
        // 0x3a02b4: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a02b0) {
            ctx->pc = 0x3A02DCu;
            goto label_3a02dc;
        }
    }
    ctx->pc = 0x3A02B8u;
label_3a02b8:
    // 0x3a02b8: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x3a02b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_3a02bc:
    // 0x3a02bc: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x3a02bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3a02c0:
    // 0x3a02c0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x3a02c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3a02c4:
    // 0x3a02c4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3a02c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_3a02c8:
    // 0x3a02c8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3a02c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3a02cc:
    // 0x3a02cc: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x3a02ccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_3a02d0:
    // 0x3a02d0: 0x10000002  b           . + 4 + (0x2 << 2)
label_3a02d4:
    if (ctx->pc == 0x3A02D4u) {
        ctx->pc = 0x3A02D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A02D0u;
        // 0x3a02d4: 0x24a5000c  addiu       $a1, $a1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A02D8u;
        goto label_3a02d8;
    }
    ctx->pc = 0x3A02D0u;
    {
        const bool branch_taken_0x3a02d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A02D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A02D0u;
        // 0x3a02d4: 0x24a5000c  addiu       $a1, $a1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a02d0) {
            ctx->pc = 0x3A02DCu;
            goto label_3a02dc;
        }
    }
    ctx->pc = 0x3A02D8u;
label_3a02d8:
    // 0x3a02d8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3a02d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a02dc:
    // 0x3a02dc: 0x50e0ffe6  beql        $a3, $zero, . + 4 + (-0x1A << 2)
label_3a02e0:
    if (ctx->pc == 0x3A02E0u) {
        ctx->pc = 0x3A02E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A02DCu;
        // 0x3a02e0: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A02E4u;
        goto label_3a02e4;
    }
    ctx->pc = 0x3A02DCu;
    {
        const bool branch_taken_0x3a02dc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a02dc) {
            ctx->pc = 0x3A02E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A02DCu;
            // 0x3a02e0: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A0278u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a0278;
        }
    }
    ctx->pc = 0x3A02E4u;
label_3a02e4:
    // 0x3a02e4: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x3a02e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_3a02e8:
    // 0x3a02e8: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x3a02e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a02ec:
    // 0x3a02ec: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x3a02ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_3a02f0:
    // 0x3a02f0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x3a02f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3a02f4:
    // 0x3a02f4: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x3a02f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_3a02f8:
    // 0x3a02f8: 0xc0bf916  jal         func_2FE458
label_3a02fc:
    if (ctx->pc == 0x3A02FCu) {
        ctx->pc = 0x3A02FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A02F8u;
        // 0x3a02fc: 0x24a50018  addiu       $a1, $a1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A0300u;
        goto label_3a0300;
    }
    ctx->pc = 0x3A02F8u;
    SET_GPR_U32(ctx, 31, 0x3A0300u);
    ctx->pc = 0x3A02FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A02F8u;
    // 0x3a02fc: 0x24a50018  addiu       $a1, $a1, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE458u, 0x3A02F8u, 0x3A0300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0300u;
label_3a0300:
    // 0x3a0300: 0x277102a  slt         $v0, $s3, $s7
    ctx->pc = 0x3a0300u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
label_3a0304:
    // 0x3a0304: 0x1440ff9c  bnez        $v0, . + 4 + (-0x64 << 2)
label_3a0308:
    if (ctx->pc == 0x3A0308u) {
        ctx->pc = 0x3A0308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0304u;
        // 0x3a0308: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A030Cu;
        goto label_3a030c;
    }
    ctx->pc = 0x3A0304u;
    {
        const bool branch_taken_0x3a0304 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A0308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0304u;
        // 0x3a0308: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0304) {
            ctx->pc = 0x3A0178u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a0178;
        }
    }
    ctx->pc = 0x3A030Cu;
label_3a030c:
    // 0x3a030c: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x3a030cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3a0310:
    // 0x3a0310: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x3a0310u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3a0314:
    // 0x3a0314: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x3a0314u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3a0318:
    // 0x3a0318: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x3a0318u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3a031c:
    // 0x3a031c: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x3a031cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3a0320:
    // 0x3a0320: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x3a0320u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3a0324:
    // 0x3a0324: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x3a0324u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3a0328:
    // 0x3a0328: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x3a0328u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3a032c:
    // 0x3a032c: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x3a032cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3a0330:
    // 0x3a0330: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x3a0330u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3a0334:
    // 0x3a0334: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3a0334u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3a0338:
    // 0x3a0338: 0x3e00008  jr          $ra
label_3a033c:
    if (ctx->pc == 0x3A033Cu) {
        ctx->pc = 0x3A033Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0338u;
        // 0x3a033c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A0340u;
        goto label_fallthrough_0x3a0338;
    }
    ctx->pc = 0x3A0338u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A033Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0338u;
        // 0x3a033c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A0338u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3a0338:
    ctx->pc = 0x3A0340u;
}
