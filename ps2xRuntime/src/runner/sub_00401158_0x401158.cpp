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

// Function: sub_00401158
// Address: 0x401158 - 0x401460
void sub_00401158_0x401158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00401158_0x401158");
#endif

    switch (ctx->pc) {
        case 0x401198u: goto label_401198;
        case 0x4011b4u: goto label_4011b4;
        case 0x4011d0u: goto label_4011d0;
        case 0x4011f0u: goto label_4011f0;
        case 0x401254u: goto label_401254;
        case 0x401264u: goto label_401264;
        case 0x40126cu: goto label_40126c;
        case 0x40127cu: goto label_40127c;
        case 0x4012a8u: goto label_4012a8;
        case 0x4012b8u: goto label_4012b8;
        case 0x4012e0u: goto label_4012e0;
        case 0x4012f0u: goto label_4012f0;
        case 0x401310u: goto label_401310;
        case 0x401338u: goto label_401338;
        case 0x401348u: goto label_401348;
        case 0x401360u: goto label_401360;
        case 0x401394u: goto label_401394;
        case 0x4013c8u: goto label_4013c8;
        case 0x4013d8u: goto label_4013d8;
        case 0x4013e0u: goto label_4013e0;
        case 0x40142cu: goto label_40142c;
        case 0x401438u: goto label_401438;
        default: break;
    }

    ctx->pc = 0x401158u;

    // 0x401158: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x401158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x40115c: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x40115cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x401160: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x401160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x401164: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x401164u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x401168: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x401168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x40116c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x40116cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x401170: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x401170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x401174: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x401174u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x401178: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x401178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x40117c: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x40117cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x401180: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x401180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x401184: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x401184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x401188: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x401188u;
    {
        const bool branch_taken_0x401188 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x40118Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x401188u;
        // 0x40118c: 0xffbf0050  sd          $ra, 0x50($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x401188) {
            ctx->pc = 0x4011A4u;
            goto label_4011a4;
        }
    }
    ctx->pc = 0x401190u;
    // 0x401190: 0xc100970  jal         func_4025C0
    ctx->pc = 0x401190u;
    SET_GPR_U32(ctx, 31, 0x401198u);
    ctx->pc = 0x401194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401190u;
    // 0x401194: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4025C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4025C0u, 0x401190u, 0x401198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401198u;
label_401198:
    // 0x401198: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x401198u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40119c: 0x16000007  bnez        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x40119Cu;
    {
        const bool branch_taken_0x40119c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x40119c) {
            ctx->pc = 0x4011BCu;
            goto label_4011bc;
        }
    }
    ctx->pc = 0x4011A4u;
label_4011a4:
    // 0x4011a4: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x4011a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x4011a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4011a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4011ac: 0xc0f8782  jal         func_3E1E08
    ctx->pc = 0x4011ACu;
    SET_GPR_U32(ctx, 31, 0x4011B4u);
    ctx->pc = 0x4011B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4011ACu;
    // 0x4011b0: 0x24a50068  addiu       $a1, $a1, 0x68 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E08u, 0x4011ACu, 0x4011B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4011B4u;
label_4011b4:
    // 0x4011b4: 0x100000a1  b           . + 4 + (0xA1 << 2)
    ctx->pc = 0x4011B4u;
    {
        const bool branch_taken_0x4011b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4011B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4011B4u;
        // 0x4011b8: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4011b4) {
            ctx->pc = 0x40143Cu;
            goto label_40143c;
        }
    }
    ctx->pc = 0x4011BCu;
label_4011bc:
    // 0x4011bc: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x4011BCu;
    {
        const bool branch_taken_0x4011bc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x4011C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4011BCu;
        // 0x4011c0: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4011bc) {
            ctx->pc = 0x4011D0u;
            goto label_4011d0;
        }
    }
    ctx->pc = 0x4011C4u;
    // 0x4011c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4011c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4011c8: 0xc0f8782  jal         func_3E1E08
    ctx->pc = 0x4011C8u;
    SET_GPR_U32(ctx, 31, 0x4011D0u);
    ctx->pc = 0x4011CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4011C8u;
    // 0x4011cc: 0x24a50088  addiu       $a1, $a1, 0x88 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E08u, 0x4011C8u, 0x4011D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4011D0u;
label_4011d0:
    // 0x4011d0: 0x14880a  movz        $s1, $zero, $s4
    ctx->pc = 0x4011d0u;
    if (GPR_U64(ctx, 20) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 0));
    // 0x4011d4: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x4011D4u;
    {
        const bool branch_taken_0x4011d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4011D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4011D4u;
        // 0x4011d8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4011d4) {
            ctx->pc = 0x4011F4u;
            goto label_4011f4;
        }
    }
    ctx->pc = 0x4011DCu;
    // 0x4011dc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4011dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4011e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4011e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4011e4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4011e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4011e8: 0xc100194  jal         func_400650
    ctx->pc = 0x4011E8u;
    SET_GPR_U32(ctx, 31, 0x4011F0u);
    ctx->pc = 0x4011ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4011E8u;
    // 0x4011ec: 0x3a0402d  daddu       $t0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x400650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x400650u, 0x4011E8u, 0x4011F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4011F0u;
label_4011f0:
    // 0x4011f0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4011f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4011f4:
    // 0x4011f4: 0x10103c  dsll32      $v0, $s0, 0
    ctx->pc = 0x4011f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
    // 0x4011f8: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x4011f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x4011fc: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x4011fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x401200: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x401200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x401204: 0x222102d  daddu       $v0, $s1, $v0
    ctx->pc = 0x401204u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 2));
    // 0x401208: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x401208u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x40120c: 0x64420002  daddiu      $v0, $v0, 0x2
    ctx->pc = 0x40120cu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)2);
    // 0x401210: 0x26130002  addiu       $s3, $s0, 0x2
    ctx->pc = 0x401210u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x401214: 0x21e3a  dsrl        $v1, $v0, 24
    ctx->pc = 0x401214u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) >> 24);
    // 0x401218: 0x23c3a  dsrl        $a3, $v0, 16
    ctx->pc = 0x401218u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) >> 16);
    // 0x40121c: 0x2423a  dsrl        $t0, $v0, 8
    ctx->pc = 0x40121cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) >> 8);
    // 0x401220: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x401220u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x401224: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x401224u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x401228: 0x310800ff  andi        $t0, $t0, 0xFF
    ctx->pc = 0x401228u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x40122c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x40122cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x401230: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x401230u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x401234: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x401234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x401238: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x401238u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x40123c: 0x310800ff  andi        $t0, $t0, 0xFF
    ctx->pc = 0x40123cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x401240: 0xa3a20023  sb          $v0, 0x23($sp)
    ctx->pc = 0x401240u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 35), (uint8_t)GPR_U32(ctx, 2));
    // 0x401244: 0xa3a30020  sb          $v1, 0x20($sp)
    ctx->pc = 0x401244u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 3));
    // 0x401248: 0xa3a70021  sb          $a3, 0x21($sp)
    ctx->pc = 0x401248u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 33), (uint8_t)GPR_U32(ctx, 7));
    // 0x40124c: 0xc0ff4b8  jal         func_3FD2E0
    ctx->pc = 0x40124Cu;
    SET_GPR_U32(ctx, 31, 0x401254u);
    ctx->pc = 0x401250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40124Cu;
    // 0x401250: 0xa3a80022  sb          $t0, 0x22($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 34), (uint8_t)GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FD2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FD2E0u, 0x40124Cu, 0x401254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401254u;
label_401254:
    // 0x401254: 0x2785ac78  addiu       $a1, $gp, -0x5388
    ctx->pc = 0x401254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294945912));
    // 0x401258: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x401258u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x40125c: 0xc0ff4b8  jal         func_3FD2E0
    ctx->pc = 0x40125Cu;
    SET_GPR_U32(ctx, 31, 0x401264u);
    ctx->pc = 0x401260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40125Cu;
    // 0x401260: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FD2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FD2E0u, 0x40125Cu, 0x401264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401264u;
label_401264:
    // 0x401264: 0xc0f85de  jal         func_3E1778
    ctx->pc = 0x401264u;
    SET_GPR_U32(ctx, 31, 0x40126Cu);
    ctx->pc = 0x401268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401264u;
    // 0x401268: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1778u, 0x401264u, 0x40126Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40126Cu;
label_40126c:
    // 0x40126c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x40126cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x401270: 0x2785ac78  addiu       $a1, $gp, -0x5388
    ctx->pc = 0x401270u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294945912));
    // 0x401274: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x401274u;
    SET_GPR_U32(ctx, 31, 0x40127Cu);
    ctx->pc = 0x401278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401274u;
    // 0x401278: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x401274u, 0x40127Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40127Cu;
label_40127c:
    // 0x40127c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x40127cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x401280: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x401280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x401284: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x401284u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x401288: 0x8fb00040  lw          $s0, 0x40($sp)
    ctx->pc = 0x401288u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x40128c: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x40128Cu;
    {
        const bool branch_taken_0x40128c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x40128c) {
            ctx->pc = 0x4012B8u;
            goto label_4012b8;
        }
    }
    ctx->pc = 0x401294u;
    // 0x401294: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x401294u;
    {
        const bool branch_taken_0x401294 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x401298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x401294u;
        // 0x401298: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x401294) {
            ctx->pc = 0x4012B8u;
            goto label_4012b8;
        }
    }
    ctx->pc = 0x40129Cu;
    // 0x40129c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x40129cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4012a0: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x4012A0u;
    SET_GPR_U32(ctx, 31, 0x4012A8u);
    ctx->pc = 0x4012A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4012A0u;
    // 0x4012a4: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x4012A0u, 0x4012A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4012A8u;
label_4012a8:
    // 0x4012a8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4012a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4012ac: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x4012acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4012b0: 0xc0ff4b8  jal         func_3FD2E0
    ctx->pc = 0x4012B0u;
    SET_GPR_U32(ctx, 31, 0x4012B8u);
    ctx->pc = 0x4012B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4012B0u;
    // 0x4012b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FD2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FD2E0u, 0x4012B0u, 0x4012B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4012B8u;
label_4012b8:
    // 0x4012b8: 0x12200049  beqz        $s1, . + 4 + (0x49 << 2)
    ctx->pc = 0x4012B8u;
    {
        const bool branch_taken_0x4012b8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4012BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4012B8u;
        // 0x4012bc: 0x8fb10000  lw          $s1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4012b8) {
            ctx->pc = 0x4013E0u;
            goto label_4013e0;
        }
    }
    ctx->pc = 0x4012C0u;
    // 0x4012c0: 0x1220000d  beqz        $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x4012C0u;
    {
        const bool branch_taken_0x4012c0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4012C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4012C0u;
        // 0x4012c4: 0x3a0982d  daddu       $s3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4012c0) {
            ctx->pc = 0x4012F8u;
            goto label_4012f8;
        }
    }
    ctx->pc = 0x4012C8u;
    // 0x4012c8: 0x8fb00004  lw          $s0, 0x4($sp)
    ctx->pc = 0x4012c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4012cc: 0x12000044  beqz        $s0, . + 4 + (0x44 << 2)
    ctx->pc = 0x4012CCu;
    {
        const bool branch_taken_0x4012cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4012D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4012CCu;
        // 0x4012d0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4012cc) {
            ctx->pc = 0x4013E0u;
            goto label_4013e0;
        }
    }
    ctx->pc = 0x4012D4u;
    // 0x4012d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4012d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4012d8: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x4012D8u;
    SET_GPR_U32(ctx, 31, 0x4012E0u);
    ctx->pc = 0x4012DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4012D8u;
    // 0x4012dc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x4012D8u, 0x4012E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4012E0u;
label_4012e0:
    // 0x4012e0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4012e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4012e4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4012e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4012e8: 0xc0ff4b8  jal         func_3FD2E0
    ctx->pc = 0x4012E8u;
    SET_GPR_U32(ctx, 31, 0x4012F0u);
    ctx->pc = 0x4012ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4012E8u;
    // 0x4012ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FD2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FD2E0u, 0x4012E8u, 0x4012F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4012F0u;
label_4012f0:
    // 0x4012f0: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x4012F0u;
    {
        const bool branch_taken_0x4012f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4012F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4012F0u;
        // 0x4012f4: 0xde4201f0  ld          $v0, 0x1F0($s2) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 496)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4012f0) {
            ctx->pc = 0x4013E4u;
            goto label_4013e4;
        }
    }
    ctx->pc = 0x4012F8u;
label_4012f8:
    // 0x4012f8: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x4012f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4012fc: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x4012fcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x401300: 0x1840001e  blez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x401300u;
    {
        const bool branch_taken_0x401300 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x401304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x401300u;
        // 0x401304: 0x26560110  addiu       $s6, $s2, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 18), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x401300) {
            ctx->pc = 0x40137Cu;
            goto label_40137c;
        }
    }
    ctx->pc = 0x401308u;
    // 0x401308: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x401308u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40130c: 0x0  nop
    ctx->pc = 0x40130cu;
    // NOP
label_401310:
    // 0x401310: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x401310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x401314: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x401314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x401318: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x401318u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x40131c: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x40131Cu;
    {
        const bool branch_taken_0x40131c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x401320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40131Cu;
        // 0x401320: 0x8e51015c  lw          $s1, 0x15C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 348)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40131c) {
            ctx->pc = 0x401348u;
            goto label_401348;
        }
    }
    ctx->pc = 0x401324u;
    // 0x401324: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x401324u;
    {
        const bool branch_taken_0x401324 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x401328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x401324u;
        // 0x401328: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x401324) {
            ctx->pc = 0x401348u;
            goto label_401348;
        }
    }
    ctx->pc = 0x40132Cu;
    // 0x40132c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x40132cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x401330: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x401330u;
    SET_GPR_U32(ctx, 31, 0x401338u);
    ctx->pc = 0x401334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401330u;
    // 0x401334: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x401330u, 0x401338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401338u;
label_401338:
    // 0x401338: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x401338u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40133c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x40133cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x401340: 0xc0ff4b8  jal         func_3FD2E0
    ctx->pc = 0x401340u;
    SET_GPR_U32(ctx, 31, 0x401348u);
    ctx->pc = 0x401344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401340u;
    // 0x401344: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FD2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FD2E0u, 0x401340u, 0x401348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401348u;
label_401348:
    // 0x401348: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x401348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x40134c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x40134cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x401350: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x401350u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x401354: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x401354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x401358: 0xc0f8b02  jal         func_3E2C08
    ctx->pc = 0x401358u;
    SET_GPR_U32(ctx, 31, 0x401360u);
    ctx->pc = 0x40135Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401358u;
    // 0x40135c: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2C08u, 0x401358u, 0x401360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401360u;
label_401360:
    // 0x401360: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x401360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x401364: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x401364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x401368: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x401368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x40136c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x40136cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x401370: 0x2a3182a  slt         $v1, $s5, $v1
    ctx->pc = 0x401370u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x401374: 0x1460ffe6  bnez        $v1, . + 4 + (-0x1A << 2)
    ctx->pc = 0x401374u;
    {
        const bool branch_taken_0x401374 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x401378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x401374u;
        // 0x401378: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x401374) {
            ctx->pc = 0x401310u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_401310;
        }
    }
    ctx->pc = 0x40137Cu;
label_40137c:
    // 0x40137c: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x40137cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x401380: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x401380u;
    {
        const bool branch_taken_0x401380 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x401380) {
            ctx->pc = 0x401384u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x401380u;
            // 0x401384: 0x8e430124  lw          $v1, 0x124($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 292)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x401398u;
            goto label_401398;
        }
    }
    ctx->pc = 0x401388u;
    // 0x401388: 0x8e650010  lw          $a1, 0x10($s3)
    ctx->pc = 0x401388u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x40138c: 0xc0f8b02  jal         func_3E2C08
    ctx->pc = 0x40138Cu;
    SET_GPR_U32(ctx, 31, 0x401394u);
    ctx->pc = 0x401390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40138Cu;
    // 0x401390: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2C08u, 0x40138Cu, 0x401394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401394u;
label_401394:
    // 0x401394: 0x8e430124  lw          $v1, 0x124($s2)
    ctx->pc = 0x401394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 292)));
label_401398:
    // 0x401398: 0x8e46015c  lw          $a2, 0x15C($s2)
    ctx->pc = 0x401398u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 348)));
    // 0x40139c: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x40139cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x4013a0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x4013A0u;
    {
        const bool branch_taken_0x4013a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4013A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4013A0u;
        // 0x4013a4: 0xae600010  sw          $zero, 0x10($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4013a0) {
            ctx->pc = 0x4013D8u;
            goto label_4013d8;
        }
    }
    ctx->pc = 0x4013A8u;
    // 0x4013a8: 0x8e510158  lw          $s1, 0x158($s2)
    ctx->pc = 0x4013a8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
    // 0x4013ac: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x4013ACu;
    {
        const bool branch_taken_0x4013ac = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4013B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4013ACu;
        // 0x4013b0: 0xc38023  subu        $s0, $a2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4013ac) {
            ctx->pc = 0x4013D8u;
            goto label_4013d8;
        }
    }
    ctx->pc = 0x4013B4u;
    // 0x4013b4: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4013B4u;
    {
        const bool branch_taken_0x4013b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4013B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4013B4u;
        // 0x4013b8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4013b4) {
            ctx->pc = 0x4013D8u;
            goto label_4013d8;
        }
    }
    ctx->pc = 0x4013BCu;
    // 0x4013bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4013bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4013c0: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x4013C0u;
    SET_GPR_U32(ctx, 31, 0x4013C8u);
    ctx->pc = 0x4013C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4013C0u;
    // 0x4013c4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x4013C0u, 0x4013C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4013C8u;
label_4013c8:
    // 0x4013c8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4013c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4013cc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4013ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4013d0: 0xc0ff4b8  jal         func_3FD2E0
    ctx->pc = 0x4013D0u;
    SET_GPR_U32(ctx, 31, 0x4013D8u);
    ctx->pc = 0x4013D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4013D0u;
    // 0x4013d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FD2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FD2E0u, 0x4013D0u, 0x4013D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4013D8u;
label_4013d8:
    // 0x4013d8: 0xc0f6564  jal         func_3D9590
    ctx->pc = 0x4013D8u;
    SET_GPR_U32(ctx, 31, 0x4013E0u);
    ctx->pc = 0x4013DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4013D8u;
    // 0x4013dc: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D9590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D9590u, 0x4013D8u, 0x4013E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4013E0u;
label_4013e0:
    // 0x4013e0: 0xde4201f0  ld          $v0, 0x1F0($s2)
    ctx->pc = 0x4013e0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 496)));
label_4013e4:
    // 0x4013e4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4013e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4013e8: 0x924601f3  lbu         $a2, 0x1F3($s2)
    ctx->pc = 0x4013e8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 499)));
    // 0x4013ec: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x4013ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x4013f0: 0x21c3a  dsrl        $v1, $v0, 16
    ctx->pc = 0x4013f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) >> 16);
    // 0x4013f4: 0x23a3a  dsrl        $a3, $v0, 8
    ctx->pc = 0x4013f4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) >> 8);
    // 0x4013f8: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x4013f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x4013fc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x4013fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x401400: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x401400u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x401404: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x401404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x401408: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x401408u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x40140c: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x40140cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x401410: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x401410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x401414: 0xa3a60030  sb          $a2, 0x30($sp)
    ctx->pc = 0x401414u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 6));
    // 0x401418: 0xa3a30031  sb          $v1, 0x31($sp)
    ctx->pc = 0x401418u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 49), (uint8_t)GPR_U32(ctx, 3));
    // 0x40141c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x40141cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x401420: 0xa3a70032  sb          $a3, 0x32($sp)
    ctx->pc = 0x401420u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 50), (uint8_t)GPR_U32(ctx, 7));
    // 0x401424: 0xc0ff4b8  jal         func_3FD2E0
    ctx->pc = 0x401424u;
    SET_GPR_U32(ctx, 31, 0x40142Cu);
    ctx->pc = 0x401428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401424u;
    // 0x401428: 0xa3a20033  sb          $v0, 0x33($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 51), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FD2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FD2E0u, 0x401424u, 0x40142Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40142Cu;
label_40142c:
    // 0x40142c: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x40142cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x401430: 0xc0f8b02  jal         func_3E2C08
    ctx->pc = 0x401430u;
    SET_GPR_U32(ctx, 31, 0x401438u);
    ctx->pc = 0x401434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x401430u;
    // 0x401434: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2C08u, 0x401430u, 0x401438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x401438u;
label_401438:
    // 0x401438: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x401438u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_40143c:
    // 0x40143c: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x40143cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x401440: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x401440u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x401444: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x401444u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x401448: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x401448u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x40144c: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x40144cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x401450: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x401450u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x401454: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x401454u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x401458: 0x3e00008  jr          $ra
    ctx->pc = 0x401458u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40145Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x401458u;
        // 0x40145c: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x401458u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x401460u;
}
