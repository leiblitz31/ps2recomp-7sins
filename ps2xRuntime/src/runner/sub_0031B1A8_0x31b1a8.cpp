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

// Function: sub_0031B1A8
// Address: 0x31b1a8 - 0x31b430
void sub_0031B1A8_0x31b1a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031B1A8_0x31b1a8");
#endif

    switch (ctx->pc) {
        case 0x31b220u: goto label_31b220;
        case 0x31b22cu: goto label_31b22c;
        case 0x31b240u: goto label_31b240;
        case 0x31b268u: goto label_31b268;
        case 0x31b284u: goto label_31b284;
        case 0x31b298u: goto label_31b298;
        case 0x31b2a4u: goto label_31b2a4;
        case 0x31b2b8u: goto label_31b2b8;
        case 0x31b310u: goto label_31b310;
        case 0x31b338u: goto label_31b338;
        case 0x31b368u: goto label_31b368;
        case 0x31b374u: goto label_31b374;
        case 0x31b388u: goto label_31b388;
        case 0x31b3e0u: goto label_31b3e0;
        case 0x31b404u: goto label_31b404;
        default: break;
    }

    ctx->pc = 0x31b1a8u;

    // 0x31b1a8: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x31b1a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
    // 0x31b1ac: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x31b1acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x31b1b0: 0x7fb10160  sq          $s1, 0x160($sp)
    ctx->pc = 0x31b1b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 17));
    // 0x31b1b4: 0x7fb20150  sq          $s2, 0x150($sp)
    ctx->pc = 0x31b1b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 18));
    // 0x31b1b8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x31b1b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b1bc: 0x7fb40130  sq          $s4, 0x130($sp)
    ctx->pc = 0x31b1bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 20));
    // 0x31b1c0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x31b1c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b1c4: 0x7fb50120  sq          $s5, 0x120($sp)
    ctx->pc = 0x31b1c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 21));
    // 0x31b1c8: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x31b1c8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b1cc: 0x7fb00170  sq          $s0, 0x170($sp)
    ctx->pc = 0x31b1ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 16));
    // 0x31b1d0: 0x7fb30140  sq          $s3, 0x140($sp)
    ctx->pc = 0x31b1d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 19));
    // 0x31b1d4: 0xffbf0110  sd          $ra, 0x110($sp)
    ctx->pc = 0x31b1d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 31));
    // 0x31b1d8: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x31b1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x31b1dc: 0x1062002b  beq         $v1, $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x31B1DCu;
    {
        const bool branch_taken_0x31b1dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x31B1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B1DCu;
        // 0x31b1e0: 0xe0a82d  daddu       $s5, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b1dc) {
            ctx->pc = 0x31B28Cu;
            goto label_31b28c;
        }
    }
    ctx->pc = 0x31B1E4u;
    // 0x31b1e4: 0x2c620004  sltiu       $v0, $v1, 0x4
    ctx->pc = 0x31b1e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x31b1e8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31B1E8u;
    {
        const bool branch_taken_0x31b1e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B1E8u;
        // 0x31b1ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b1e8) {
            ctx->pc = 0x31B200u;
            goto label_31b200;
        }
    }
    ctx->pc = 0x31B1F0u;
    // 0x31b1f0: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x31B1F0u;
    {
        const bool branch_taken_0x31b1f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x31B1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B1F0u;
        // 0x31b1f4: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b1f0) {
            ctx->pc = 0x31B214u;
            goto label_31b214;
        }
    }
    ctx->pc = 0x31B1F8u;
    // 0x31b1f8: 0x10000084  b           . + 4 + (0x84 << 2)
    ctx->pc = 0x31B1F8u;
    {
        const bool branch_taken_0x31b1f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B1F8u;
        // 0x31b1fc: 0x7bb00170  lq          $s0, 0x170($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 368)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b1f8) {
            ctx->pc = 0x31B40Cu;
            goto label_31b40c;
        }
    }
    ctx->pc = 0x31B200u;
label_31b200:
    // 0x31b200: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x31b200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x31b204: 0x1062004a  beq         $v1, $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x31B204u;
    {
        const bool branch_taken_0x31b204 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x31B208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B204u;
        // 0x31b208: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b204) {
            ctx->pc = 0x31B330u;
            goto label_31b330;
        }
    }
    ctx->pc = 0x31B20Cu;
    // 0x31b20c: 0x1000007f  b           . + 4 + (0x7F << 2)
    ctx->pc = 0x31B20Cu;
    {
        const bool branch_taken_0x31b20c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B20Cu;
        // 0x31b210: 0x7bb00170  lq          $s0, 0x170($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 368)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b20c) {
            ctx->pc = 0x31B40Cu;
            goto label_31b40c;
        }
    }
    ctx->pc = 0x31B214u;
label_31b214:
    // 0x31b214: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x31b214u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x31b218: 0xc106784  jal         func_419E10
    ctx->pc = 0x31B218u;
    SET_GPR_U32(ctx, 31, 0x31B220u);
    ctx->pc = 0x31B21Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B218u;
    // 0x31b21c: 0x8e500018  lw          $s0, 0x18($s2) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E10u, 0x31B218u, 0x31B220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B220u;
label_31b220:
    // 0x31b220: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31b220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b224: 0xc103c28  jal         func_40F0A0
    ctx->pc = 0x31B224u;
    SET_GPR_U32(ctx, 31, 0x31B22Cu);
    ctx->pc = 0x31B228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B224u;
    // 0x31b228: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40F0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F0A0u, 0x31B224u, 0x31B22Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B22Cu;
label_31b22c:
    // 0x31b22c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x31b22cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x31b230: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x31b230u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b234: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x31b234u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x31b238: 0xc104d74  jal         func_4135D0
    ctx->pc = 0x31B238u;
    SET_GPR_U32(ctx, 31, 0x31B240u);
    ctx->pc = 0x31B23Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B238u;
    // 0x31b23c: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4135D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4135D0u, 0x31B238u, 0x31B240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B240u;
label_31b240:
    // 0x31b240: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x31b240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x31b244: 0x28630002  slti        $v1, $v1, 0x2
    ctx->pc = 0x31b244u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x31b248: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x31B248u;
    {
        const bool branch_taken_0x31b248 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31B24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B248u;
        // 0x31b24c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b248) {
            ctx->pc = 0x31B270u;
            goto label_31b270;
        }
    }
    ctx->pc = 0x31B250u;
    // 0x31b250: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x31b250u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b254: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x31b254u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b258: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x31b258u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b25c: 0x2645004c  addiu       $a1, $s2, 0x4C
    ctx->pc = 0x31b25cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 76));
    // 0x31b260: 0xc0c6938  jal         func_31A4E0
    ctx->pc = 0x31B260u;
    SET_GPR_U32(ctx, 31, 0x31B268u);
    ctx->pc = 0x31B264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B260u;
    // 0x31b264: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A4E0u, 0x31B260u, 0x31B268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B268u;
label_31b268:
    // 0x31b268: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x31B268u;
    {
        const bool branch_taken_0x31b268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B268u;
        // 0x31b26c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b268) {
            ctx->pc = 0x31B408u;
            goto label_31b408;
        }
    }
    ctx->pc = 0x31B270u;
label_31b270:
    // 0x31b270: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x31b270u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b274: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x31b274u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b278: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x31b278u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b27c: 0xc0c6260  jal         func_318980
    ctx->pc = 0x31B27Cu;
    SET_GPR_U32(ctx, 31, 0x31B284u);
    ctx->pc = 0x31B280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B27Cu;
    // 0x31b280: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x318980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x318980u, 0x31B27Cu, 0x31B284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B284u;
label_31b284:
    // 0x31b284: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x31B284u;
    {
        const bool branch_taken_0x31b284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B284u;
        // 0x31b288: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b284) {
            ctx->pc = 0x31B408u;
            goto label_31b408;
        }
    }
    ctx->pc = 0x31B28Cu;
label_31b28c:
    // 0x31b28c: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x31b28cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x31b290: 0xc106784  jal         func_419E10
    ctx->pc = 0x31B290u;
    SET_GPR_U32(ctx, 31, 0x31B298u);
    ctx->pc = 0x31B294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B290u;
    // 0x31b294: 0x8e500018  lw          $s0, 0x18($s2) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E10u, 0x31B290u, 0x31B298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B298u;
label_31b298:
    // 0x31b298: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x31b298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x31b29c: 0xc103c28  jal         func_40F0A0
    ctx->pc = 0x31B29Cu;
    SET_GPR_U32(ctx, 31, 0x31B2A4u);
    ctx->pc = 0x31B2A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B29Cu;
    // 0x31b2a0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40F0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F0A0u, 0x31B29Cu, 0x31B2A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B2A4u;
label_31b2a4:
    // 0x31b2a4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x31b2a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x31b2a8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x31b2a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b2ac: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x31b2acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31b2b0: 0xc104d74  jal         func_4135D0
    ctx->pc = 0x31B2B0u;
    SET_GPR_U32(ctx, 31, 0x31B2B8u);
    ctx->pc = 0x31B2B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B2B0u;
    // 0x31b2b4: 0x27a70070  addiu       $a3, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4135D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4135D0u, 0x31B2B0u, 0x31B2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B2B8u;
label_31b2b8:
    // 0x31b2b8: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x31b2b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31b2bc: 0xc7a20094  lwc1        $f2, 0x94($sp)
    ctx->pc = 0x31b2bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x31b2c0: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x31b2c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x31b2c4: 0xc7a10098  lwc1        $f1, 0x98($sp)
    ctx->pc = 0x31b2c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31b2c8: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x31b2c8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x31b2cc: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x31b2ccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x31b2d0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x31b2d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x31b2d4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x31b2d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x31b2d8: 0x46000004  c1          0x4
    ctx->pc = 0x31b2d8u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x31b2dc: 0xc621000c  lwc1        $f1, 0xC($s1)
    ctx->pc = 0x31b2dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31b2e0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x31b2e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x31b2e4: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x31b2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x31b2e8: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x31b2e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x31b2ec: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x31B2ECu;
    {
        const bool branch_taken_0x31b2ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31B2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B2ECu;
        // 0x31b2f0: 0xe7a0006c  swc1        $f0, 0x6C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b2ec) {
            ctx->pc = 0x31B318u;
            goto label_31b318;
        }
    }
    ctx->pc = 0x31B2F4u;
    // 0x31b2f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31b2f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b2f8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x31b2f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b2fc: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x31b2fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b300: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x31b300u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b304: 0x2645004c  addiu       $a1, $s2, 0x4C
    ctx->pc = 0x31b304u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 76));
    // 0x31b308: 0xc0c6acc  jal         func_31AB30
    ctx->pc = 0x31B308u;
    SET_GPR_U32(ctx, 31, 0x31B310u);
    ctx->pc = 0x31B30Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B308u;
    // 0x31b30c: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31AB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31AB30u, 0x31B308u, 0x31B310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B310u;
label_31b310:
    // 0x31b310: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x31B310u;
    {
        const bool branch_taken_0x31b310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B310u;
        // 0x31b314: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b310) {
            ctx->pc = 0x31B408u;
            goto label_31b408;
        }
    }
    ctx->pc = 0x31B318u;
label_31b318:
    // 0x31b318: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31b318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b31c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x31b31cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b320: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x31b320u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b324: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x31b324u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b328: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x31B328u;
    {
        const bool branch_taken_0x31b328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B328u;
        // 0x31b32c: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b328) {
            ctx->pc = 0x31B3FCu;
            goto label_31b3fc;
        }
    }
    ctx->pc = 0x31B330u;
label_31b330:
    // 0x31b330: 0xc0e2048  jal         func_388120
    ctx->pc = 0x31B330u;
    SET_GPR_U32(ctx, 31, 0x31B338u);
    ctx->pc = 0x31B334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B330u;
    // 0x31b334: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x388120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x388120u, 0x31B330u, 0x31B338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B338u;
label_31b338:
    // 0x31b338: 0x8e530018  lw          $s3, 0x18($s2)
    ctx->pc = 0x31b338u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x31b33c: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x31b33cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x31b340: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x31b340u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x31b344: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x31b344u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x31b348: 0x6845000f  ldl         $a1, 0xF($v0)
    ctx->pc = 0x31b348u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x31b34c: 0x6c450008  ldr         $a1, 0x8($v0)
    ctx->pc = 0x31b34cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x31b350: 0xb3a300b7  sdl         $v1, 0xB7($sp)
    ctx->pc = 0x31b350u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 183); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x31b354: 0xb7a300b0  sdr         $v1, 0xB0($sp)
    ctx->pc = 0x31b354u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 176); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x31b358: 0xb3a500bf  sdl         $a1, 0xBF($sp)
    ctx->pc = 0x31b358u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 191); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x31b35c: 0xb7a500b8  sdr         $a1, 0xB8($sp)
    ctx->pc = 0x31b35cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 184); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x31b360: 0xc106784  jal         func_419E10
    ctx->pc = 0x31B360u;
    SET_GPR_U32(ctx, 31, 0x31B368u);
    ctx->pc = 0x31B364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B360u;
    // 0x31b364: 0x27b000b0  addiu       $s0, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E10u, 0x31B360u, 0x31B368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B368u;
label_31b368:
    // 0x31b368: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x31b368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x31b36c: 0xc103c28  jal         func_40F0A0
    ctx->pc = 0x31B36Cu;
    SET_GPR_U32(ctx, 31, 0x31B374u);
    ctx->pc = 0x31B370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B36Cu;
    // 0x31b370: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40F0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F0A0u, 0x31B36Cu, 0x31B374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B374u;
label_31b374:
    // 0x31b374: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x31b374u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b378: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x31b378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x31b37c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x31b37cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31b380: 0xc104d74  jal         func_4135D0
    ctx->pc = 0x31B380u;
    SET_GPR_U32(ctx, 31, 0x31B388u);
    ctx->pc = 0x31B384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B380u;
    // 0x31b384: 0x27a700d0  addiu       $a3, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4135D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4135D0u, 0x31B380u, 0x31B388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B388u;
label_31b388:
    // 0x31b388: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x31b388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31b38c: 0xc7a200f4  lwc1        $f2, 0xF4($sp)
    ctx->pc = 0x31b38cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x31b390: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x31b390u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x31b394: 0xc7a100f8  lwc1        $f1, 0xF8($sp)
    ctx->pc = 0x31b394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31b398: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x31b398u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x31b39c: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x31b39cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x31b3a0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x31b3a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x31b3a4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x31b3a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x31b3a8: 0x46000004  c1          0x4
    ctx->pc = 0x31b3a8u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x31b3ac: 0xc7a100bc  lwc1        $f1, 0xBC($sp)
    ctx->pc = 0x31b3acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31b3b0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x31b3b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x31b3b4: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x31b3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x31b3b8: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x31b3b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x31b3bc: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x31B3BCu;
    {
        const bool branch_taken_0x31b3bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31B3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B3BCu;
        // 0x31b3c0: 0xe7a000cc  swc1        $f0, 0xCC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b3bc) {
            ctx->pc = 0x31B3E8u;
            goto label_31b3e8;
        }
    }
    ctx->pc = 0x31B3C4u;
    // 0x31b3c4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x31b3c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b3c8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x31b3c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b3cc: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x31b3ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b3d0: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x31b3d0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b3d4: 0x2645004c  addiu       $a1, $s2, 0x4C
    ctx->pc = 0x31b3d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 76));
    // 0x31b3d8: 0xc0c6acc  jal         func_31AB30
    ctx->pc = 0x31B3D8u;
    SET_GPR_U32(ctx, 31, 0x31B3E0u);
    ctx->pc = 0x31B3DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B3D8u;
    // 0x31b3dc: 0x27a600c0  addiu       $a2, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31AB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31AB30u, 0x31B3D8u, 0x31B3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B3E0u;
label_31b3e0:
    // 0x31b3e0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x31B3E0u;
    {
        const bool branch_taken_0x31b3e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B3E0u;
        // 0x31b3e4: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b3e0) {
            ctx->pc = 0x31B408u;
            goto label_31b408;
        }
    }
    ctx->pc = 0x31B3E8u;
label_31b3e8:
    // 0x31b3e8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x31b3e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b3ec: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x31b3ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b3f0: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x31b3f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b3f4: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x31b3f4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b3f8: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x31b3f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_31b3fc:
    // 0x31b3fc: 0xc0c66d0  jal         func_319B40
    ctx->pc = 0x31B3FCu;
    SET_GPR_U32(ctx, 31, 0x31B404u);
    ctx->pc = 0x319B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x319B40u, 0x31B3FCu, 0x31B404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B404u;
label_31b404:
    // 0x31b404: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x31b404u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_31b408:
    // 0x31b408: 0x7bb00170  lq          $s0, 0x170($sp)
    ctx->pc = 0x31b408u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_31b40c:
    // 0x31b40c: 0x7bb10160  lq          $s1, 0x160($sp)
    ctx->pc = 0x31b40cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x31b410: 0x7bb20150  lq          $s2, 0x150($sp)
    ctx->pc = 0x31b410u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x31b414: 0x7bb30140  lq          $s3, 0x140($sp)
    ctx->pc = 0x31b414u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x31b418: 0x7bb40130  lq          $s4, 0x130($sp)
    ctx->pc = 0x31b418u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x31b41c: 0x7bb50120  lq          $s5, 0x120($sp)
    ctx->pc = 0x31b41cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x31b420: 0xdfbf0110  ld          $ra, 0x110($sp)
    ctx->pc = 0x31b420u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x31b424: 0x3e00008  jr          $ra
    ctx->pc = 0x31B424u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31B428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B424u;
        // 0x31b428: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31B424u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31B42Cu;
    // 0x31b42c: 0x0  nop
    ctx->pc = 0x31b42cu;
    // NOP
    ctx->pc = 0x31b430u;
}
