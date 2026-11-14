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

// Function: sub_002B0010
// Address: 0x2b0010 - 0x2b0170
void sub_002B0010_0x2b0010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B0010_0x2b0010");
#endif

    switch (ctx->pc) {
        case 0x2b0010u: goto label_2b0010;
        case 0x2b0014u: goto label_2b0014;
        case 0x2b0018u: goto label_2b0018;
        case 0x2b001cu: goto label_2b001c;
        case 0x2b0020u: goto label_2b0020;
        case 0x2b0024u: goto label_2b0024;
        case 0x2b0028u: goto label_2b0028;
        case 0x2b002cu: goto label_2b002c;
        case 0x2b0030u: goto label_2b0030;
        case 0x2b0034u: goto label_2b0034;
        case 0x2b0038u: goto label_2b0038;
        case 0x2b003cu: goto label_2b003c;
        case 0x2b0040u: goto label_2b0040;
        case 0x2b0044u: goto label_2b0044;
        case 0x2b0048u: goto label_2b0048;
        case 0x2b004cu: goto label_2b004c;
        case 0x2b0050u: goto label_2b0050;
        case 0x2b0054u: goto label_2b0054;
        case 0x2b0058u: goto label_2b0058;
        case 0x2b005cu: goto label_2b005c;
        case 0x2b0060u: goto label_2b0060;
        case 0x2b0064u: goto label_2b0064;
        case 0x2b0068u: goto label_2b0068;
        case 0x2b006cu: goto label_2b006c;
        case 0x2b0070u: goto label_2b0070;
        case 0x2b0074u: goto label_2b0074;
        case 0x2b0078u: goto label_2b0078;
        case 0x2b007cu: goto label_2b007c;
        case 0x2b0080u: goto label_2b0080;
        case 0x2b0084u: goto label_2b0084;
        case 0x2b0088u: goto label_2b0088;
        case 0x2b008cu: goto label_2b008c;
        case 0x2b0090u: goto label_2b0090;
        case 0x2b0094u: goto label_2b0094;
        case 0x2b0098u: goto label_2b0098;
        case 0x2b009cu: goto label_2b009c;
        case 0x2b00a0u: goto label_2b00a0;
        case 0x2b00a4u: goto label_2b00a4;
        case 0x2b00a8u: goto label_2b00a8;
        case 0x2b00acu: goto label_2b00ac;
        case 0x2b00b0u: goto label_2b00b0;
        case 0x2b00b4u: goto label_2b00b4;
        case 0x2b00b8u: goto label_2b00b8;
        case 0x2b00bcu: goto label_2b00bc;
        case 0x2b00c0u: goto label_2b00c0;
        case 0x2b00c4u: goto label_2b00c4;
        case 0x2b00c8u: goto label_2b00c8;
        case 0x2b00ccu: goto label_2b00cc;
        case 0x2b00d0u: goto label_2b00d0;
        case 0x2b00d4u: goto label_2b00d4;
        case 0x2b00d8u: goto label_2b00d8;
        case 0x2b00dcu: goto label_2b00dc;
        case 0x2b00e0u: goto label_2b00e0;
        case 0x2b00e4u: goto label_2b00e4;
        case 0x2b00e8u: goto label_2b00e8;
        case 0x2b00ecu: goto label_2b00ec;
        case 0x2b00f0u: goto label_2b00f0;
        case 0x2b00f4u: goto label_2b00f4;
        case 0x2b00f8u: goto label_2b00f8;
        case 0x2b00fcu: goto label_2b00fc;
        case 0x2b0100u: goto label_2b0100;
        case 0x2b0104u: goto label_2b0104;
        case 0x2b0108u: goto label_2b0108;
        case 0x2b010cu: goto label_2b010c;
        case 0x2b0110u: goto label_2b0110;
        case 0x2b0114u: goto label_2b0114;
        case 0x2b0118u: goto label_2b0118;
        case 0x2b011cu: goto label_2b011c;
        case 0x2b0120u: goto label_2b0120;
        case 0x2b0124u: goto label_2b0124;
        case 0x2b0128u: goto label_2b0128;
        case 0x2b012cu: goto label_2b012c;
        case 0x2b0130u: goto label_2b0130;
        case 0x2b0134u: goto label_2b0134;
        case 0x2b0138u: goto label_2b0138;
        case 0x2b013cu: goto label_2b013c;
        case 0x2b0140u: goto label_2b0140;
        case 0x2b0144u: goto label_2b0144;
        case 0x2b0148u: goto label_2b0148;
        case 0x2b014cu: goto label_2b014c;
        case 0x2b0150u: goto label_2b0150;
        case 0x2b0154u: goto label_2b0154;
        case 0x2b0158u: goto label_2b0158;
        case 0x2b015cu: goto label_2b015c;
        case 0x2b0160u: goto label_2b0160;
        case 0x2b0164u: goto label_2b0164;
        case 0x2b0168u: goto label_2b0168;
        case 0x2b016cu: goto label_2b016c;
        default: break;
    }

    ctx->pc = 0x2b0010u;

label_2b0010:
    // 0x2b0010: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2b0010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2b0014:
    // 0x2b0014: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2b0014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_2b0018:
    // 0x2b0018: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2b0018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2b001c:
    // 0x2b001c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b001cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2b0020:
    // 0x2b0020: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b0020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2b0024:
    // 0x2b0024: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x2b0024u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
label_2b0028:
    // 0x2b0028: 0x8f82bc68  lw          $v0, -0x4398($gp)
    ctx->pc = 0x2b0028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949992)));
label_2b002c:
    // 0x2b002c: 0x90420071  lbu         $v0, 0x71($v0)
    ctx->pc = 0x2b002cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 113)));
label_2b0030:
    // 0x2b0030: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2b0030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2b0034:
    // 0x2b0034: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2b0038:
    if (ctx->pc == 0x2B0038u) {
        ctx->pc = 0x2B003Cu;
        goto label_2b003c;
    }
    ctx->pc = 0x2B0034u;
    {
        const bool branch_taken_0x2b0034 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b0034) {
            ctx->pc = 0x2B0048u;
            goto label_2b0048;
        }
    }
    ctx->pc = 0x2B003Cu;
label_2b003c:
    // 0x2b003c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b003cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b0040:
    // 0x2b0040: 0x10000043  b           . + 4 + (0x43 << 2)
label_2b0044:
    if (ctx->pc == 0x2B0044u) {
        ctx->pc = 0x2B0048u;
        goto label_2b0048;
    }
    ctx->pc = 0x2B0040u;
    {
        const bool branch_taken_0x2b0040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b0040) {
            ctx->pc = 0x2B0150u;
            goto label_2b0150;
        }
    }
    ctx->pc = 0x2B0048u;
label_2b0048:
    // 0x2b0048: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x2b0048u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
label_2b004c:
    // 0x2b004c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2b004cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2b0050:
    // 0x2b0050: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2b0050u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b0054:
    // 0x2b0054: 0x8fa60050  lw          $a2, 0x50($sp)
    ctx->pc = 0x2b0054u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2b0058:
    // 0x2b0058: 0xc10493e  jal         func_4124F8
label_2b005c:
    if (ctx->pc == 0x2B005Cu) {
        ctx->pc = 0x2B0060u;
        goto label_2b0060;
    }
    ctx->pc = 0x2B0058u;
    SET_GPR_U32(ctx, 31, 0x2B0060u);
    ctx->pc = 0x4124F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4124F8u, 0x2B0058u, 0x2B0060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0060u;
label_2b0060:
    // 0x2b0060: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b0060u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b0064:
    // 0x2b0064: 0x12000031  beqz        $s0, . + 4 + (0x31 << 2)
label_2b0068:
    if (ctx->pc == 0x2B0068u) {
        ctx->pc = 0x2B006Cu;
        goto label_2b006c;
    }
    ctx->pc = 0x2B0064u;
    {
        const bool branch_taken_0x2b0064 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b0064) {
            ctx->pc = 0x2B012Cu;
            goto label_2b012c;
        }
    }
    ctx->pc = 0x2B006Cu;
label_2b006c:
    // 0x2b006c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2b006cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_2b0070:
    // 0x2b0070: 0x34440040  ori         $a0, $v0, 0x40
    ctx->pc = 0x2b0070u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
label_2b0074:
    // 0x2b0074: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2b0074u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b0078:
    // 0x2b0078: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x2b0078u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
label_2b007c:
    // 0x2b007c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x2b007cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_2b0080:
    // 0x2b0080: 0x8c42e994  lw          $v0, -0x166C($v0)
    ctx->pc = 0x2b0080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961556)));
label_2b0084:
    // 0x2b0084: 0x40f809  jalr        $v0
label_2b0088:
    if (ctx->pc == 0x2B0088u) {
        ctx->pc = 0x2B008Cu;
        goto label_2b008c;
    }
    ctx->pc = 0x2B0084u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2B008Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B0084u, 0x2B008Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B008Cu;
label_2b008c:
    // 0x2b008c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2b008cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b0090:
    // 0x2b0090: 0x2643003f  addiu       $v1, $s2, 0x3F
    ctx->pc = 0x2b0090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 63));
label_2b0094:
    // 0x2b0094: 0x2402ffc0  addiu       $v0, $zero, -0x40
    ctx->pc = 0x2b0094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
label_2b0098:
    // 0x2b0098: 0x628824  and         $s1, $v1, $v0
    ctx->pc = 0x2b0098u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2b009c:
    // 0x2b009c: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_2b00a0:
    if (ctx->pc == 0x2B00A0u) {
        ctx->pc = 0x2B00A4u;
        goto label_2b00a4;
    }
    ctx->pc = 0x2B009Cu;
    {
        const bool branch_taken_0x2b009c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b009c) {
            ctx->pc = 0x2B00B8u;
            goto label_2b00b8;
        }
    }
    ctx->pc = 0x2B00A4u;
label_2b00a4:
    // 0x2b00a4: 0xaf91b830  sw          $s1, -0x47D0($gp)
    ctx->pc = 0x2b00a4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948912), GPR_U32(ctx, 17));
label_2b00a8:
    // 0x2b00a8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2b00a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_2b00ac:
    // 0x2b00ac: 0xaf82b834  sw          $v0, -0x47CC($gp)
    ctx->pc = 0x2b00acu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948916), GPR_U32(ctx, 2));
label_2b00b0:
    // 0x2b00b0: 0x10000003  b           . + 4 + (0x3 << 2)
label_2b00b4:
    if (ctx->pc == 0x2B00B4u) {
        ctx->pc = 0x2B00B8u;
        goto label_2b00b8;
    }
    ctx->pc = 0x2B00B0u;
    {
        const bool branch_taken_0x2b00b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b00b0) {
            ctx->pc = 0x2B00C0u;
            goto label_2b00c0;
        }
    }
    ctx->pc = 0x2B00B8u;
label_2b00b8:
    // 0x2b00b8: 0xaf80b830  sw          $zero, -0x47D0($gp)
    ctx->pc = 0x2b00b8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948912), GPR_U32(ctx, 0));
label_2b00bc:
    // 0x2b00bc: 0xaf80b834  sw          $zero, -0x47CC($gp)
    ctx->pc = 0x2b00bcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948916), GPR_U32(ctx, 0));
label_2b00c0:
    // 0x2b00c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b00c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b00c4:
    // 0x2b00c4: 0x24050809  addiu       $a1, $zero, 0x809
    ctx->pc = 0x2b00c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2057));
label_2b00c8:
    // 0x2b00c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2b00c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b00cc:
    // 0x2b00cc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2b00ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b00d0:
    // 0x2b00d0: 0xc103322  jal         func_40CC88
label_2b00d4:
    if (ctx->pc == 0x2B00D4u) {
        ctx->pc = 0x2B00D8u;
        goto label_2b00d8;
    }
    ctx->pc = 0x2B00D0u;
    SET_GPR_U32(ctx, 31, 0x2B00D8u);
    ctx->pc = 0x40CC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CC88u, 0x2B00D0u, 0x2B00D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B00D8u;
label_2b00d8:
    // 0x2b00d8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_2b00dc:
    if (ctx->pc == 0x2B00DCu) {
        ctx->pc = 0x2B00E0u;
        goto label_2b00e0;
    }
    ctx->pc = 0x2B00D8u;
    {
        const bool branch_taken_0x2b00d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b00d8) {
            ctx->pc = 0x2B0108u;
            goto label_2b0108;
        }
    }
    ctx->pc = 0x2B00E0u;
label_2b00e0:
    // 0x2b00e0: 0x8f82bc68  lw          $v0, -0x4398($gp)
    ctx->pc = 0x2b00e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949992)));
label_2b00e4:
    // 0x2b00e4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2b00e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b00e8:
    // 0x2b00e8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b00e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b00ec:
    // 0x2b00ec: 0x8c46003c  lw          $a2, 0x3C($v0)
    ctx->pc = 0x2b00ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_2b00f0:
    // 0x2b00f0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2b00f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b00f4:
    // 0x2b00f4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2b00f4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b00f8:
    // 0x2b00f8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2b00f8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b00fc:
    // 0x2b00fc: 0xc127f40  jal         func_49FD00
label_2b0100:
    if (ctx->pc == 0x2B0100u) {
        ctx->pc = 0x2B0104u;
        goto label_2b0104;
    }
    ctx->pc = 0x2B00FCu;
    SET_GPR_U32(ctx, 31, 0x2B0104u);
    ctx->pc = 0x49FD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49FD00u, 0x2B00FCu, 0x2B0104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0104u;
label_2b0104:
    // 0x2b0104: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x2b0104u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
label_2b0108:
    // 0x2b0108: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2b0108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2b010c:
    // 0x2b010c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x2b010cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_2b0110:
    // 0x2b0110: 0x8c42e98c  lw          $v0, -0x1674($v0)
    ctx->pc = 0x2b0110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961548)));
label_2b0114:
    // 0x2b0114: 0x40f809  jalr        $v0
label_2b0118:
    if (ctx->pc == 0x2B0118u) {
        ctx->pc = 0x2B011Cu;
        goto label_2b011c;
    }
    ctx->pc = 0x2B0114u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2B011Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B0114u, 0x2B011Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B011Cu;
label_2b011c:
    // 0x2b011c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b011cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b0120:
    // 0x2b0120: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b0120u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b0124:
    // 0x2b0124: 0xc10496a  jal         func_4125A8
label_2b0128:
    if (ctx->pc == 0x2B0128u) {
        ctx->pc = 0x2B012Cu;
        goto label_2b012c;
    }
    ctx->pc = 0x2B0124u;
    SET_GPR_U32(ctx, 31, 0x2B012Cu);
    ctx->pc = 0x4125A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4125A8u, 0x2B0124u, 0x2B012Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B012Cu;
label_2b012c:
    // 0x2b012c: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x2b012cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_2b0130:
    // 0x2b0130: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2b0134:
    if (ctx->pc == 0x2B0134u) {
        ctx->pc = 0x2B0138u;
        goto label_2b0138;
    }
    ctx->pc = 0x2B0130u;
    {
        const bool branch_taken_0x2b0130 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b0130) {
            ctx->pc = 0x2B014Cu;
            goto label_2b014c;
        }
    }
    ctx->pc = 0x2B0138u;
label_2b0138:
    // 0x2b0138: 0x8f82bc68  lw          $v0, -0x4398($gp)
    ctx->pc = 0x2b0138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949992)));
label_2b013c:
    // 0x2b013c: 0x24440060  addiu       $a0, $v0, 0x60
    ctx->pc = 0x2b013cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_2b0140:
    // 0x2b0140: 0x27a5004c  addiu       $a1, $sp, 0x4C
    ctx->pc = 0x2b0140u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
label_2b0144:
    // 0x2b0144: 0xc0ac05c  jal         func_2B0170
label_2b0148:
    if (ctx->pc == 0x2B0148u) {
        ctx->pc = 0x2B014Cu;
        goto label_2b014c;
    }
    ctx->pc = 0x2B0144u;
    SET_GPR_U32(ctx, 31, 0x2B014Cu);
    ctx->pc = 0x2B0170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0170u, 0x2B0144u, 0x2B014Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B014Cu;
label_2b014c:
    // 0x2b014c: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x2b014cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_2b0150:
    // 0x2b0150: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2b0150u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2b0154:
    // 0x2b0154: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2b0154u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2b0158:
    // 0x2b0158: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2b0158u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2b015c:
    // 0x2b015c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b015cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2b0160:
    // 0x2b0160: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x2b0160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2b0164:
    // 0x2b0164: 0x3e00008  jr          $ra
label_2b0168:
    if (ctx->pc == 0x2B0168u) {
        ctx->pc = 0x2B016Cu;
        goto label_2b016c;
    }
    ctx->pc = 0x2B0164u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B0164u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B016Cu;
label_2b016c:
    // 0x2b016c: 0x0  nop
    ctx->pc = 0x2b016cu;
    // NOP
    ctx->pc = 0x2b0170u;
}
