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

// Function: sub_00183060
// Address: 0x183060 - 0x183890
void sub_00183060_0x183060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00183060_0x183060");
#endif

    switch (ctx->pc) {
        case 0x183080u: goto label_183080;
        case 0x183090u: goto label_183090;
        case 0x1830b0u: goto label_1830b0;
        case 0x1830f4u: goto label_1830f4;
        case 0x183160u: goto label_183160;
        case 0x1831acu: goto label_1831ac;
        case 0x1831c4u: goto label_1831c4;
        case 0x1831fcu: goto label_1831fc;
        case 0x183214u: goto label_183214;
        case 0x18324cu: goto label_18324c;
        case 0x183264u: goto label_183264;
        case 0x18329cu: goto label_18329c;
        case 0x1832b4u: goto label_1832b4;
        case 0x1832ecu: goto label_1832ec;
        case 0x183304u: goto label_183304;
        case 0x18333cu: goto label_18333c;
        case 0x183354u: goto label_183354;
        case 0x18338cu: goto label_18338c;
        case 0x1833a4u: goto label_1833a4;
        case 0x1833dcu: goto label_1833dc;
        case 0x1833f4u: goto label_1833f4;
        case 0x183444u: goto label_183444;
        case 0x183450u: goto label_183450;
        case 0x183460u: goto label_183460;
        case 0x183470u: goto label_183470;
        case 0x183480u: goto label_183480;
        case 0x183498u: goto label_183498;
        case 0x183510u: goto label_183510;
        case 0x183524u: goto label_183524;
        case 0x183538u: goto label_183538;
        case 0x183548u: goto label_183548;
        case 0x183560u: goto label_183560;
        case 0x1835c0u: goto label_1835c0;
        case 0x1835c8u: goto label_1835c8;
        case 0x1835d4u: goto label_1835d4;
        case 0x1835f0u: goto label_1835f0;
        case 0x183600u: goto label_183600;
        case 0x18360cu: goto label_18360c;
        case 0x183624u: goto label_183624;
        case 0x183638u: goto label_183638;
        case 0x183644u: goto label_183644;
        case 0x183654u: goto label_183654;
        case 0x183660u: goto label_183660;
        case 0x183670u: goto label_183670;
        case 0x18368cu: goto label_18368c;
        case 0x18369cu: goto label_18369c;
        case 0x1836b0u: goto label_1836b0;
        case 0x1836c0u: goto label_1836c0;
        case 0x183704u: goto label_183704;
        case 0x183710u: goto label_183710;
        case 0x183724u: goto label_183724;
        case 0x183730u: goto label_183730;
        case 0x183744u: goto label_183744;
        case 0x18375cu: goto label_18375c;
        case 0x18376cu: goto label_18376c;
        case 0x183778u: goto label_183778;
        case 0x183788u: goto label_183788;
        case 0x183794u: goto label_183794;
        case 0x1837a8u: goto label_1837a8;
        case 0x1837b8u: goto label_1837b8;
        case 0x1837c4u: goto label_1837c4;
        case 0x1837d4u: goto label_1837d4;
        case 0x1837e0u: goto label_1837e0;
        case 0x1837f0u: goto label_1837f0;
        case 0x183808u: goto label_183808;
        case 0x18381cu: goto label_18381c;
        case 0x18382cu: goto label_18382c;
        case 0x18383cu: goto label_18383c;
        case 0x183854u: goto label_183854;
        case 0x183860u: goto label_183860;
        default: break;
    }

    ctx->pc = 0x183060u;

    // 0x183060: 0x24633f70  addiu       $v1, $v1, 0x3F70
    ctx->pc = 0x183060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16240));
    // 0x183064: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x183064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x183068: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x183068u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x18306c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x18306cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x183070: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x183070u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x183074: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x183074u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x183078: 0xc056094  jal         func_158250
    ctx->pc = 0x183078u;
    SET_GPR_U32(ctx, 31, 0x183080u);
    ctx->pc = 0x158250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158250u, 0x183078u, 0x183080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183080u;
label_183080:
    // 0x183080: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x183080u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x183084: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x183084u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183088: 0xc055950  jal         func_156540
    ctx->pc = 0x183088u;
    SET_GPR_U32(ctx, 31, 0x183090u);
    ctx->pc = 0x156540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156540u, 0x183088u, 0x183090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183090u;
label_183090:
    // 0x183090: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x183090u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x183094: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x183094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x183098: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x183098u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x18309c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18309Cu;
    {
        const bool branch_taken_0x18309c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x18309c) {
            ctx->pc = 0x1830B0u;
            goto label_1830b0;
        }
    }
    ctx->pc = 0x1830A4u;
    // 0x1830a4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1830a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1830a8: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x1830A8u;
    SET_GPR_U32(ctx, 31, 0x1830B0u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x1830A8u, 0x1830B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1830B0u;
label_1830b0:
    // 0x1830b0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1830b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1830b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1830b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1830b8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1830b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1830bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1830BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1830BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1830C4u;
    // 0x1830c4: 0x0  nop
    ctx->pc = 0x1830c4u;
    // NOP
    // 0x1830c8: 0x0  nop
    ctx->pc = 0x1830c8u;
    // NOP
    // 0x1830cc: 0x0  nop
    ctx->pc = 0x1830ccu;
    // NOP
    // 0x1830d0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1830d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1830d4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1830d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1830d8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1830d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1830dc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1830dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1830e0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1830e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1830e4: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x1830e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
    // 0x1830e8: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x1830e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1830ec: 0xc055974  jal         func_1565D0
    ctx->pc = 0x1830ECu;
    SET_GPR_U32(ctx, 31, 0x1830F4u);
    ctx->pc = 0x1565D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1565D0u, 0x1830ECu, 0x1830F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1830F4u;
label_1830f4:
    // 0x1830f4: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x1830f4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1830f8: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x1830f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x1830fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1830fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x183100: 0x146200bd  bne         $v1, $v0, . + 4 + (0xBD << 2)
    ctx->pc = 0x183100u;
    {
        const bool branch_taken_0x183100 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x183100) {
            ctx->pc = 0x1833F8u;
            goto label_1833f8;
        }
    }
    ctx->pc = 0x183108u;
    // 0x183108: 0x27a30068  addiu       $v1, $sp, 0x68
    ctx->pc = 0x183108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x18310c: 0xdf829120  ld          $v0, -0x6EE0($gp)
    ctx->pc = 0x18310cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294938912)));
    // 0x183110: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x183110u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x183114: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x183114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x183118: 0xdf829128  ld          $v0, -0x6ED8($gp)
    ctx->pc = 0x183118u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294938920)));
    // 0x18311c: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x18311cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x183120: 0x2782b6c0  addiu       $v0, $gp, -0x4940
    ctx->pc = 0x183120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948544));
    // 0x183124: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x183124u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x183128: 0x2782b6c0  addiu       $v0, $gp, -0x4940
    ctx->pc = 0x183128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948544));
    // 0x18312c: 0xafa20054  sw          $v0, 0x54($sp)
    ctx->pc = 0x18312cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
    // 0x183130: 0x2782b6c0  addiu       $v0, $gp, -0x4940
    ctx->pc = 0x183130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948544));
    // 0x183134: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x183134u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
    // 0x183138: 0x2782b6c0  addiu       $v0, $gp, -0x4940
    ctx->pc = 0x183138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948544));
    // 0x18313c: 0xafa2005c  sw          $v0, 0x5C($sp)
    ctx->pc = 0x18313cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
    // 0x183140: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x183140u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183144: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x183144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x183148: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x183148u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18314c: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x18314cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x183150: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x183150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x183154: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x183154u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x183158: 0xc056708  jal         func_159C20
    ctx->pc = 0x183158u;
    SET_GPR_U32(ctx, 31, 0x183160u);
    ctx->pc = 0x159C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159C20u, 0x183158u, 0x183160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183160u;
label_183160:
    // 0x183160: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x183160u;
    {
        const bool branch_taken_0x183160 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x183160) {
            ctx->pc = 0x183178u;
            goto label_183178;
        }
    }
    ctx->pc = 0x183168u;
    // 0x183168: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x183168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x18316c: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x18316cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x183170: 0x144000a1  bnez        $v0, . + 4 + (0xA1 << 2)
    ctx->pc = 0x183170u;
    {
        const bool branch_taken_0x183170 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x183170) {
            ctx->pc = 0x1833F8u;
            goto label_1833f8;
        }
    }
    ctx->pc = 0x183178u;
label_183178:
    // 0x183178: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x183178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x18317c: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x18317cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x183180: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x183180u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x183184: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x183184u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x183188: 0x24a55080  addiu       $a1, $a1, 0x5080
    ctx->pc = 0x183188u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20608));
    // 0x18318c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x18318cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x183190: 0x27a70068  addiu       $a3, $sp, 0x68
    ctx->pc = 0x183190u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x183194: 0x27a80060  addiu       $t0, $sp, 0x60
    ctx->pc = 0x183194u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x183198: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x183198u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18319c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x18319cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1831a0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1831a0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1831a4: 0xc08bc88  jal         func_22F220
    ctx->pc = 0x1831A4u;
    SET_GPR_U32(ctx, 31, 0x1831ACu);
    ctx->pc = 0x22F220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F220u, 0x1831A4u, 0x1831ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1831ACu;
label_1831ac:
    // 0x1831ac: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1831acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1831b0: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1831b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1831b4: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x1831b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x1831b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1831b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1831bc: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1831BCu;
    SET_GPR_U32(ctx, 31, 0x1831C4u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1831BCu, 0x1831C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1831C4u;
label_1831c4:
    // 0x1831c4: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x1831c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x1831c8: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x1831c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x1831cc: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1831ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1831d0: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x1831d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1831d4: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1831d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1831d8: 0x24a55090  addiu       $a1, $a1, 0x5090
    ctx->pc = 0x1831d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20624));
    // 0x1831dc: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x1831dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1831e0: 0x27a70068  addiu       $a3, $sp, 0x68
    ctx->pc = 0x1831e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x1831e4: 0x27a80060  addiu       $t0, $sp, 0x60
    ctx->pc = 0x1831e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1831e8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1831e8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1831ec: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1831ecu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1831f0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1831f0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1831f4: 0xc08bc88  jal         func_22F220
    ctx->pc = 0x1831F4u;
    SET_GPR_U32(ctx, 31, 0x1831FCu);
    ctx->pc = 0x22F220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F220u, 0x1831F4u, 0x1831FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1831FCu;
label_1831fc:
    // 0x1831fc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1831fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183200: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x183200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x183204: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x183204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x183208: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x183208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18320c: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x18320Cu;
    SET_GPR_U32(ctx, 31, 0x183214u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x18320Cu, 0x183214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183214u;
label_183214:
    // 0x183214: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x183214u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x183218: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x183218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x18321c: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x18321cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x183220: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x183220u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x183224: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x183224u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x183228: 0x24a550a0  addiu       $a1, $a1, 0x50A0
    ctx->pc = 0x183228u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20640));
    // 0x18322c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x18322cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x183230: 0x27a70068  addiu       $a3, $sp, 0x68
    ctx->pc = 0x183230u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x183234: 0x27a80060  addiu       $t0, $sp, 0x60
    ctx->pc = 0x183234u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x183238: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x183238u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18323c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x18323cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183240: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x183240u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183244: 0xc08bc88  jal         func_22F220
    ctx->pc = 0x183244u;
    SET_GPR_U32(ctx, 31, 0x18324Cu);
    ctx->pc = 0x22F220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F220u, 0x183244u, 0x18324Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18324Cu;
label_18324c:
    // 0x18324c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x18324cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183250: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x183250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x183254: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x183254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x183258: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x183258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18325c: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x18325Cu;
    SET_GPR_U32(ctx, 31, 0x183264u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x18325Cu, 0x183264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183264u;
label_183264:
    // 0x183264: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x183264u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x183268: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x183268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x18326c: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x18326cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x183270: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x183270u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x183274: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x183274u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x183278: 0x24a550b0  addiu       $a1, $a1, 0x50B0
    ctx->pc = 0x183278u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20656));
    // 0x18327c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x18327cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x183280: 0x27a70068  addiu       $a3, $sp, 0x68
    ctx->pc = 0x183280u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x183284: 0x27a80060  addiu       $t0, $sp, 0x60
    ctx->pc = 0x183284u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x183288: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x183288u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18328c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x18328cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183290: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x183290u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183294: 0xc08bc88  jal         func_22F220
    ctx->pc = 0x183294u;
    SET_GPR_U32(ctx, 31, 0x18329Cu);
    ctx->pc = 0x22F220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F220u, 0x183294u, 0x18329Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18329Cu;
label_18329c:
    // 0x18329c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x18329cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1832a0: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1832a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1832a4: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x1832a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x1832a8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1832a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1832ac: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1832ACu;
    SET_GPR_U32(ctx, 31, 0x1832B4u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1832ACu, 0x1832B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1832B4u;
label_1832b4:
    // 0x1832b4: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x1832b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x1832b8: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x1832b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x1832bc: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1832bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1832c0: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x1832c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1832c4: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1832c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1832c8: 0x24a55080  addiu       $a1, $a1, 0x5080
    ctx->pc = 0x1832c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20608));
    // 0x1832cc: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x1832ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1832d0: 0x27a70068  addiu       $a3, $sp, 0x68
    ctx->pc = 0x1832d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x1832d4: 0x27a80060  addiu       $t0, $sp, 0x60
    ctx->pc = 0x1832d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1832d8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1832d8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1832dc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1832dcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1832e0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1832e0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1832e4: 0xc08bc88  jal         func_22F220
    ctx->pc = 0x1832E4u;
    SET_GPR_U32(ctx, 31, 0x1832ECu);
    ctx->pc = 0x22F220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F220u, 0x1832E4u, 0x1832ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1832ECu;
label_1832ec:
    // 0x1832ec: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1832ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1832f0: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1832f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1832f4: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x1832f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x1832f8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1832f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1832fc: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1832FCu;
    SET_GPR_U32(ctx, 31, 0x183304u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1832FCu, 0x183304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183304u;
label_183304:
    // 0x183304: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x183304u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x183308: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x183308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x18330c: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x18330cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x183310: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x183310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x183314: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x183314u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x183318: 0x24a55090  addiu       $a1, $a1, 0x5090
    ctx->pc = 0x183318u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20624));
    // 0x18331c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x18331cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x183320: 0x27a70068  addiu       $a3, $sp, 0x68
    ctx->pc = 0x183320u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x183324: 0x27a80060  addiu       $t0, $sp, 0x60
    ctx->pc = 0x183324u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x183328: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x183328u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18332c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x18332cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183330: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x183330u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183334: 0xc08bc88  jal         func_22F220
    ctx->pc = 0x183334u;
    SET_GPR_U32(ctx, 31, 0x18333Cu);
    ctx->pc = 0x22F220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F220u, 0x183334u, 0x18333Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18333Cu;
label_18333c:
    // 0x18333c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x18333cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183340: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x183340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x183344: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x183344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x183348: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x183348u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x18334c: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x18334Cu;
    SET_GPR_U32(ctx, 31, 0x183354u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x18334Cu, 0x183354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183354u;
label_183354:
    // 0x183354: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x183354u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x183358: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x183358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x18335c: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x18335cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x183360: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x183360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x183364: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x183364u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x183368: 0x24a550a0  addiu       $a1, $a1, 0x50A0
    ctx->pc = 0x183368u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20640));
    // 0x18336c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x18336cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x183370: 0x27a70068  addiu       $a3, $sp, 0x68
    ctx->pc = 0x183370u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x183374: 0x27a80060  addiu       $t0, $sp, 0x60
    ctx->pc = 0x183374u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x183378: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x183378u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18337c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x18337cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183380: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x183380u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183384: 0xc08bc88  jal         func_22F220
    ctx->pc = 0x183384u;
    SET_GPR_U32(ctx, 31, 0x18338Cu);
    ctx->pc = 0x22F220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F220u, 0x183384u, 0x18338Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18338Cu;
label_18338c:
    // 0x18338c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x18338cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183390: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x183390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x183394: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x183394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x183398: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x183398u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x18339c: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x18339Cu;
    SET_GPR_U32(ctx, 31, 0x1833A4u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x18339Cu, 0x1833A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1833A4u;
label_1833a4:
    // 0x1833a4: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x1833a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x1833a8: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x1833a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x1833ac: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1833acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1833b0: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x1833b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1833b4: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1833b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1833b8: 0x24a550b0  addiu       $a1, $a1, 0x50B0
    ctx->pc = 0x1833b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20656));
    // 0x1833bc: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x1833bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1833c0: 0x27a70068  addiu       $a3, $sp, 0x68
    ctx->pc = 0x1833c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x1833c4: 0x27a80060  addiu       $t0, $sp, 0x60
    ctx->pc = 0x1833c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1833c8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1833c8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1833cc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1833ccu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1833d0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1833d0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1833d4: 0xc08bc88  jal         func_22F220
    ctx->pc = 0x1833D4u;
    SET_GPR_U32(ctx, 31, 0x1833DCu);
    ctx->pc = 0x22F220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F220u, 0x1833D4u, 0x1833DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1833DCu;
label_1833dc:
    // 0x1833dc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1833dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1833e0: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1833e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1833e4: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x1833e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x1833e8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1833e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1833ec: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1833ECu;
    SET_GPR_U32(ctx, 31, 0x1833F4u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1833ECu, 0x1833F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1833F4u;
label_1833f4:
    // 0x1833f4: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x1833f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
label_1833f8:
    // 0x1833f8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1833f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1833fc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1833fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x183400: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x183400u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x183404: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x183404u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x183408: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x183408u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18340c: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x18340cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x183410: 0x3e00008  jr          $ra
    ctx->pc = 0x183410u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x183410u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x183418u;
    // 0x183418: 0x0  nop
    ctx->pc = 0x183418u;
    // NOP
    // 0x18341c: 0x0  nop
    ctx->pc = 0x18341cu;
    // NOP
    // 0x183420: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x183420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x183424: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x183424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x183428: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x183428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x18342c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18342cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x183430: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x183430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x183434: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x183434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x183438: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x183438u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x18343c: 0xc090864  jal         func_242190
    ctx->pc = 0x18343Cu;
    SET_GPR_U32(ctx, 31, 0x183444u);
    ctx->pc = 0x242190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242190u, 0x18343Cu, 0x183444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183444u;
label_183444:
    // 0x183444: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x183444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183448: 0xc090868  jal         func_2421A0
    ctx->pc = 0x183448u;
    SET_GPR_U32(ctx, 31, 0x183450u);
    ctx->pc = 0x2421A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2421A0u, 0x183448u, 0x183450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183450u;
label_183450:
    // 0x183450: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x183450u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183454: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x183454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183458: 0xc09090c  jal         func_242430
    ctx->pc = 0x183458u;
    SET_GPR_U32(ctx, 31, 0x183460u);
    ctx->pc = 0x242430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242430u, 0x183458u, 0x183460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183460u;
label_183460:
    // 0x183460: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x183460u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183464: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x183464u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183468: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x183468u;
    {
        const bool branch_taken_0x183468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x183468) {
            ctx->pc = 0x18353Cu;
            goto label_18353c;
        }
    }
    ctx->pc = 0x183470u;
label_183470:
    // 0x183470: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x183470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183474: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x183474u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183478: 0xc04a9c0  jal         func_12A700
    ctx->pc = 0x183478u;
    SET_GPR_U32(ctx, 31, 0x183480u);
    ctx->pc = 0x12A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A700u, 0x183478u, 0x183480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183480u;
label_183480:
    // 0x183480: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x183480u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x183484: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x183484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x183488: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x183488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x18348c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x18348cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183490: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x183490u;
    SET_GPR_U32(ctx, 31, 0x183498u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x183490u, 0x183498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183498u;
label_183498:
    // 0x183498: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x183498u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18349c: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x18349cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x1834a0: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1834a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1834a4: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1834A4u;
    {
        const bool branch_taken_0x1834a4 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x1834a4) {
            ctx->pc = 0x1834C0u;
            goto label_1834c0;
        }
    }
    ctx->pc = 0x1834ACu;
    // 0x1834ac: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x1834acu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1834b0: 0x0  nop
    ctx->pc = 0x1834b0u;
    // NOP
    // 0x1834b4: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x1834b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1834b8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1834B8u;
    {
        const bool branch_taken_0x1834b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1834b8) {
            ctx->pc = 0x1834DCu;
            goto label_1834dc;
        }
    }
    ctx->pc = 0x1834C0u;
label_1834c0:
    // 0x1834c0: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x1834c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x1834c4: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x1834c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x1834c8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1834c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1834cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1834ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1834d0: 0x0  nop
    ctx->pc = 0x1834d0u;
    // NOP
    // 0x1834d4: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x1834d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1834d8: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1834d8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1834dc:
    // 0x1834dc: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x1834dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x1834e0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1834e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1834e4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1834e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1834e8: 0x0  nop
    ctx->pc = 0x1834e8u;
    // NOP
    // 0x1834ec: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1834ecu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1834f0: 0x46021b1c  madd.s      $f12, $f3, $f2
    ctx->pc = 0x1834f0u;
    ctx->f[12] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x1834f4: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1834f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1834f8: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x1834f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x1834fc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1834fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x183500: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x183500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x183504: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x183504u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183508: 0xc08c208  jal         func_230820
    ctx->pc = 0x183508u;
    SET_GPR_U32(ctx, 31, 0x183510u);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x183508u, 0x183510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183510u;
label_183510:
    // 0x183510: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x183510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x183514: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x183514u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x183518: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x183518u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18351c: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x18351Cu;
    SET_GPR_U32(ctx, 31, 0x183524u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x18351Cu, 0x183524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183524u;
label_183524:
    // 0x183524: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x183524u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x183528: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x183528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18352c: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x18352cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x183530: 0xc08c258  jal         func_230960
    ctx->pc = 0x183530u;
    SET_GPR_U32(ctx, 31, 0x183538u);
    ctx->pc = 0x230960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230960u, 0x183530u, 0x183538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183538u;
label_183538:
    // 0x183538: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x183538u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_18353c:
    // 0x18353c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x18353cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183540: 0xc044598  jal         func_111660
    ctx->pc = 0x183540u;
    SET_GPR_U32(ctx, 31, 0x183548u);
    ctx->pc = 0x111660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111660u, 0x183540u, 0x183548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183548u;
label_183548:
    // 0x183548: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x183548u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x18354c: 0x1440ffc8  bnez        $v0, . + 4 + (-0x38 << 2)
    ctx->pc = 0x18354Cu;
    {
        const bool branch_taken_0x18354c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18354c) {
            ctx->pc = 0x183470u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_183470;
        }
    }
    ctx->pc = 0x183554u;
    // 0x183554: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x183554u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x183558: 0xc055a84  jal         func_156A10
    ctx->pc = 0x183558u;
    SET_GPR_U32(ctx, 31, 0x183560u);
    ctx->pc = 0x156A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156A10u, 0x183558u, 0x183560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183560u;
label_183560:
    // 0x183560: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x183560u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x183564: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x183564u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x183568: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x183568u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18356c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18356cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x183570: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x183570u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x183574: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x183574u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x183578: 0x3e00008  jr          $ra
    ctx->pc = 0x183578u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x183578u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x183580u;
    // 0x183580: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x183580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x183584: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x183584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x183588: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x183588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x18358c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x18358cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x183590: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x183590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x183594: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x183594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x183598: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x183598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x18359c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18359cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1835a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1835a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1835a4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1835a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1835a8: 0xafa40090  sw          $a0, 0x90($sp)
    ctx->pc = 0x1835a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 4));
    // 0x1835ac: 0xa3a500a0  sb          $a1, 0xA0($sp)
    ctx->pc = 0x1835acu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 5));
    // 0x1835b0: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x1835b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1835b4: 0x93a500a0  lbu         $a1, 0xA0($sp)
    ctx->pc = 0x1835b4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1835b8: 0xc055a78  jal         func_1569E0
    ctx->pc = 0x1835B8u;
    SET_GPR_U32(ctx, 31, 0x1835C0u);
    ctx->pc = 0x1569E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1569E0u, 0x1835B8u, 0x1835C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1835C0u;
label_1835c0:
    // 0x1835c0: 0xc090864  jal         func_242190
    ctx->pc = 0x1835C0u;
    SET_GPR_U32(ctx, 31, 0x1835C8u);
    ctx->pc = 0x242190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242190u, 0x1835C0u, 0x1835C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1835C8u;
label_1835c8:
    // 0x1835c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1835c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1835cc: 0xc090868  jal         func_2421A0
    ctx->pc = 0x1835CCu;
    SET_GPR_U32(ctx, 31, 0x1835D4u);
    ctx->pc = 0x2421A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2421A0u, 0x1835CCu, 0x1835D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1835D4u;
label_1835d4:
    // 0x1835d4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1835d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1835d8: 0x93a200a0  lbu         $v0, 0xA0($sp)
    ctx->pc = 0x1835d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1835dc: 0x1440006f  bnez        $v0, . + 4 + (0x6F << 2)
    ctx->pc = 0x1835DCu;
    {
        const bool branch_taken_0x1835dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1835dc) {
            ctx->pc = 0x18379Cu;
            goto label_18379c;
        }
    }
    ctx->pc = 0x1835E4u;
    // 0x1835e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1835e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1835e8: 0xc090914  jal         func_242450
    ctx->pc = 0x1835E8u;
    SET_GPR_U32(ctx, 31, 0x1835F0u);
    ctx->pc = 0x242450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242450u, 0x1835E8u, 0x1835F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1835F0u;
label_1835f0:
    // 0x1835f0: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1835f0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1835f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1835f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1835f8: 0xc09090c  jal         func_242430
    ctx->pc = 0x1835F8u;
    SET_GPR_U32(ctx, 31, 0x183600u);
    ctx->pc = 0x242430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242430u, 0x1835F8u, 0x183600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183600u;
label_183600:
    // 0x183600: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x183600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183604: 0xc044598  jal         func_111660
    ctx->pc = 0x183604u;
    SET_GPR_U32(ctx, 31, 0x18360Cu);
    ctx->pc = 0x111660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111660u, 0x183604u, 0x18360Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18360Cu;
label_18360c:
    // 0x18360c: 0x2e2182b  sltu        $v1, $s7, $v0
    ctx->pc = 0x18360cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x183610: 0x14600093  bnez        $v1, . + 4 + (0x93 << 2)
    ctx->pc = 0x183610u;
    {
        const bool branch_taken_0x183610 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x183610) {
            ctx->pc = 0x183860u;
            goto label_183860;
        }
    }
    ctx->pc = 0x183618u;
    // 0x183618: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x183618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18361c: 0xc090954  jal         func_242550
    ctx->pc = 0x18361Cu;
    SET_GPR_U32(ctx, 31, 0x183624u);
    ctx->pc = 0x242550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242550u, 0x18361Cu, 0x183624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183624u;
label_183624:
    // 0x183624: 0x1040008e  beqz        $v0, . + 4 + (0x8E << 2)
    ctx->pc = 0x183624u;
    {
        const bool branch_taken_0x183624 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x183624) {
            ctx->pc = 0x183860u;
            goto label_183860;
        }
    }
    ctx->pc = 0x18362Cu;
    // 0x18362c: 0x8f84baa8  lw          $a0, -0x4558($gp)
    ctx->pc = 0x18362cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949544)));
    // 0x183630: 0xc0412dc  jal         func_104B70
    ctx->pc = 0x183630u;
    SET_GPR_U32(ctx, 31, 0x183638u);
    ctx->pc = 0x104B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104B70u, 0x183630u, 0x183638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183638u;
label_183638:
    // 0x183638: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x183638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18363c: 0xc090590  jal         func_241640
    ctx->pc = 0x18363Cu;
    SET_GPR_U32(ctx, 31, 0x183644u);
    ctx->pc = 0x241640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241640u, 0x18363Cu, 0x183644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183644u;
label_183644:
    // 0x183644: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x183644u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183648: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x183648u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18364c: 0xc090954  jal         func_242550
    ctx->pc = 0x18364Cu;
    SET_GPR_U32(ctx, 31, 0x183654u);
    ctx->pc = 0x242550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242550u, 0x18364Cu, 0x183654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183654u;
label_183654:
    // 0x183654: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x183654u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183658: 0xc08551c  jal         func_215470
    ctx->pc = 0x183658u;
    SET_GPR_U32(ctx, 31, 0x183660u);
    ctx->pc = 0x215470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215470u, 0x183658u, 0x183660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183660u;
label_183660:
    // 0x183660: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x183660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183664: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x183664u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183668: 0xc09158c  jal         func_245630
    ctx->pc = 0x183668u;
    SET_GPR_U32(ctx, 31, 0x183670u);
    ctx->pc = 0x245630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245630u, 0x183668u, 0x183670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183670u;
label_183670:
    // 0x183670: 0x1040007b  beqz        $v0, . + 4 + (0x7B << 2)
    ctx->pc = 0x183670u;
    {
        const bool branch_taken_0x183670 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x183670) {
            ctx->pc = 0x183860u;
            goto label_183860;
        }
    }
    ctx->pc = 0x183678u;
    // 0x183678: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x183678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x18367c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x18367cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x183680: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x183680u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x183684: 0xc085538  jal         func_2154E0
    ctx->pc = 0x183684u;
    SET_GPR_U32(ctx, 31, 0x18368Cu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x183684u, 0x18368Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18368Cu;
label_18368c:
    // 0x18368c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x18368cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183690: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x183690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183694: 0xc040aa8  jal         func_102AA0
    ctx->pc = 0x183694u;
    SET_GPR_U32(ctx, 31, 0x18369Cu);
    ctx->pc = 0x102AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AA0u, 0x183694u, 0x18369Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18369Cu;
label_18369c:
    // 0x18369c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x18369cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1836a0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1836a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1836a4: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1836a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1836a8: 0xc040a90  jal         func_102A40
    ctx->pc = 0x1836A8u;
    SET_GPR_U32(ctx, 31, 0x1836B0u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x1836A8u, 0x1836B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1836B0u;
label_1836b0:
    // 0x1836b0: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1836b0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1836b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1836b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1836b8: 0xc090968  jal         func_2425A0
    ctx->pc = 0x1836B8u;
    SET_GPR_U32(ctx, 31, 0x1836C0u);
    ctx->pc = 0x2425A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2425A0u, 0x1836B8u, 0x1836C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1836C0u;
label_1836c0:
    // 0x1836c0: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1836C0u;
    {
        const bool branch_taken_0x1836c0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1836c0) {
            ctx->pc = 0x1836DCu;
            goto label_1836dc;
        }
    }
    ctx->pc = 0x1836C8u;
    // 0x1836c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1836c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1836cc: 0x0  nop
    ctx->pc = 0x1836ccu;
    // NOP
    // 0x1836d0: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x1836d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1836d4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1836D4u;
    {
        const bool branch_taken_0x1836d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1836d4) {
            ctx->pc = 0x1836F8u;
            goto label_1836f8;
        }
    }
    ctx->pc = 0x1836DCu;
label_1836dc:
    // 0x1836dc: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1836dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1836e0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1836e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1836e4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1836e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1836e8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1836e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1836ec: 0x0  nop
    ctx->pc = 0x1836ecu;
    // NOP
    // 0x1836f0: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x1836f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1836f4: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x1836f4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_1836f8:
    // 0x1836f8: 0x8ee40000  lw          $a0, 0x0($s7)
    ctx->pc = 0x1836f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x1836fc: 0xc094dbc  jal         func_2536F0
    ctx->pc = 0x1836FCu;
    SET_GPR_U32(ctx, 31, 0x183704u);
    ctx->pc = 0x2536F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2536F0u, 0x1836FCu, 0x183704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183704u;
label_183704:
    // 0x183704: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x183704u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183708: 0xc09097c  jal         func_2425F0
    ctx->pc = 0x183708u;
    SET_GPR_U32(ctx, 31, 0x183710u);
    ctx->pc = 0x2425F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2425F0u, 0x183708u, 0x183710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183710u;
label_183710:
    // 0x183710: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x183710u;
    {
        const bool branch_taken_0x183710 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x183710) {
            ctx->pc = 0x183788u;
            goto label_183788;
        }
    }
    ctx->pc = 0x183718u;
    // 0x183718: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x183718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18371c: 0xc090954  jal         func_242550
    ctx->pc = 0x18371Cu;
    SET_GPR_U32(ctx, 31, 0x183724u);
    ctx->pc = 0x242550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242550u, 0x18371Cu, 0x183724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183724u;
label_183724:
    // 0x183724: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x183724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183728: 0xc0913e4  jal         func_244F90
    ctx->pc = 0x183728u;
    SET_GPR_U32(ctx, 31, 0x183730u);
    ctx->pc = 0x244F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244F90u, 0x183728u, 0x183730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183730u;
label_183730:
    // 0x183730: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x183730u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183734: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x183734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183738: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x183738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x18373c: 0xc085538  jal         func_2154E0
    ctx->pc = 0x18373Cu;
    SET_GPR_U32(ctx, 31, 0x183744u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x18373Cu, 0x183744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183744u;
label_183744:
    // 0x183744: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x183744u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183748: 0x10120008  beq         $zero, $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x183748u;
    {
        const bool branch_taken_0x183748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 18));
        if (branch_taken_0x183748) {
            ctx->pc = 0x18376Cu;
            goto label_18376c;
        }
    }
    ctx->pc = 0x183750u;
    // 0x183750: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x183750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183754: 0xc090954  jal         func_242550
    ctx->pc = 0x183754u;
    SET_GPR_U32(ctx, 31, 0x18375Cu);
    ctx->pc = 0x242550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242550u, 0x183754u, 0x18375Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18375Cu;
label_18375c:
    // 0x18375c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x18375cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183760: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x183760u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183764: 0xc091a3c  jal         func_2468F0
    ctx->pc = 0x183764u;
    SET_GPR_U32(ctx, 31, 0x18376Cu);
    ctx->pc = 0x2468F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2468F0u, 0x183764u, 0x18376Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18376Cu;
label_18376c:
    // 0x18376c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18376cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183770: 0xc090954  jal         func_242550
    ctx->pc = 0x183770u;
    SET_GPR_U32(ctx, 31, 0x183778u);
    ctx->pc = 0x242550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242550u, 0x183770u, 0x183778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183778u;
label_183778:
    // 0x183778: 0x8f84baa8  lw          $a0, -0x4558($gp)
    ctx->pc = 0x183778u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949544)));
    // 0x18377c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x18377cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183780: 0xc041018  jal         func_104060
    ctx->pc = 0x183780u;
    SET_GPR_U32(ctx, 31, 0x183788u);
    ctx->pc = 0x104060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104060u, 0x183780u, 0x183788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183788u;
label_183788:
    // 0x183788: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x183788u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18378c: 0xc0909a0  jal         func_242680
    ctx->pc = 0x18378Cu;
    SET_GPR_U32(ctx, 31, 0x183794u);
    ctx->pc = 0x242680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242680u, 0x18378Cu, 0x183794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183794u;
label_183794:
    // 0x183794: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x183794u;
    {
        const bool branch_taken_0x183794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x183794) {
            ctx->pc = 0x183860u;
            goto label_183860;
        }
    }
    ctx->pc = 0x18379Cu;
label_18379c:
    // 0x18379c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18379cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1837a0: 0xc090968  jal         func_2425A0
    ctx->pc = 0x1837A0u;
    SET_GPR_U32(ctx, 31, 0x1837A8u);
    ctx->pc = 0x2425A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2425A0u, 0x1837A0u, 0x1837A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1837A8u;
label_1837a8:
    // 0x1837a8: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x1837A8u;
    {
        const bool branch_taken_0x1837a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1837a8) {
            ctx->pc = 0x183844u;
            goto label_183844;
        }
    }
    ctx->pc = 0x1837B0u;
    // 0x1837b0: 0xc0434e0  jal         func_10D380
    ctx->pc = 0x1837B0u;
    SET_GPR_U32(ctx, 31, 0x1837B8u);
    ctx->pc = 0x10D380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D380u, 0x1837B0u, 0x1837B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1837B8u;
label_1837b8:
    // 0x1837b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1837b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1837bc: 0xc0434d8  jal         func_10D360
    ctx->pc = 0x1837BCu;
    SET_GPR_U32(ctx, 31, 0x1837C4u);
    ctx->pc = 0x10D360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D360u, 0x1837BCu, 0x1837C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1837C4u;
label_1837c4:
    // 0x1837c4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1837c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1837c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1837c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1837cc: 0xc090954  jal         func_242550
    ctx->pc = 0x1837CCu;
    SET_GPR_U32(ctx, 31, 0x1837D4u);
    ctx->pc = 0x242550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242550u, 0x1837CCu, 0x1837D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1837D4u;
label_1837d4:
    // 0x1837d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1837d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1837d8: 0xc09138c  jal         func_244E30
    ctx->pc = 0x1837D8u;
    SET_GPR_U32(ctx, 31, 0x1837E0u);
    ctx->pc = 0x244E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244E30u, 0x1837D8u, 0x1837E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1837E0u;
label_1837e0:
    // 0x1837e0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1837e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1837e4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1837e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1837e8: 0xc044da4  jal         func_113690
    ctx->pc = 0x1837E8u;
    SET_GPR_U32(ctx, 31, 0x1837F0u);
    ctx->pc = 0x113690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113690u, 0x1837E8u, 0x1837F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1837F0u;
label_1837f0:
    // 0x1837f0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1837f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1837f4: 0x10110017  beq         $zero, $s1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1837F4u;
    {
        const bool branch_taken_0x1837f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 17));
        if (branch_taken_0x1837f4) {
            ctx->pc = 0x183854u;
            goto label_183854;
        }
    }
    ctx->pc = 0x1837FCu;
    // 0x1837fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1837fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183800: 0xc0457e8  jal         func_115FA0
    ctx->pc = 0x183800u;
    SET_GPR_U32(ctx, 31, 0x183808u);
    ctx->pc = 0x115FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115FA0u, 0x183800u, 0x183808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183808u;
label_183808:
    // 0x183808: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x183808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18380c: 0x2405045f  addiu       $a1, $zero, 0x45F
    ctx->pc = 0x18380cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1119));
    // 0x183810: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x183810u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x183814: 0xc040ab0  jal         func_102AC0
    ctx->pc = 0x183814u;
    SET_GPR_U32(ctx, 31, 0x18381Cu);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x183814u, 0x18381Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18381Cu;
label_18381c:
    // 0x18381c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18381cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183820: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x183820u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183824: 0xc09095c  jal         func_242570
    ctx->pc = 0x183824u;
    SET_GPR_U32(ctx, 31, 0x18382Cu);
    ctx->pc = 0x242570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242570u, 0x183824u, 0x18382Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18382Cu;
label_18382c:
    // 0x18382c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18382cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183830: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x183830u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x183834: 0xc090970  jal         func_2425C0
    ctx->pc = 0x183834u;
    SET_GPR_U32(ctx, 31, 0x18383Cu);
    ctx->pc = 0x2425C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2425C0u, 0x183834u, 0x18383Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18383Cu;
label_18383c:
    // 0x18383c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x18383Cu;
    {
        const bool branch_taken_0x18383c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18383c) {
            ctx->pc = 0x183854u;
            goto label_183854;
        }
    }
    ctx->pc = 0x183844u;
label_183844:
    // 0x183844: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x183844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183848: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x183848u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18384c: 0xc090970  jal         func_2425C0
    ctx->pc = 0x18384Cu;
    SET_GPR_U32(ctx, 31, 0x183854u);
    ctx->pc = 0x2425C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2425C0u, 0x18384Cu, 0x183854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183854u;
label_183854:
    // 0x183854: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x183854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183858: 0xc090984  jal         func_242610
    ctx->pc = 0x183858u;
    SET_GPR_U32(ctx, 31, 0x183860u);
    ctx->pc = 0x242610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242610u, 0x183858u, 0x183860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183860u;
label_183860:
    // 0x183860: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x183860u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x183864: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x183864u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x183868: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x183868u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18386c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x18386cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x183870: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x183870u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x183874: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x183874u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x183878: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x183878u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18387c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18387cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x183880: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x183880u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x183884: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x183884u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x183888: 0x3e00008  jr          $ra
    ctx->pc = 0x183888u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x183888u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x183890u;
}
