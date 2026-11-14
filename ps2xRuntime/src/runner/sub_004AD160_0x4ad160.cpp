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

// Function: sub_004AD160
// Address: 0x4ad160 - 0x4ad2b0
void sub_004AD160_0x4ad160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AD160_0x4ad160");
#endif

    switch (ctx->pc) {
        case 0x4ad18cu: goto label_4ad18c;
        case 0x4ad1a0u: goto label_4ad1a0;
        case 0x4ad1b8u: goto label_4ad1b8;
        case 0x4ad1c8u: goto label_4ad1c8;
        case 0x4ad1e0u: goto label_4ad1e0;
        case 0x4ad1fcu: goto label_4ad1fc;
        case 0x4ad214u: goto label_4ad214;
        case 0x4ad240u: goto label_4ad240;
        case 0x4ad258u: goto label_4ad258;
        default: break;
    }

    ctx->pc = 0x4ad160u;

    // 0x4ad160: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4ad160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4ad164: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x4ad164u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x4ad168: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x4ad168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x4ad16c: 0x24a52c20  addiu       $a1, $a1, 0x2C20
    ctx->pc = 0x4ad16cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11296));
    // 0x4ad170: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4ad170u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ad174: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x4ad174u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x4ad178: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x4ad178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x4ad17c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4ad17cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x4ad180: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ad180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4ad184: 0xc12681a  jal         func_49A068
    ctx->pc = 0x4AD184u;
    SET_GPR_U32(ctx, 31, 0x4AD18Cu);
    ctx->pc = 0x4AD188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AD184u;
    // 0x4ad188: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49A068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49A068u, 0x4AD184u, 0x4AD18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AD18Cu;
label_4ad18c:
    // 0x4ad18c: 0x24110080  addiu       $s1, $zero, 0x80
    ctx->pc = 0x4ad18cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x4ad190: 0xae710040  sw          $s1, 0x40($s3)
    ctx->pc = 0x4ad190u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 64), GPR_U32(ctx, 17));
    // 0x4ad194: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x4ad194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x4ad198: 0xc12acfc  jal         func_4AB3F0
    ctx->pc = 0x4AD198u;
    SET_GPR_U32(ctx, 31, 0x4AD1A0u);
    ctx->pc = 0x4AD19Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AD198u;
    // 0x4ad19c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AB3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AB3F0u, 0x4AD198u, 0x4AD1A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AD1A0u;
label_4ad1a0:
    // 0x4ad1a0: 0x501004  sllv        $v0, $s0, $v0
    ctx->pc = 0x4ad1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x4ad1a4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x4ad1a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x4ad1a8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4AD1A8u;
    {
        const bool branch_taken_0x4ad1a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AD1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD1A8u;
        // 0x4ad1ac: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ad1a8) {
            ctx->pc = 0x4AD1C0u;
            goto label_4ad1c0;
        }
    }
    ctx->pc = 0x4AD1B0u;
    // 0x4ad1b0: 0xc12acfc  jal         func_4AB3F0
    ctx->pc = 0x4AD1B0u;
    SET_GPR_U32(ctx, 31, 0x4AD1B8u);
    ctx->pc = 0x4AD1B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AD1B0u;
    // 0x4ad1b4: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AB3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AB3F0u, 0x4AD1B0u, 0x4AD1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AD1B8u;
label_4ad1b8:
    // 0x4ad1b8: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x4ad1b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x4ad1bc: 0x0  nop
    ctx->pc = 0x4ad1bcu;
    // NOP
label_4ad1c0:
    // 0x4ad1c0: 0xc12acfc  jal         func_4AB3F0
    ctx->pc = 0x4AD1C0u;
    SET_GPR_U32(ctx, 31, 0x4AD1C8u);
    ctx->pc = 0x4AD1C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AD1C0u;
    // 0x4ad1c4: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AB3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AB3F0u, 0x4AD1C0u, 0x4AD1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AD1C8u;
label_4ad1c8:
    // 0x4ad1c8: 0x501004  sllv        $v0, $s0, $v0
    ctx->pc = 0x4ad1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x4ad1cc: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x4ad1ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x4ad1d0: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x4AD1D0u;
    {
        const bool branch_taken_0x4ad1d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AD1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD1D0u;
        // 0x4ad1d4: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ad1d0) {
            ctx->pc = 0x4AD230u;
            goto label_4ad230;
        }
    }
    ctx->pc = 0x4AD1D8u;
    // 0x4ad1d8: 0xc12acfc  jal         func_4AB3F0
    ctx->pc = 0x4AD1D8u;
    SET_GPR_U32(ctx, 31, 0x4AD1E0u);
    ctx->pc = 0x4AD1DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AD1D8u;
    // 0x4ad1dc: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AB3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AB3F0u, 0x4AD1D8u, 0x4AD1E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AD1E0u;
label_4ad1e0:
    // 0x4ad1e0: 0x501004  sllv        $v0, $s0, $v0
    ctx->pc = 0x4ad1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x4ad1e4: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x4ad1e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x4ad1e8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x4AD1E8u;
    {
        const bool branch_taken_0x4ad1e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AD1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD1E8u;
        // 0x4ad1ec: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ad1e8) {
            ctx->pc = 0x4AD230u;
            goto label_4ad230;
        }
    }
    ctx->pc = 0x4AD1F0u;
    // 0x4ad1f0: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x4ad1f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x4ad1f4: 0xc12acfc  jal         func_4AB3F0
    ctx->pc = 0x4AD1F4u;
    SET_GPR_U32(ctx, 31, 0x4AD1FCu);
    ctx->pc = 0x4AD1F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AD1F4u;
    // 0x4ad1f8: 0x2452c8c8  addiu       $s2, $v0, -0x3738 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AB3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AB3F0u, 0x4AD1F4u, 0x4AD1FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AD1FCu;
label_4ad1fc:
    // 0x4ad1fc: 0x501004  sllv        $v0, $s0, $v0
    ctx->pc = 0x4ad1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x4ad200: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x4ad200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x4ad204: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x4AD204u;
    {
        const bool branch_taken_0x4ad204 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ad204) {
            ctx->pc = 0x4AD208u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4AD204u;
            // 0x4ad208: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AD220u;
            goto label_4ad220;
        }
    }
    ctx->pc = 0x4AD20Cu;
    // 0x4ad20c: 0xc12acfc  jal         func_4AB3F0
    ctx->pc = 0x4AD20Cu;
    SET_GPR_U32(ctx, 31, 0x4AD214u);
    ctx->pc = 0x4AD210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AD20Cu;
    // 0x4ad210: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AB3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AB3F0u, 0x4AD20Cu, 0x4AD214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AD214u;
label_4ad214:
    // 0x4ad214: 0x501004  sllv        $v0, $s0, $v0
    ctx->pc = 0x4ad214u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x4ad218: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x4ad218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x4ad21c: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x4ad21cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
label_4ad220:
    // 0x4ad220: 0x2421821  addu        $v1, $s2, $v0
    ctx->pc = 0x4ad220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x4ad224: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x4ad224u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4ad228: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x4AD228u;
    {
        const bool branch_taken_0x4ad228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AD22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD228u;
        // 0x4ad22c: 0x24420007  addiu       $v0, $v0, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ad228) {
            ctx->pc = 0x4AD26Cu;
            goto label_4ad26c;
        }
    }
    ctx->pc = 0x4AD230u;
label_4ad230:
    // 0x4ad230: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x4ad230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x4ad234: 0x2452c8c8  addiu       $s2, $v0, -0x3738
    ctx->pc = 0x4ad234u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953160));
    // 0x4ad238: 0xc12acfc  jal         func_4AB3F0
    ctx->pc = 0x4AD238u;
    SET_GPR_U32(ctx, 31, 0x4AD240u);
    ctx->pc = 0x4AD23Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AD238u;
    // 0x4ad23c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AB3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AB3F0u, 0x4AD238u, 0x4AD240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AD240u;
label_4ad240:
    // 0x4ad240: 0x501004  sllv        $v0, $s0, $v0
    ctx->pc = 0x4ad240u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x4ad244: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x4ad244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x4ad248: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x4AD248u;
    {
        const bool branch_taken_0x4ad248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ad248) {
            ctx->pc = 0x4AD24Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4AD248u;
            // 0x4ad24c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AD260u;
            goto label_4ad260;
        }
    }
    ctx->pc = 0x4AD250u;
    // 0x4ad250: 0xc12acfc  jal         func_4AB3F0
    ctx->pc = 0x4AD250u;
    SET_GPR_U32(ctx, 31, 0x4AD258u);
    ctx->pc = 0x4AD254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AD250u;
    // 0x4ad254: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AB3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AB3F0u, 0x4AD250u, 0x4AD258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AD258u;
label_4ad258:
    // 0x4ad258: 0x501004  sllv        $v0, $s0, $v0
    ctx->pc = 0x4ad258u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x4ad25c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x4ad25cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_4ad260:
    // 0x4ad260: 0x2421821  addu        $v1, $s2, $v0
    ctx->pc = 0x4ad260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x4ad264: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x4ad264u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4ad268: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4ad268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_4ad26c:
    // 0x4ad26c: 0x21700  sll         $v0, $v0, 28
    ctx->pc = 0x4ad26cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 28));
    // 0x4ad270: 0x2221025  or          $v0, $s1, $v0
    ctx->pc = 0x4ad270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x4ad274: 0xae620040  sw          $v0, 0x40($s3)
    ctx->pc = 0x4ad274u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 64), GPR_U32(ctx, 2));
    // 0x4ad278: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x4ad278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
    // 0x4ad27c: 0x2442dc68  addiu       $v0, $v0, -0x2398
    ctx->pc = 0x4ad27cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958184));
    // 0x4ad280: 0xae620028  sw          $v0, 0x28($s3)
    ctx->pc = 0x4ad280u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 2));
    // 0x4ad284: 0xa6600044  sh          $zero, 0x44($s3)
    ctx->pc = 0x4ad284u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 68), (uint16_t)GPR_U32(ctx, 0));
    // 0x4ad288: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4ad288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4ad28c: 0xa6620046  sh          $v0, 0x46($s3)
    ctx->pc = 0x4ad28cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 70), (uint16_t)GPR_U32(ctx, 2));
    // 0x4ad290: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x4ad290u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4ad294: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x4ad294u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4ad298: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4ad298u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4ad29c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x4ad29cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ad2a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ad2a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ad2a4: 0x3e00008  jr          $ra
    ctx->pc = 0x4AD2A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AD2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD2A4u;
        // 0x4ad2a8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AD2A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AD2ACu;
    // 0x4ad2ac: 0x0  nop
    ctx->pc = 0x4ad2acu;
    // NOP
    ctx->pc = 0x4ad2b0u;
}
