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

// Function: sub_004AF008
// Address: 0x4af008 - 0x4af178
void sub_004AF008_0x4af008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AF008_0x4af008");
#endif

    switch (ctx->pc) {
        case 0x4af034u: goto label_4af034;
        case 0x4af048u: goto label_4af048;
        case 0x4af060u: goto label_4af060;
        case 0x4af070u: goto label_4af070;
        case 0x4af088u: goto label_4af088;
        case 0x4af0a4u: goto label_4af0a4;
        case 0x4af0bcu: goto label_4af0bc;
        case 0x4af0e8u: goto label_4af0e8;
        case 0x4af100u: goto label_4af100;
        default: break;
    }

    ctx->pc = 0x4af008u;

    // 0x4af008: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4af008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4af00c: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x4af00cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x4af010: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x4af010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x4af014: 0x24a52d30  addiu       $a1, $a1, 0x2D30
    ctx->pc = 0x4af014u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11568));
    // 0x4af018: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4af018u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4af01c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x4af01cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x4af020: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4af020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x4af024: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x4af024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x4af028: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4af028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4af02c: 0xc12681a  jal         func_49A068
    ctx->pc = 0x4AF02Cu;
    SET_GPR_U32(ctx, 31, 0x4AF034u);
    ctx->pc = 0x4AF030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AF02Cu;
    // 0x4af030: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49A068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49A068u, 0x4AF02Cu, 0x4AF034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AF034u;
label_4af034:
    // 0x4af034: 0x24122040  addiu       $s2, $zero, 0x2040
    ctx->pc = 0x4af034u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 8256));
    // 0x4af038: 0xae320040  sw          $s2, 0x40($s1)
    ctx->pc = 0x4af038u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 18));
    // 0x4af03c: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x4af03cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x4af040: 0xc12acfc  jal         func_4AB3F0
    ctx->pc = 0x4AF040u;
    SET_GPR_U32(ctx, 31, 0x4AF048u);
    ctx->pc = 0x4AF044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AF040u;
    // 0x4af044: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AB3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AB3F0u, 0x4AF040u, 0x4AF048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AF048u;
label_4af048:
    // 0x4af048: 0x501004  sllv        $v0, $s0, $v0
    ctx->pc = 0x4af048u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x4af04c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x4af04cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x4af050: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4AF050u;
    {
        const bool branch_taken_0x4af050 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AF054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AF050u;
        // 0x4af054: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4af050) {
            ctx->pc = 0x4AF068u;
            goto label_4af068;
        }
    }
    ctx->pc = 0x4AF058u;
    // 0x4af058: 0xc12acfc  jal         func_4AB3F0
    ctx->pc = 0x4AF058u;
    SET_GPR_U32(ctx, 31, 0x4AF060u);
    ctx->pc = 0x4AF05Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AF058u;
    // 0x4af05c: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AB3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AB3F0u, 0x4AF058u, 0x4AF060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AF060u;
label_4af060:
    // 0x4af060: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x4af060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x4af064: 0x0  nop
    ctx->pc = 0x4af064u;
    // NOP
label_4af068:
    // 0x4af068: 0xc12acfc  jal         func_4AB3F0
    ctx->pc = 0x4AF068u;
    SET_GPR_U32(ctx, 31, 0x4AF070u);
    ctx->pc = 0x4AF06Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AF068u;
    // 0x4af06c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AB3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AB3F0u, 0x4AF068u, 0x4AF070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AF070u;
label_4af070:
    // 0x4af070: 0x501004  sllv        $v0, $s0, $v0
    ctx->pc = 0x4af070u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x4af074: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x4af074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x4af078: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x4AF078u;
    {
        const bool branch_taken_0x4af078 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AF07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AF078u;
        // 0x4af07c: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4af078) {
            ctx->pc = 0x4AF0D8u;
            goto label_4af0d8;
        }
    }
    ctx->pc = 0x4AF080u;
    // 0x4af080: 0xc12acfc  jal         func_4AB3F0
    ctx->pc = 0x4AF080u;
    SET_GPR_U32(ctx, 31, 0x4AF088u);
    ctx->pc = 0x4AF084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AF080u;
    // 0x4af084: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AB3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AB3F0u, 0x4AF080u, 0x4AF088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AF088u;
label_4af088:
    // 0x4af088: 0x501004  sllv        $v0, $s0, $v0
    ctx->pc = 0x4af088u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x4af08c: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x4af08cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x4af090: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x4AF090u;
    {
        const bool branch_taken_0x4af090 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AF094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AF090u;
        // 0x4af094: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4af090) {
            ctx->pc = 0x4AF0D8u;
            goto label_4af0d8;
        }
    }
    ctx->pc = 0x4AF098u;
    // 0x4af098: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x4af098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x4af09c: 0xc12acfc  jal         func_4AB3F0
    ctx->pc = 0x4AF09Cu;
    SET_GPR_U32(ctx, 31, 0x4AF0A4u);
    ctx->pc = 0x4AF0A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AF09Cu;
    // 0x4af0a0: 0x2453c8c8  addiu       $s3, $v0, -0x3738 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AB3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AB3F0u, 0x4AF09Cu, 0x4AF0A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AF0A4u;
label_4af0a4:
    // 0x4af0a4: 0x501004  sllv        $v0, $s0, $v0
    ctx->pc = 0x4af0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x4af0a8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x4af0a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x4af0ac: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x4AF0ACu;
    {
        const bool branch_taken_0x4af0ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4af0ac) {
            ctx->pc = 0x4AF0B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4AF0ACu;
            // 0x4af0b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AF0C8u;
            goto label_4af0c8;
        }
    }
    ctx->pc = 0x4AF0B4u;
    // 0x4af0b4: 0xc12acfc  jal         func_4AB3F0
    ctx->pc = 0x4AF0B4u;
    SET_GPR_U32(ctx, 31, 0x4AF0BCu);
    ctx->pc = 0x4AF0B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AF0B4u;
    // 0x4af0b8: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AB3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AB3F0u, 0x4AF0B4u, 0x4AF0BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AF0BCu;
label_4af0bc:
    // 0x4af0bc: 0x501004  sllv        $v0, $s0, $v0
    ctx->pc = 0x4af0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x4af0c0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x4af0c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x4af0c4: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x4af0c4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
label_4af0c8:
    // 0x4af0c8: 0x2621821  addu        $v1, $s3, $v0
    ctx->pc = 0x4af0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x4af0cc: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x4af0ccu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4af0d0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x4AF0D0u;
    {
        const bool branch_taken_0x4af0d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AF0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AF0D0u;
        // 0x4af0d4: 0x24420007  addiu       $v0, $v0, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4af0d0) {
            ctx->pc = 0x4AF114u;
            goto label_4af114;
        }
    }
    ctx->pc = 0x4AF0D8u;
label_4af0d8:
    // 0x4af0d8: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x4af0d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x4af0dc: 0x2453c8c8  addiu       $s3, $v0, -0x3738
    ctx->pc = 0x4af0dcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953160));
    // 0x4af0e0: 0xc12acfc  jal         func_4AB3F0
    ctx->pc = 0x4AF0E0u;
    SET_GPR_U32(ctx, 31, 0x4AF0E8u);
    ctx->pc = 0x4AF0E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AF0E0u;
    // 0x4af0e4: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AB3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AB3F0u, 0x4AF0E0u, 0x4AF0E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AF0E8u;
label_4af0e8:
    // 0x4af0e8: 0x501004  sllv        $v0, $s0, $v0
    ctx->pc = 0x4af0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x4af0ec: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x4af0ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x4af0f0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x4AF0F0u;
    {
        const bool branch_taken_0x4af0f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4af0f0) {
            ctx->pc = 0x4AF0F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4AF0F0u;
            // 0x4af0f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AF108u;
            goto label_4af108;
        }
    }
    ctx->pc = 0x4AF0F8u;
    // 0x4af0f8: 0xc12acfc  jal         func_4AB3F0
    ctx->pc = 0x4AF0F8u;
    SET_GPR_U32(ctx, 31, 0x4AF100u);
    ctx->pc = 0x4AF0FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AF0F8u;
    // 0x4af0fc: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AB3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AB3F0u, 0x4AF0F8u, 0x4AF100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AF100u;
label_4af100:
    // 0x4af100: 0x501004  sllv        $v0, $s0, $v0
    ctx->pc = 0x4af100u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x4af104: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x4af104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_4af108:
    // 0x4af108: 0x2621821  addu        $v1, $s3, $v0
    ctx->pc = 0x4af108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x4af10c: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x4af10cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4af110: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4af110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_4af114:
    // 0x4af114: 0x21700  sll         $v0, $v0, 28
    ctx->pc = 0x4af114u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 28));
    // 0x4af118: 0x2421025  or          $v0, $s2, $v0
    ctx->pc = 0x4af118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x4af11c: 0xae220040  sw          $v0, 0x40($s1)
    ctx->pc = 0x4af11cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 2));
    // 0x4af120: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x4af120u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
    // 0x4af124: 0x2442f178  addiu       $v0, $v0, -0xE88
    ctx->pc = 0x4af124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963576));
    // 0x4af128: 0xae220028  sw          $v0, 0x28($s1)
    ctx->pc = 0x4af128u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
    // 0x4af12c: 0x3c03004b  lui         $v1, 0x4B
    ctx->pc = 0x4af12cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)75 << 16));
    // 0x4af130: 0x2463fe98  addiu       $v1, $v1, -0x168
    ctx->pc = 0x4af130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966936));
    // 0x4af134: 0xae230034  sw          $v1, 0x34($s1)
    ctx->pc = 0x4af134u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 3));
    // 0x4af138: 0xae20002c  sw          $zero, 0x2C($s1)
    ctx->pc = 0x4af138u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
    // 0x4af13c: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x4af13cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
    // 0x4af140: 0x2442f408  addiu       $v0, $v0, -0xBF8
    ctx->pc = 0x4af140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964232));
    // 0x4af144: 0xae220030  sw          $v0, 0x30($s1)
    ctx->pc = 0x4af144u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
    // 0x4af148: 0x3c03004b  lui         $v1, 0x4B
    ctx->pc = 0x4af148u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)75 << 16));
    // 0x4af14c: 0x2463fef0  addiu       $v1, $v1, -0x110
    ctx->pc = 0x4af14cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967024));
    // 0x4af150: 0xae23003c  sw          $v1, 0x3C($s1)
    ctx->pc = 0x4af150u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 3));
    // 0x4af154: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x4af154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x4af158: 0xa6220044  sh          $v0, 0x44($s1)
    ctx->pc = 0x4af158u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 68), (uint16_t)GPR_U32(ctx, 2));
    // 0x4af15c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x4af15cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4af160: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x4af160u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4af164: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4af164u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4af168: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x4af168u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4af16c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4af16cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4af170: 0x3e00008  jr          $ra
    ctx->pc = 0x4AF170u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AF174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AF170u;
        // 0x4af174: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AF170u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AF178u;
}
