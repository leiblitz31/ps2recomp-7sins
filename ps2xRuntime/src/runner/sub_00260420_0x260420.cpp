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

// Function: sub_00260420
// Address: 0x260420 - 0x260f90
void sub_00260420_0x260420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00260420_0x260420");
#endif

    switch (ctx->pc) {
        case 0x260454u: goto label_260454;
        case 0x26046cu: goto label_26046c;
        case 0x26048cu: goto label_26048c;
        case 0x2604a4u: goto label_2604a4;
        case 0x2604c4u: goto label_2604c4;
        case 0x2604dcu: goto label_2604dc;
        case 0x2604fcu: goto label_2604fc;
        case 0x260514u: goto label_260514;
        case 0x260534u: goto label_260534;
        case 0x26054cu: goto label_26054c;
        case 0x260570u: goto label_260570;
        case 0x260588u: goto label_260588;
        case 0x2605b0u: goto label_2605b0;
        case 0x2605ccu: goto label_2605cc;
        case 0x2605ecu: goto label_2605ec;
        case 0x260610u: goto label_260610;
        case 0x260628u: goto label_260628;
        case 0x26064cu: goto label_26064c;
        case 0x260664u: goto label_260664;
        case 0x260688u: goto label_260688;
        case 0x2606a0u: goto label_2606a0;
        case 0x2606c4u: goto label_2606c4;
        case 0x2606dcu: goto label_2606dc;
        case 0x260700u: goto label_260700;
        case 0x260718u: goto label_260718;
        case 0x260738u: goto label_260738;
        case 0x260758u: goto label_260758;
        case 0x26077cu: goto label_26077c;
        case 0x260794u: goto label_260794;
        case 0x260a04u: goto label_260a04;
        case 0x260a1cu: goto label_260a1c;
        case 0x260a3cu: goto label_260a3c;
        case 0x260a54u: goto label_260a54;
        case 0x260a74u: goto label_260a74;
        case 0x260a8cu: goto label_260a8c;
        case 0x260aacu: goto label_260aac;
        case 0x260ac4u: goto label_260ac4;
        case 0x260ae4u: goto label_260ae4;
        case 0x260afcu: goto label_260afc;
        case 0x260b1cu: goto label_260b1c;
        case 0x260b34u: goto label_260b34;
        case 0x260b54u: goto label_260b54;
        case 0x260b6cu: goto label_260b6c;
        case 0x260b8cu: goto label_260b8c;
        case 0x260ba4u: goto label_260ba4;
        case 0x260bc4u: goto label_260bc4;
        case 0x260bdcu: goto label_260bdc;
        case 0x260bfcu: goto label_260bfc;
        case 0x260c14u: goto label_260c14;
        case 0x260c34u: goto label_260c34;
        case 0x260c4cu: goto label_260c4c;
        case 0x260c6cu: goto label_260c6c;
        case 0x260c84u: goto label_260c84;
        case 0x260ca4u: goto label_260ca4;
        case 0x260cbcu: goto label_260cbc;
        case 0x260cdcu: goto label_260cdc;
        case 0x260cf4u: goto label_260cf4;
        case 0x260d14u: goto label_260d14;
        case 0x260d30u: goto label_260d30;
        case 0x260d54u: goto label_260d54;
        case 0x260d74u: goto label_260d74;
        case 0x260d98u: goto label_260d98;
        case 0x260db8u: goto label_260db8;
        case 0x260ddcu: goto label_260ddc;
        case 0x260dfcu: goto label_260dfc;
        case 0x260e1cu: goto label_260e1c;
        case 0x260e34u: goto label_260e34;
        case 0x260e54u: goto label_260e54;
        case 0x260e6cu: goto label_260e6c;
        case 0x260e90u: goto label_260e90;
        case 0x260eacu: goto label_260eac;
        case 0x260ed0u: goto label_260ed0;
        case 0x260ef0u: goto label_260ef0;
        case 0x260f10u: goto label_260f10;
        case 0x260f2cu: goto label_260f2c;
        case 0x260f44u: goto label_260f44;
        case 0x260f5cu: goto label_260f5c;
        default: break;
    }

    ctx->pc = 0x260420u;

    // 0x260420: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x260420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x260424: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x260424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x260428: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x260428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x26042c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x26042cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x260430: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x260430u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x260434: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x260434u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x260438: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x260438u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x26043c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x26043cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x260440: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x260440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x260444: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x260444u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x260448: 0x24a5c420  addiu       $a1, $a1, -0x3BE0
    ctx->pc = 0x260448u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951968));
    // 0x26044c: 0xc049b6c  jal         func_126DB0
    ctx->pc = 0x26044Cu;
    SET_GPR_U32(ctx, 31, 0x260454u);
    ctx->pc = 0x126DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126DB0u, 0x26044Cu, 0x260454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260454u;
label_260454:
    // 0x260454: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x260454u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x260458: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x260458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26045c: 0x24440054  addiu       $a0, $v0, 0x54
    ctx->pc = 0x26045cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 84));
    // 0x260460: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x260460u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x260464: 0xc040a90  jal         func_102A40
    ctx->pc = 0x260464u;
    SET_GPR_U32(ctx, 31, 0x26046Cu);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x260464u, 0x26046Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26046Cu;
label_26046c:
    // 0x26046c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x26046cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x260470: 0xe4540008  swc1        $f20, 0x8($v0)
    ctx->pc = 0x260470u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x260474: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x260474u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x260478: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x260478u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x26047c: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x26047cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x260480: 0x24a5c430  addiu       $a1, $a1, -0x3BD0
    ctx->pc = 0x260480u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951984));
    // 0x260484: 0xc049b6c  jal         func_126DB0
    ctx->pc = 0x260484u;
    SET_GPR_U32(ctx, 31, 0x26048Cu);
    ctx->pc = 0x126DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126DB0u, 0x260484u, 0x26048Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26048Cu;
label_26048c:
    // 0x26048c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x26048cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x260490: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x260490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x260494: 0x24440054  addiu       $a0, $v0, 0x54
    ctx->pc = 0x260494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 84));
    // 0x260498: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x260498u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26049c: 0xc040a90  jal         func_102A40
    ctx->pc = 0x26049Cu;
    SET_GPR_U32(ctx, 31, 0x2604A4u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x26049Cu, 0x2604A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2604A4u;
label_2604a4:
    // 0x2604a4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2604a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2604a8: 0xe4540008  swc1        $f20, 0x8($v0)
    ctx->pc = 0x2604a8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2604ac: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2604acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2604b0: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x2604b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2604b4: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2604b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2604b8: 0x24a5c440  addiu       $a1, $a1, -0x3BC0
    ctx->pc = 0x2604b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952000));
    // 0x2604bc: 0xc049b6c  jal         func_126DB0
    ctx->pc = 0x2604BCu;
    SET_GPR_U32(ctx, 31, 0x2604C4u);
    ctx->pc = 0x126DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126DB0u, 0x2604BCu, 0x2604C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2604C4u;
label_2604c4:
    // 0x2604c4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2604c4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2604c8: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x2604c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2604cc: 0x24a40054  addiu       $a0, $a1, 0x54
    ctx->pc = 0x2604ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 84));
    // 0x2604d0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2604d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2604d4: 0xc040a90  jal         func_102A40
    ctx->pc = 0x2604D4u;
    SET_GPR_U32(ctx, 31, 0x2604DCu);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x2604D4u, 0x2604DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2604DCu;
label_2604dc:
    // 0x2604dc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2604dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2604e0: 0xe4540008  swc1        $f20, 0x8($v0)
    ctx->pc = 0x2604e0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2604e4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2604e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2604e8: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x2604e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2604ec: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2604ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2604f0: 0x24a5c450  addiu       $a1, $a1, -0x3BB0
    ctx->pc = 0x2604f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952016));
    // 0x2604f4: 0xc049b6c  jal         func_126DB0
    ctx->pc = 0x2604F4u;
    SET_GPR_U32(ctx, 31, 0x2604FCu);
    ctx->pc = 0x126DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126DB0u, 0x2604F4u, 0x2604FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2604FCu;
label_2604fc:
    // 0x2604fc: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2604fcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x260500: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x260500u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x260504: 0x24a40054  addiu       $a0, $a1, 0x54
    ctx->pc = 0x260504u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 84));
    // 0x260508: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x260508u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x26050c: 0xc040a90  jal         func_102A40
    ctx->pc = 0x26050Cu;
    SET_GPR_U32(ctx, 31, 0x260514u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x26050Cu, 0x260514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260514u;
label_260514:
    // 0x260514: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x260514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x260518: 0xe4540008  swc1        $f20, 0x8($v0)
    ctx->pc = 0x260518u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x26051c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x26051cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x260520: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x260520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x260524: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x260524u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x260528: 0x24a5c468  addiu       $a1, $a1, -0x3B98
    ctx->pc = 0x260528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952040));
    // 0x26052c: 0xc049b6c  jal         func_126DB0
    ctx->pc = 0x26052Cu;
    SET_GPR_U32(ctx, 31, 0x260534u);
    ctx->pc = 0x126DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126DB0u, 0x26052Cu, 0x260534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260534u;
label_260534:
    // 0x260534: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x260534u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x260538: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x260538u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26053c: 0x24a40054  addiu       $a0, $a1, 0x54
    ctx->pc = 0x26053cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 84));
    // 0x260540: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x260540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x260544: 0xc040a90  jal         func_102A40
    ctx->pc = 0x260544u;
    SET_GPR_U32(ctx, 31, 0x26054Cu);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x260544u, 0x26054Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26054Cu;
label_26054c:
    // 0x26054c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x26054cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x260550: 0xe4540008  swc1        $f20, 0x8($v0)
    ctx->pc = 0x260550u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x260554: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x260554u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x260558: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x260558u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x26055c: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x26055cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x260560: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x260560u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x260564: 0x24a5c478  addiu       $a1, $a1, -0x3B88
    ctx->pc = 0x260564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952056));
    // 0x260568: 0xc049b6c  jal         func_126DB0
    ctx->pc = 0x260568u;
    SET_GPR_U32(ctx, 31, 0x260570u);
    ctx->pc = 0x126DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126DB0u, 0x260568u, 0x260570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260570u;
label_260570:
    // 0x260570: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x260570u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x260574: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x260574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x260578: 0x24440054  addiu       $a0, $v0, 0x54
    ctx->pc = 0x260578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 84));
    // 0x26057c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x26057cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x260580: 0xc040a90  jal         func_102A40
    ctx->pc = 0x260580u;
    SET_GPR_U32(ctx, 31, 0x260588u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x260580u, 0x260588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260588u;
label_260588:
    // 0x260588: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x260588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26058c: 0xe4540008  swc1        $f20, 0x8($v0)
    ctx->pc = 0x26058cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x260590: 0x3c044348  lui         $a0, 0x4348
    ctx->pc = 0x260590u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17224 << 16));
    // 0x260594: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x260594u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x260598: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x260598u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x26059c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x26059cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2605a0: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2605a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2605a4: 0x24a5c488  addiu       $a1, $a1, -0x3B78
    ctx->pc = 0x2605a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952072));
    // 0x2605a8: 0xc049b6c  jal         func_126DB0
    ctx->pc = 0x2605A8u;
    SET_GPR_U32(ctx, 31, 0x2605B0u);
    ctx->pc = 0x126DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126DB0u, 0x2605A8u, 0x2605B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2605B0u;
label_2605b0:
    // 0x2605b0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2605b0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2605b4: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2605b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2605b8: 0x24850054  addiu       $a1, $a0, 0x54
    ctx->pc = 0x2605b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 84));
    // 0x2605bc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2605bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2605c0: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2605c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2605c4: 0xc040a90  jal         func_102A40
    ctx->pc = 0x2605C4u;
    SET_GPR_U32(ctx, 31, 0x2605CCu);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x2605C4u, 0x2605CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2605CCu;
label_2605cc:
    // 0x2605cc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2605ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2605d0: 0xe4940008  swc1        $f20, 0x8($a0)
    ctx->pc = 0x2605d0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2605d4: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x2605d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2605d8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2605d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2605dc: 0x27859ef8  addiu       $a1, $gp, -0x6108
    ctx->pc = 0x2605dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942456));
    // 0x2605e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2605e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2605e4: 0xc047970  jal         func_11E5C0
    ctx->pc = 0x2605E4u;
    SET_GPR_U32(ctx, 31, 0x2605ECu);
    ctx->pc = 0x11E5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E5C0u, 0x2605E4u, 0x2605ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2605ECu;
label_2605ec:
    // 0x2605ec: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x2605ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2605f0: 0xaca20034  sw          $v0, 0x34($a1)
    ctx->pc = 0x2605f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 2));
    // 0x2605f4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2605f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2605f8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2605f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2605fc: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x2605fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x260600: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x260600u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x260604: 0x24a5c4a0  addiu       $a1, $a1, -0x3B60
    ctx->pc = 0x260604u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952096));
    // 0x260608: 0xc049b6c  jal         func_126DB0
    ctx->pc = 0x260608u;
    SET_GPR_U32(ctx, 31, 0x260610u);
    ctx->pc = 0x126DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126DB0u, 0x260608u, 0x260610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260610u;
label_260610:
    // 0x260610: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x260610u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x260614: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x260614u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x260618: 0x24a40054  addiu       $a0, $a1, 0x54
    ctx->pc = 0x260618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 84));
    // 0x26061c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x26061cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x260620: 0xc040a90  jal         func_102A40
    ctx->pc = 0x260620u;
    SET_GPR_U32(ctx, 31, 0x260628u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x260620u, 0x260628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260628u;
label_260628:
    // 0x260628: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x260628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26062c: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x26062cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x260630: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x260630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x260634: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x260634u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x260638: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x260638u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x26063c: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x26063cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x260640: 0x24a5c4c0  addiu       $a1, $a1, -0x3B40
    ctx->pc = 0x260640u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952128));
    // 0x260644: 0xc049b6c  jal         func_126DB0
    ctx->pc = 0x260644u;
    SET_GPR_U32(ctx, 31, 0x26064Cu);
    ctx->pc = 0x126DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126DB0u, 0x260644u, 0x26064Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26064Cu;
label_26064c:
    // 0x26064c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x26064cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x260650: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x260650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x260654: 0x24440054  addiu       $a0, $v0, 0x54
    ctx->pc = 0x260654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 84));
    // 0x260658: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x260658u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26065c: 0xc040a90  jal         func_102A40
    ctx->pc = 0x26065Cu;
    SET_GPR_U32(ctx, 31, 0x260664u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x26065Cu, 0x260664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260664u;
label_260664:
    // 0x260664: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x260664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x260668: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x260668u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x26066c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x26066cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x260670: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x260670u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x260674: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x260674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x260678: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x260678u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x26067c: 0x24a5c4e0  addiu       $a1, $a1, -0x3B20
    ctx->pc = 0x26067cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952160));
    // 0x260680: 0xc049b6c  jal         func_126DB0
    ctx->pc = 0x260680u;
    SET_GPR_U32(ctx, 31, 0x260688u);
    ctx->pc = 0x126DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126DB0u, 0x260680u, 0x260688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260688u;
label_260688:
    // 0x260688: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x260688u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x26068c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x26068cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x260690: 0x24440054  addiu       $a0, $v0, 0x54
    ctx->pc = 0x260690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 84));
    // 0x260694: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x260694u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x260698: 0xc040a90  jal         func_102A40
    ctx->pc = 0x260698u;
    SET_GPR_U32(ctx, 31, 0x2606A0u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x260698u, 0x2606A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2606A0u;
label_2606a0:
    // 0x2606a0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2606a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2606a4: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x2606a4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2606a8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2606a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2606ac: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2606acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2606b0: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x2606b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2606b4: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2606b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2606b8: 0x24a5c500  addiu       $a1, $a1, -0x3B00
    ctx->pc = 0x2606b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952192));
    // 0x2606bc: 0xc049b6c  jal         func_126DB0
    ctx->pc = 0x2606BCu;
    SET_GPR_U32(ctx, 31, 0x2606C4u);
    ctx->pc = 0x126DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126DB0u, 0x2606BCu, 0x2606C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2606C4u;
label_2606c4:
    // 0x2606c4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2606c4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2606c8: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2606c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2606cc: 0x24440054  addiu       $a0, $v0, 0x54
    ctx->pc = 0x2606ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 84));
    // 0x2606d0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2606d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2606d4: 0xc040a90  jal         func_102A40
    ctx->pc = 0x2606D4u;
    SET_GPR_U32(ctx, 31, 0x2606DCu);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x2606D4u, 0x2606DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2606DCu;
label_2606dc:
    // 0x2606dc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2606dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2606e0: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x2606e0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2606e4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2606e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2606e8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2606e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2606ec: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x2606ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2606f0: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2606f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2606f4: 0x24a5c520  addiu       $a1, $a1, -0x3AE0
    ctx->pc = 0x2606f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952224));
    // 0x2606f8: 0xc049b6c  jal         func_126DB0
    ctx->pc = 0x2606F8u;
    SET_GPR_U32(ctx, 31, 0x260700u);
    ctx->pc = 0x126DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126DB0u, 0x2606F8u, 0x260700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260700u;
label_260700:
    // 0x260700: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x260700u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x260704: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x260704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x260708: 0x24440054  addiu       $a0, $v0, 0x54
    ctx->pc = 0x260708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 84));
    // 0x26070c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x26070cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x260710: 0xc040a90  jal         func_102A40
    ctx->pc = 0x260710u;
    SET_GPR_U32(ctx, 31, 0x260718u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x260710u, 0x260718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260718u;
label_260718:
    // 0x260718: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x260718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26071c: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x26071cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x260720: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x260720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x260724: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x260724u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x260728: 0x24a5c540  addiu       $a1, $a1, -0x3AC0
    ctx->pc = 0x260728u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952256));
    // 0x26072c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26072cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260730: 0xc047970  jal         func_11E5C0
    ctx->pc = 0x260730u;
    SET_GPR_U32(ctx, 31, 0x260738u);
    ctx->pc = 0x11E5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E5C0u, 0x260730u, 0x260738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260738u;
label_260738:
    // 0x260738: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x260738u;
    {
        const bool branch_taken_0x260738 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x260738) {
            ctx->pc = 0x260768u;
            goto label_260768;
        }
    }
    ctx->pc = 0x260740u;
    // 0x260740: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x260740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x260744: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x260744u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x260748: 0x24a5c540  addiu       $a1, $a1, -0x3AC0
    ctx->pc = 0x260748u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952256));
    // 0x26074c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26074cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260750: 0xc047970  jal         func_11E5C0
    ctx->pc = 0x260750u;
    SET_GPR_U32(ctx, 31, 0x260758u);
    ctx->pc = 0x11E5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E5C0u, 0x260750u, 0x260758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260758u;
label_260758:
    // 0x260758: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x260758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26075c: 0xac620050  sw          $v0, 0x50($v1)
    ctx->pc = 0x26075cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 80), GPR_U32(ctx, 2));
    // 0x260760: 0x100000a2  b           . + 4 + (0xA2 << 2)
    ctx->pc = 0x260760u;
    {
        const bool branch_taken_0x260760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x260760) {
            ctx->pc = 0x2609ECu;
            goto label_2609ec;
        }
    }
    ctx->pc = 0x260768u;
label_260768:
    // 0x260768: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x260768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26076c: 0x24440054  addiu       $a0, $v0, 0x54
    ctx->pc = 0x26076cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 84));
    // 0x260770: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x260770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x260774: 0xc040a90  jal         func_102A40
    ctx->pc = 0x260774u;
    SET_GPR_U32(ctx, 31, 0x26077Cu);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x260774u, 0x26077Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26077Cu;
label_26077c:
    // 0x26077c: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x26077cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x260780: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x260780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x260784: 0x24440054  addiu       $a0, $v0, 0x54
    ctx->pc = 0x260784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 84));
    // 0x260788: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x260788u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x26078c: 0xc040a90  jal         func_102A40
    ctx->pc = 0x26078Cu;
    SET_GPR_U32(ctx, 31, 0x260794u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x26078Cu, 0x260794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260794u;
label_260794:
    // 0x260794: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x260794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x260798: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x260798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26079c: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x26079cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2607a0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2607a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2607a4: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x2607a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x2607a8: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x2607a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2607ac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2607acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2607b0: 0x0  nop
    ctx->pc = 0x2607b0u;
    // NOP
    // 0x2607b4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2607b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2607b8: 0x4501000c  bc1t        . + 4 + (0xC << 2)
    ctx->pc = 0x2607B8u;
    {
        const bool branch_taken_0x2607b8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2607b8) {
            ctx->pc = 0x2607ECu;
            goto label_2607ec;
        }
    }
    ctx->pc = 0x2607C0u;
    // 0x2607c0: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x2607c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2607c4: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x2607c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x2607c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2607c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2607cc: 0x0  nop
    ctx->pc = 0x2607ccu;
    // NOP
    // 0x2607d0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2607d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2607d4: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2607D4u;
    {
        const bool branch_taken_0x2607d4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2607d4) {
            ctx->pc = 0x2607ECu;
            goto label_2607ec;
        }
    }
    ctx->pc = 0x2607DCu;
    // 0x2607dc: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2607dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2607e0: 0xac400050  sw          $zero, 0x50($v0)
    ctx->pc = 0x2607e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 0));
    // 0x2607e4: 0x10000081  b           . + 4 + (0x81 << 2)
    ctx->pc = 0x2607E4u;
    {
        const bool branch_taken_0x2607e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2607e4) {
            ctx->pc = 0x2609ECu;
            goto label_2609ec;
        }
    }
    ctx->pc = 0x2607ECu;
label_2607ec:
    // 0x2607ec: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x2607ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2607f0: 0x3c024188  lui         $v0, 0x4188
    ctx->pc = 0x2607f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16776 << 16));
    // 0x2607f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2607f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2607f8: 0x0  nop
    ctx->pc = 0x2607f8u;
    // NOP
    // 0x2607fc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2607fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x260800: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x260800u;
    {
        const bool branch_taken_0x260800 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x260800) {
            ctx->pc = 0x260838u;
            goto label_260838;
        }
    }
    ctx->pc = 0x260808u;
    // 0x260808: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x260808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26080c: 0x3c024204  lui         $v0, 0x4204
    ctx->pc = 0x26080cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16900 << 16));
    // 0x260810: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x260810u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x260814: 0x0  nop
    ctx->pc = 0x260814u;
    // NOP
    // 0x260818: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x260818u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26081c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x26081Cu;
    {
        const bool branch_taken_0x26081c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26081c) {
            ctx->pc = 0x260838u;
            goto label_260838;
        }
    }
    ctx->pc = 0x260824u;
    // 0x260824: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x260824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x260828: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x260828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26082c: 0xac430050  sw          $v1, 0x50($v0)
    ctx->pc = 0x26082cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 3));
    // 0x260830: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x260830u;
    {
        const bool branch_taken_0x260830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x260830) {
            ctx->pc = 0x2609ECu;
            goto label_2609ec;
        }
    }
    ctx->pc = 0x260838u;
label_260838:
    // 0x260838: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x260838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26083c: 0x3c024208  lui         $v0, 0x4208
    ctx->pc = 0x26083cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16904 << 16));
    // 0x260840: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x260840u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x260844: 0x0  nop
    ctx->pc = 0x260844u;
    // NOP
    // 0x260848: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x260848u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26084c: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x26084Cu;
    {
        const bool branch_taken_0x26084c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26084c) {
            ctx->pc = 0x260884u;
            goto label_260884;
        }
    }
    ctx->pc = 0x260854u;
    // 0x260854: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x260854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x260858: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x260858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x26085c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26085cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x260860: 0x0  nop
    ctx->pc = 0x260860u;
    // NOP
    // 0x260864: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x260864u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x260868: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x260868u;
    {
        const bool branch_taken_0x260868 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x260868) {
            ctx->pc = 0x260884u;
            goto label_260884;
        }
    }
    ctx->pc = 0x260870u;
    // 0x260870: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x260870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x260874: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x260874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x260878: 0xac430050  sw          $v1, 0x50($v0)
    ctx->pc = 0x260878u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 3));
    // 0x26087c: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x26087Cu;
    {
        const bool branch_taken_0x26087c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26087c) {
            ctx->pc = 0x2609ECu;
            goto label_2609ec;
        }
    }
    ctx->pc = 0x260884u;
label_260884:
    // 0x260884: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x260884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x260888: 0x3c02424c  lui         $v0, 0x424C
    ctx->pc = 0x260888u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16972 << 16));
    // 0x26088c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26088cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x260890: 0x0  nop
    ctx->pc = 0x260890u;
    // NOP
    // 0x260894: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x260894u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x260898: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x260898u;
    {
        const bool branch_taken_0x260898 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x260898) {
            ctx->pc = 0x2608D0u;
            goto label_2608d0;
        }
    }
    ctx->pc = 0x2608A0u;
    // 0x2608a0: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x2608a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2608a4: 0x3c024286  lui         $v0, 0x4286
    ctx->pc = 0x2608a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17030 << 16));
    // 0x2608a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2608a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2608ac: 0x0  nop
    ctx->pc = 0x2608acu;
    // NOP
    // 0x2608b0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2608b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2608b4: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x2608B4u;
    {
        const bool branch_taken_0x2608b4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2608b4) {
            ctx->pc = 0x2608D0u;
            goto label_2608d0;
        }
    }
    ctx->pc = 0x2608BCu;
    // 0x2608bc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2608bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2608c0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2608c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2608c4: 0xac430050  sw          $v1, 0x50($v0)
    ctx->pc = 0x2608c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 3));
    // 0x2608c8: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x2608C8u;
    {
        const bool branch_taken_0x2608c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2608c8) {
            ctx->pc = 0x2609ECu;
            goto label_2609ec;
        }
    }
    ctx->pc = 0x2608D0u;
label_2608d0:
    // 0x2608d0: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x2608d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2608d4: 0x3c024288  lui         $v0, 0x4288
    ctx->pc = 0x2608d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17032 << 16));
    // 0x2608d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2608d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2608dc: 0x0  nop
    ctx->pc = 0x2608dcu;
    // NOP
    // 0x2608e0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2608e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2608e4: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x2608E4u;
    {
        const bool branch_taken_0x2608e4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2608e4) {
            ctx->pc = 0x26091Cu;
            goto label_26091c;
        }
    }
    ctx->pc = 0x2608ECu;
    // 0x2608ec: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x2608ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2608f0: 0x3c0242a8  lui         $v0, 0x42A8
    ctx->pc = 0x2608f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17064 << 16));
    // 0x2608f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2608f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2608f8: 0x0  nop
    ctx->pc = 0x2608f8u;
    // NOP
    // 0x2608fc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2608fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x260900: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x260900u;
    {
        const bool branch_taken_0x260900 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x260900) {
            ctx->pc = 0x26091Cu;
            goto label_26091c;
        }
    }
    ctx->pc = 0x260908u;
    // 0x260908: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x260908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x26090c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x26090cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x260910: 0xac430050  sw          $v1, 0x50($v0)
    ctx->pc = 0x260910u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 3));
    // 0x260914: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x260914u;
    {
        const bool branch_taken_0x260914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x260914) {
            ctx->pc = 0x2609ECu;
            goto label_2609ec;
        }
    }
    ctx->pc = 0x26091Cu;
label_26091c:
    // 0x26091c: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x26091cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x260920: 0x3c0242aa  lui         $v0, 0x42AA
    ctx->pc = 0x260920u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17066 << 16));
    // 0x260924: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x260924u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x260928: 0x0  nop
    ctx->pc = 0x260928u;
    // NOP
    // 0x26092c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x26092cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x260930: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x260930u;
    {
        const bool branch_taken_0x260930 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x260930) {
            ctx->pc = 0x260968u;
            goto label_260968;
        }
    }
    ctx->pc = 0x260938u;
    // 0x260938: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x260938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26093c: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x26093cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x260940: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x260940u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x260944: 0x0  nop
    ctx->pc = 0x260944u;
    // NOP
    // 0x260948: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x260948u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26094c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x26094Cu;
    {
        const bool branch_taken_0x26094c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26094c) {
            ctx->pc = 0x260968u;
            goto label_260968;
        }
    }
    ctx->pc = 0x260954u;
    // 0x260954: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x260954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x260958: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x260958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26095c: 0xac430050  sw          $v1, 0x50($v0)
    ctx->pc = 0x26095cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 3));
    // 0x260960: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x260960u;
    {
        const bool branch_taken_0x260960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x260960) {
            ctx->pc = 0x2609ECu;
            goto label_2609ec;
        }
    }
    ctx->pc = 0x260968u;
label_260968:
    // 0x260968: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x260968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26096c: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x26096cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x260970: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x260970u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x260974: 0x0  nop
    ctx->pc = 0x260974u;
    // NOP
    // 0x260978: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x260978u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26097c: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x26097Cu;
    {
        const bool branch_taken_0x26097c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26097c) {
            ctx->pc = 0x260998u;
            goto label_260998;
        }
    }
    ctx->pc = 0x260984u;
    // 0x260984: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x260984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x260988: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x260988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26098c: 0xac430050  sw          $v1, 0x50($v0)
    ctx->pc = 0x26098cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 3));
    // 0x260990: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x260990u;
    {
        const bool branch_taken_0x260990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x260990) {
            ctx->pc = 0x2609ECu;
            goto label_2609ec;
        }
    }
    ctx->pc = 0x260998u;
label_260998:
    // 0x260998: 0x3c024188  lui         $v0, 0x4188
    ctx->pc = 0x260998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16776 << 16));
    // 0x26099c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x26099cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2609a0: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x2609a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2609a4: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x2609a4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x2609a8: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2609a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2609ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2609acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2609b0: 0x0  nop
    ctx->pc = 0x2609b0u;
    // NOP
    // 0x2609b4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2609b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2609b8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2609B8u;
    {
        const bool branch_taken_0x2609b8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2609b8) {
            ctx->pc = 0x2609D0u;
            goto label_2609d0;
        }
    }
    ctx->pc = 0x2609C0u;
    // 0x2609c0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2609c0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2609c4: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2609c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2609c8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2609C8u;
    {
        const bool branch_taken_0x2609c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2609c8) {
            ctx->pc = 0x2609E4u;
            goto label_2609e4;
        }
    }
    ctx->pc = 0x2609D0u;
label_2609d0:
    // 0x2609d0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2609d0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2609d4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2609d4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2609d8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2609d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2609dc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2609dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2609e0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2609e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2609e4:
    // 0x2609e4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2609e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2609e8: 0xac430050  sw          $v1, 0x50($v0)
    ctx->pc = 0x2609e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 3));
label_2609ec:
    // 0x2609ec: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2609ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2609f0: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x2609f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2609f4: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2609f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2609f8: 0x24a5c560  addiu       $a1, $a1, -0x3AA0
    ctx->pc = 0x2609f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952288));
    // 0x2609fc: 0xc049b6c  jal         func_126DB0
    ctx->pc = 0x2609FCu;
    SET_GPR_U32(ctx, 31, 0x260A04u);
    ctx->pc = 0x126DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126DB0u, 0x2609FCu, 0x260A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260A04u;
label_260a04:
    // 0x260a04: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x260a04u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x260a08: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x260a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x260a0c: 0x24440054  addiu       $a0, $v0, 0x54
    ctx->pc = 0x260a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 84));
    // 0x260a10: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x260a10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x260a14: 0xc040a90  jal         func_102A40
    ctx->pc = 0x260A14u;
    SET_GPR_U32(ctx, 31, 0x260A1Cu);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x260A14u, 0x260A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260A1Cu;
label_260a1c:
    // 0x260a1c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x260a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x260a20: 0xe4540008  swc1        $f20, 0x8($v0)
    ctx->pc = 0x260a20u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x260a24: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x260a24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x260a28: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x260a28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x260a2c: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x260a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x260a30: 0x24a5c570  addiu       $a1, $a1, -0x3A90
    ctx->pc = 0x260a30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952304));
    // 0x260a34: 0xc049b6c  jal         func_126DB0
    ctx->pc = 0x260A34u;
    SET_GPR_U32(ctx, 31, 0x260A3Cu);
    ctx->pc = 0x126DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126DB0u, 0x260A34u, 0x260A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260A3Cu;
label_260a3c:
    // 0x260a3c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x260a3cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x260a40: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x260a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x260a44: 0x24440054  addiu       $a0, $v0, 0x54
    ctx->pc = 0x260a44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 84));
    // 0x260a48: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x260a48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x260a4c: 0xc040a90  jal         func_102A40
    ctx->pc = 0x260A4Cu;
    SET_GPR_U32(ctx, 31, 0x260A54u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x260A4Cu, 0x260A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260A54u;
label_260a54:
    // 0x260a54: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x260a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x260a58: 0xe4540008  swc1        $f20, 0x8($v0)
    ctx->pc = 0x260a58u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x260a5c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x260a5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x260a60: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x260a60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x260a64: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x260a64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x260a68: 0x24a5c580  addiu       $a1, $a1, -0x3A80
    ctx->pc = 0x260a68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952320));
    // 0x260a6c: 0xc049b6c  jal         func_126DB0
    ctx->pc = 0x260A6Cu;
    SET_GPR_U32(ctx, 31, 0x260A74u);
    ctx->pc = 0x126DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126DB0u, 0x260A6Cu, 0x260A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260A74u;
label_260a74:
    // 0x260a74: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x260a74u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x260a78: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x260a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x260a7c: 0x24440054  addiu       $a0, $v0, 0x54
    ctx->pc = 0x260a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 84));
    // 0x260a80: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x260a80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x260a84: 0xc040a90  jal         func_102A40
    ctx->pc = 0x260A84u;
    SET_GPR_U32(ctx, 31, 0x260A8Cu);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x260A84u, 0x260A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260A8Cu;
label_260a8c:
    // 0x260a8c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x260a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x260a90: 0xe4540008  swc1        $f20, 0x8($v0)
    ctx->pc = 0x260a90u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x260a94: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x260a94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x260a98: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x260a98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x260a9c: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x260a9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x260aa0: 0x24a5c590  addiu       $a1, $a1, -0x3A70
    ctx->pc = 0x260aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952336));
    // 0x260aa4: 0xc049b6c  jal         func_126DB0
    ctx->pc = 0x260AA4u;
    SET_GPR_U32(ctx, 31, 0x260AACu);
    ctx->pc = 0x126DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126DB0u, 0x260AA4u, 0x260AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260AACu;
label_260aac:
    // 0x260aac: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x260aacu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x260ab0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x260ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x260ab4: 0x24440054  addiu       $a0, $v0, 0x54
    ctx->pc = 0x260ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 84));
    // 0x260ab8: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x260ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x260abc: 0xc040a90  jal         func_102A40
    ctx->pc = 0x260ABCu;
    SET_GPR_U32(ctx, 31, 0x260AC4u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x260ABCu, 0x260AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260AC4u;
label_260ac4:
    // 0x260ac4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x260ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x260ac8: 0xe4540008  swc1        $f20, 0x8($v0)
    ctx->pc = 0x260ac8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x260acc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x260accu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x260ad0: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x260ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x260ad4: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x260ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x260ad8: 0x24a5c5a0  addiu       $a1, $a1, -0x3A60
    ctx->pc = 0x260ad8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952352));
    // 0x260adc: 0xc049b6c  jal         func_126DB0
    ctx->pc = 0x260ADCu;
    SET_GPR_U32(ctx, 31, 0x260AE4u);
    ctx->pc = 0x126DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126DB0u, 0x260ADCu, 0x260AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260AE4u;
label_260ae4:
    // 0x260ae4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x260ae4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x260ae8: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x260ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x260aec: 0x24440054  addiu       $a0, $v0, 0x54
    ctx->pc = 0x260aecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 84));
    // 0x260af0: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x260af0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x260af4: 0xc040a90  jal         func_102A40
    ctx->pc = 0x260AF4u;
    SET_GPR_U32(ctx, 31, 0x260AFCu);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x260AF4u, 0x260AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260AFCu;
label_260afc:
    // 0x260afc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x260afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x260b00: 0xe4540008  swc1        $f20, 0x8($v0)
    ctx->pc = 0x260b00u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x260b04: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x260b04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x260b08: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x260b08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x260b0c: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x260b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x260b10: 0x24a5c5b0  addiu       $a1, $a1, -0x3A50
    ctx->pc = 0x260b10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952368));
    // 0x260b14: 0xc049b6c  jal         func_126DB0
    ctx->pc = 0x260B14u;
    SET_GPR_U32(ctx, 31, 0x260B1Cu);
    ctx->pc = 0x126DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126DB0u, 0x260B14u, 0x260B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260B1Cu;
label_260b1c:
    // 0x260b1c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x260b1cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x260b20: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x260b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x260b24: 0x24440054  addiu       $a0, $v0, 0x54
    ctx->pc = 0x260b24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 84));
    // 0x260b28: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x260b28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x260b2c: 0xc040a90  jal         func_102A40
    ctx->pc = 0x260B2Cu;
    SET_GPR_U32(ctx, 31, 0x260B34u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x260B2Cu, 0x260B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260B34u;
label_260b34:
    // 0x260b34: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x260b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x260b38: 0xe4540008  swc1        $f20, 0x8($v0)
    ctx->pc = 0x260b38u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x260b3c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x260b3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x260b40: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x260b40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x260b44: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x260b44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x260b48: 0x24a5c5c0  addiu       $a1, $a1, -0x3A40
    ctx->pc = 0x260b48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952384));
    // 0x260b4c: 0xc049b6c  jal         func_126DB0
    ctx->pc = 0x260B4Cu;
    SET_GPR_U32(ctx, 31, 0x260B54u);
    ctx->pc = 0x126DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126DB0u, 0x260B4Cu, 0x260B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260B54u;
label_260b54:
    // 0x260b54: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x260b54u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x260b58: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x260b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x260b5c: 0x24440054  addiu       $a0, $v0, 0x54
    ctx->pc = 0x260b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 84));
    // 0x260b60: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x260b60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x260b64: 0xc040a90  jal         func_102A40
    ctx->pc = 0x260B64u;
    SET_GPR_U32(ctx, 31, 0x260B6Cu);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x260B64u, 0x260B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260B6Cu;
label_260b6c:
    // 0x260b6c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x260b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x260b70: 0xe4540008  swc1        $f20, 0x8($v0)
    ctx->pc = 0x260b70u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x260b74: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x260b74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x260b78: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x260b78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x260b7c: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x260b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x260b80: 0x24a5c5d0  addiu       $a1, $a1, -0x3A30
    ctx->pc = 0x260b80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952400));
    // 0x260b84: 0xc049b6c  jal         func_126DB0
    ctx->pc = 0x260B84u;
    SET_GPR_U32(ctx, 31, 0x260B8Cu);
    ctx->pc = 0x126DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126DB0u, 0x260B84u, 0x260B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260B8Cu;
label_260b8c:
    // 0x260b8c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x260b8cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x260b90: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x260b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x260b94: 0x24440054  addiu       $a0, $v0, 0x54
    ctx->pc = 0x260b94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 84));
    // 0x260b98: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x260b98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x260b9c: 0xc040a90  jal         func_102A40
    ctx->pc = 0x260B9Cu;
    SET_GPR_U32(ctx, 31, 0x260BA4u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x260B9Cu, 0x260BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260BA4u;
label_260ba4:
    // 0x260ba4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x260ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x260ba8: 0xe4540008  swc1        $f20, 0x8($v0)
    ctx->pc = 0x260ba8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x260bac: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x260bacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x260bb0: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x260bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x260bb4: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x260bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x260bb8: 0x24a5c5e0  addiu       $a1, $a1, -0x3A20
    ctx->pc = 0x260bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952416));
    // 0x260bbc: 0xc049b6c  jal         func_126DB0
    ctx->pc = 0x260BBCu;
    SET_GPR_U32(ctx, 31, 0x260BC4u);
    ctx->pc = 0x126DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126DB0u, 0x260BBCu, 0x260BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260BC4u;
label_260bc4:
    // 0x260bc4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x260bc4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x260bc8: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x260bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x260bcc: 0x24440054  addiu       $a0, $v0, 0x54
    ctx->pc = 0x260bccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 84));
    // 0x260bd0: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x260bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x260bd4: 0xc040a90  jal         func_102A40
    ctx->pc = 0x260BD4u;
    SET_GPR_U32(ctx, 31, 0x260BDCu);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x260BD4u, 0x260BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260BDCu;
label_260bdc:
    // 0x260bdc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x260bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x260be0: 0xe4540008  swc1        $f20, 0x8($v0)
    ctx->pc = 0x260be0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x260be4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x260be4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x260be8: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x260be8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x260bec: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x260becu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x260bf0: 0x24a5c5f0  addiu       $a1, $a1, -0x3A10
    ctx->pc = 0x260bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952432));
    // 0x260bf4: 0xc049b6c  jal         func_126DB0
    ctx->pc = 0x260BF4u;
    SET_GPR_U32(ctx, 31, 0x260BFCu);
    ctx->pc = 0x126DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126DB0u, 0x260BF4u, 0x260BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260BFCu;
label_260bfc:
    // 0x260bfc: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x260bfcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x260c00: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x260c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x260c04: 0x24440054  addiu       $a0, $v0, 0x54
    ctx->pc = 0x260c04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 84));
    // 0x260c08: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x260c08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x260c0c: 0xc040a90  jal         func_102A40
    ctx->pc = 0x260C0Cu;
    SET_GPR_U32(ctx, 31, 0x260C14u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x260C0Cu, 0x260C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260C14u;
label_260c14:
    // 0x260c14: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x260c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x260c18: 0xe4540008  swc1        $f20, 0x8($v0)
    ctx->pc = 0x260c18u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x260c1c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x260c1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x260c20: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x260c20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x260c24: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x260c24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x260c28: 0x24a5c600  addiu       $a1, $a1, -0x3A00
    ctx->pc = 0x260c28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952448));
    // 0x260c2c: 0xc049b6c  jal         func_126DB0
    ctx->pc = 0x260C2Cu;
    SET_GPR_U32(ctx, 31, 0x260C34u);
    ctx->pc = 0x126DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126DB0u, 0x260C2Cu, 0x260C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260C34u;
label_260c34:
    // 0x260c34: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x260c34u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x260c38: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x260c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x260c3c: 0x24440054  addiu       $a0, $v0, 0x54
    ctx->pc = 0x260c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 84));
    // 0x260c40: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x260c40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x260c44: 0xc040a90  jal         func_102A40
    ctx->pc = 0x260C44u;
    SET_GPR_U32(ctx, 31, 0x260C4Cu);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x260C44u, 0x260C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260C4Cu;
label_260c4c:
    // 0x260c4c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x260c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x260c50: 0xe4540008  swc1        $f20, 0x8($v0)
    ctx->pc = 0x260c50u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x260c54: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x260c54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x260c58: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x260c58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x260c5c: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x260c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x260c60: 0x24a5c610  addiu       $a1, $a1, -0x39F0
    ctx->pc = 0x260c60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952464));
    // 0x260c64: 0xc049b6c  jal         func_126DB0
    ctx->pc = 0x260C64u;
    SET_GPR_U32(ctx, 31, 0x260C6Cu);
    ctx->pc = 0x126DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126DB0u, 0x260C64u, 0x260C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260C6Cu;
label_260c6c:
    // 0x260c6c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x260c6cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x260c70: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x260c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x260c74: 0x24440054  addiu       $a0, $v0, 0x54
    ctx->pc = 0x260c74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 84));
    // 0x260c78: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x260c78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x260c7c: 0xc040a90  jal         func_102A40
    ctx->pc = 0x260C7Cu;
    SET_GPR_U32(ctx, 31, 0x260C84u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x260C7Cu, 0x260C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260C84u;
label_260c84:
    // 0x260c84: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x260c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x260c88: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x260c88u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x260c8c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x260c8cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x260c90: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x260c90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x260c94: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x260c94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x260c98: 0x24a5c630  addiu       $a1, $a1, -0x39D0
    ctx->pc = 0x260c98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952496));
    // 0x260c9c: 0xc049b6c  jal         func_126DB0
    ctx->pc = 0x260C9Cu;
    SET_GPR_U32(ctx, 31, 0x260CA4u);
    ctx->pc = 0x126DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126DB0u, 0x260C9Cu, 0x260CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260CA4u;
label_260ca4:
    // 0x260ca4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x260ca4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x260ca8: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x260ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x260cac: 0x24440054  addiu       $a0, $v0, 0x54
    ctx->pc = 0x260cacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 84));
    // 0x260cb0: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x260cb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x260cb4: 0xc040a90  jal         func_102A40
    ctx->pc = 0x260CB4u;
    SET_GPR_U32(ctx, 31, 0x260CBCu);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x260CB4u, 0x260CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260CBCu;
label_260cbc:
    // 0x260cbc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x260cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x260cc0: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x260cc0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x260cc4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x260cc4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x260cc8: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x260cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x260ccc: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x260cccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x260cd0: 0x24a5c650  addiu       $a1, $a1, -0x39B0
    ctx->pc = 0x260cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952528));
    // 0x260cd4: 0xc049b6c  jal         func_126DB0
    ctx->pc = 0x260CD4u;
    SET_GPR_U32(ctx, 31, 0x260CDCu);
    ctx->pc = 0x126DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126DB0u, 0x260CD4u, 0x260CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260CDCu;
label_260cdc:
    // 0x260cdc: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x260cdcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x260ce0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x260ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x260ce4: 0x24440054  addiu       $a0, $v0, 0x54
    ctx->pc = 0x260ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 84));
    // 0x260ce8: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x260ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x260cec: 0xc040a90  jal         func_102A40
    ctx->pc = 0x260CECu;
    SET_GPR_U32(ctx, 31, 0x260CF4u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x260CECu, 0x260CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260CF4u;
label_260cf4:
    // 0x260cf4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x260cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x260cf8: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x260cf8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x260cfc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x260cfcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x260d00: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x260d00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x260d04: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x260d04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x260d08: 0x24a5c670  addiu       $a1, $a1, -0x3990
    ctx->pc = 0x260d08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952560));
    // 0x260d0c: 0xc049b6c  jal         func_126DB0
    ctx->pc = 0x260D0Cu;
    SET_GPR_U32(ctx, 31, 0x260D14u);
    ctx->pc = 0x126DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126DB0u, 0x260D0Cu, 0x260D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260D14u;
label_260d14:
    // 0x260d14: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x260d14u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x260d18: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x260d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x260d1c: 0x24440054  addiu       $a0, $v0, 0x54
    ctx->pc = 0x260d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 84));
    // 0x260d20: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x260d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x260d24: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x260d24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260d28: 0xc040a90  jal         func_102A40
    ctx->pc = 0x260D28u;
    SET_GPR_U32(ctx, 31, 0x260D30u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x260D28u, 0x260D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260D30u;
label_260d30:
    // 0x260d30: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x260d30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x260d34: 0xe494000c  swc1        $f20, 0xC($a0)
    ctx->pc = 0x260d34u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x260d38: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x260d38u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x260d3c: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x260d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x260d40: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x260d40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260d44: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x260d44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x260d48: 0x24a5c690  addiu       $a1, $a1, -0x3970
    ctx->pc = 0x260d48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952592));
    // 0x260d4c: 0xc049b6c  jal         func_126DB0
    ctx->pc = 0x260D4Cu;
    SET_GPR_U32(ctx, 31, 0x260D54u);
    ctx->pc = 0x126DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126DB0u, 0x260D4Cu, 0x260D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260D54u;
label_260d54:
    // 0x260d54: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x260d54u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x260d58: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x260d58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x260d5c: 0x24850054  addiu       $a1, $a0, 0x54
    ctx->pc = 0x260d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 84));
    // 0x260d60: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x260d60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260d64: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x260d64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x260d68: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x260d68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260d6c: 0xc040a90  jal         func_102A40
    ctx->pc = 0x260D6Cu;
    SET_GPR_U32(ctx, 31, 0x260D74u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x260D6Cu, 0x260D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260D74u;
label_260d74:
    // 0x260d74: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x260d74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x260d78: 0xe494000c  swc1        $f20, 0xC($a0)
    ctx->pc = 0x260d78u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x260d7c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x260d7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x260d80: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x260d80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x260d84: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x260d84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260d88: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x260d88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x260d8c: 0x24a5c6b0  addiu       $a1, $a1, -0x3950
    ctx->pc = 0x260d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952624));
    // 0x260d90: 0xc049b6c  jal         func_126DB0
    ctx->pc = 0x260D90u;
    SET_GPR_U32(ctx, 31, 0x260D98u);
    ctx->pc = 0x126DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126DB0u, 0x260D90u, 0x260D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260D98u;
label_260d98:
    // 0x260d98: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x260d98u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x260d9c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x260d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x260da0: 0x24850054  addiu       $a1, $a0, 0x54
    ctx->pc = 0x260da0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 84));
    // 0x260da4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x260da4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260da8: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x260da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x260dac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x260dacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260db0: 0xc040a90  jal         func_102A40
    ctx->pc = 0x260DB0u;
    SET_GPR_U32(ctx, 31, 0x260DB8u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x260DB0u, 0x260DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260DB8u;
label_260db8:
    // 0x260db8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x260db8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x260dbc: 0xe494000c  swc1        $f20, 0xC($a0)
    ctx->pc = 0x260dbcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x260dc0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x260dc0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x260dc4: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x260dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x260dc8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x260dc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260dcc: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x260dccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x260dd0: 0x24a5c6d0  addiu       $a1, $a1, -0x3930
    ctx->pc = 0x260dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952656));
    // 0x260dd4: 0xc049b6c  jal         func_126DB0
    ctx->pc = 0x260DD4u;
    SET_GPR_U32(ctx, 31, 0x260DDCu);
    ctx->pc = 0x126DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126DB0u, 0x260DD4u, 0x260DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260DDCu;
label_260ddc:
    // 0x260ddc: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x260ddcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x260de0: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x260de0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x260de4: 0x24850054  addiu       $a1, $a0, 0x54
    ctx->pc = 0x260de4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 84));
    // 0x260de8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x260de8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260dec: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x260decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x260df0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x260df0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260df4: 0xc040a90  jal         func_102A40
    ctx->pc = 0x260DF4u;
    SET_GPR_U32(ctx, 31, 0x260DFCu);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x260DF4u, 0x260DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260DFCu;
label_260dfc:
    // 0x260dfc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x260dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x260e00: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x260e00u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x260e04: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x260e04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x260e08: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x260e08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x260e0c: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x260e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x260e10: 0x24a5c6f0  addiu       $a1, $a1, -0x3910
    ctx->pc = 0x260e10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952688));
    // 0x260e14: 0xc049b6c  jal         func_126DB0
    ctx->pc = 0x260E14u;
    SET_GPR_U32(ctx, 31, 0x260E1Cu);
    ctx->pc = 0x126DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126DB0u, 0x260E14u, 0x260E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260E1Cu;
label_260e1c:
    // 0x260e1c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x260e1cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x260e20: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x260e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x260e24: 0x24440054  addiu       $a0, $v0, 0x54
    ctx->pc = 0x260e24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 84));
    // 0x260e28: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x260e28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x260e2c: 0xc040a90  jal         func_102A40
    ctx->pc = 0x260E2Cu;
    SET_GPR_U32(ctx, 31, 0x260E34u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x260E2Cu, 0x260E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260E34u;
label_260e34:
    // 0x260e34: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x260e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x260e38: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x260e38u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x260e3c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x260e3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x260e40: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x260e40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x260e44: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x260e44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x260e48: 0x24a5c710  addiu       $a1, $a1, -0x38F0
    ctx->pc = 0x260e48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952720));
    // 0x260e4c: 0xc049b6c  jal         func_126DB0
    ctx->pc = 0x260E4Cu;
    SET_GPR_U32(ctx, 31, 0x260E54u);
    ctx->pc = 0x126DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126DB0u, 0x260E4Cu, 0x260E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260E54u;
label_260e54:
    // 0x260e54: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x260e54u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x260e58: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x260e58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x260e5c: 0x24a40054  addiu       $a0, $a1, 0x54
    ctx->pc = 0x260e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 84));
    // 0x260e60: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x260e60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x260e64: 0xc040a90  jal         func_102A40
    ctx->pc = 0x260E64u;
    SET_GPR_U32(ctx, 31, 0x260E6Cu);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x260E64u, 0x260E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260E6Cu;
label_260e6c:
    // 0x260e6c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x260e6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260e70: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x260e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x260e74: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x260e74u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x260e78: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x260e78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x260e7c: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x260e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x260e80: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x260e80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x260e84: 0x24a5c730  addiu       $a1, $a1, -0x38D0
    ctx->pc = 0x260e84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952752));
    // 0x260e88: 0xc049b6c  jal         func_126DB0
    ctx->pc = 0x260E88u;
    SET_GPR_U32(ctx, 31, 0x260E90u);
    ctx->pc = 0x126DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126DB0u, 0x260E88u, 0x260E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260E90u;
label_260e90:
    // 0x260e90: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x260e90u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x260e94: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x260e94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x260e98: 0x24a20054  addiu       $v0, $a1, 0x54
    ctx->pc = 0x260e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 84));
    // 0x260e9c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x260e9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260ea0: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x260ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x260ea4: 0xc040a90  jal         func_102A40
    ctx->pc = 0x260EA4u;
    SET_GPR_U32(ctx, 31, 0x260EACu);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x260EA4u, 0x260EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260EACu;
label_260eac:
    // 0x260eac: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x260eacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x260eb0: 0xe494000c  swc1        $f20, 0xC($a0)
    ctx->pc = 0x260eb0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x260eb4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x260eb4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x260eb8: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x260eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x260ebc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x260ebcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260ec0: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x260ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x260ec4: 0x24a5c750  addiu       $a1, $a1, -0x38B0
    ctx->pc = 0x260ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952784));
    // 0x260ec8: 0xc049b6c  jal         func_126DB0
    ctx->pc = 0x260EC8u;
    SET_GPR_U32(ctx, 31, 0x260ED0u);
    ctx->pc = 0x126DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126DB0u, 0x260EC8u, 0x260ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260ED0u;
label_260ed0:
    // 0x260ed0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x260ed0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x260ed4: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x260ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x260ed8: 0x24850054  addiu       $a1, $a0, 0x54
    ctx->pc = 0x260ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 84));
    // 0x260edc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x260edcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260ee0: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x260ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x260ee4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x260ee4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260ee8: 0xc040a90  jal         func_102A40
    ctx->pc = 0x260EE8u;
    SET_GPR_U32(ctx, 31, 0x260EF0u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x260EE8u, 0x260EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260EF0u;
label_260ef0:
    // 0x260ef0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x260ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x260ef4: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x260ef4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x260ef8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x260ef8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x260efc: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x260efcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x260f00: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x260f00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x260f04: 0x24a5c770  addiu       $a1, $a1, -0x3890
    ctx->pc = 0x260f04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952816));
    // 0x260f08: 0xc049b6c  jal         func_126DB0
    ctx->pc = 0x260F08u;
    SET_GPR_U32(ctx, 31, 0x260F10u);
    ctx->pc = 0x126DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126DB0u, 0x260F08u, 0x260F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260F10u;
label_260f10:
    // 0x260f10: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x260f10u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x260f14: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x260f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x260f18: 0x24440054  addiu       $a0, $v0, 0x54
    ctx->pc = 0x260f18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 84));
    // 0x260f1c: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x260f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x260f20: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x260f20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260f24: 0xc040a90  jal         func_102A40
    ctx->pc = 0x260F24u;
    SET_GPR_U32(ctx, 31, 0x260F2Cu);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x260F24u, 0x260F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260F2Cu;
label_260f2c:
    // 0x260f2c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x260f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x260f30: 0xe4740008  swc1        $f20, 0x8($v1)
    ctx->pc = 0x260f30u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x260f34: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x260f34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x260f38: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x260f38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260f3c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x260F3Cu;
    {
        const bool branch_taken_0x260f3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x260f3c) {
            ctx->pc = 0x260F64u;
            goto label_260f64;
        }
    }
    ctx->pc = 0x260F44u;
label_260f44:
    // 0x260f44: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x260f44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x260f48: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x260f48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260f4c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x260f4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260f50: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x260f50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260f54: 0xc0980bc  jal         func_2602F0
    ctx->pc = 0x260F54u;
    SET_GPR_U32(ctx, 31, 0x260F5Cu);
    ctx->pc = 0x2602F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2602F0u, 0x260F54u, 0x260F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260F5Cu;
label_260f5c:
    // 0x260f5c: 0x26040001  addiu       $a0, $s0, 0x1
    ctx->pc = 0x260f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x260f60: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x260f60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_260f64:
    // 0x260f64: 0x2a050012  slti        $a1, $s0, 0x12
    ctx->pc = 0x260f64u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)18) ? 1 : 0);
    // 0x260f68: 0x14a0fff6  bnez        $a1, . + 4 + (-0xA << 2)
    ctx->pc = 0x260F68u;
    {
        const bool branch_taken_0x260f68 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x260f68) {
            ctx->pc = 0x260F44u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_260f44;
        }
    }
    ctx->pc = 0x260F70u;
    // 0x260f70: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x260f70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x260f74: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x260f74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x260f78: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x260f78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x260f7c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x260f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x260f80: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x260f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x260f84: 0x3e00008  jr          $ra
    ctx->pc = 0x260F84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x260F84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x260F8Cu;
    // 0x260f8c: 0x0  nop
    ctx->pc = 0x260f8cu;
    // NOP
    ctx->pc = 0x260f90u;
}
