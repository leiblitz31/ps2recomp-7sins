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

// Function: sub_004343A0
// Address: 0x4343a0 - 0x434580
void sub_004343A0_0x4343a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004343A0_0x4343a0");
#endif

    switch (ctx->pc) {
        case 0x4343c8u: goto label_4343c8;
        case 0x4343e0u: goto label_4343e0;
        case 0x434430u: goto label_434430;
        case 0x4344b8u: goto label_4344b8;
        case 0x4344f8u: goto label_4344f8;
        case 0x434530u: goto label_434530;
        default: break;
    }

    ctx->pc = 0x4343a0u;

    // 0x4343a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4343a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4343a4: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x4343a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x4343a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4343a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4343ac: 0x24623b90  addiu       $v0, $v1, 0x3B90
    ctx->pc = 0x4343acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15248));
    // 0x4343b0: 0x8c643b90  lw          $a0, 0x3B90($v1)
    ctx->pc = 0x4343b0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x623B90u));
    // 0x4343b4: 0x8c470014  lw          $a3, 0x14($v0)
    ctx->pc = 0x4343b4u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x623BA4u));
    // 0x4343b8: 0x8c460008  lw          $a2, 0x8($v0)
    ctx->pc = 0x4343b8u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x623B98u));
    // 0x4343bc: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x4343bcu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x623B94u));
    // 0x4343c0: 0xc10746c  jal         func_41D1B0
    ctx->pc = 0x4343C0u;
    SET_GPR_U32(ctx, 31, 0x4343C8u);
    ctx->pc = 0x4343C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4343C0u;
    // 0x4343c4: 0x34e70002  ori         $a3, $a3, 0x2 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)2);
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D1B0u, 0x4343C0u, 0x4343C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4343C8u;
label_4343c8:
    // 0x4343c8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x4343c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4343cc: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x4343ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4343d0: 0x24020085  addiu       $v0, $zero, 0x85
    ctx->pc = 0x4343d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 133));
    // 0x4343d4: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x4343d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x4343d8: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x4343D8u;
    {
        const bool branch_taken_0x4343d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4343DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4343D8u;
        // 0x4343dc: 0xa0c20020  sb          $v0, 0x20($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 32), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4343d8) {
            ctx->pc = 0x4343FCu;
            goto label_4343fc;
        }
    }
    ctx->pc = 0x4343E0u;
label_4343e0:
    // 0x4343e0: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x4343e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x4343e4: 0x0  nop
    ctx->pc = 0x4343e4u;
    // NOP
    // 0x4343e8: 0x0  nop
    ctx->pc = 0x4343e8u;
    // NOP
    // 0x4343ec: 0x0  nop
    ctx->pc = 0x4343ecu;
    // NOP
    // 0x4343f0: 0x0  nop
    ctx->pc = 0x4343f0u;
    // NOP
    // 0x4343f4: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4343F4u;
    {
        const bool branch_taken_0x4343f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4343F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4343F4u;
        // 0x4343f8: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4343f4) {
            ctx->pc = 0x4343E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4343e0;
        }
    }
    ctx->pc = 0x4343FCu;
label_4343fc:
    // 0x4343fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4343fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x434400: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x434400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x434404: 0x821004  sllv        $v0, $v0, $a0
    ctx->pc = 0x434404u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x434408: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x434408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x43440c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x43440cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x434410: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x434410u;
    {
        const bool branch_taken_0x434410 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x434414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434410u;
        // 0x434414: 0x621023  subu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x434410) {
            ctx->pc = 0x434420u;
            goto label_434420;
        }
    }
    ctx->pc = 0x434418u;
    // 0x434418: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x434418u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x43441c: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x43441cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
label_434420:
    // 0x434420: 0x8cc20010  lw          $v0, 0x10($a2)
    ctx->pc = 0x434420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x434424: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x434424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x434428: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x434428u;
    {
        const bool branch_taken_0x434428 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x43442Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434428u;
        // 0x43442c: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x434428) {
            ctx->pc = 0x43444Cu;
            goto label_43444c;
        }
    }
    ctx->pc = 0x434430u;
label_434430:
    // 0x434430: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x434430u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x434434: 0x0  nop
    ctx->pc = 0x434434u;
    // NOP
    // 0x434438: 0x0  nop
    ctx->pc = 0x434438u;
    // NOP
    // 0x43443c: 0x0  nop
    ctx->pc = 0x43443cu;
    // NOP
    // 0x434440: 0x0  nop
    ctx->pc = 0x434440u;
    // NOP
    // 0x434444: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x434444u;
    {
        const bool branch_taken_0x434444 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x434448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434444u;
        // 0x434448: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x434444) {
            ctx->pc = 0x434430u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_434430;
        }
    }
    ctx->pc = 0x43444Cu;
label_43444c:
    // 0x43444c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x43444cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x434450: 0x621004  sllv        $v0, $v0, $v1
    ctx->pc = 0x434450u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x434454: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x434454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x434458: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x434458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x43445c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x43445Cu;
    {
        const bool branch_taken_0x43445c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x434460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43445Cu;
        // 0x434460: 0x821023  subu        $v0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43445c) {
            ctx->pc = 0x43446Cu;
            goto label_43446c;
        }
    }
    ctx->pc = 0x434464u;
    // 0x434464: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x434464u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x434468: 0xacc20010  sw          $v0, 0x10($a2)
    ctx->pc = 0x434468u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 2));
label_43446c:
    // 0x43446c: 0xdf82ae40  ld          $v0, -0x51C0($gp)
    ctx->pc = 0x43446cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946368)));
    // 0x434470: 0x8f84beb8  lw          $a0, -0x4148($gp)
    ctx->pc = 0x434470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950584)));
    // 0x434474: 0x21e3b  dsra        $v1, $v0, 24
    ctx->pc = 0x434474u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 2) >> 24);
    // 0x434478: 0x2143b  dsra        $v0, $v0, 16
    ctx->pc = 0x434478u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 16);
    // 0x43447c: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x43447cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x434480: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x434480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x434484: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x434484u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x434488: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x434488u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x43448c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x43448cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x434490: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x434490u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x434494: 0x31d00  sll         $v1, $v1, 20
    ctx->pc = 0x434494u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 20));
    // 0x434498: 0x21380  sll         $v0, $v0, 14
    ctx->pc = 0x434498u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 14));
    // 0x43449c: 0xc42821  addu        $a1, $a2, $a0
    ctx->pc = 0x43449cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x4344a0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4344a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4344a4: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x4344a4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x4344a8: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x4344a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x4344ac: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x4344ACu;
    {
        const bool branch_taken_0x4344ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4344B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4344ACu;
        // 0x4344b0: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4344ac) {
            ctx->pc = 0x4344D4u;
            goto label_4344d4;
        }
    }
    ctx->pc = 0x4344B4u;
    // 0x4344b4: 0x0  nop
    ctx->pc = 0x4344b4u;
    // NOP
label_4344b8:
    // 0x4344b8: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x4344b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x4344bc: 0x0  nop
    ctx->pc = 0x4344bcu;
    // NOP
    // 0x4344c0: 0x0  nop
    ctx->pc = 0x4344c0u;
    // NOP
    // 0x4344c4: 0x0  nop
    ctx->pc = 0x4344c4u;
    // NOP
    // 0x4344c8: 0x0  nop
    ctx->pc = 0x4344c8u;
    // NOP
    // 0x4344cc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4344CCu;
    {
        const bool branch_taken_0x4344cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4344D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4344CCu;
        // 0x4344d0: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4344cc) {
            ctx->pc = 0x4344B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4344b8;
        }
    }
    ctx->pc = 0x4344D4u;
label_4344d4:
    // 0x4344d4: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x4344d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x4344d8: 0x30e2000f  andi        $v0, $a3, 0xF
    ctx->pc = 0x4344d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)15);
    // 0x4344dc: 0x21680  sll         $v0, $v0, 26
    ctx->pc = 0x4344dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 26));
    // 0x4344e0: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x4344e0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x4344e4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4344e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4344e8: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x4344e8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x4344ec: 0x8cc20010  lw          $v0, 0x10($a2)
    ctx->pc = 0x4344ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x4344f0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4344F0u;
    {
        const bool branch_taken_0x4344f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4344F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4344F0u;
        // 0x4344f4: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4344f0) {
            ctx->pc = 0x434514u;
            goto label_434514;
        }
    }
    ctx->pc = 0x4344F8u;
label_4344f8:
    // 0x4344f8: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x4344f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x4344fc: 0x0  nop
    ctx->pc = 0x4344fcu;
    // NOP
    // 0x434500: 0x0  nop
    ctx->pc = 0x434500u;
    // NOP
    // 0x434504: 0x0  nop
    ctx->pc = 0x434504u;
    // NOP
    // 0x434508: 0x0  nop
    ctx->pc = 0x434508u;
    // NOP
    // 0x43450c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x43450Cu;
    {
        const bool branch_taken_0x43450c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x434510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43450Cu;
        // 0x434510: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43450c) {
            ctx->pc = 0x4344F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4344f8;
        }
    }
    ctx->pc = 0x434514u;
label_434514:
    // 0x434514: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x434514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x434518: 0x41f80  sll         $v1, $a0, 30
    ctx->pc = 0x434518u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 30));
    // 0x43451c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x43451cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x434520: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x434520u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x434524: 0x8cc20010  lw          $v0, 0x10($a2)
    ctx->pc = 0x434524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x434528: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x434528u;
    {
        const bool branch_taken_0x434528 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x43452Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434528u;
        // 0x43452c: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x434528) {
            ctx->pc = 0x43454Cu;
            goto label_43454c;
        }
    }
    ctx->pc = 0x434530u;
label_434530:
    // 0x434530: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x434530u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x434534: 0x0  nop
    ctx->pc = 0x434534u;
    // NOP
    // 0x434538: 0x0  nop
    ctx->pc = 0x434538u;
    // NOP
    // 0x43453c: 0x0  nop
    ctx->pc = 0x43453cu;
    // NOP
    // 0x434540: 0x0  nop
    ctx->pc = 0x434540u;
    // NOP
    // 0x434544: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x434544u;
    {
        const bool branch_taken_0x434544 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x434548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434544u;
        // 0x434548: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x434544) {
            ctx->pc = 0x434530u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_434530;
        }
    }
    ctx->pc = 0x43454Cu;
label_43454c:
    // 0x43454c: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x43454cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x434550: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x434550u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x434554: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x434554u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x434558: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x434558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x43455c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x43455cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x434560: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x434560u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x434564: 0xa0a40017  sb          $a0, 0x17($a1)
    ctx->pc = 0x434564u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 23), (uint8_t)GPR_U32(ctx, 4));
    // 0x434568: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x434568u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43456c: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x43456cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x434570: 0xa0a00016  sb          $zero, 0x16($a1)
    ctx->pc = 0x434570u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 22), (uint8_t)GPR_U32(ctx, 0));
    // 0x434574: 0x3e00008  jr          $ra
    ctx->pc = 0x434574u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x434578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434574u;
        // 0x434578: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x434574u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43457Cu;
    // 0x43457c: 0x0  nop
    ctx->pc = 0x43457cu;
    // NOP
    ctx->pc = 0x434580u;
}
