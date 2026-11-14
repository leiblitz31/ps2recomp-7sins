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

// Function: sub_00407678
// Address: 0x407678 - 0x4077b8
void sub_00407678_0x407678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00407678_0x407678");
#endif

    switch (ctx->pc) {
        case 0x4076b8u: goto label_4076b8;
        case 0x4076c0u: goto label_4076c0;
        case 0x4076dcu: goto label_4076dc;
        case 0x4076ecu: goto label_4076ec;
        case 0x407710u: goto label_407710;
        case 0x407720u: goto label_407720;
        case 0x407728u: goto label_407728;
        case 0x407770u: goto label_407770;
        case 0x407798u: goto label_407798;
        default: break;
    }

    ctx->pc = 0x407678u;

    // 0x407678: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x407678u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x40767c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x40767cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x407680: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x407680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x407684: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x407684u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x407688: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x407688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x40768c: 0x24130004  addiu       $s3, $zero, 0x4
    ctx->pc = 0x40768cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x407690: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x407690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x407694: 0x3c140060  lui         $s4, 0x60
    ctx->pc = 0x407694u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)96 << 16));
    // 0x407698: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x407698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x40769c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x40769cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4076a0: 0xae450110  sw          $a1, 0x110($s2)
    ctx->pc = 0x4076a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 272), GPR_U32(ctx, 5));
    // 0x4076a4: 0x8e4201d8  lw          $v0, 0x1D8($s2)
    ctx->pc = 0x4076a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 472)));
    // 0x4076a8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4076a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x4076ac: 0xae420114  sw          $v0, 0x114($s2)
    ctx->pc = 0x4076acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 276), GPR_U32(ctx, 2));
    // 0x4076b0: 0x26440110  addiu       $a0, $s2, 0x110
    ctx->pc = 0x4076b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 272));
    // 0x4076b4: 0x0  nop
    ctx->pc = 0x4076b4u;
    // NOP
label_4076b8:
    // 0x4076b8: 0xc0f5d8e  jal         func_3D7638
    ctx->pc = 0x4076B8u;
    SET_GPR_U32(ctx, 31, 0x4076C0u);
    ctx->pc = 0x4076BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4076B8u;
    // 0x4076bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D7638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D7638u, 0x4076B8u, 0x4076C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4076C0u;
label_4076c0:
    // 0x4076c0: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x4076C0u;
    {
        const bool branch_taken_0x4076c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4076c0) {
            ctx->pc = 0x4076C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4076C0u;
            // 0x4076c4: 0x8e420124  lw          $v0, 0x124($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 292)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4076F0u;
            goto label_4076f0;
        }
    }
    ctx->pc = 0x4076C8u;
    // 0x4076c8: 0x8e450130  lw          $a1, 0x130($s2)
    ctx->pc = 0x4076c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 304)));
    // 0x4076cc: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x4076CCu;
    {
        const bool branch_taken_0x4076cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4076D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4076CCu;
        // 0x4076d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4076cc) {
            ctx->pc = 0x4076E4u;
            goto label_4076e4;
        }
    }
    ctx->pc = 0x4076D4u;
    // 0x4076d4: 0xc0f86f2  jal         func_3E1BC8
    ctx->pc = 0x4076D4u;
    SET_GPR_U32(ctx, 31, 0x4076DCu);
    ctx->pc = 0x4076D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4076D4u;
    // 0x4076d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1BC8u, 0x4076D4u, 0x4076DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4076DCu;
label_4076dc:
    // 0x4076dc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4076DCu;
    {
        const bool branch_taken_0x4076dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4076E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4076DCu;
        // 0x4076e0: 0x8e420124  lw          $v0, 0x124($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 292)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4076dc) {
            ctx->pc = 0x4076F0u;
            goto label_4076f0;
        }
    }
    ctx->pc = 0x4076E4u;
label_4076e4:
    // 0x4076e4: 0xc0f86f2  jal         func_3E1BC8
    ctx->pc = 0x4076E4u;
    SET_GPR_U32(ctx, 31, 0x4076ECu);
    ctx->pc = 0x4076E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4076E4u;
    // 0x4076e8: 0x2685fe10  addiu       $a1, $s4, -0x1F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4294966800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1BC8u, 0x4076E4u, 0x4076ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4076ECu;
label_4076ec:
    // 0x4076ec: 0x8e420124  lw          $v0, 0x124($s2)
    ctx->pc = 0x4076ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 292)));
label_4076f0:
    // 0x4076f0: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x4076F0u;
    {
        const bool branch_taken_0x4076f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4076f0) {
            ctx->pc = 0x4076F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4076F0u;
            // 0x4076f4: 0x8e420114  lw          $v0, 0x114($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x407748u;
            goto label_407748;
        }
    }
    ctx->pc = 0x4076F8u;
    // 0x4076f8: 0x9e46015c  lwu         $a2, 0x15C($s2)
    ctx->pc = 0x4076f8u;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 18), 348)));
    // 0x4076fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4076fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x407700: 0x8e510158  lw          $s1, 0x158($s2)
    ctx->pc = 0x407700u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
    // 0x407704: 0x2785ac40  addiu       $a1, $gp, -0x53C0
    ctx->pc = 0x407704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294945856));
    // 0x407708: 0xc101b98  jal         func_406E60
    ctx->pc = 0x407708u;
    SET_GPR_U32(ctx, 31, 0x407710u);
    ctx->pc = 0x40770Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x407708u;
    // 0x40770c: 0x8e50015c  lw          $s0, 0x15C($s2) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 348)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x406E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x406E60u, 0x407708u, 0x407710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x407710u;
label_407710:
    // 0x407710: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x407710u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x407714: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x407714u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x407718: 0xc101bc2  jal         func_406F08
    ctx->pc = 0x407718u;
    SET_GPR_U32(ctx, 31, 0x407720u);
    ctx->pc = 0x40771Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x407718u;
    // 0x40771c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x406F08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x406F08u, 0x407718u, 0x407720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x407720u;
label_407720:
    // 0x407720: 0xc101bda  jal         func_406F68
    ctx->pc = 0x407720u;
    SET_GPR_U32(ctx, 31, 0x407728u);
    ctx->pc = 0x407724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x407720u;
    // 0x407724: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x406F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x406F68u, 0x407720u, 0x407728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x407728u;
label_407728:
    // 0x407728: 0xde4200f8  ld          $v0, 0xF8($s2)
    ctx->pc = 0x407728u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 248)));
    // 0x40772c: 0x8e430158  lw          $v1, 0x158($s2)
    ctx->pc = 0x40772cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
    // 0x407730: 0x8e44015c  lw          $a0, 0x15C($s2)
    ctx->pc = 0x407730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 348)));
    // 0x407734: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x407734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x407738: 0xfe4200f8  sd          $v0, 0xF8($s2)
    ctx->pc = 0x407738u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 248), GPR_U64(ctx, 2));
    // 0x40773c: 0xae430120  sw          $v1, 0x120($s2)
    ctx->pc = 0x40773cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 288), GPR_U32(ctx, 3));
    // 0x407740: 0xae440124  sw          $a0, 0x124($s2)
    ctx->pc = 0x407740u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 292), GPR_U32(ctx, 4));
    // 0x407744: 0x8e420114  lw          $v0, 0x114($s2)
    ctx->pc = 0x407744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 276)));
label_407748:
    // 0x407748: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x407748u;
    {
        const bool branch_taken_0x407748 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x40774Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407748u;
        // 0x40774c: 0x26440110  addiu       $a0, $s2, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x407748) {
            ctx->pc = 0x4076B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4076b8;
        }
    }
    ctx->pc = 0x407750u;
    // 0x407750: 0x8e4301b8  lw          $v1, 0x1B8($s2)
    ctx->pc = 0x407750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 440)));
    // 0x407754: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x407754u;
    {
        const bool branch_taken_0x407754 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x407754) {
            ctx->pc = 0x407768u;
            goto label_407768;
        }
    }
    ctx->pc = 0x40775Cu;
    // 0x40775c: 0x8e4201bc  lw          $v0, 0x1BC($s2)
    ctx->pc = 0x40775cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 444)));
    // 0x407760: 0xae4301bc  sw          $v1, 0x1BC($s2)
    ctx->pc = 0x407760u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 444), GPR_U32(ctx, 3));
    // 0x407764: 0xae4201b8  sw          $v0, 0x1B8($s2)
    ctx->pc = 0x407764u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 440), GPR_U32(ctx, 2));
label_407768:
    // 0x407768: 0xc100dea  jal         func_4037A8
    ctx->pc = 0x407768u;
    SET_GPR_U32(ctx, 31, 0x407770u);
    ctx->pc = 0x40776Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x407768u;
    // 0x40776c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4037A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4037A8u, 0x407768u, 0x407770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x407770u;
label_407770:
    // 0x407770: 0xde420240  ld          $v0, 0x240($s2)
    ctx->pc = 0x407770u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 576)));
    // 0x407774: 0xde430238  ld          $v1, 0x238($s2)
    ctx->pc = 0x407774u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 568)));
    // 0x407778: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x407778u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x40777c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x40777Cu;
    {
        const bool branch_taken_0x40777c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x407780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40777Cu;
        // 0x407780: 0xfe420240  sd          $v0, 0x240($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 576), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40777c) {
            ctx->pc = 0x407798u;
            goto label_407798;
        }
    }
    ctx->pc = 0x407784u;
    // 0x407784: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x407784u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x407788: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x407788u;
    {
        const bool branch_taken_0x407788 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x40778Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407788u;
        // 0x40778c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x407788) {
            ctx->pc = 0x40779Cu;
            goto label_40779c;
        }
    }
    ctx->pc = 0x407790u;
    // 0x407790: 0xc0ff9b0  jal         func_3FE6C0
    ctx->pc = 0x407790u;
    SET_GPR_U32(ctx, 31, 0x407798u);
    ctx->pc = 0x407794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x407790u;
    // 0x407794: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FE6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FE6C0u, 0x407790u, 0x407798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x407798u;
label_407798:
    // 0x407798: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x407798u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_40779c:
    // 0x40779c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x40779cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4077a0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4077a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4077a4: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x4077a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4077a8: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x4077a8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4077ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4077acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4077b0: 0x3e00008  jr          $ra
    ctx->pc = 0x4077B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4077B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4077B0u;
        // 0x4077b4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4077B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4077B8u;
}
