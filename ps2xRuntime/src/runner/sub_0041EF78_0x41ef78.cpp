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

// Function: sub_0041EF78
// Address: 0x41ef78 - 0x41f1f0
void sub_0041EF78_0x41ef78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041EF78_0x41ef78");
#endif

    switch (ctx->pc) {
        case 0x41ef78u: goto label_41ef78;
        case 0x41ef7cu: goto label_41ef7c;
        case 0x41ef80u: goto label_41ef80;
        case 0x41ef84u: goto label_41ef84;
        case 0x41ef88u: goto label_41ef88;
        case 0x41ef8cu: goto label_41ef8c;
        case 0x41ef90u: goto label_41ef90;
        case 0x41ef94u: goto label_41ef94;
        case 0x41ef98u: goto label_41ef98;
        case 0x41ef9cu: goto label_41ef9c;
        case 0x41efa0u: goto label_41efa0;
        case 0x41efa4u: goto label_41efa4;
        case 0x41efa8u: goto label_41efa8;
        case 0x41efacu: goto label_41efac;
        case 0x41efb0u: goto label_41efb0;
        case 0x41efb4u: goto label_41efb4;
        case 0x41efb8u: goto label_41efb8;
        case 0x41efbcu: goto label_41efbc;
        case 0x41efc0u: goto label_41efc0;
        case 0x41efc4u: goto label_41efc4;
        case 0x41efc8u: goto label_41efc8;
        case 0x41efccu: goto label_41efcc;
        case 0x41efd0u: goto label_41efd0;
        case 0x41efd4u: goto label_41efd4;
        case 0x41efd8u: goto label_41efd8;
        case 0x41efdcu: goto label_41efdc;
        case 0x41efe0u: goto label_41efe0;
        case 0x41efe4u: goto label_41efe4;
        case 0x41efe8u: goto label_41efe8;
        case 0x41efecu: goto label_41efec;
        case 0x41eff0u: goto label_41eff0;
        case 0x41eff4u: goto label_41eff4;
        case 0x41eff8u: goto label_41eff8;
        case 0x41effcu: goto label_41effc;
        case 0x41f000u: goto label_41f000;
        case 0x41f004u: goto label_41f004;
        case 0x41f008u: goto label_41f008;
        case 0x41f00cu: goto label_41f00c;
        case 0x41f010u: goto label_41f010;
        case 0x41f014u: goto label_41f014;
        case 0x41f018u: goto label_41f018;
        case 0x41f01cu: goto label_41f01c;
        case 0x41f020u: goto label_41f020;
        case 0x41f024u: goto label_41f024;
        case 0x41f028u: goto label_41f028;
        case 0x41f02cu: goto label_41f02c;
        case 0x41f030u: goto label_41f030;
        case 0x41f034u: goto label_41f034;
        case 0x41f038u: goto label_41f038;
        case 0x41f03cu: goto label_41f03c;
        case 0x41f040u: goto label_41f040;
        case 0x41f044u: goto label_41f044;
        case 0x41f048u: goto label_41f048;
        case 0x41f04cu: goto label_41f04c;
        case 0x41f050u: goto label_41f050;
        case 0x41f054u: goto label_41f054;
        case 0x41f058u: goto label_41f058;
        case 0x41f05cu: goto label_41f05c;
        case 0x41f060u: goto label_41f060;
        case 0x41f064u: goto label_41f064;
        case 0x41f068u: goto label_41f068;
        case 0x41f06cu: goto label_41f06c;
        case 0x41f070u: goto label_41f070;
        case 0x41f074u: goto label_41f074;
        case 0x41f078u: goto label_41f078;
        case 0x41f07cu: goto label_41f07c;
        case 0x41f080u: goto label_41f080;
        case 0x41f084u: goto label_41f084;
        case 0x41f088u: goto label_41f088;
        case 0x41f08cu: goto label_41f08c;
        case 0x41f090u: goto label_41f090;
        case 0x41f094u: goto label_41f094;
        case 0x41f098u: goto label_41f098;
        case 0x41f09cu: goto label_41f09c;
        case 0x41f0a0u: goto label_41f0a0;
        case 0x41f0a4u: goto label_41f0a4;
        case 0x41f0a8u: goto label_41f0a8;
        case 0x41f0acu: goto label_41f0ac;
        case 0x41f0b0u: goto label_41f0b0;
        case 0x41f0b4u: goto label_41f0b4;
        case 0x41f0b8u: goto label_41f0b8;
        case 0x41f0bcu: goto label_41f0bc;
        case 0x41f0c0u: goto label_41f0c0;
        case 0x41f0c4u: goto label_41f0c4;
        case 0x41f0c8u: goto label_41f0c8;
        case 0x41f0ccu: goto label_41f0cc;
        case 0x41f0d0u: goto label_41f0d0;
        case 0x41f0d4u: goto label_41f0d4;
        case 0x41f0d8u: goto label_41f0d8;
        case 0x41f0dcu: goto label_41f0dc;
        case 0x41f0e0u: goto label_41f0e0;
        case 0x41f0e4u: goto label_41f0e4;
        case 0x41f0e8u: goto label_41f0e8;
        case 0x41f0ecu: goto label_41f0ec;
        case 0x41f0f0u: goto label_41f0f0;
        case 0x41f0f4u: goto label_41f0f4;
        case 0x41f0f8u: goto label_41f0f8;
        case 0x41f0fcu: goto label_41f0fc;
        case 0x41f100u: goto label_41f100;
        case 0x41f104u: goto label_41f104;
        case 0x41f108u: goto label_41f108;
        case 0x41f10cu: goto label_41f10c;
        case 0x41f110u: goto label_41f110;
        case 0x41f114u: goto label_41f114;
        case 0x41f118u: goto label_41f118;
        case 0x41f11cu: goto label_41f11c;
        case 0x41f120u: goto label_41f120;
        case 0x41f124u: goto label_41f124;
        case 0x41f128u: goto label_41f128;
        case 0x41f12cu: goto label_41f12c;
        case 0x41f130u: goto label_41f130;
        case 0x41f134u: goto label_41f134;
        case 0x41f138u: goto label_41f138;
        case 0x41f13cu: goto label_41f13c;
        case 0x41f140u: goto label_41f140;
        case 0x41f144u: goto label_41f144;
        case 0x41f148u: goto label_41f148;
        case 0x41f14cu: goto label_41f14c;
        case 0x41f150u: goto label_41f150;
        case 0x41f154u: goto label_41f154;
        case 0x41f158u: goto label_41f158;
        case 0x41f15cu: goto label_41f15c;
        case 0x41f160u: goto label_41f160;
        case 0x41f164u: goto label_41f164;
        case 0x41f168u: goto label_41f168;
        case 0x41f16cu: goto label_41f16c;
        case 0x41f170u: goto label_41f170;
        case 0x41f174u: goto label_41f174;
        case 0x41f178u: goto label_41f178;
        case 0x41f17cu: goto label_41f17c;
        case 0x41f180u: goto label_41f180;
        case 0x41f184u: goto label_41f184;
        case 0x41f188u: goto label_41f188;
        case 0x41f18cu: goto label_41f18c;
        case 0x41f190u: goto label_41f190;
        case 0x41f194u: goto label_41f194;
        case 0x41f198u: goto label_41f198;
        case 0x41f19cu: goto label_41f19c;
        case 0x41f1a0u: goto label_41f1a0;
        case 0x41f1a4u: goto label_41f1a4;
        case 0x41f1a8u: goto label_41f1a8;
        case 0x41f1acu: goto label_41f1ac;
        case 0x41f1b0u: goto label_41f1b0;
        case 0x41f1b4u: goto label_41f1b4;
        case 0x41f1b8u: goto label_41f1b8;
        case 0x41f1bcu: goto label_41f1bc;
        case 0x41f1c0u: goto label_41f1c0;
        case 0x41f1c4u: goto label_41f1c4;
        case 0x41f1c8u: goto label_41f1c8;
        case 0x41f1ccu: goto label_41f1cc;
        case 0x41f1d0u: goto label_41f1d0;
        case 0x41f1d4u: goto label_41f1d4;
        case 0x41f1d8u: goto label_41f1d8;
        case 0x41f1dcu: goto label_41f1dc;
        case 0x41f1e0u: goto label_41f1e0;
        case 0x41f1e4u: goto label_41f1e4;
        case 0x41f1e8u: goto label_41f1e8;
        case 0x41f1ecu: goto label_41f1ec;
        default: break;
    }

    ctx->pc = 0x41ef78u;

label_41ef78:
    // 0x41ef78: 0x27bdf960  addiu       $sp, $sp, -0x6A0
    ctx->pc = 0x41ef78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965600));
label_41ef7c:
    // 0x41ef7c: 0x7fb20670  sq          $s2, 0x670($sp)
    ctx->pc = 0x41ef7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1648), GPR_VEC(ctx, 18));
label_41ef80:
    // 0x41ef80: 0x7fb30660  sq          $s3, 0x660($sp)
    ctx->pc = 0x41ef80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1632), GPR_VEC(ctx, 19));
label_41ef84:
    // 0x41ef84: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x41ef84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_41ef88:
    // 0x41ef88: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x41ef88u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_41ef8c:
    // 0x41ef8c: 0x7fb00690  sq          $s0, 0x690($sp)
    ctx->pc = 0x41ef8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1680), GPR_VEC(ctx, 16));
label_41ef90:
    // 0x41ef90: 0x7fb10680  sq          $s1, 0x680($sp)
    ctx->pc = 0x41ef90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1664), GPR_VEC(ctx, 17));
label_41ef94:
    // 0x41ef94: 0x7fb40650  sq          $s4, 0x650($sp)
    ctx->pc = 0x41ef94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1616), GPR_VEC(ctx, 20));
label_41ef98:
    // 0x41ef98: 0xffbf0640  sd          $ra, 0x640($sp)
    ctx->pc = 0x41ef98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1600), GPR_U64(ctx, 31));
label_41ef9c:
    // 0x41ef9c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x41ef9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_41efa0:
    // 0x41efa0: 0x2451e880  addiu       $s1, $v0, -0x1780
    ctx->pc = 0x41efa0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_41efa4:
    // 0x41efa4: 0x27a40400  addiu       $a0, $sp, 0x400
    ctx->pc = 0x41efa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
label_41efa8:
    // 0x41efa8: 0x8e2200d0  lw          $v0, 0xD0($s1)
    ctx->pc = 0x41efa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 208)));
label_41efac:
    // 0x41efac: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x41efacu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_41efb0:
    // 0x41efb0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x41efb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_41efb4:
    // 0x41efb4: 0x40f809  jalr        $v0
label_41efb8:
    if (ctx->pc == 0x41EFB8u) {
        ctx->pc = 0x41EFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41EFB4u;
        // 0x41efb8: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41EFBCu;
        goto label_41efbc;
    }
    ctx->pc = 0x41EFB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41EFBCu);
        ctx->pc = 0x41EFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41EFB4u;
        // 0x41efb8: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41EFB4u, 0x41EFBCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41EFBCu;
label_41efbc:
    // 0x41efbc: 0x8e2200f4  lw          $v0, 0xF4($s1)
    ctx->pc = 0x41efbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 244)));
label_41efc0:
    // 0x41efc0: 0x40f809  jalr        $v0
label_41efc4:
    if (ctx->pc == 0x41EFC4u) {
        ctx->pc = 0x41EFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41EFC0u;
        // 0x41efc4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41EFC8u;
        goto label_41efc8;
    }
    ctx->pc = 0x41EFC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41EFC8u);
        ctx->pc = 0x41EFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41EFC0u;
        // 0x41efc4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41EFC0u, 0x41EFC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41EFC8u;
label_41efc8:
    // 0x41efc8: 0x2c420100  sltiu       $v0, $v0, 0x100
    ctx->pc = 0x41efc8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
label_41efcc:
    // 0x41efcc: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_41efd0:
    if (ctx->pc == 0x41EFD0u) {
        ctx->pc = 0x41EFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41EFCCu;
        // 0x41efd0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41EFD4u;
        goto label_41efd4;
    }
    ctx->pc = 0x41EFCCu;
    {
        const bool branch_taken_0x41efcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x41EFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41EFCCu;
        // 0x41efd0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41efcc) {
            ctx->pc = 0x41F008u;
            goto label_41f008;
        }
    }
    ctx->pc = 0x41EFD4u;
label_41efd4:
    // 0x41efd4: 0x826800ff  lb          $t0, 0xFF($s3)
    ctx->pc = 0x41efd4u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 255)));
label_41efd8:
    // 0x41efd8: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x41efd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_41efdc:
    // 0x41efdc: 0xafa20600  sw          $v0, 0x600($sp)
    ctx->pc = 0x41efdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1536), GPR_U32(ctx, 2));
label_41efe0:
    // 0x41efe0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x41efe0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_41efe4:
    // 0x41efe4: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x41efe4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_41efe8:
    // 0x41efe8: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x41efe8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_41efec:
    // 0x41efec: 0xc1035f6  jal         func_40D7D8
label_41eff0:
    if (ctx->pc == 0x41EFF0u) {
        ctx->pc = 0x41EFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41EFECu;
        // 0x41eff0: 0x3484001e  ori         $a0, $a0, 0x1E (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)30);
        ctx->in_delay_slot = false;
        ctx->pc = 0x41EFF4u;
        goto label_41eff4;
    }
    ctx->pc = 0x41EFECu;
    SET_GPR_U32(ctx, 31, 0x41EFF4u);
    ctx->pc = 0x41EFF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41EFECu;
    // 0x41eff0: 0x3484001e  ori         $a0, $a0, 0x1E (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)30);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x41EFECu, 0x41EFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41EFF4u;
label_41eff4:
    // 0x41eff4: 0xafa20604  sw          $v0, 0x604($sp)
    ctx->pc = 0x41eff4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1540), GPR_U32(ctx, 2));
label_41eff8:
    // 0x41eff8: 0xc103628  jal         func_40D8A0
label_41effc:
    if (ctx->pc == 0x41EFFCu) {
        ctx->pc = 0x41EFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41EFF8u;
        // 0x41effc: 0x27a40600  addiu       $a0, $sp, 0x600 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1536));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41F000u;
        goto label_41f000;
    }
    ctx->pc = 0x41EFF8u;
    SET_GPR_U32(ctx, 31, 0x41F000u);
    ctx->pc = 0x41EFFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41EFF8u;
    // 0x41effc: 0x27a40600  addiu       $a0, $sp, 0x600 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x41EFF8u, 0x41F000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41F000u;
label_41f000:
    // 0x41f000: 0xa3a004ff  sb          $zero, 0x4FF($sp)
    ctx->pc = 0x41f000u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1279), (uint8_t)GPR_U32(ctx, 0));
label_41f004:
    // 0x41f004: 0x0  nop
    ctx->pc = 0x41f004u;
    // NOP
label_41f008:
    // 0x41f008: 0xa3a00500  sb          $zero, 0x500($sp)
    ctx->pc = 0x41f008u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1280), (uint8_t)GPR_U32(ctx, 0));
label_41f00c:
    // 0x41f00c: 0x1240001a  beqz        $s2, . + 4 + (0x1A << 2)
label_41f010:
    if (ctx->pc == 0x41F010u) {
        ctx->pc = 0x41F010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F00Cu;
        // 0x41f010: 0x27b00500  addiu       $s0, $sp, 0x500 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 1280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41F014u;
        goto label_41f014;
    }
    ctx->pc = 0x41F00Cu;
    {
        const bool branch_taken_0x41f00c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x41F010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F00Cu;
        // 0x41f010: 0x27b00500  addiu       $s0, $sp, 0x500 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 1280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41f00c) {
            ctx->pc = 0x41F078u;
            goto label_41f078;
        }
    }
    ctx->pc = 0x41F014u;
label_41f014:
    // 0x41f014: 0x82420000  lb          $v0, 0x0($s2)
    ctx->pc = 0x41f014u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_41f018:
    // 0x41f018: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_41f01c:
    if (ctx->pc == 0x41F01Cu) {
        ctx->pc = 0x41F01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F018u;
        // 0x41f01c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41F020u;
        goto label_41f020;
    }
    ctx->pc = 0x41F018u;
    {
        const bool branch_taken_0x41f018 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41F01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F018u;
        // 0x41f01c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41f018) {
            ctx->pc = 0x41F078u;
            goto label_41f078;
        }
    }
    ctx->pc = 0x41F020u;
label_41f020:
    // 0x41f020: 0x8e2200d0  lw          $v0, 0xD0($s1)
    ctx->pc = 0x41f020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 208)));
label_41f024:
    // 0x41f024: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x41f024u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_41f028:
    // 0x41f028: 0x40f809  jalr        $v0
label_41f02c:
    if (ctx->pc == 0x41F02Cu) {
        ctx->pc = 0x41F02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F028u;
        // 0x41f02c: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41F030u;
        goto label_41f030;
    }
    ctx->pc = 0x41F028u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41F030u);
        ctx->pc = 0x41F02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F028u;
        // 0x41f02c: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41F028u, 0x41F030u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41F030u;
label_41f030:
    // 0x41f030: 0x8e2200f4  lw          $v0, 0xF4($s1)
    ctx->pc = 0x41f030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 244)));
label_41f034:
    // 0x41f034: 0x40f809  jalr        $v0
label_41f038:
    if (ctx->pc == 0x41F038u) {
        ctx->pc = 0x41F038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F034u;
        // 0x41f038: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41F03Cu;
        goto label_41f03c;
    }
    ctx->pc = 0x41F034u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41F03Cu);
        ctx->pc = 0x41F038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F034u;
        // 0x41f038: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41F034u, 0x41F03Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41F03Cu;
label_41f03c:
    // 0x41f03c: 0x2c420100  sltiu       $v0, $v0, 0x100
    ctx->pc = 0x41f03cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
label_41f040:
    // 0x41f040: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_41f044:
    if (ctx->pc == 0x41F044u) {
        ctx->pc = 0x41F044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F040u;
        // 0x41f044: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41F048u;
        goto label_41f048;
    }
    ctx->pc = 0x41F040u;
    {
        const bool branch_taken_0x41f040 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x41F044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F040u;
        // 0x41f044: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41f040) {
            ctx->pc = 0x41F078u;
            goto label_41f078;
        }
    }
    ctx->pc = 0x41F048u;
label_41f048:
    // 0x41f048: 0x824800ff  lb          $t0, 0xFF($s2)
    ctx->pc = 0x41f048u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 255)));
label_41f04c:
    // 0x41f04c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x41f04cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_41f050:
    // 0x41f050: 0xafa20610  sw          $v0, 0x610($sp)
    ctx->pc = 0x41f050u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1552), GPR_U32(ctx, 2));
label_41f054:
    // 0x41f054: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x41f054u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_41f058:
    // 0x41f058: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x41f058u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_41f05c:
    // 0x41f05c: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x41f05cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_41f060:
    // 0x41f060: 0xc1035f6  jal         func_40D7D8
label_41f064:
    if (ctx->pc == 0x41F064u) {
        ctx->pc = 0x41F064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F060u;
        // 0x41f064: 0x3484001e  ori         $a0, $a0, 0x1E (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)30);
        ctx->in_delay_slot = false;
        ctx->pc = 0x41F068u;
        goto label_41f068;
    }
    ctx->pc = 0x41F060u;
    SET_GPR_U32(ctx, 31, 0x41F068u);
    ctx->pc = 0x41F064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41F060u;
    // 0x41f064: 0x3484001e  ori         $a0, $a0, 0x1E (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)30);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x41F060u, 0x41F068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41F068u;
label_41f068:
    // 0x41f068: 0xafa20614  sw          $v0, 0x614($sp)
    ctx->pc = 0x41f068u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1556), GPR_U32(ctx, 2));
label_41f06c:
    // 0x41f06c: 0xc103628  jal         func_40D8A0
label_41f070:
    if (ctx->pc == 0x41F070u) {
        ctx->pc = 0x41F070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F06Cu;
        // 0x41f070: 0x27a40610  addiu       $a0, $sp, 0x610 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41F074u;
        goto label_41f074;
    }
    ctx->pc = 0x41F06Cu;
    SET_GPR_U32(ctx, 31, 0x41F074u);
    ctx->pc = 0x41F070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41F06Cu;
    // 0x41f070: 0x27a40610  addiu       $a0, $sp, 0x610 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x41F06Cu, 0x41F074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41F074u;
label_41f074:
    // 0x41f074: 0xa3a005ff  sb          $zero, 0x5FF($sp)
    ctx->pc = 0x41f074u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1535), (uint8_t)GPR_U32(ctx, 0));
label_41f078:
    // 0x41f078: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x41f078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_41f07c:
    // 0x41f07c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x41f07cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41f080:
    // 0x41f080: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x41f080u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41f084:
    // 0x41f084: 0xc108114  jal         func_420450
label_41f088:
    if (ctx->pc == 0x41F088u) {
        ctx->pc = 0x41F088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F084u;
        // 0x41f088: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41F08Cu;
        goto label_41f08c;
    }
    ctx->pc = 0x41F084u;
    SET_GPR_U32(ctx, 31, 0x41F08Cu);
    ctx->pc = 0x41F088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41F084u;
    // 0x41f088: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x420450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420450u, 0x41F084u, 0x41F08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41F08Cu;
label_41f08c:
    // 0x41f08c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x41f08cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_41f090:
    // 0x41f090: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x41f090u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41f094:
    // 0x41f094: 0xafa00620  sw          $zero, 0x620($sp)
    ctx->pc = 0x41f094u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1568), GPR_U32(ctx, 0));
label_41f098:
    // 0x41f098: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x41f098u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_41f09c:
    // 0x41f09c: 0xafa00624  sw          $zero, 0x624($sp)
    ctx->pc = 0x41f09cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1572), GPR_U32(ctx, 0));
label_41f0a0:
    // 0x41f0a0: 0x27a70620  addiu       $a3, $sp, 0x620
    ctx->pc = 0x41f0a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1568));
label_41f0a4:
    // 0x41f0a4: 0x27a80624  addiu       $t0, $sp, 0x624
    ctx->pc = 0x41f0a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1572));
label_41f0a8:
    // 0x41f0a8: 0x27a90628  addiu       $t1, $sp, 0x628
    ctx->pc = 0x41f0a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 1576));
label_41f0ac:
    // 0x41f0ac: 0xc107ace  jal         func_41EB38
label_41f0b0:
    if (ctx->pc == 0x41F0B0u) {
        ctx->pc = 0x41F0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F0ACu;
        // 0x41f0b0: 0x27aa062c  addiu       $t2, $sp, 0x62C (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 1580));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41F0B4u;
        goto label_41f0b4;
    }
    ctx->pc = 0x41F0ACu;
    SET_GPR_U32(ctx, 31, 0x41F0B4u);
    ctx->pc = 0x41F0B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41F0ACu;
    // 0x41f0b0: 0x27aa062c  addiu       $t2, $sp, 0x62C (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 1580));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41EB38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41EB38u, 0x41F0ACu, 0x41F0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41F0B4u;
label_41f0b4:
    // 0x41f0b4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_41f0b8:
    if (ctx->pc == 0x41F0B8u) {
        ctx->pc = 0x41F0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F0B4u;
        // 0x41f0b8: 0xafa20630  sw          $v0, 0x630($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1584), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41F0BCu;
        goto label_41f0bc;
    }
    ctx->pc = 0x41F0B4u;
    {
        const bool branch_taken_0x41f0b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x41F0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F0B4u;
        // 0x41f0b8: 0xafa20630  sw          $v0, 0x630($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1584), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41f0b4) {
            ctx->pc = 0x41F0C4u;
            goto label_41f0c4;
        }
    }
    ctx->pc = 0x41F0BCu;
label_41f0bc:
    // 0x41f0bc: 0x10000043  b           . + 4 + (0x43 << 2)
label_41f0c0:
    if (ctx->pc == 0x41F0C0u) {
        ctx->pc = 0x41F0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F0BCu;
        // 0x41f0c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41F0C4u;
        goto label_41f0c4;
    }
    ctx->pc = 0x41F0BCu;
    {
        const bool branch_taken_0x41f0bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41F0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F0BCu;
        // 0x41f0c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41f0bc) {
            ctx->pc = 0x41F1CCu;
            goto label_41f1cc;
        }
    }
    ctx->pc = 0x41F0C4u;
label_41f0c4:
    // 0x41f0c4: 0x8fa40620  lw          $a0, 0x620($sp)
    ctx->pc = 0x41f0c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1568)));
label_41f0c8:
    // 0x41f0c8: 0x8fa50624  lw          $a1, 0x624($sp)
    ctx->pc = 0x41f0c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1572)));
label_41f0cc:
    // 0x41f0cc: 0x8fa60628  lw          $a2, 0x628($sp)
    ctx->pc = 0x41f0ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1576)));
label_41f0d0:
    // 0x41f0d0: 0xc10746c  jal         func_41D1B0
label_41f0d4:
    if (ctx->pc == 0x41F0D4u) {
        ctx->pc = 0x41F0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F0D0u;
        // 0x41f0d4: 0x8fa7062c  lw          $a3, 0x62C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1580)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41F0D8u;
        goto label_41f0d8;
    }
    ctx->pc = 0x41F0D0u;
    SET_GPR_U32(ctx, 31, 0x41F0D8u);
    ctx->pc = 0x41F0D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41F0D0u;
    // 0x41f0d4: 0x8fa7062c  lw          $a3, 0x62C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1580)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D1B0u, 0x41F0D0u, 0x41F0D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41F0D8u;
label_41f0d8:
    // 0x41f0d8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x41f0d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_41f0dc:
    // 0x41f0dc: 0x1220001f  beqz        $s1, . + 4 + (0x1F << 2)
label_41f0e0:
    if (ctx->pc == 0x41F0E0u) {
        ctx->pc = 0x41F0E4u;
        goto label_41f0e4;
    }
    ctx->pc = 0x41F0DCu;
    {
        const bool branch_taken_0x41f0dc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x41f0dc) {
            ctx->pc = 0x41F15Cu;
            goto label_41f15c;
        }
    }
    ctx->pc = 0x41F0E4u;
label_41f0e4:
    // 0x41f0e4: 0x92220023  lbu         $v0, 0x23($s1)
    ctx->pc = 0x41f0e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
label_41f0e8:
    // 0x41f0e8: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x41f0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_41f0ec:
    // 0x41f0ec: 0x30436000  andi        $v1, $v0, 0x6000
    ctx->pc = 0x41f0ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)24576);
label_41f0f0:
    // 0x41f0f0: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
label_41f0f4:
    if (ctx->pc == 0x41F0F4u) {
        ctx->pc = 0x41F0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F0F0u;
        // 0x41f0f4: 0x30424000  andi        $v0, $v0, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
        ctx->pc = 0x41F0F8u;
        goto label_41f0f8;
    }
    ctx->pc = 0x41F0F0u;
    {
        const bool branch_taken_0x41f0f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x41F0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F0F0u;
        // 0x41f0f4: 0x30424000  andi        $v0, $v0, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
        if (branch_taken_0x41f0f0) {
            ctx->pc = 0x41F138u;
            goto label_41f138;
        }
    }
    ctx->pc = 0x41F0F8u;
label_41f0f8:
    // 0x41f0f8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_41f0fc:
    if (ctx->pc == 0x41F0FCu) {
        ctx->pc = 0x41F0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F0F8u;
        // 0x41f0fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41F100u;
        goto label_41f100;
    }
    ctx->pc = 0x41F0F8u;
    {
        const bool branch_taken_0x41f0f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41F0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F0F8u;
        // 0x41f0fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41f0f8) {
            ctx->pc = 0x41F11Cu;
            goto label_41f11c;
        }
    }
    ctx->pc = 0x41F100u;
label_41f100:
    // 0x41f100: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x41f100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_41f104:
    // 0x41f104: 0x27a60630  addiu       $a2, $sp, 0x630
    ctx->pc = 0x41f104u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1584));
label_41f108:
    // 0x41f108: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x41f108u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_41f10c:
    // 0x41f10c: 0xc1079ea  jal         func_41E7A8
label_41f110:
    if (ctx->pc == 0x41F110u) {
        ctx->pc = 0x41F110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F10Cu;
        // 0x41f110: 0x24080004  addiu       $t0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41F114u;
        goto label_41f114;
    }
    ctx->pc = 0x41F10Cu;
    SET_GPR_U32(ctx, 31, 0x41F114u);
    ctx->pc = 0x41F110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41F10Cu;
    // 0x41f110: 0x24080004  addiu       $t0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E7A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E7A8u, 0x41F10Cu, 0x41F114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41F114u;
label_41f114:
    // 0x41f114: 0x10000007  b           . + 4 + (0x7 << 2)
label_41f118:
    if (ctx->pc == 0x41F118u) {
        ctx->pc = 0x41F118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F114u;
        // 0x41f118: 0x8fa20630  lw          $v0, 0x630($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1584)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41F11Cu;
        goto label_41f11c;
    }
    ctx->pc = 0x41F114u;
    {
        const bool branch_taken_0x41f114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41F118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F114u;
        // 0x41f118: 0x8fa20630  lw          $v0, 0x630($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1584)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41f114) {
            ctx->pc = 0x41F134u;
            goto label_41f134;
        }
    }
    ctx->pc = 0x41F11Cu;
label_41f11c:
    // 0x41f11c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x41f11cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_41f120:
    // 0x41f120: 0x27a60630  addiu       $a2, $sp, 0x630
    ctx->pc = 0x41f120u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1584));
label_41f124:
    // 0x41f124: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x41f124u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_41f128:
    // 0x41f128: 0xc1079ea  jal         func_41E7A8
label_41f12c:
    if (ctx->pc == 0x41F12Cu) {
        ctx->pc = 0x41F12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F128u;
        // 0x41f12c: 0x24080008  addiu       $t0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41F130u;
        goto label_41f130;
    }
    ctx->pc = 0x41F128u;
    SET_GPR_U32(ctx, 31, 0x41F130u);
    ctx->pc = 0x41F12Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41F128u;
    // 0x41f12c: 0x24080008  addiu       $t0, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E7A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E7A8u, 0x41F128u, 0x41F130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41F130u;
label_41f130:
    // 0x41f130: 0x8fa20630  lw          $v0, 0x630($sp)
    ctx->pc = 0x41f130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1584)));
label_41f134:
    // 0x41f134: 0xac5d0018  sw          $sp, 0x18($v0)
    ctx->pc = 0x41f134u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 29));
label_41f138:
    // 0x41f138: 0xc106faa  jal         func_41BEA8
label_41f13c:
    if (ctx->pc == 0x41F13Cu) {
        ctx->pc = 0x41F13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F138u;
        // 0x41f13c: 0x8fa40630  lw          $a0, 0x630($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1584)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41F140u;
        goto label_41f140;
    }
    ctx->pc = 0x41F138u;
    SET_GPR_U32(ctx, 31, 0x41F140u);
    ctx->pc = 0x41F13Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41F138u;
    // 0x41f13c: 0x8fa40630  lw          $a0, 0x630($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1584)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41BEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41BEA8u, 0x41F138u, 0x41F140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41F140u;
label_41f140:
    // 0x41f140: 0x8fa50630  lw          $a1, 0x630($sp)
    ctx->pc = 0x41f140u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1584)));
label_41f144:
    // 0x41f144: 0xc1073c2  jal         func_41CF08
label_41f148:
    if (ctx->pc == 0x41F148u) {
        ctx->pc = 0x41F148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F144u;
        // 0x41f148: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41F14Cu;
        goto label_41f14c;
    }
    ctx->pc = 0x41F144u;
    SET_GPR_U32(ctx, 31, 0x41F14Cu);
    ctx->pc = 0x41F148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41F144u;
    // 0x41f148: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CF08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CF08u, 0x41F144u, 0x41F14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41F14Cu;
label_41f14c:
    // 0x41f14c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_41f150:
    if (ctx->pc == 0x41F150u) {
        ctx->pc = 0x41F154u;
        goto label_41f154;
    }
    ctx->pc = 0x41F14Cu;
    {
        const bool branch_taken_0x41f14c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x41f14c) {
            ctx->pc = 0x41F16Cu;
            goto label_41f16c;
        }
    }
    ctx->pc = 0x41F154u;
label_41f154:
    // 0x41f154: 0xc1074ac  jal         func_41D2B0
label_41f158:
    if (ctx->pc == 0x41F158u) {
        ctx->pc = 0x41F158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F154u;
        // 0x41f158: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41F15Cu;
        goto label_41f15c;
    }
    ctx->pc = 0x41F154u;
    SET_GPR_U32(ctx, 31, 0x41F15Cu);
    ctx->pc = 0x41F158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41F154u;
    // 0x41f158: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D2B0u, 0x41F154u, 0x41F15Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41F15Cu;
label_41f15c:
    // 0x41f15c: 0xc10705c  jal         func_41C170
label_41f160:
    if (ctx->pc == 0x41F160u) {
        ctx->pc = 0x41F160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F15Cu;
        // 0x41f160: 0x8fa40630  lw          $a0, 0x630($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1584)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41F164u;
        goto label_41f164;
    }
    ctx->pc = 0x41F15Cu;
    SET_GPR_U32(ctx, 31, 0x41F164u);
    ctx->pc = 0x41F160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41F15Cu;
    // 0x41f160: 0x8fa40630  lw          $a0, 0x630($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1584)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C170u, 0x41F15Cu, 0x41F164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41F164u;
label_41f164:
    // 0x41f164: 0x10000019  b           . + 4 + (0x19 << 2)
label_41f168:
    if (ctx->pc == 0x41F168u) {
        ctx->pc = 0x41F168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F164u;
        // 0x41f168: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41F16Cu;
        goto label_41f16c;
    }
    ctx->pc = 0x41F164u;
    {
        const bool branch_taken_0x41f164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41F168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F164u;
        // 0x41f168: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41f164) {
            ctx->pc = 0x41F1CCu;
            goto label_41f1cc;
        }
    }
    ctx->pc = 0x41F16Cu;
label_41f16c:
    // 0x41f16c: 0xc10705c  jal         func_41C170
label_41f170:
    if (ctx->pc == 0x41F170u) {
        ctx->pc = 0x41F170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F16Cu;
        // 0x41f170: 0x8fa40630  lw          $a0, 0x630($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1584)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41F174u;
        goto label_41f174;
    }
    ctx->pc = 0x41F16Cu;
    SET_GPR_U32(ctx, 31, 0x41F174u);
    ctx->pc = 0x41F170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41F16Cu;
    // 0x41f170: 0x8fa40630  lw          $a0, 0x630($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1584)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C170u, 0x41F16Cu, 0x41F174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41F174u;
label_41f174:
    // 0x41f174: 0xc10820a  jal         func_420828
label_41f178:
    if (ctx->pc == 0x41F178u) {
        ctx->pc = 0x41F178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F174u;
        // 0x41f178: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41F17Cu;
        goto label_41f17c;
    }
    ctx->pc = 0x41F174u;
    SET_GPR_U32(ctx, 31, 0x41F17Cu);
    ctx->pc = 0x41F178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41F174u;
    // 0x41f178: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x420828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420828u, 0x41F174u, 0x41F17Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41F17Cu;
label_41f17c:
    // 0x41f17c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x41f17cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_41f180:
    // 0x41f180: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
label_41f184:
    if (ctx->pc == 0x41F184u) {
        ctx->pc = 0x41F184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F180u;
        // 0x41f184: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41F188u;
        goto label_41f188;
    }
    ctx->pc = 0x41F180u;
    {
        const bool branch_taken_0x41f180 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x41F184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F180u;
        // 0x41f184: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41f180) {
            ctx->pc = 0x41F198u;
            goto label_41f198;
        }
    }
    ctx->pc = 0x41F188u;
label_41f188:
    // 0x41f188: 0xc1074ac  jal         func_41D2B0
label_41f18c:
    if (ctx->pc == 0x41F18Cu) {
        ctx->pc = 0x41F18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F188u;
        // 0x41f18c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41F190u;
        goto label_41f190;
    }
    ctx->pc = 0x41F188u;
    SET_GPR_U32(ctx, 31, 0x41F190u);
    ctx->pc = 0x41F18Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41F188u;
    // 0x41f18c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D2B0u, 0x41F188u, 0x41F190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41F190u;
label_41f190:
    // 0x41f190: 0x1000000e  b           . + 4 + (0xE << 2)
label_41f194:
    if (ctx->pc == 0x41F194u) {
        ctx->pc = 0x41F194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F190u;
        // 0x41f194: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41F198u;
        goto label_41f198;
    }
    ctx->pc = 0x41F190u;
    {
        const bool branch_taken_0x41f190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41F194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F190u;
        // 0x41f194: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41f190) {
            ctx->pc = 0x41F1CCu;
            goto label_41f1cc;
        }
    }
    ctx->pc = 0x41F198u;
label_41f198:
    // 0x41f198: 0xc10815c  jal         func_420570
label_41f19c:
    if (ctx->pc == 0x41F19Cu) {
        ctx->pc = 0x41F19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F198u;
        // 0x41f19c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41F1A0u;
        goto label_41f1a0;
    }
    ctx->pc = 0x41F198u;
    SET_GPR_U32(ctx, 31, 0x41F1A0u);
    ctx->pc = 0x41F19Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41F198u;
    // 0x41f19c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x420570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420570u, 0x41F198u, 0x41F1A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41F1A0u;
label_41f1a0:
    // 0x41f1a0: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
label_41f1a4:
    if (ctx->pc == 0x41F1A4u) {
        ctx->pc = 0x41F1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F1A0u;
        // 0x41f1a4: 0x3c050061  lui         $a1, 0x61 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)97 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41F1A8u;
        goto label_41f1a8;
    }
    ctx->pc = 0x41F1A0u;
    {
        const bool branch_taken_0x41f1a0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x41F1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F1A0u;
        // 0x41f1a4: 0x3c050061  lui         $a1, 0x61 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)97 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41f1a0) {
            ctx->pc = 0x41F1BCu;
            goto label_41f1bc;
        }
    }
    ctx->pc = 0x41F1A8u;
label_41f1a8:
    // 0x41f1a8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x41f1a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_41f1ac:
    // 0x41f1ac: 0xc108184  jal         func_420610
label_41f1b0:
    if (ctx->pc == 0x41F1B0u) {
        ctx->pc = 0x41F1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F1ACu;
        // 0x41f1b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41F1B4u;
        goto label_41f1b4;
    }
    ctx->pc = 0x41F1ACu;
    SET_GPR_U32(ctx, 31, 0x41F1B4u);
    ctx->pc = 0x41F1B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41F1ACu;
    // 0x41f1b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x420610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420610u, 0x41F1ACu, 0x41F1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41F1B4u;
label_41f1b4:
    // 0x41f1b4: 0x10000005  b           . + 4 + (0x5 << 2)
label_41f1b8:
    if (ctx->pc == 0x41F1B8u) {
        ctx->pc = 0x41F1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F1B4u;
        // 0x41f1b8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41F1BCu;
        goto label_41f1bc;
    }
    ctx->pc = 0x41F1B4u;
    {
        const bool branch_taken_0x41f1b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41F1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F1B4u;
        // 0x41f1b8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41f1b4) {
            ctx->pc = 0x41F1CCu;
            goto label_41f1cc;
        }
    }
    ctx->pc = 0x41F1BCu;
label_41f1bc:
    // 0x41f1bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x41f1bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41f1c0:
    // 0x41f1c0: 0xc108184  jal         func_420610
label_41f1c4:
    if (ctx->pc == 0x41F1C4u) {
        ctx->pc = 0x41F1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F1C0u;
        // 0x41f1c4: 0x24a59d20  addiu       $a1, $a1, -0x62E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941984));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41F1C8u;
        goto label_41f1c8;
    }
    ctx->pc = 0x41F1C0u;
    SET_GPR_U32(ctx, 31, 0x41F1C8u);
    ctx->pc = 0x41F1C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41F1C0u;
    // 0x41f1c4: 0x24a59d20  addiu       $a1, $a1, -0x62E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x420610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420610u, 0x41F1C0u, 0x41F1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41F1C8u;
label_41f1c8:
    // 0x41f1c8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x41f1c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41f1cc:
    // 0x41f1cc: 0x7bb00690  lq          $s0, 0x690($sp)
    ctx->pc = 0x41f1ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1680)));
label_41f1d0:
    // 0x41f1d0: 0x7bb10680  lq          $s1, 0x680($sp)
    ctx->pc = 0x41f1d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1664)));
label_41f1d4:
    // 0x41f1d4: 0x7bb20670  lq          $s2, 0x670($sp)
    ctx->pc = 0x41f1d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1648)));
label_41f1d8:
    // 0x41f1d8: 0x7bb30660  lq          $s3, 0x660($sp)
    ctx->pc = 0x41f1d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1632)));
label_41f1dc:
    // 0x41f1dc: 0x7bb40650  lq          $s4, 0x650($sp)
    ctx->pc = 0x41f1dcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 1616)));
label_41f1e0:
    // 0x41f1e0: 0xdfbf0640  ld          $ra, 0x640($sp)
    ctx->pc = 0x41f1e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1600)));
label_41f1e4:
    // 0x41f1e4: 0x3e00008  jr          $ra
label_41f1e8:
    if (ctx->pc == 0x41F1E8u) {
        ctx->pc = 0x41F1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F1E4u;
        // 0x41f1e8: 0x27bd06a0  addiu       $sp, $sp, 0x6A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1696));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41F1ECu;
        goto label_41f1ec;
    }
    ctx->pc = 0x41F1E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41F1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F1E4u;
        // 0x41f1e8: 0x27bd06a0  addiu       $sp, $sp, 0x6A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1696));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41F1E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41F1ECu;
label_41f1ec:
    // 0x41f1ec: 0x0  nop
    ctx->pc = 0x41f1ecu;
    // NOP
    ctx->pc = 0x41f1f0u;
}
