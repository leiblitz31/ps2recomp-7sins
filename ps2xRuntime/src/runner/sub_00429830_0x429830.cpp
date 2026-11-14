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

// Function: sub_00429830
// Address: 0x429830 - 0x429a10
void sub_00429830_0x429830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00429830_0x429830");
#endif

    switch (ctx->pc) {
        case 0x429858u: goto label_429858;
        case 0x42988cu: goto label_42988c;
        case 0x429920u: goto label_429920;
        case 0x429948u: goto label_429948;
        case 0x42996cu: goto label_42996c;
        case 0x4299b0u: goto label_4299b0;
        case 0x4299ecu: goto label_4299ec;
        default: break;
    }

    ctx->pc = 0x429830u;

    // 0x429830: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x429830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x429834: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x429834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x429838: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x429838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x42983c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x42983cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x429840: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x429840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x429844: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x429844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x429848: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x429848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x42984c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x42984cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x429850: 0xc109f06  jal         func_427C18
    ctx->pc = 0x429850u;
    SET_GPR_U32(ctx, 31, 0x429858u);
    ctx->pc = 0x427C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x427C18u, 0x429850u, 0x429858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x429858u;
label_429858:
    // 0x429858: 0x8f82be4c  lw          $v0, -0x41B4($gp)
    ctx->pc = 0x429858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950476)));
    // 0x42985c: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x42985Cu;
    {
        const bool branch_taken_0x42985c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x429860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42985Cu;
        // 0x429860: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42985c) {
            ctx->pc = 0x4298FCu;
            goto label_4298fc;
        }
    }
    ctx->pc = 0x429864u;
    // 0x429864: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x429864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x429868: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x429868u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x1000d000
    // 0x42986c: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x42986cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x429870: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x429870u;
    {
        const bool branch_taken_0x429870 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x429874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x429870u;
        // 0x429874: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x429870) {
            ctx->pc = 0x4298A8u;
            goto label_4298a8;
        }
    }
    ctx->pc = 0x429878u;
    // 0x429878: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x429878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x42987c: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x42987cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x429880: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x429880u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x1000e020
    // 0x429884: 0xf  sync
    ctx->pc = 0x429884u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x429888: 0x40f  sync.p
    ctx->pc = 0x429888u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_42988c:
    // 0x42988c: 0x0  nop
    ctx->pc = 0x42988cu;
    // NOP
    // 0x429890: 0x0  nop
    ctx->pc = 0x429890u;
    // NOP
    // 0x429894: 0x0  nop
    ctx->pc = 0x429894u;
    // NOP
    // 0x429898: 0x0  nop
    ctx->pc = 0x429898u;
    // NOP
    // 0x42989c: 0x0  nop
    ctx->pc = 0x42989cu;
    // NOP
    // 0x4298a0: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x4298A0u;
    {
        const bool branch_taken_0x4298a0 = (false);
        if (branch_taken_0x4298a0) {
            ctx->pc = 0x42988Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_42988c;
        }
    }
    ctx->pc = 0x4298A8u;
label_4298a8:
    // 0x4298a8: 0x8f87be48  lw          $a3, -0x41B8($gp)
    ctx->pc = 0x4298a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950472)));
    // 0x4298ac: 0x10e0000b  beqz        $a3, . + 4 + (0xB << 2)
    ctx->pc = 0x4298ACu;
    {
        const bool branch_taken_0x4298ac = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x4298B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4298ACu;
        // 0x4298b0: 0x8f82be50  lw          $v0, -0x41B0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4298ac) {
            ctx->pc = 0x4298DCu;
            goto label_4298dc;
        }
    }
    ctx->pc = 0x4298B4u;
    // 0x4298b4: 0x24061121  addiu       $a2, $zero, 0x1121
    ctx->pc = 0x4298b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4385));
    // 0x4298b8: 0x8f85be44  lw          $a1, -0x41BC($gp)
    ctx->pc = 0x4298b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950468)));
    // 0x4298bc: 0x24030122  addiu       $v1, $zero, 0x122
    ctx->pc = 0x4298bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 290));
    // 0x4298c0: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x4298c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x4298c4: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x4298c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x4298c8: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x4298c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x4298cc: 0xac870004  sw          $a3, 0x4($a0)
    ctx->pc = 0x4298ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 7));
    // 0x4298d0: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x4298d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x4298d4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x4298D4u;
    {
        const bool branch_taken_0x4298d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4298D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4298D4u;
        // 0x4298d8: 0xaf84be50  sw          $a0, -0x41B0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950480), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4298d4) {
            ctx->pc = 0x4298ECu;
            goto label_4298ec;
        }
    }
    ctx->pc = 0x4298DCu;
label_4298dc:
    // 0x4298dc: 0x8f83be4c  lw          $v1, -0x41B4($gp)
    ctx->pc = 0x4298dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950476)));
    // 0x4298e0: 0x8f84be44  lw          $a0, -0x41BC($gp)
    ctx->pc = 0x4298e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950468)));
    // 0x4298e4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x4298e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x4298e8: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x4298e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
label_4298ec:
    // 0x4298ec: 0xaf80be44  sw          $zero, -0x41BC($gp)
    ctx->pc = 0x4298ecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950468), GPR_U32(ctx, 0));
    // 0x4298f0: 0xaf80be48  sw          $zero, -0x41B8($gp)
    ctx->pc = 0x4298f0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950472), GPR_U32(ctx, 0));
    // 0x4298f4: 0xaf80be4c  sw          $zero, -0x41B4($gp)
    ctx->pc = 0x4298f4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950476), GPR_U32(ctx, 0));
    // 0x4298f8: 0xaf80be50  sw          $zero, -0x41B0($gp)
    ctx->pc = 0x4298f8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950480), GPR_U32(ctx, 0));
label_4298fc:
    // 0x4298fc: 0x9784bea8  lhu         $a0, -0x4158($gp)
    ctx->pc = 0x4298fcu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294950568)));
    // 0x429900: 0x2795be58  addiu       $s5, $gp, -0x41A8
    ctx->pc = 0x429900u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 28), 4294950488));
    // 0x429904: 0x9794beaa  lhu         $s4, -0x4156($gp)
    ctx->pc = 0x429904u;
    SET_GPR_ZE32(ctx, 20, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294950570)));
    // 0x429908: 0x10940021  beq         $a0, $s4, . + 4 + (0x21 << 2)
    ctx->pc = 0x429908u;
    {
        const bool branch_taken_0x429908 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 20));
        ctx->pc = 0x42990Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x429908u;
        // 0x42990c: 0x9382be64  lbu         $v0, -0x419C($gp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294950500)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x429908) {
            ctx->pc = 0x429990u;
            goto label_429990;
        }
    }
    ctx->pc = 0x429910u;
    // 0x429910: 0xa780bea8  sh          $zero, -0x4158($gp)
    ctx->pc = 0x429910u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294950568), (uint16_t)GPR_U32(ctx, 0));
    // 0x429914: 0xa780beaa  sh          $zero, -0x4156($gp)
    ctx->pc = 0x429914u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294950570), (uint16_t)GPR_U32(ctx, 0));
    // 0x429918: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x429918u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x42991c: 0x0  nop
    ctx->pc = 0x42991cu;
    // NOP
label_429920:
    // 0x429920: 0x8f82bea4  lw          $v0, -0x415C($gp)
    ctx->pc = 0x429920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950564)));
    // 0x429924: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x429924u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x429928: 0x24930001  addiu       $s3, $a0, 0x1
    ctx->pc = 0x429928u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x42992c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x42992cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x429930: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x429930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x429934: 0x8c900004  lw          $s0, 0x4($a0)
    ctx->pc = 0x429934u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x429938: 0x1a00000e  blez        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x429938u;
    {
        const bool branch_taken_0x429938 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x42993Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x429938u;
        // 0x42993c: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x429938) {
            ctx->pc = 0x429974u;
            goto label_429974;
        }
    }
    ctx->pc = 0x429940u;
    // 0x429940: 0x3411ffff  ori         $s1, $zero, 0xFFFF
    ctx->pc = 0x429940u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x429944: 0x8f82bea4  lw          $v0, -0x415C($gp)
    ctx->pc = 0x429944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950564)));
label_429948:
    // 0x429948: 0x230182a  slt         $v1, $s1, $s0
    ctx->pc = 0x429948u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x42994c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x42994cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x429950: 0x203280a  movz        $a1, $s0, $v1
    ctx->pc = 0x429950u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 16));
    // 0x429954: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x429954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x429958: 0x52b00  sll         $a1, $a1, 12
    ctx->pc = 0x429958u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 12));
    // 0x42995c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x42995cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x429960: 0x34a50042  ori         $a1, $a1, 0x42
    ctx->pc = 0x429960u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)66);
    // 0x429964: 0xc10a0aa  jal         func_4282A8
    ctx->pc = 0x429964u;
    SET_GPR_U32(ctx, 31, 0x42996Cu);
    ctx->pc = 0x429968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x429964u;
    // 0x429968: 0x2118023  subu        $s0, $s0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4282A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4282A8u, 0x429964u, 0x42996Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42996Cu;
label_42996c:
    // 0x42996c: 0x1e00fff6  bgtz        $s0, . + 4 + (-0xA << 2)
    ctx->pc = 0x42996Cu;
    {
        const bool branch_taken_0x42996c = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x429970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42996Cu;
        // 0x429970: 0x8f82bea4  lw          $v0, -0x415C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950564)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42996c) {
            ctx->pc = 0x429948u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_429948;
        }
    }
    ctx->pc = 0x429974u;
label_429974:
    // 0x429974: 0x9782ade6  lhu         $v0, -0x521A($gp)
    ctx->pc = 0x429974u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294946278)));
    // 0x429978: 0x3264ffff  andi        $a0, $s3, 0xFFFF
    ctx->pc = 0x429978u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
    // 0x42997c: 0x821026  xor         $v0, $a0, $v0
    ctx->pc = 0x42997cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 2));
    // 0x429980: 0x2200a  movz        $a0, $zero, $v0
    ctx->pc = 0x429980u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
    // 0x429984: 0x1494ffe6  bne         $a0, $s4, . + 4 + (-0x1A << 2)
    ctx->pc = 0x429984u;
    {
        const bool branch_taken_0x429984 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 20));
        ctx->pc = 0x429988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x429984u;
        // 0x429988: 0x41880  sll         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x429984) {
            ctx->pc = 0x429920u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_429920;
        }
    }
    ctx->pc = 0x42998Cu;
    // 0x42998c: 0x9382be64  lbu         $v0, -0x419C($gp)
    ctx->pc = 0x42998cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294950500)));
label_429990:
    // 0x429990: 0x8f84be7c  lw          $a0, -0x4184($gp)
    ctx->pc = 0x429990u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950524)));
    // 0x429994: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x429994u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x429998: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x429998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x42999c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x42999cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4299a0: 0x10640003  beq         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4299A0u;
    {
        const bool branch_taken_0x4299a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x4299a0) {
            ctx->pc = 0x4299B0u;
            goto label_4299b0;
        }
    }
    ctx->pc = 0x4299A8u;
    // 0x4299a8: 0xc10a024  jal         func_428090
    ctx->pc = 0x4299A8u;
    SET_GPR_U32(ctx, 31, 0x4299B0u);
    ctx->pc = 0x428090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x428090u, 0x4299A8u, 0x4299B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4299B0u;
label_4299b0:
    // 0x4299b0: 0x9382be90  lbu         $v0, -0x4170($gp)
    ctx->pc = 0x4299b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294950544)));
    // 0x4299b4: 0x0  nop
    ctx->pc = 0x4299b4u;
    // NOP
    // 0x4299b8: 0x0  nop
    ctx->pc = 0x4299b8u;
    // NOP
    // 0x4299bc: 0x0  nop
    ctx->pc = 0x4299bcu;
    // NOP
    // 0x4299c0: 0x0  nop
    ctx->pc = 0x4299c0u;
    // NOP
    // 0x4299c4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4299C4u;
    {
        const bool branch_taken_0x4299c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4299c4) {
            ctx->pc = 0x4299B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4299b0;
        }
    }
    ctx->pc = 0x4299CCu;
    // 0x4299cc: 0x9382be2f  lbu         $v0, -0x41D1($gp)
    ctx->pc = 0x4299ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294950447)));
    // 0x4299d0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x4299D0u;
    {
        const bool branch_taken_0x4299d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4299d0) {
            ctx->pc = 0x4299B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4299b0;
        }
    }
    ctx->pc = 0x4299D8u;
    // 0x4299d8: 0x9382be90  lbu         $v0, -0x4170($gp)
    ctx->pc = 0x4299d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294950544)));
    // 0x4299dc: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x4299DCu;
    {
        const bool branch_taken_0x4299dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4299dc) {
            ctx->pc = 0x4299B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4299b0;
        }
    }
    ctx->pc = 0x4299E4u;
    // 0x4299e4: 0xc10a7fc  jal         func_429FF0
    ctx->pc = 0x4299E4u;
    SET_GPR_U32(ctx, 31, 0x4299ECu);
    ctx->pc = 0x429FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x429FF0u, 0x4299E4u, 0x4299ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4299ECu;
label_4299ec:
    // 0x4299ec: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x4299ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4299f0: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x4299f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4299f4: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x4299f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4299f8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4299f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4299fc: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x4299fcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x429a00: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x429a00u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x429a04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x429a04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x429a08: 0x3e00008  jr          $ra
    ctx->pc = 0x429A08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x429A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x429A08u;
        // 0x429a0c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x429A08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x429A10u;
}
