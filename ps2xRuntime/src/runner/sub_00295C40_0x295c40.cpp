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

// Function: sub_00295C40
// Address: 0x295c40 - 0x296360
void sub_00295C40_0x295c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00295C40_0x295c40");
#endif

    switch (ctx->pc) {
        case 0x295c9cu: goto label_295c9c;
        case 0x295cb8u: goto label_295cb8;
        case 0x295cd8u: goto label_295cd8;
        case 0x295cf0u: goto label_295cf0;
        case 0x295d10u: goto label_295d10;
        case 0x295d28u: goto label_295d28;
        case 0x295d48u: goto label_295d48;
        case 0x295d70u: goto label_295d70;
        case 0x295d9cu: goto label_295d9c;
        case 0x295db0u: goto label_295db0;
        case 0x295decu: goto label_295dec;
        case 0x295df8u: goto label_295df8;
        case 0x295e14u: goto label_295e14;
        case 0x295e38u: goto label_295e38;
        case 0x295e54u: goto label_295e54;
        case 0x295e74u: goto label_295e74;
        case 0x295e84u: goto label_295e84;
        case 0x295e9cu: goto label_295e9c;
        case 0x295ebcu: goto label_295ebc;
        case 0x295ef0u: goto label_295ef0;
        case 0x295f14u: goto label_295f14;
        case 0x295f34u: goto label_295f34;
        case 0x295f5cu: goto label_295f5c;
        case 0x295f7cu: goto label_295f7c;
        case 0x295fa8u: goto label_295fa8;
        case 0x295fecu: goto label_295fec;
        case 0x296014u: goto label_296014;
        case 0x29602cu: goto label_29602c;
        case 0x296054u: goto label_296054;
        case 0x29606cu: goto label_29606c;
        case 0x296088u: goto label_296088;
        case 0x2960a0u: goto label_2960a0;
        case 0x2960bcu: goto label_2960bc;
        case 0x2960ccu: goto label_2960cc;
        case 0x2960dcu: goto label_2960dc;
        case 0x2960fcu: goto label_2960fc;
        case 0x29611cu: goto label_29611c;
        case 0x29612cu: goto label_29612c;
        case 0x296140u: goto label_296140;
        case 0x296160u: goto label_296160;
        case 0x296178u: goto label_296178;
        case 0x296188u: goto label_296188;
        case 0x2961a0u: goto label_2961a0;
        case 0x2961b8u: goto label_2961b8;
        case 0x2961d4u: goto label_2961d4;
        case 0x2961e4u: goto label_2961e4;
        case 0x2961f0u: goto label_2961f0;
        case 0x296200u: goto label_296200;
        case 0x296214u: goto label_296214;
        case 0x29622cu: goto label_29622c;
        case 0x296248u: goto label_296248;
        case 0x296258u: goto label_296258;
        case 0x296264u: goto label_296264;
        case 0x296290u: goto label_296290;
        case 0x2962a4u: goto label_2962a4;
        case 0x2962b4u: goto label_2962b4;
        case 0x2962bcu: goto label_2962bc;
        case 0x2962ecu: goto label_2962ec;
        case 0x29630cu: goto label_29630c;
        case 0x296320u: goto label_296320;
        default: break;
    }

    ctx->pc = 0x295c40u;

    // 0x295c40: 0x27bdfd00  addiu       $sp, $sp, -0x300
    ctx->pc = 0x295c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966528));
    // 0x295c44: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x295c44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x295c48: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x295c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x295c4c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x295c4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x295c50: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x295c50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x295c54: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x295c54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x295c58: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x295c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x295c5c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x295c5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x295c60: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x295c60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x295c64: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x295c64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x295c68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x295c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x295c6c: 0xafa402e0  sw          $a0, 0x2E0($sp)
    ctx->pc = 0x295c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 736), GPR_U32(ctx, 4));
    // 0x295c70: 0xafa502f0  sw          $a1, 0x2F0($sp)
    ctx->pc = 0x295c70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 752), GPR_U32(ctx, 5));
    // 0x295c74: 0x8fa202f0  lw          $v0, 0x2F0($sp)
    ctx->pc = 0x295c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x295c78: 0x10020139  beq         $zero, $v0, . + 4 + (0x139 << 2)
    ctx->pc = 0x295C78u;
    {
        const bool branch_taken_0x295c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x295c78) {
            ctx->pc = 0x296160u;
            goto label_296160;
        }
    }
    ctx->pc = 0x295C80u;
    // 0x295c80: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x295c80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295c84: 0x8fa402f0  lw          $a0, 0x2F0($sp)
    ctx->pc = 0x295c84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x295c88: 0x240503e9  addiu       $a1, $zero, 0x3E9
    ctx->pc = 0x295c88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1001));
    // 0x295c8c: 0x3c06004f  lui         $a2, 0x4F
    ctx->pc = 0x295c8cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)79 << 16));
    // 0x295c90: 0x24c6d510  addiu       $a2, $a2, -0x2AF0
    ctx->pc = 0x295c90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956304));
    // 0x295c94: 0xc041a50  jal         func_106940
    ctx->pc = 0x295C94u;
    SET_GPR_U32(ctx, 31, 0x295C9Cu);
    ctx->pc = 0x106940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106940u, 0x295C94u, 0x295C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295C9Cu;
label_295c9c:
    // 0x295c9c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x295c9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295ca0: 0x8fa202e0  lw          $v0, 0x2E0($sp)
    ctx->pc = 0x295ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 736)));
    // 0x295ca4: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x295ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x295ca8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x295ca8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295cac: 0x2406001f  addiu       $a2, $zero, 0x1F
    ctx->pc = 0x295cacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x295cb0: 0xc0bc77e  jal         func_2F1DF8
    ctx->pc = 0x295CB0u;
    SET_GPR_U32(ctx, 31, 0x295CB8u);
    ctx->pc = 0x2F1DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1DF8u, 0x295CB0u, 0x295CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295CB8u;
label_295cb8:
    // 0x295cb8: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x295cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x295cbc: 0x8fa202e0  lw          $v0, 0x2E0($sp)
    ctx->pc = 0x295cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 736)));
    // 0x295cc0: 0xa043006f  sb          $v1, 0x6F($v0)
    ctx->pc = 0x295cc0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 111), (uint8_t)GPR_U32(ctx, 3));
    // 0x295cc4: 0x8fa402f0  lw          $a0, 0x2F0($sp)
    ctx->pc = 0x295cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x295cc8: 0x240503ea  addiu       $a1, $zero, 0x3EA
    ctx->pc = 0x295cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1002));
    // 0x295ccc: 0x2786a2c8  addiu       $a2, $gp, -0x5D38
    ctx->pc = 0x295cccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943432));
    // 0x295cd0: 0xc041a50  jal         func_106940
    ctx->pc = 0x295CD0u;
    SET_GPR_U32(ctx, 31, 0x295CD8u);
    ctx->pc = 0x106940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106940u, 0x295CD0u, 0x295CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295CD8u;
label_295cd8:
    // 0x295cd8: 0x8fa302e0  lw          $v1, 0x2E0($sp)
    ctx->pc = 0x295cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 736)));
    // 0x295cdc: 0x24640070  addiu       $a0, $v1, 0x70
    ctx->pc = 0x295cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x295ce0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x295ce0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295ce4: 0x2406001f  addiu       $a2, $zero, 0x1F
    ctx->pc = 0x295ce4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x295ce8: 0xc0bc77e  jal         func_2F1DF8
    ctx->pc = 0x295CE8u;
    SET_GPR_U32(ctx, 31, 0x295CF0u);
    ctx->pc = 0x2F1DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1DF8u, 0x295CE8u, 0x295CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295CF0u;
label_295cf0:
    // 0x295cf0: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x295cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x295cf4: 0x8fa202e0  lw          $v0, 0x2E0($sp)
    ctx->pc = 0x295cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 736)));
    // 0x295cf8: 0xa043008f  sb          $v1, 0x8F($v0)
    ctx->pc = 0x295cf8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 143), (uint8_t)GPR_U32(ctx, 3));
    // 0x295cfc: 0x8fa402f0  lw          $a0, 0x2F0($sp)
    ctx->pc = 0x295cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x295d00: 0x240503ee  addiu       $a1, $zero, 0x3EE
    ctx->pc = 0x295d00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1006));
    // 0x295d04: 0x2786a2c8  addiu       $a2, $gp, -0x5D38
    ctx->pc = 0x295d04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943432));
    // 0x295d08: 0xc041a50  jal         func_106940
    ctx->pc = 0x295D08u;
    SET_GPR_U32(ctx, 31, 0x295D10u);
    ctx->pc = 0x106940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106940u, 0x295D08u, 0x295D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295D10u;
label_295d10:
    // 0x295d10: 0x8fa302e0  lw          $v1, 0x2E0($sp)
    ctx->pc = 0x295d10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 736)));
    // 0x295d14: 0x24640090  addiu       $a0, $v1, 0x90
    ctx->pc = 0x295d14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 144));
    // 0x295d18: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x295d18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295d1c: 0x2406001f  addiu       $a2, $zero, 0x1F
    ctx->pc = 0x295d1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x295d20: 0xc0bc77e  jal         func_2F1DF8
    ctx->pc = 0x295D20u;
    SET_GPR_U32(ctx, 31, 0x295D28u);
    ctx->pc = 0x2F1DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1DF8u, 0x295D20u, 0x295D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295D28u;
label_295d28:
    // 0x295d28: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x295d28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x295d2c: 0x8fa202e0  lw          $v0, 0x2E0($sp)
    ctx->pc = 0x295d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 736)));
    // 0x295d30: 0xa04300af  sb          $v1, 0xAF($v0)
    ctx->pc = 0x295d30u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 175), (uint8_t)GPR_U32(ctx, 3));
    // 0x295d34: 0x8fa402f0  lw          $a0, 0x2F0($sp)
    ctx->pc = 0x295d34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x295d38: 0x240503eb  addiu       $a1, $zero, 0x3EB
    ctx->pc = 0x295d38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1003));
    // 0x295d3c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x295d3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295d40: 0xc041b54  jal         func_106D50
    ctx->pc = 0x295D40u;
    SET_GPR_U32(ctx, 31, 0x295D48u);
    ctx->pc = 0x106D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D50u, 0x295D40u, 0x295D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295D48u;
label_295d48:
    // 0x295d48: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x295d48u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x295d4c: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x295d4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x295d50: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x295d50u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x295d54: 0x10400102  beqz        $v0, . + 4 + (0x102 << 2)
    ctx->pc = 0x295D54u;
    {
        const bool branch_taken_0x295d54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x295d54) {
            ctx->pc = 0x296160u;
            goto label_296160;
        }
    }
    ctx->pc = 0x295D5Cu;
    // 0x295d5c: 0x27a402d0  addiu       $a0, $sp, 0x2D0
    ctx->pc = 0x295d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
    // 0x295d60: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x295d60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x295d64: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x295D64u;
    {
        const bool branch_taken_0x295d64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x295d64) {
            ctx->pc = 0x295D8Cu;
            goto label_295d8c;
        }
    }
    ctx->pc = 0x295D6Cu;
    // 0x295d6c: 0x801021  addu        $v0, $a0, $zero
    ctx->pc = 0x295d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 0)));
label_295d70:
    // 0x295d70: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x295d70u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x295d74: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x295d74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x295d78: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x295d78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x295d7c: 0x0  nop
    ctx->pc = 0x295d7cu;
    // NOP
    // 0x295d80: 0x0  nop
    ctx->pc = 0x295d80u;
    // NOP
    // 0x295d84: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x295D84u;
    {
        const bool branch_taken_0x295d84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x295d84) {
            ctx->pc = 0x295D70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_295d70;
        }
    }
    ctx->pc = 0x295D8Cu;
label_295d8c:
    // 0x295d8c: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x295d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x295d90: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x295d90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295d94: 0xc0bc5c6  jal         func_2F1718
    ctx->pc = 0x295D94u;
    SET_GPR_U32(ctx, 31, 0x295D9Cu);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x295D94u, 0x295D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295D9Cu;
label_295d9c:
    // 0x295d9c: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x295d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x295da0: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x295da0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x295da4: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x295DA4u;
    {
        const bool branch_taken_0x295da4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x295da4) {
            ctx->pc = 0x295DCCu;
            goto label_295dcc;
        }
    }
    ctx->pc = 0x295DACu;
    // 0x295dac: 0x801021  addu        $v0, $a0, $zero
    ctx->pc = 0x295dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 0)));
label_295db0:
    // 0x295db0: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x295db0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x295db4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x295db4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x295db8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x295db8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x295dbc: 0x0  nop
    ctx->pc = 0x295dbcu;
    // NOP
    // 0x295dc0: 0x0  nop
    ctx->pc = 0x295dc0u;
    // NOP
    // 0x295dc4: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x295DC4u;
    {
        const bool branch_taken_0x295dc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x295dc4) {
            ctx->pc = 0x295DB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_295db0;
        }
    }
    ctx->pc = 0x295DCCu;
label_295dcc:
    // 0x295dcc: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x295dccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x295dd0: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x295dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x295dd4: 0x24a5d520  addiu       $a1, $a1, -0x2AE0
    ctx->pc = 0x295dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956320));
    // 0x295dd8: 0x3c06004f  lui         $a2, 0x4F
    ctx->pc = 0x295dd8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)79 << 16));
    // 0x295ddc: 0x24c6d540  addiu       $a2, $a2, -0x2AC0
    ctx->pc = 0x295ddcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956352));
    // 0x295de0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x295de0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295de4: 0xc0bc3e2  jal         func_2F0F88
    ctx->pc = 0x295DE4u;
    SET_GPR_U32(ctx, 31, 0x295DECu);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x295DE4u, 0x295DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295DECu;
label_295dec:
    // 0x295dec: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x295decu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x295df0: 0xc0f0b92  jal         func_3C2E48
    ctx->pc = 0x295DF0u;
    SET_GPR_U32(ctx, 31, 0x295DF8u);
    ctx->pc = 0x3C2E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2E48u, 0x295DF0u, 0x295DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295DF8u;
label_295df8:
    // 0x295df8: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x295DF8u;
    {
        const bool branch_taken_0x295df8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x295df8) {
            ctx->pc = 0x295E84u;
            goto label_295e84;
        }
    }
    ctx->pc = 0x295E00u;
    // 0x295e00: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x295e00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x295e04: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x295e04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x295e08: 0x27a601b0  addiu       $a2, $sp, 0x1B0
    ctx->pc = 0x295e08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x295e0c: 0xc10493e  jal         func_4124F8
    ctx->pc = 0x295E0Cu;
    SET_GPR_U32(ctx, 31, 0x295E14u);
    ctx->pc = 0x4124F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4124F8u, 0x295E0Cu, 0x295E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295E14u;
label_295e14:
    // 0x295e14: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x295e14u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295e18: 0x1280001a  beqz        $s4, . + 4 + (0x1A << 2)
    ctx->pc = 0x295E18u;
    {
        const bool branch_taken_0x295e18 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x295e18) {
            ctx->pc = 0x295E84u;
            goto label_295e84;
        }
    }
    ctx->pc = 0x295E20u;
    // 0x295e20: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x295e20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295e24: 0x2405002b  addiu       $a1, $zero, 0x2B
    ctx->pc = 0x295e24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x295e28: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x295e28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295e2c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x295e2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295e30: 0xc103322  jal         func_40CC88
    ctx->pc = 0x295E30u;
    SET_GPR_U32(ctx, 31, 0x295E38u);
    ctx->pc = 0x40CC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CC88u, 0x295E30u, 0x295E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295E38u;
label_295e38:
    // 0x295e38: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x295E38u;
    {
        const bool branch_taken_0x295e38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x295e38) {
            ctx->pc = 0x295E74u;
            goto label_295e74;
        }
    }
    ctx->pc = 0x295E40u;
    // 0x295e40: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x295e40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x295e44: 0x2484ad08  addiu       $a0, $a0, -0x52F8
    ctx->pc = 0x295e44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946056));
    // 0x295e48: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x295e48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295e4c: 0xc0f03b6  jal         func_3C0ED8
    ctx->pc = 0x295E4Cu;
    SET_GPR_U32(ctx, 31, 0x295E54u);
    ctx->pc = 0x3C0ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C0ED8u, 0x295E4Cu, 0x295E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295E54u;
label_295e54:
    // 0x295e54: 0x8fa302e0  lw          $v1, 0x2E0($sp)
    ctx->pc = 0x295e54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 736)));
    // 0x295e58: 0xac6200c0  sw          $v0, 0xC0($v1)
    ctx->pc = 0x295e58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 192), GPR_U32(ctx, 2));
    // 0x295e5c: 0x8fa202e0  lw          $v0, 0x2E0($sp)
    ctx->pc = 0x295e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 736)));
    // 0x295e60: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x295e60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x295e64: 0x2484ad08  addiu       $a0, $a0, -0x52F8
    ctx->pc = 0x295e64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946056));
    // 0x295e68: 0x8c4500c0  lw          $a1, 0xC0($v0)
    ctx->pc = 0x295e68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x295e6c: 0xc0f0602  jal         func_3C1808
    ctx->pc = 0x295E6Cu;
    SET_GPR_U32(ctx, 31, 0x295E74u);
    ctx->pc = 0x3C1808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C1808u, 0x295E6Cu, 0x295E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295E74u;
label_295e74:
    // 0x295e74: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x295e74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295e78: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x295e78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295e7c: 0xc10496a  jal         func_4125A8
    ctx->pc = 0x295E7Cu;
    SET_GPR_U32(ctx, 31, 0x295E84u);
    ctx->pc = 0x4125A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4125A8u, 0x295E7Cu, 0x295E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295E84u;
label_295e84:
    // 0x295e84: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x295e84u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x295e88: 0x8fa402f0  lw          $a0, 0x2F0($sp)
    ctx->pc = 0x295e88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x295e8c: 0x240503eb  addiu       $a1, $zero, 0x3EB
    ctx->pc = 0x295e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1003));
    // 0x295e90: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x295e90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295e94: 0xc04146c  jal         func_1051B0
    ctx->pc = 0x295E94u;
    SET_GPR_U32(ctx, 31, 0x295E9Cu);
    ctx->pc = 0x1051B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051B0u, 0x295E94u, 0x295E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295E9Cu;
label_295e9c:
    // 0x295e9c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x295e9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x295ea0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x295ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x295ea4: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x295EA4u;
    {
        const bool branch_taken_0x295ea4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x295ea4) {
            ctx->pc = 0x295EB0u;
            goto label_295eb0;
        }
    }
    ctx->pc = 0x295EACu;
    // 0x295eac: 0x24150003  addiu       $s5, $zero, 0x3
    ctx->pc = 0x295eacu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_295eb0:
    // 0x295eb0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x295eb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295eb4: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x295EB4u;
    {
        const bool branch_taken_0x295eb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x295eb4) {
            ctx->pc = 0x295FCCu;
            goto label_295fcc;
        }
    }
    ctx->pc = 0x295EBCu;
label_295ebc:
    // 0x295ebc: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x295ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x295ec0: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x295ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x295ec4: 0xac4002d0  sw          $zero, 0x2D0($v0)
    ctx->pc = 0x295ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 720), GPR_U32(ctx, 0));
    // 0x295ec8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x295ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x295ecc: 0x12a2000c  beq         $s5, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x295ECCu;
    {
        const bool branch_taken_0x295ecc = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        if (branch_taken_0x295ecc) {
            ctx->pc = 0x295F00u;
            goto label_295f00;
        }
    }
    ctx->pc = 0x295ED4u;
    // 0x295ed4: 0x26020031  addiu       $v0, $s0, 0x31
    ctx->pc = 0x295ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 49));
    // 0x295ed8: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x295ed8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x295edc: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x295edcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x295ee0: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x295ee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x295ee4: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x295ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x295ee8: 0xc0bc60c  jal         func_2F1830
    ctx->pc = 0x295EE8u;
    SET_GPR_U32(ctx, 31, 0x295EF0u);
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x295EE8u, 0x295EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295EF0u;
label_295ef0:
    // 0x295ef0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x295ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x295ef4: 0x5d1821  addu        $v1, $v0, $sp
    ctx->pc = 0x295ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x295ef8: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x295ef8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x295efc: 0xa06202b0  sb          $v0, 0x2B0($v1)
    ctx->pc = 0x295efcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 688), (uint8_t)GPR_U32(ctx, 2));
label_295f00:
    // 0x295f00: 0x3c04004f  lui         $a0, 0x4F
    ctx->pc = 0x295f00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)79 << 16));
    // 0x295f04: 0x2484d558  addiu       $a0, $a0, -0x2AA8
    ctx->pc = 0x295f04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956376));
    // 0x295f08: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x295f08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295f0c: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x295F0Cu;
    SET_GPR_U32(ctx, 31, 0x295F14u);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x295F0Cu, 0x295F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295F14u;
label_295f14:
    // 0x295f14: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x295F14u;
    {
        const bool branch_taken_0x295f14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x295f14) {
            ctx->pc = 0x295F48u;
            goto label_295f48;
        }
    }
    ctx->pc = 0x295F1Cu;
    // 0x295f1c: 0x8f84bb84  lw          $a0, -0x447C($gp)
    ctx->pc = 0x295f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949764)));
    // 0x295f20: 0x27a502b0  addiu       $a1, $sp, 0x2B0
    ctx->pc = 0x295f20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x295f24: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x295f24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x295f28: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x295f28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x295f2c: 0xc08a320  jal         func_228C80
    ctx->pc = 0x295F2Cu;
    SET_GPR_U32(ctx, 31, 0x295F34u);
    ctx->pc = 0x228C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228C80u, 0x295F2Cu, 0x295F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295F34u;
label_295f34:
    // 0x295f34: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x295f34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x295f38: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x295f38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x295f3c: 0xac6202d0  sw          $v0, 0x2D0($v1)
    ctx->pc = 0x295f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 720), GPR_U32(ctx, 2));
    // 0x295f40: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x295F40u;
    {
        const bool branch_taken_0x295f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x295f40) {
            ctx->pc = 0x295FB4u;
            goto label_295fb4;
        }
    }
    ctx->pc = 0x295F48u;
label_295f48:
    // 0x295f48: 0x3c04004f  lui         $a0, 0x4F
    ctx->pc = 0x295f48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)79 << 16));
    // 0x295f4c: 0x2484d568  addiu       $a0, $a0, -0x2A98
    ctx->pc = 0x295f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956392));
    // 0x295f50: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x295f50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295f54: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x295F54u;
    SET_GPR_U32(ctx, 31, 0x295F5Cu);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x295F54u, 0x295F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295F5Cu;
label_295f5c:
    // 0x295f5c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x295F5Cu;
    {
        const bool branch_taken_0x295f5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x295f5c) {
            ctx->pc = 0x295F90u;
            goto label_295f90;
        }
    }
    ctx->pc = 0x295F64u;
    // 0x295f64: 0x8f84bb84  lw          $a0, -0x447C($gp)
    ctx->pc = 0x295f64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949764)));
    // 0x295f68: 0x27a502b0  addiu       $a1, $sp, 0x2B0
    ctx->pc = 0x295f68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x295f6c: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x295f6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x295f70: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x295f70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x295f74: 0xc08a320  jal         func_228C80
    ctx->pc = 0x295F74u;
    SET_GPR_U32(ctx, 31, 0x295F7Cu);
    ctx->pc = 0x228C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228C80u, 0x295F74u, 0x295F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295F7Cu;
label_295f7c:
    // 0x295f7c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x295f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x295f80: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x295f80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x295f84: 0xac6202d0  sw          $v0, 0x2D0($v1)
    ctx->pc = 0x295f84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 720), GPR_U32(ctx, 2));
    // 0x295f88: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x295F88u;
    {
        const bool branch_taken_0x295f88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x295f88) {
            ctx->pc = 0x295FB4u;
            goto label_295fb4;
        }
    }
    ctx->pc = 0x295F90u;
label_295f90:
    // 0x295f90: 0x8f84bb84  lw          $a0, -0x447C($gp)
    ctx->pc = 0x295f90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949764)));
    // 0x295f94: 0x27a502b0  addiu       $a1, $sp, 0x2B0
    ctx->pc = 0x295f94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x295f98: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x295f98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x295f9c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x295f9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x295fa0: 0xc08a320  jal         func_228C80
    ctx->pc = 0x295FA0u;
    SET_GPR_U32(ctx, 31, 0x295FA8u);
    ctx->pc = 0x228C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228C80u, 0x295FA0u, 0x295FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295FA8u;
label_295fa8:
    // 0x295fa8: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x295fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x295fac: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x295facu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x295fb0: 0xac6202d0  sw          $v0, 0x2D0($v1)
    ctx->pc = 0x295fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 720), GPR_U32(ctx, 2));
label_295fb4:
    // 0x295fb4: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x295fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x295fb8: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x295fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x295fbc: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x295fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x295fc0: 0x100300d8  beq         $zero, $v1, . + 4 + (0xD8 << 2)
    ctx->pc = 0x295FC0u;
    {
        const bool branch_taken_0x295fc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        if (branch_taken_0x295fc0) {
            ctx->pc = 0x296324u;
            goto label_296324;
        }
    }
    ctx->pc = 0x295FC8u;
    // 0x295fc8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x295fc8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_295fcc:
    // 0x295fcc: 0x215102b  sltu        $v0, $s0, $s5
    ctx->pc = 0x295fccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x295fd0: 0x1440ffba  bnez        $v0, . + 4 + (-0x46 << 2)
    ctx->pc = 0x295FD0u;
    {
        const bool branch_taken_0x295fd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x295fd0) {
            ctx->pc = 0x295EBCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_295ebc;
        }
    }
    ctx->pc = 0x295FD8u;
    // 0x295fd8: 0x8fa402f0  lw          $a0, 0x2F0($sp)
    ctx->pc = 0x295fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x295fdc: 0x240503eb  addiu       $a1, $zero, 0x3EB
    ctx->pc = 0x295fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1003));
    // 0x295fe0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x295fe0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295fe4: 0xc04146c  jal         func_1051B0
    ctx->pc = 0x295FE4u;
    SET_GPR_U32(ctx, 31, 0x295FECu);
    ctx->pc = 0x1051B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051B0u, 0x295FE4u, 0x295FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295FECu;
label_295fec:
    // 0x295fec: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x295fecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x295ff0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x295ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x295ff4: 0x1462003b  bne         $v1, $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x295FF4u;
    {
        const bool branch_taken_0x295ff4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x295ff4) {
            ctx->pc = 0x2960E4u;
            goto label_2960e4;
        }
    }
    ctx->pc = 0x295FFCu;
    // 0x295ffc: 0x8fa202e0  lw          $v0, 0x2E0($sp)
    ctx->pc = 0x295ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 736)));
    // 0x296000: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x296000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x296004: 0x8fa502d0  lw          $a1, 0x2D0($sp)
    ctx->pc = 0x296004u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 720)));
    // 0x296008: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x296008u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29600c: 0xc12174c  jal         func_485D30
    ctx->pc = 0x29600Cu;
    SET_GPR_U32(ctx, 31, 0x296014u);
    ctx->pc = 0x485D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x485D30u, 0x29600Cu, 0x296014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296014u;
label_296014:
    // 0x296014: 0x3c024448  lui         $v0, 0x4448
    ctx->pc = 0x296014u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17480 << 16));
    // 0x296018: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x296018u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x29601c: 0x8fa402f0  lw          $a0, 0x2F0($sp)
    ctx->pc = 0x29601cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x296020: 0x240503ed  addiu       $a1, $zero, 0x3ED
    ctx->pc = 0x296020u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1005));
    // 0x296024: 0xc042090  jal         func_108240
    ctx->pc = 0x296024u;
    SET_GPR_U32(ctx, 31, 0x29602Cu);
    ctx->pc = 0x108240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108240u, 0x296024u, 0x29602Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29602Cu;
label_29602c:
    // 0x29602c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x29602cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x296030: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x296030u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x296034: 0x0  nop
    ctx->pc = 0x296034u;
    // NOP
    // 0x296038: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x296038u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x29603c: 0x8fa202e0  lw          $v0, 0x2E0($sp)
    ctx->pc = 0x29603cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 736)));
    // 0x296040: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x296040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x296044: 0x8fa502d8  lw          $a1, 0x2D8($sp)
    ctx->pc = 0x296044u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 728)));
    // 0x296048: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x296048u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29604c: 0xc121d6c  jal         func_4875B0
    ctx->pc = 0x29604Cu;
    SET_GPR_U32(ctx, 31, 0x296054u);
    ctx->pc = 0x4875B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4875B0u, 0x29604Cu, 0x296054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296054u;
label_296054:
    // 0x296054: 0x3c024448  lui         $v0, 0x4448
    ctx->pc = 0x296054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17480 << 16));
    // 0x296058: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x296058u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x29605c: 0x8fa402f0  lw          $a0, 0x2F0($sp)
    ctx->pc = 0x29605cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x296060: 0x240503ed  addiu       $a1, $zero, 0x3ED
    ctx->pc = 0x296060u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1005));
    // 0x296064: 0xc042090  jal         func_108240
    ctx->pc = 0x296064u;
    SET_GPR_U32(ctx, 31, 0x29606Cu);
    ctx->pc = 0x108240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108240u, 0x296064u, 0x29606Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29606Cu;
label_29606c:
    // 0x29606c: 0x8fa202e0  lw          $v0, 0x2E0($sp)
    ctx->pc = 0x29606cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 736)));
    // 0x296070: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x296070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x296074: 0x8fa502d4  lw          $a1, 0x2D4($sp)
    ctx->pc = 0x296074u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 724)));
    // 0x296078: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x296078u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29607c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x29607cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x296080: 0xc121d6c  jal         func_4875B0
    ctx->pc = 0x296080u;
    SET_GPR_U32(ctx, 31, 0x296088u);
    ctx->pc = 0x4875B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4875B0u, 0x296080u, 0x296088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296088u;
label_296088:
    // 0x296088: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x296088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
    // 0x29608c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x29608cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x296090: 0x8fa402f0  lw          $a0, 0x2F0($sp)
    ctx->pc = 0x296090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x296094: 0x240503ec  addiu       $a1, $zero, 0x3EC
    ctx->pc = 0x296094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1004));
    // 0x296098: 0xc042090  jal         func_108240
    ctx->pc = 0x296098u;
    SET_GPR_U32(ctx, 31, 0x2960A0u);
    ctx->pc = 0x108240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108240u, 0x296098u, 0x2960A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2960A0u;
label_2960a0:
    // 0x2960a0: 0x8fa202e0  lw          $v0, 0x2E0($sp)
    ctx->pc = 0x2960a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 736)));
    // 0x2960a4: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x2960a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x2960a8: 0x8fa502d0  lw          $a1, 0x2D0($sp)
    ctx->pc = 0x2960a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 720)));
    // 0x2960ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2960acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2960b0: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2960b0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2960b4: 0xc121d6c  jal         func_4875B0
    ctx->pc = 0x2960B4u;
    SET_GPR_U32(ctx, 31, 0x2960BCu);
    ctx->pc = 0x4875B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4875B0u, 0x2960B4u, 0x2960BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2960BCu;
label_2960bc:
    // 0x2960bc: 0x8f84bb84  lw          $a0, -0x447C($gp)
    ctx->pc = 0x2960bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949764)));
    // 0x2960c0: 0x8fa502d8  lw          $a1, 0x2D8($sp)
    ctx->pc = 0x2960c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 728)));
    // 0x2960c4: 0xc08a614  jal         func_229850
    ctx->pc = 0x2960C4u;
    SET_GPR_U32(ctx, 31, 0x2960CCu);
    ctx->pc = 0x229850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229850u, 0x2960C4u, 0x2960CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2960CCu;
label_2960cc:
    // 0x2960cc: 0x8f84bb84  lw          $a0, -0x447C($gp)
    ctx->pc = 0x2960ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949764)));
    // 0x2960d0: 0x8fa502d4  lw          $a1, 0x2D4($sp)
    ctx->pc = 0x2960d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 724)));
    // 0x2960d4: 0xc08a614  jal         func_229850
    ctx->pc = 0x2960D4u;
    SET_GPR_U32(ctx, 31, 0x2960DCu);
    ctx->pc = 0x229850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229850u, 0x2960D4u, 0x2960DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2960DCu;
label_2960dc:
    // 0x2960dc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2960DCu;
    {
        const bool branch_taken_0x2960dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2960dc) {
            ctx->pc = 0x2960FCu;
            goto label_2960fc;
        }
    }
    ctx->pc = 0x2960E4u;
label_2960e4:
    // 0x2960e4: 0x8fa202e0  lw          $v0, 0x2E0($sp)
    ctx->pc = 0x2960e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 736)));
    // 0x2960e8: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x2960e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x2960ec: 0x8fa502d0  lw          $a1, 0x2D0($sp)
    ctx->pc = 0x2960ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 720)));
    // 0x2960f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2960f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2960f4: 0xc12174c  jal         func_485D30
    ctx->pc = 0x2960F4u;
    SET_GPR_U32(ctx, 31, 0x2960FCu);
    ctx->pc = 0x485D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x485D30u, 0x2960F4u, 0x2960FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2960FCu;
label_2960fc:
    // 0x2960fc: 0x8fa202d0  lw          $v0, 0x2D0($sp)
    ctx->pc = 0x2960fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 720)));
    // 0x296100: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x296100u;
    {
        const bool branch_taken_0x296100 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x296100) {
            ctx->pc = 0x296160u;
            goto label_296160;
        }
    }
    ctx->pc = 0x296108u;
    // 0x296108: 0x8fa202e0  lw          $v0, 0x2E0($sp)
    ctx->pc = 0x296108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 736)));
    // 0x29610c: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x29610cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x296110: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x296110u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x296114: 0xc085538  jal         func_2154E0
    ctx->pc = 0x296114u;
    SET_GPR_U32(ctx, 31, 0x29611Cu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x296114u, 0x29611Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29611Cu;
label_29611c:
    // 0x29611c: 0xafa202dc  sw          $v0, 0x2DC($sp)
    ctx->pc = 0x29611cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 732), GPR_U32(ctx, 2));
    // 0x296120: 0x8fa402dc  lw          $a0, 0x2DC($sp)
    ctx->pc = 0x296120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 732)));
    // 0x296124: 0xc091018  jal         func_244060
    ctx->pc = 0x296124u;
    SET_GPR_U32(ctx, 31, 0x29612Cu);
    ctx->pc = 0x244060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244060u, 0x296124u, 0x29612Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29612Cu;
label_29612c:
    // 0x29612c: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x29612cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296130: 0x8fa202e0  lw          $v0, 0x2E0($sp)
    ctx->pc = 0x296130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 736)));
    // 0x296134: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x296134u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x296138: 0xc085530  jal         func_2154C0
    ctx->pc = 0x296138u;
    SET_GPR_U32(ctx, 31, 0x296140u);
    ctx->pc = 0x2154C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154C0u, 0x296138u, 0x296140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296140u;
label_296140:
    // 0x296140: 0x38420006  xori        $v0, $v0, 0x6
    ctx->pc = 0x296140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)6);
    // 0x296144: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x296144u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x296148: 0x8fa202d0  lw          $v0, 0x2D0($sp)
    ctx->pc = 0x296148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 720)));
    // 0x29614c: 0x8c570004  lw          $s7, 0x4($v0)
    ctx->pc = 0x29614cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x296150: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x296150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296154: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x296154u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296158: 0xc10671c  jal         func_419C70
    ctx->pc = 0x296158u;
    SET_GPR_U32(ctx, 31, 0x296160u);
    ctx->pc = 0x419C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419C70u, 0x296158u, 0x296160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296160u;
label_296160:
    // 0x296160: 0x8f82bc20  lw          $v0, -0x43E0($gp)
    ctx->pc = 0x296160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949920)));
    // 0x296164: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x296164u;
    {
        const bool branch_taken_0x296164 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x296164) {
            ctx->pc = 0x2961A8u;
            goto label_2961a8;
        }
    }
    ctx->pc = 0x29616Cu;
    // 0x29616c: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x29616cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x296170: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x296170u;
    SET_GPR_U32(ctx, 31, 0x296178u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x296170u, 0x296178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296178u;
label_296178:
    // 0x296178: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x296178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x29617c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x29617cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296180: 0xc0400e0  jal         func_100380
    ctx->pc = 0x296180u;
    SET_GPR_U32(ctx, 31, 0x296188u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x296180u, 0x296188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296188u;
label_296188:
    // 0x296188: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x296188u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29618c: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x29618Cu;
    {
        const bool branch_taken_0x29618c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x29618c) {
            ctx->pc = 0x2961A4u;
            goto label_2961a4;
        }
    }
    ctx->pc = 0x296194u;
    // 0x296194: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x296194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296198: 0xc0a58e8  jal         func_2963A0
    ctx->pc = 0x296198u;
    SET_GPR_U32(ctx, 31, 0x2961A0u);
    ctx->pc = 0x2963A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2963A0u, 0x296198u, 0x2961A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2961A0u;
label_2961a0:
    // 0x2961a0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2961a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2961a4:
    // 0x2961a4: 0xaf92bc20  sw          $s2, -0x43E0($gp)
    ctx->pc = 0x2961a4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949920), GPR_U32(ctx, 18));
label_2961a8:
    // 0x2961a8: 0x8fa202e0  lw          $v0, 0x2E0($sp)
    ctx->pc = 0x2961a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 736)));
    // 0x2961ac: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x2961acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x2961b0: 0xc121d18  jal         func_487460
    ctx->pc = 0x2961B0u;
    SET_GPR_U32(ctx, 31, 0x2961B8u);
    ctx->pc = 0x487460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x487460u, 0x2961B0u, 0x2961B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2961B8u;
label_2961b8:
    // 0x2961b8: 0x8fa302e0  lw          $v1, 0x2E0($sp)
    ctx->pc = 0x2961b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 736)));
    // 0x2961bc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2961bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2961c0: 0x3c050029  lui         $a1, 0x29
    ctx->pc = 0x2961c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)41 << 16));
    // 0x2961c4: 0x24a54580  addiu       $a1, $a1, 0x4580
    ctx->pc = 0x2961c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17792));
    // 0x2961c8: 0x246600b4  addiu       $a2, $v1, 0xB4
    ctx->pc = 0x2961c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 180));
    // 0x2961cc: 0xc0e2628  jal         func_3898A0
    ctx->pc = 0x2961CCu;
    SET_GPR_U32(ctx, 31, 0x2961D4u);
    ctx->pc = 0x3898A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3898A0u, 0x2961CCu, 0x2961D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2961D4u;
label_2961d4:
    // 0x2961d4: 0x8fa202e0  lw          $v0, 0x2E0($sp)
    ctx->pc = 0x2961d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 736)));
    // 0x2961d8: 0x244400b4  addiu       $a0, $v0, 0xB4
    ctx->pc = 0x2961d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
    // 0x2961dc: 0xc0a58e0  jal         func_296380
    ctx->pc = 0x2961DCu;
    SET_GPR_U32(ctx, 31, 0x2961E4u);
    ctx->pc = 0x296380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296380u, 0x2961DCu, 0x2961E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2961E4u;
label_2961e4:
    // 0x2961e4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2961e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2961e8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2961E8u;
    {
        const bool branch_taken_0x2961e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2961e8) {
            ctx->pc = 0x296204u;
            goto label_296204;
        }
    }
    ctx->pc = 0x2961F0u;
label_2961f0:
    // 0x2961f0: 0x8f84bc20  lw          $a0, -0x43E0($gp)
    ctx->pc = 0x2961f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949920)));
    // 0x2961f4: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x2961f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2961f8: 0xc0a5ae8  jal         func_296BA0
    ctx->pc = 0x2961F8u;
    SET_GPR_U32(ctx, 31, 0x296200u);
    ctx->pc = 0x296BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296BA0u, 0x2961F8u, 0x296200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296200u;
label_296200:
    // 0x296200: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x296200u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_296204:
    // 0x296204: 0x8fa202e0  lw          $v0, 0x2E0($sp)
    ctx->pc = 0x296204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 736)));
    // 0x296208: 0x244400b4  addiu       $a0, $v0, 0xB4
    ctx->pc = 0x296208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
    // 0x29620c: 0xc0a58d8  jal         func_296360
    ctx->pc = 0x29620Cu;
    SET_GPR_U32(ctx, 31, 0x296214u);
    ctx->pc = 0x296360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296360u, 0x29620Cu, 0x296214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296214u;
label_296214:
    // 0x296214: 0x1662fff6  bne         $s3, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x296214u;
    {
        const bool branch_taken_0x296214 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x296214) {
            ctx->pc = 0x2961F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2961f0;
        }
    }
    ctx->pc = 0x29621Cu;
    // 0x29621c: 0x8fa202e0  lw          $v0, 0x2E0($sp)
    ctx->pc = 0x29621cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 736)));
    // 0x296220: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x296220u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x296224: 0xc121d18  jal         func_487460
    ctx->pc = 0x296224u;
    SET_GPR_U32(ctx, 31, 0x29622Cu);
    ctx->pc = 0x487460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x487460u, 0x296224u, 0x29622Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29622Cu;
label_29622c:
    // 0x29622c: 0x8fa302e0  lw          $v1, 0x2E0($sp)
    ctx->pc = 0x29622cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 736)));
    // 0x296230: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x296230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296234: 0x3c050029  lui         $a1, 0x29
    ctx->pc = 0x296234u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)41 << 16));
    // 0x296238: 0x24a545e0  addiu       $a1, $a1, 0x45E0
    ctx->pc = 0x296238u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17888));
    // 0x29623c: 0x2466004c  addiu       $a2, $v1, 0x4C
    ctx->pc = 0x29623cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 76));
    // 0x296240: 0xc0e2628  jal         func_3898A0
    ctx->pc = 0x296240u;
    SET_GPR_U32(ctx, 31, 0x296248u);
    ctx->pc = 0x3898A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3898A0u, 0x296240u, 0x296248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296248u;
label_296248:
    // 0x296248: 0x8fa202e0  lw          $v0, 0x2E0($sp)
    ctx->pc = 0x296248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 736)));
    // 0x29624c: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x29624cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x296250: 0xc121d18  jal         func_487460
    ctx->pc = 0x296250u;
    SET_GPR_U32(ctx, 31, 0x296258u);
    ctx->pc = 0x487460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x487460u, 0x296250u, 0x296258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296258u;
label_296258:
    // 0x296258: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x296258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29625c: 0xc0a6fdc  jal         func_29BF70
    ctx->pc = 0x29625Cu;
    SET_GPR_U32(ctx, 31, 0x296264u);
    ctx->pc = 0x29BF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29BF70u, 0x29625Cu, 0x296264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296264u;
label_296264:
    // 0x296264: 0x8fa302e0  lw          $v1, 0x2E0($sp)
    ctx->pc = 0x296264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 736)));
    // 0x296268: 0x80630070  lb          $v1, 0x70($v1)
    ctx->pc = 0x296268u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 112)));
    // 0x29626c: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x29626cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x296270: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x296270u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x296274: 0x1060002b  beqz        $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x296274u;
    {
        const bool branch_taken_0x296274 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x296274) {
            ctx->pc = 0x296324u;
            goto label_296324;
        }
    }
    ctx->pc = 0x29627Cu;
    // 0x29627c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x29627cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x296280: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x296280u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x296284: 0x24a5d580  addiu       $a1, $a1, -0x2A80
    ctx->pc = 0x296284u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956416));
    // 0x296288: 0xc0bc5c6  jal         func_2F1718
    ctx->pc = 0x296288u;
    SET_GPR_U32(ctx, 31, 0x296290u);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x296288u, 0x296290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296290u;
label_296290:
    // 0x296290: 0x8fa202e0  lw          $v0, 0x2E0($sp)
    ctx->pc = 0x296290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 736)));
    // 0x296294: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x296294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x296298: 0x24450070  addiu       $a1, $v0, 0x70
    ctx->pc = 0x296298u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x29629c: 0xc0bc4c4  jal         func_2F1310
    ctx->pc = 0x29629Cu;
    SET_GPR_U32(ctx, 31, 0x2962A4u);
    ctx->pc = 0x2F1310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1310u, 0x29629Cu, 0x2962A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2962A4u;
label_2962a4:
    // 0x2962a4: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x2962a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2962a8: 0x2785a2d0  addiu       $a1, $gp, -0x5D30
    ctx->pc = 0x2962a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943440));
    // 0x2962ac: 0xc0bc4c4  jal         func_2F1310
    ctx->pc = 0x2962ACu;
    SET_GPR_U32(ctx, 31, 0x2962B4u);
    ctx->pc = 0x2F1310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1310u, 0x2962ACu, 0x2962B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2962B4u;
label_2962b4:
    // 0x2962b4: 0xc122430  jal         func_4890C0
    ctx->pc = 0x2962B4u;
    SET_GPR_U32(ctx, 31, 0x2962BCu);
    ctx->pc = 0x4890C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4890C0u, 0x2962B4u, 0x2962BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2962BCu;
label_2962bc:
    // 0x2962bc: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2962bcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2962c0: 0x8fa202e0  lw          $v0, 0x2E0($sp)
    ctx->pc = 0x2962c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 736)));
    // 0x2962c4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2962c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2962c8: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x2962c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2962cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2962ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2962d0: 0x24470070  addiu       $a3, $v0, 0x70
    ctx->pc = 0x2962d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x2962d4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2962d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2962d8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2962d8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2962dc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2962dcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2962e0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2962e0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2962e4: 0xc120c08  jal         func_483020
    ctx->pc = 0x2962E4u;
    SET_GPR_U32(ctx, 31, 0x2962ECu);
    ctx->pc = 0x483020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x483020u, 0x2962E4u, 0x2962ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2962ECu;
label_2962ec:
    // 0x2962ec: 0x8fa302e0  lw          $v1, 0x2E0($sp)
    ctx->pc = 0x2962ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 736)));
    // 0x2962f0: 0x8fa202e0  lw          $v0, 0x2E0($sp)
    ctx->pc = 0x2962f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 736)));
    // 0x2962f4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2962f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2962f8: 0x8c640040  lw          $a0, 0x40($v1)
    ctx->pc = 0x2962f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x2962fc: 0x24450070  addiu       $a1, $v0, 0x70
    ctx->pc = 0x2962fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x296300: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x296300u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296304: 0xc1217cc  jal         func_485F30
    ctx->pc = 0x296304u;
    SET_GPR_U32(ctx, 31, 0x29630Cu);
    ctx->pc = 0x485F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x485F30u, 0x296304u, 0x29630Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29630Cu;
label_29630c:
    // 0x29630c: 0x8fa202e0  lw          $v0, 0x2E0($sp)
    ctx->pc = 0x29630cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 736)));
    // 0x296310: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x296310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x296314: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x296314u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x296318: 0xc121904  jal         func_486410
    ctx->pc = 0x296318u;
    SET_GPR_U32(ctx, 31, 0x296320u);
    ctx->pc = 0x486410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x486410u, 0x296318u, 0x296320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296320u;
label_296320:
    // 0x296320: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x296320u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_296324:
    // 0x296324: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x296324u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x296328: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x296328u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x29632c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x29632cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x296330: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x296330u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x296334: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x296334u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x296338: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x296338u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29633c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x29633cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x296340: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x296340u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x296344: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x296344u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x296348: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x296348u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29634c: 0x27bd0300  addiu       $sp, $sp, 0x300
    ctx->pc = 0x29634cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
    // 0x296350: 0x3e00008  jr          $ra
    ctx->pc = 0x296350u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296350u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x296358u;
    // 0x296358: 0x0  nop
    ctx->pc = 0x296358u;
    // NOP
    // 0x29635c: 0x0  nop
    ctx->pc = 0x29635cu;
    // NOP
    ctx->pc = 0x296360u;
}
