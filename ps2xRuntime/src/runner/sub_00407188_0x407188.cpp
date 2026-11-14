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

// Function: sub_00407188
// Address: 0x407188 - 0x4072c8
void sub_00407188_0x407188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00407188_0x407188");
#endif

    switch (ctx->pc) {
        case 0x4071acu: goto label_4071ac;
        case 0x4071bcu: goto label_4071bc;
        case 0x4071c4u: goto label_4071c4;
        case 0x407218u: goto label_407218;
        case 0x407228u: goto label_407228;
        case 0x407230u: goto label_407230;
        case 0x4072a0u: goto label_4072a0;
        case 0x4072b0u: goto label_4072b0;
        case 0x4072b8u: goto label_4072b8;
        default: break;
    }

    ctx->pc = 0x407188u;

    // 0x407188: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x407188u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x40718c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x40718cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x407190: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x407190u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x407194: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x407194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x407198: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x407198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40719c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x40719cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x4071a0: 0xdc2504c0  ld          $a1, 0x4C0($at)
    ctx->pc = 0x4071a0u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x6004C0u));
    // 0x4071a4: 0xc0bed9c  jal         func_2FB670
    ctx->pc = 0x4071A4u;
    SET_GPR_U32(ctx, 31, 0x4071ACu);
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x4071A4u, 0x4071ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4071ACu;
label_4071ac:
    // 0x4071ac: 0x3405ff80  ori         $a1, $zero, 0xFF80
    ctx->pc = 0x4071acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x4071b0: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x4071b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x4071b4: 0xc0bed6c  jal         func_2FB5B0
    ctx->pc = 0x4071B4u;
    SET_GPR_U32(ctx, 31, 0x4071BCu);
    ctx->pc = 0x4071B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4071B4u;
    // 0x4071b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB5B0u, 0x4071B4u, 0x4071BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4071BCu;
label_4071bc:
    // 0x4071bc: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x4071BCu;
    SET_GPR_U32(ctx, 31, 0x4071C4u);
    ctx->pc = 0x4071C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4071BCu;
    // 0x4071c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x4071BCu, 0x4071C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4071C4u;
label_4071c4:
    // 0x4071c4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4071c4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x4071c8: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x4071c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x4071cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4071ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4071d0: 0x2785ac68  addiu       $a1, $gp, -0x5398
    ctx->pc = 0x4071d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294945896));
    // 0x4071d4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x4071d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4071d8: 0x21e3a  dsrl        $v1, $v0, 24
    ctx->pc = 0x4071d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) >> 24);
    // 0x4071dc: 0x23c3a  dsrl        $a3, $v0, 16
    ctx->pc = 0x4071dcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) >> 16);
    // 0x4071e0: 0x2423a  dsrl        $t0, $v0, 8
    ctx->pc = 0x4071e0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) >> 8);
    // 0x4071e4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x4071e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x4071e8: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x4071e8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x4071ec: 0x310800ff  andi        $t0, $t0, 0xFF
    ctx->pc = 0x4071ecu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x4071f0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x4071f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x4071f4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x4071f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x4071f8: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x4071f8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x4071fc: 0x310800ff  andi        $t0, $t0, 0xFF
    ctx->pc = 0x4071fcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x407200: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x407200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x407204: 0xa3a30000  sb          $v1, 0x0($sp)
    ctx->pc = 0x407204u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x407208: 0xa3a70001  sb          $a3, 0x1($sp)
    ctx->pc = 0x407208u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 7));
    // 0x40720c: 0xa3a80002  sb          $t0, 0x2($sp)
    ctx->pc = 0x40720cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 8));
    // 0x407210: 0xc101b98  jal         func_406E60
    ctx->pc = 0x407210u;
    SET_GPR_U32(ctx, 31, 0x407218u);
    ctx->pc = 0x407214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x407210u;
    // 0x407214: 0xa3a20003  sb          $v0, 0x3($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x406E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x406E60u, 0x407210u, 0x407218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x407218u;
label_407218:
    // 0x407218: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x407218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40721c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x40721cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x407220: 0xc101bc2  jal         func_406F08
    ctx->pc = 0x407220u;
    SET_GPR_U32(ctx, 31, 0x407228u);
    ctx->pc = 0x407224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x407220u;
    // 0x407224: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x406F08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x406F08u, 0x407220u, 0x407228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x407228u;
label_407228:
    // 0x407228: 0xc101bda  jal         func_406F68
    ctx->pc = 0x407228u;
    SET_GPR_U32(ctx, 31, 0x407230u);
    ctx->pc = 0x40722Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x407228u;
    // 0x40722c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x406F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x406F68u, 0x407228u, 0x407230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x407230u;
label_407230:
    // 0x407230: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x407230u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x407234: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x407234u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x407238: 0x3e00008  jr          $ra
    ctx->pc = 0x407238u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40723Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407238u;
        // 0x40723c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x407238u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x407240u;
    // 0x407240: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x407240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x407244: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x407244u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x407248: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x407248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x40724c: 0x22a3a  dsrl        $a1, $v0, 8
    ctx->pc = 0x40724cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) >> 8);
    // 0x407250: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x407250u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x407254: 0x21e3a  dsrl        $v1, $v0, 24
    ctx->pc = 0x407254u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) >> 24);
    // 0x407258: 0x2243a  dsrl        $a0, $v0, 16
    ctx->pc = 0x407258u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) >> 16);
    // 0x40725c: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x40725cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x407260: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x407260u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x407264: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x407264u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x407268: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x407268u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x40726c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x40726cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x407270: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x407270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x407274: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x407274u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x407278: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x407278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x40727c: 0xa3a40001  sb          $a0, 0x1($sp)
    ctx->pc = 0x40727cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x407280: 0xa3a50002  sb          $a1, 0x2($sp)
    ctx->pc = 0x407280u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 5));
    // 0x407284: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x407284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x407288: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x407288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x40728c: 0x2785ac68  addiu       $a1, $gp, -0x5398
    ctx->pc = 0x40728cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294945896));
    // 0x407290: 0xa3a30000  sb          $v1, 0x0($sp)
    ctx->pc = 0x407290u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x407294: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x407294u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x407298: 0xc101b98  jal         func_406E60
    ctx->pc = 0x407298u;
    SET_GPR_U32(ctx, 31, 0x4072A0u);
    ctx->pc = 0x40729Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x407298u;
    // 0x40729c: 0xa3a20003  sb          $v0, 0x3($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x406E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x406E60u, 0x407298u, 0x4072A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4072A0u;
label_4072a0:
    // 0x4072a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4072a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4072a4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x4072a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4072a8: 0xc101bc2  jal         func_406F08
    ctx->pc = 0x4072A8u;
    SET_GPR_U32(ctx, 31, 0x4072B0u);
    ctx->pc = 0x4072ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4072A8u;
    // 0x4072ac: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x406F08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x406F08u, 0x4072A8u, 0x4072B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4072B0u;
label_4072b0:
    // 0x4072b0: 0xc101bda  jal         func_406F68
    ctx->pc = 0x4072B0u;
    SET_GPR_U32(ctx, 31, 0x4072B8u);
    ctx->pc = 0x4072B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4072B0u;
    // 0x4072b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x406F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x406F68u, 0x4072B0u, 0x4072B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4072B8u;
label_4072b8:
    // 0x4072b8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x4072b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4072bc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4072bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4072c0: 0x3e00008  jr          $ra
    ctx->pc = 0x4072C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4072C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4072C0u;
        // 0x4072c4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4072C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4072C8u;
}
