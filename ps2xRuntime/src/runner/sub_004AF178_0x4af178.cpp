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

// Function: sub_004AF178
// Address: 0x4af178 - 0x4af408
void sub_004AF178_0x4af178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AF178_0x4af178");
#endif

    switch (ctx->pc) {
        case 0x4af1a4u: goto label_4af1a4;
        case 0x4af1bcu: goto label_4af1bc;
        case 0x4af1e4u: goto label_4af1e4;
        case 0x4af1ecu: goto label_4af1ec;
        case 0x4af1f4u: goto label_4af1f4;
        case 0x4af21cu: goto label_4af21c;
        case 0x4af224u: goto label_4af224;
        case 0x4af230u: goto label_4af230;
        case 0x4af298u: goto label_4af298;
        case 0x4af2bcu: goto label_4af2bc;
        case 0x4af2c8u: goto label_4af2c8;
        case 0x4af2d8u: goto label_4af2d8;
        case 0x4af2fcu: goto label_4af2fc;
        case 0x4af304u: goto label_4af304;
        case 0x4af344u: goto label_4af344;
        case 0x4af34cu: goto label_4af34c;
        case 0x4af370u: goto label_4af370;
        case 0x4af378u: goto label_4af378;
        case 0x4af380u: goto label_4af380;
        case 0x4af3a4u: goto label_4af3a4;
        case 0x4af3acu: goto label_4af3ac;
        case 0x4af3d8u: goto label_4af3d8;
        default: break;
    }

    ctx->pc = 0x4af178u;

    // 0x4af178: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4af178u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x4af17c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4af17cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x4af180: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x4af180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x4af184: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4af184u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4af188: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x4af188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x4af18c: 0x26510040  addiu       $s1, $s2, 0x40
    ctx->pc = 0x4af18cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x4af190: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x4af190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x4af194: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x4af194u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x4af198: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4af198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4af19c: 0xc12c646  jal         func_4B1918
    ctx->pc = 0x4AF19Cu;
    SET_GPR_U32(ctx, 31, 0x4AF1A4u);
    ctx->pc = 0x4AF1A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AF19Cu;
    // 0x4af1a0: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B1918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B1918u, 0x4AF19Cu, 0x4AF1A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AF1A4u;
label_4af1a4:
    // 0x4af1a4: 0x1040008e  beqz        $v0, . + 4 + (0x8E << 2)
    ctx->pc = 0x4AF1A4u;
    {
        const bool branch_taken_0x4af1a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AF1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AF1A4u;
        // 0x4af1a8: 0x8f82b8e0  lw          $v0, -0x4720($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949088)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4af1a4) {
            ctx->pc = 0x4AF3E0u;
            goto label_4af3e0;
        }
    }
    ctx->pc = 0x4AF1ACu;
    // 0x4af1ac: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x4AF1ACu;
    {
        const bool branch_taken_0x4af1ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4AF1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AF1ACu;
        // 0x4af1b0: 0x264402c0  addiu       $a0, $s2, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 704));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4af1ac) {
            ctx->pc = 0x4AF228u;
            goto label_4af228;
        }
    }
    ctx->pc = 0x4AF1B4u;
    // 0x4af1b4: 0xc0bf694  jal         func_2FDA50
    ctx->pc = 0x4AF1B4u;
    SET_GPR_U32(ctx, 31, 0x4AF1BCu);
    ctx->pc = 0x2FDA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDA50u, 0x4AF1B4u, 0x4AF1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AF1BCu;
label_4af1bc:
    // 0x4af1bc: 0x3c0b0066  lui         $t3, 0x66
    ctx->pc = 0x4af1bcu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)102 << 16));
    // 0x4af1c0: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x4af1c0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4af1c4: 0x256bea40  addiu       $t3, $t3, -0x15C0
    ctx->pc = 0x4af1c4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294961728));
    // 0x4af1c8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4af1c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4af1cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4af1ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4af1d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4af1d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4af1d4: 0x24070038  addiu       $a3, $zero, 0x38
    ctx->pc = 0x4af1d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x4af1d8: 0x278ab8e0  addiu       $t2, $gp, -0x4720
    ctx->pc = 0x4af1d8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 28), 4294949088));
    // 0x4af1dc: 0xc12baca  jal         func_4AEB28
    ctx->pc = 0x4AF1DCu;
    SET_GPR_U32(ctx, 31, 0x4AF1E4u);
    ctx->pc = 0x4AF1E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AF1DCu;
    // 0x4af1e0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AEB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AEB28u, 0x4AF1DCu, 0x4AF1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AF1E4u;
label_4af1e4:
    // 0x4af1e4: 0xc0bf6a0  jal         func_2FDA80
    ctx->pc = 0x4AF1E4u;
    SET_GPR_U32(ctx, 31, 0x4AF1ECu);
    ctx->pc = 0x2FDA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDA80u, 0x4AF1E4u, 0x4AF1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AF1ECu;
label_4af1ec:
    // 0x4af1ec: 0xc0bf694  jal         func_2FDA50
    ctx->pc = 0x4AF1ECu;
    SET_GPR_U32(ctx, 31, 0x4AF1F4u);
    ctx->pc = 0x2FDA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDA50u, 0x4AF1ECu, 0x4AF1F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AF1F4u;
label_4af1f4:
    // 0x4af1f4: 0x3c0b0066  lui         $t3, 0x66
    ctx->pc = 0x4af1f4u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)102 << 16));
    // 0x4af1f8: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x4af1f8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4af1fc: 0x256beb00  addiu       $t3, $t3, -0x1500
    ctx->pc = 0x4af1fcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294961920));
    // 0x4af200: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4af200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4af204: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4af204u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4af208: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4af208u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4af20c: 0x2407003a  addiu       $a3, $zero, 0x3A
    ctx->pc = 0x4af20cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x4af210: 0x278ab8e4  addiu       $t2, $gp, -0x471C
    ctx->pc = 0x4af210u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 28), 4294949092));
    // 0x4af214: 0xc12baca  jal         func_4AEB28
    ctx->pc = 0x4AF214u;
    SET_GPR_U32(ctx, 31, 0x4AF21Cu);
    ctx->pc = 0x4AF218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AF214u;
    // 0x4af218: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AEB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AEB28u, 0x4AF214u, 0x4AF21Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AF21Cu;
label_4af21c:
    // 0x4af21c: 0xc0bf6a0  jal         func_2FDA80
    ctx->pc = 0x4AF21Cu;
    SET_GPR_U32(ctx, 31, 0x4AF224u);
    ctx->pc = 0x2FDA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDA80u, 0x4AF21Cu, 0x4AF224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AF224u;
label_4af224:
    // 0x4af224: 0x264402c0  addiu       $a0, $s2, 0x2C0
    ctx->pc = 0x4af224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 704));
label_4af228:
    // 0x4af228: 0xc12d124  jal         func_4B4490
    ctx->pc = 0x4AF228u;
    SET_GPR_U32(ctx, 31, 0x4AF230u);
    ctx->pc = 0x4AF22Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AF228u;
    // 0x4af22c: 0x26541044  addiu       $s4, $s2, 0x1044 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 4164));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B4490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B4490u, 0x4AF228u, 0x4AF230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AF230u;
label_4af230:
    // 0x4af230: 0xae201f00  sw          $zero, 0x1F00($s1)
    ctx->pc = 0x4af230u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 7936), GPR_U32(ctx, 0));
    // 0x4af234: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4af234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x4af238: 0xae201f04  sw          $zero, 0x1F04($s1)
    ctx->pc = 0x4af238u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 7940), GPR_U32(ctx, 0));
    // 0x4af23c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x4af23cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4af240: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x4af240u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x4af244: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4af244u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4af248: 0xde221f00  ld          $v0, 0x1F00($s1)
    ctx->pc = 0x4af248u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 7936)));
    // 0x4af24c: 0x26472080  addiu       $a3, $s2, 0x2080
    ctx->pc = 0x4af24cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 8320));
    // 0x4af250: 0xae231f58  sw          $v1, 0x1F58($s1)
    ctx->pc = 0x4af250u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8024), GPR_U32(ctx, 3));
    // 0x4af254: 0x26431f80  addiu       $v1, $s2, 0x1F80
    ctx->pc = 0x4af254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 8064));
    // 0x4af258: 0xfe220ec0  sd          $v0, 0xEC0($s1)
    ctx->pc = 0x4af258u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 3776), GPR_U64(ctx, 2));
    // 0x4af25c: 0xae241f60  sw          $a0, 0x1F60($s1)
    ctx->pc = 0x4af25cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8032), GPR_U32(ctx, 4));
    // 0x4af260: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x4af260u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4af264: 0xae261f40  sw          $a2, 0x1F40($s1)
    ctx->pc = 0x4af264u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8000), GPR_U32(ctx, 6));
    // 0x4af268: 0x26420f40  addiu       $v0, $s2, 0xF40
    ctx->pc = 0x4af268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 3904));
    // 0x4af26c: 0xae252004  sw          $a1, 0x2004($s1)
    ctx->pc = 0x4af26cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8196), GPR_U32(ctx, 5));
    // 0x4af270: 0xae201008  sw          $zero, 0x1008($s1)
    ctx->pc = 0x4af270u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4104), GPR_U32(ctx, 0));
    // 0x4af274: 0xae201f08  sw          $zero, 0x1F08($s1)
    ctx->pc = 0x4af274u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 7944), GPR_U32(ctx, 0));
    // 0x4af278: 0xae200ec8  sw          $zero, 0xEC8($s1)
    ctx->pc = 0x4af278u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3784), GPR_U32(ctx, 0));
    // 0x4af27c: 0xae201f50  sw          $zero, 0x1F50($s1)
    ctx->pc = 0x4af27cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8016), GPR_U32(ctx, 0));
    // 0x4af280: 0xae201f54  sw          $zero, 0x1F54($s1)
    ctx->pc = 0x4af280u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8020), GPR_U32(ctx, 0));
    // 0x4af284: 0xae201f5c  sw          $zero, 0x1F5C($s1)
    ctx->pc = 0x4af284u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8028), GPR_U32(ctx, 0));
    // 0x4af288: 0xae201f44  sw          $zero, 0x1F44($s1)
    ctx->pc = 0x4af288u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8004), GPR_U32(ctx, 0));
    // 0x4af28c: 0xae201f48  sw          $zero, 0x1F48($s1)
    ctx->pc = 0x4af28cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8008), GPR_U32(ctx, 0));
    // 0x4af290: 0xae201f4c  sw          $zero, 0x1F4C($s1)
    ctx->pc = 0x4af290u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8012), GPR_U32(ctx, 0));
    // 0x4af294: 0xa2201f64  sb          $zero, 0x1F64($s1)
    ctx->pc = 0x4af294u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 8036), (uint8_t)GPR_U32(ctx, 0));
label_4af298:
    // 0x4af298: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x4af298u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4af29c: 0x78650010  lq          $a1, 0x10($v1)
    ctx->pc = 0x4af29cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x4af2a0: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x4af2a0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
    // 0x4af2a4: 0x7c450010  sq          $a1, 0x10($v0)
    ctx->pc = 0x4af2a4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 5));
    // 0x4af2a8: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x4af2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x4af2ac: 0x1467fffa  bne         $v1, $a3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4AF2ACu;
    {
        const bool branch_taken_0x4af2ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        ctx->pc = 0x4AF2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AF2ACu;
        // 0x4af2b0: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4af2ac) {
            ctx->pc = 0x4AF298u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4af298;
        }
    }
    ctx->pc = 0x4AF2B4u;
    // 0x4af2b4: 0xc127dfc  jal         func_49F7F0
    ctx->pc = 0x4AF2B4u;
    SET_GPR_U32(ctx, 31, 0x4AF2BCu);
    ctx->pc = 0x49F7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F7F0u, 0x4AF2B4u, 0x4AF2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AF2BCu;
label_4af2bc:
    // 0x4af2bc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4af2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x4af2c0: 0xc127dfc  jal         func_49F7F0
    ctx->pc = 0x4AF2C0u;
    SET_GPR_U32(ctx, 31, 0x4AF2C8u);
    ctx->pc = 0x4AF2C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AF2C0u;
    // 0x4af2c4: 0xae220e98  sw          $v0, 0xE98($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 3736), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F7F0u, 0x4AF2C0u, 0x4AF2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AF2C8u;
label_4af2c8:
    // 0x4af2c8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4af2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x4af2cc: 0xae201004  sw          $zero, 0x1004($s1)
    ctx->pc = 0x4af2ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4100), GPR_U32(ctx, 0));
    // 0x4af2d0: 0xc0bf694  jal         func_2FDA50
    ctx->pc = 0x4AF2D0u;
    SET_GPR_U32(ctx, 31, 0x4AF2D8u);
    ctx->pc = 0x4AF2D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AF2D0u;
    // 0x4af2d4: 0xae222008  sw          $v0, 0x2008($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8200), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDA50u, 0x4AF2D0u, 0x4AF2D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AF2D8u;
label_4af2d8:
    // 0x4af2d8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4af2d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4af2dc: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x4af2dcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4af2e0: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x4af2e0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4af2e4: 0x200582d  daddu       $t3, $s0, $zero
    ctx->pc = 0x4af2e4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4af2e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4af2e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4af2ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4af2ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4af2f0: 0x24070032  addiu       $a3, $zero, 0x32
    ctx->pc = 0x4af2f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x4af2f4: 0xc12baca  jal         func_4AEB28
    ctx->pc = 0x4AF2F4u;
    SET_GPR_U32(ctx, 31, 0x4AF2FCu);
    ctx->pc = 0x4AF2F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AF2F4u;
    // 0x4af2f8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AEB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AEB28u, 0x4AF2F4u, 0x4AF2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AF2FCu;
label_4af2fc:
    // 0x4af2fc: 0xc0bf6a0  jal         func_2FDA80
    ctx->pc = 0x4AF2FCu;
    SET_GPR_U32(ctx, 31, 0x4AF304u);
    ctx->pc = 0x2FDA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDA80u, 0x4AF2FCu, 0x4AF304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AF304u;
label_4af304:
    // 0x4af304: 0x8e241004  lw          $a0, 0x1004($s1)
    ctx->pc = 0x4af304u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4100)));
    // 0x4af308: 0x10800035  beqz        $a0, . + 4 + (0x35 << 2)
    ctx->pc = 0x4AF308u;
    {
        const bool branch_taken_0x4af308 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AF30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AF308u;
        // 0x4af30c: 0x3c020066  lui         $v0, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4af308) {
            ctx->pc = 0x4AF3E0u;
            goto label_4af3e0;
        }
    }
    ctx->pc = 0x4AF310u;
    // 0x4af310: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4af310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4af314: 0x2450ea40  addiu       $s0, $v0, -0x15C0
    ctx->pc = 0x4af314u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961728));
    // 0x4af318: 0xac44ea40  sw          $a0, -0x15C0($v0)
    ctx->pc = 0x4af318u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961728), GPR_U32(ctx, 4));
    // 0x4af31c: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x4af31cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x4af320: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4af320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4af324: 0x260500bf  addiu       $a1, $s0, 0xBF
    ctx->pc = 0x4af324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 191));
    // 0x4af328: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x4af328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4af32c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x4af32cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x4af330: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x4af330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x4af334: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x4af334u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x4af338: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x4af338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x4af33c: 0xc0bf916  jal         func_2FE458
    ctx->pc = 0x4AF33Cu;
    SET_GPR_U32(ctx, 31, 0x4AF344u);
    ctx->pc = 0x4AF340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AF33Cu;
    // 0x4af340: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE458u, 0x4AF33Cu, 0x4AF344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AF344u;
label_4af344:
    // 0x4af344: 0xc0bf694  jal         func_2FDA50
    ctx->pc = 0x4AF344u;
    SET_GPR_U32(ctx, 31, 0x4AF34Cu);
    ctx->pc = 0x2FDA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDA50u, 0x4AF344u, 0x4AF34Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AF34Cu;
label_4af34c:
    // 0x4af34c: 0x8f84b8e0  lw          $a0, -0x4720($gp)
    ctx->pc = 0x4af34cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949088)));
    // 0x4af350: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4af350u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4af354: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x4af354u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4af358: 0x240600c0  addiu       $a2, $zero, 0xC0
    ctx->pc = 0x4af358u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x4af35c: 0x2407003c  addiu       $a3, $zero, 0x3C
    ctx->pc = 0x4af35cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x4af360: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4af360u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4af364: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x4af364u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4af368: 0xc12baca  jal         func_4AEB28
    ctx->pc = 0x4AF368u;
    SET_GPR_U32(ctx, 31, 0x4AF370u);
    ctx->pc = 0x4AF36Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AF368u;
    // 0x4af36c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AEB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AEB28u, 0x4AF368u, 0x4AF370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AF370u;
label_4af370:
    // 0x4af370: 0xc0bf6a0  jal         func_2FDA80
    ctx->pc = 0x4AF370u;
    SET_GPR_U32(ctx, 31, 0x4AF378u);
    ctx->pc = 0x2FDA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDA80u, 0x4AF370u, 0x4AF378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AF378u;
label_4af378:
    // 0x4af378: 0xc0bf694  jal         func_2FDA50
    ctx->pc = 0x4AF378u;
    SET_GPR_U32(ctx, 31, 0x4AF380u);
    ctx->pc = 0x2FDA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDA50u, 0x4AF378u, 0x4AF380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AF380u;
label_4af380:
    // 0x4af380: 0x8e2b1004  lw          $t3, 0x1004($s1)
    ctx->pc = 0x4af380u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4100)));
    // 0x4af384: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4af384u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4af388: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x4af388u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4af38c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4af38cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4af390: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4af390u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4af394: 0x24070036  addiu       $a3, $zero, 0x36
    ctx->pc = 0x4af394u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x4af398: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4af398u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4af39c: 0xc12baca  jal         func_4AEB28
    ctx->pc = 0x4AF39Cu;
    SET_GPR_U32(ctx, 31, 0x4AF3A4u);
    ctx->pc = 0x4AF3A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AF39Cu;
    // 0x4af3a0: 0x262a1000  addiu       $t2, $s1, 0x1000 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 17), 4096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AEB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AEB28u, 0x4AF39Cu, 0x4AF3A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AF3A4u;
label_4af3a4:
    // 0x4af3a4: 0xc0bf6a0  jal         func_2FDA80
    ctx->pc = 0x4AF3A4u;
    SET_GPR_U32(ctx, 31, 0x4AF3ACu);
    ctx->pc = 0x2FDA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDA80u, 0x4AF3A4u, 0x4AF3ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AF3ACu;
label_4af3ac:
    // 0x4af3ac: 0x8e231000  lw          $v1, 0x1000($s1)
    ctx->pc = 0x4af3acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4096)));
    // 0x4af3b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4af3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4af3b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4af3b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4af3b8: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x4af3b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x4af3bc: 0x246601bc  addiu       $a2, $v1, 0x1BC
    ctx->pc = 0x4af3bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 444));
    // 0x4af3c0: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x4af3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x4af3c4: 0x24630024  addiu       $v1, $v1, 0x24
    ctx->pc = 0x4af3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 36));
    // 0x4af3c8: 0x2485203f  addiu       $a1, $a0, 0x203F
    ctx->pc = 0x4af3c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 8255));
    // 0x4af3cc: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4af3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4af3d0: 0xc0bf916  jal         func_2FE458
    ctx->pc = 0x4AF3D0u;
    SET_GPR_U32(ctx, 31, 0x4AF3D8u);
    ctx->pc = 0x4AF3D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AF3D0u;
    // 0x4af3d4: 0xae2601b4  sw          $a2, 0x1B4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 436), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE458u, 0x4AF3D0u, 0x4AF3D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AF3D8u;
label_4af3d8:
    // 0x4af3d8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4AF3D8u;
    {
        const bool branch_taken_0x4af3d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AF3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AF3D8u;
        // 0x4af3dc: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4af3d8) {
            ctx->pc = 0x4AF3E4u;
            goto label_4af3e4;
        }
    }
    ctx->pc = 0x4AF3E0u;
label_4af3e0:
    // 0x4af3e0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4af3e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4af3e4:
    // 0x4af3e4: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x4af3e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4af3e8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x4af3e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4af3ec: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4af3ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4af3f0: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x4af3f0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4af3f4: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x4af3f4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4af3f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4af3f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4af3fc: 0x3e00008  jr          $ra
    ctx->pc = 0x4AF3FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AF400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AF3FCu;
        // 0x4af400: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AF3FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AF404u;
    // 0x4af404: 0x0  nop
    ctx->pc = 0x4af404u;
    // NOP
    ctx->pc = 0x4af408u;
}
