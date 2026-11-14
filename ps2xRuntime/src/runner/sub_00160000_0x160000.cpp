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

// Function: sub_00160000
// Address: 0x160000 - 0x1601d0
void sub_00160000_0x160000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00160000_0x160000");
#endif

    switch (ctx->pc) {
        case 0x160014u: goto label_160014;
        case 0x16004cu: goto label_16004c;
        case 0x160074u: goto label_160074;
        case 0x1600a8u: goto label_1600a8;
        case 0x1600c0u: goto label_1600c0;
        case 0x1600e4u: goto label_1600e4;
        case 0x160100u: goto label_160100;
        case 0x160138u: goto label_160138;
        case 0x160160u: goto label_160160;
        case 0x160194u: goto label_160194;
        case 0x1601a4u: goto label_1601a4;
        default: break;
    }

    ctx->pc = 0x160000u;

    // 0x160000: 0x26640068  addiu       $a0, $s3, 0x68
    ctx->pc = 0x160000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 104));
    // 0x160004: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x160004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x160008: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x160008u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16000c: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x16000Cu;
    SET_GPR_U32(ctx, 31, 0x160014u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x16000Cu, 0x160014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160014u;
label_160014:
    // 0x160014: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x160014u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160018: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x160018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x16001c: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x16001cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x160020: 0x3c033e80  lui         $v1, 0x3E80
    ctx->pc = 0x160020u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16000 << 16));
    // 0x160024: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x160024u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x160028: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x160028u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x16002c: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x16002cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x160030: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x160030u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160034: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x160034u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160038: 0x27a70070  addiu       $a3, $sp, 0x70
    ctx->pc = 0x160038u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x16003c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x16003cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160040: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x160040u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160044: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x160044u;
    SET_GPR_U32(ctx, 31, 0x16004Cu);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x160044u, 0x16004Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16004Cu;
label_16004c:
    // 0x16004c: 0x3c043e80  lui         $a0, 0x3E80
    ctx->pc = 0x16004cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16000 << 16));
    // 0x160050: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x160050u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x160054: 0x0  nop
    ctx->pc = 0x160054u;
    // NOP
    // 0x160058: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x160058u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x16005c: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x16005cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x160060: 0x24a20068  addiu       $v0, $a1, 0x68
    ctx->pc = 0x160060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 104));
    // 0x160064: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x160064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160068: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x160068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16006c: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x16006Cu;
    SET_GPR_U32(ctx, 31, 0x160074u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x16006Cu, 0x160074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160074u;
label_160074:
    // 0x160074: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x160074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x160078: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x160078u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x16007c: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x16007cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x160080: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x160080u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x160084: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x160084u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x160088: 0x8ca40034  lw          $a0, 0x34($a1)
    ctx->pc = 0x160088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x16008c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x16008cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160090: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x160090u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x160094: 0x27a70078  addiu       $a3, $sp, 0x78
    ctx->pc = 0x160094u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x160098: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x160098u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16009c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x16009cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1600a0: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x1600A0u;
    SET_GPR_U32(ctx, 31, 0x1600A8u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x1600A0u, 0x1600A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1600A8u;
label_1600a8:
    // 0x1600a8: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x1600a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1600ac: 0x24a40068  addiu       $a0, $a1, 0x68
    ctx->pc = 0x1600acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 104));
    // 0x1600b0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1600b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1600b4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1600b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1600b8: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1600B8u;
    SET_GPR_U32(ctx, 31, 0x1600C0u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1600B8u, 0x1600C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1600C0u;
label_1600c0:
    // 0x1600c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1600c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1600c4: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x1600c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1600c8: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1600c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1600cc: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x1600ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1600d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1600d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1600d4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1600d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1600d8: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x1600d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1600dc: 0xc08c744  jal         func_231D10
    ctx->pc = 0x1600DCu;
    SET_GPR_U32(ctx, 31, 0x1600E4u);
    ctx->pc = 0x231D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231D10u, 0x1600DCu, 0x1600E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1600E4u;
label_1600e4:
    // 0x1600e4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1600e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1600e8: 0x8fa60080  lw          $a2, 0x80($sp)
    ctx->pc = 0x1600e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1600ec: 0x24c20068  addiu       $v0, $a2, 0x68
    ctx->pc = 0x1600ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 104));
    // 0x1600f0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1600f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1600f4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1600f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1600f8: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1600F8u;
    SET_GPR_U32(ctx, 31, 0x160100u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1600F8u, 0x160100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160100u;
label_160100:
    // 0x160100: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x160100u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160104: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x160104u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x160108: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x160108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x16010c: 0x3c063e80  lui         $a2, 0x3E80
    ctx->pc = 0x16010cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16000 << 16));
    // 0x160110: 0x44866000  mtc1        $a2, $f12
    ctx->pc = 0x160110u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x160114: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x160114u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x160118: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x160118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x16011c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x16011cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160120: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x160120u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160124: 0x27a70070  addiu       $a3, $sp, 0x70
    ctx->pc = 0x160124u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x160128: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x160128u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16012c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x16012cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160130: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x160130u;
    SET_GPR_U32(ctx, 31, 0x160138u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x160130u, 0x160138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160138u;
label_160138:
    // 0x160138: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x160138u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16013c: 0x0  nop
    ctx->pc = 0x16013cu;
    // NOP
    // 0x160140: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x160140u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x160144: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x160144u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x160148: 0x24850068  addiu       $a1, $a0, 0x68
    ctx->pc = 0x160148u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 104));
    // 0x16014c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x16014cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160150: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x160150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x160154: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x160154u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160158: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x160158u;
    SET_GPR_U32(ctx, 31, 0x160160u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x160158u, 0x160160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160160u;
label_160160:
    // 0x160160: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x160160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160164: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x160164u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x160168: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x160168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x16016c: 0x3c033e80  lui         $v1, 0x3E80
    ctx->pc = 0x16016cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16000 << 16));
    // 0x160170: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x160170u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x160174: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x160174u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x160178: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x160178u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x16017c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x16017cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x160180: 0x27a70078  addiu       $a3, $sp, 0x78
    ctx->pc = 0x160180u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x160184: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x160184u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160188: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x160188u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16018c: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x16018Cu;
    SET_GPR_U32(ctx, 31, 0x160194u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x16018Cu, 0x160194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160194u;
label_160194:
    // 0x160194: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x160194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x160198: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x160198u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16019c: 0xc0439c4  jal         func_10E710
    ctx->pc = 0x16019Cu;
    SET_GPR_U32(ctx, 31, 0x1601A4u);
    ctx->pc = 0x10E710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E710u, 0x16019Cu, 0x1601A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1601A4u;
label_1601a4:
    // 0x1601a4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1601a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1601a8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1601a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1601ac: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1601acu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1601b0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1601b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1601b4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1601b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1601b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1601b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1601bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1601bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1601c0: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x1601c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1601c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1601C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1601C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1601CCu;
    // 0x1601cc: 0x0  nop
    ctx->pc = 0x1601ccu;
    // NOP
    ctx->pc = 0x1601d0u;
}
